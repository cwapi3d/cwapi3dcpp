/// @file
/// Copyright (C) 2019 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         26.0
/// @author        Paquet
/// @date          2019-04-30

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DLayerSettings
    /// @brief One prefab layer output setting: which layer, and how it is output.
    /// @details Built up call by call and then handed to
    /// ICwAPI3DAttributeController::setLayerSettings(), which applies it to a list of elements. A freshly
    /// created object (ICwAPI3DControllerFactory::createEmptyLayerSettings()) names layer 0, has no output
    /// mode chosen and has its show-attributes flag off — and with no mode chosen, applying it is a no-op,
    /// so the object can safely be built conditionally.
    class ICwAPI3DLayerSettings
    {
    public:
      /// @brief Destroys itself
      /// @deprecated Do not use this method anymore
      virtual void destroy() = 0;

      /// @brief Gets the prefab layer this settings object names.
      /// @return [int32_t] The layer number, in the sign convention setLayer() documents. 0 on a freshly
      /// created object, which is also the element's own layer ("Riegelwerk").
      virtual int32_t getLayer() = 0;

      /// @brief Sets which prefab layer this settings object names.
      /// @details The sign carries the side: a positive layer number (+1..+14) means the reference side
      /// ("Bund Schicht", prefabLayerSide::referenceSide); a negative one (-1..-14) means the opposite side
      /// ("Gegen Schicht", prefabLayerSide::oppositeSide); 0 means the element's own layer ("Riegelwerk",
      /// prefabLayerSide::referenceElement). This is the same convention
      /// ICwAPI3DAttributeController::getPrefabLayerInfoAllAssigned() reports back, so a layer written with
      /// these settings reads back on the side it was written to.
      /// @param[in] aLayerNumber [int32_t] The layer number. A value outside -14..+14 makes
      /// ICwAPI3DAttributeController::setLayerSettings() a no-op.
      /// @warning Before cadwork 33.0 the writer applied the opposite sign to every reader, so a plugin that
      /// compensated for that by negating its layer number must drop the negation.
      virtual void setLayer(int32_t aLayerNumber) = 0;

      /// @brief Tests whether this settings object asks for the layer to be left out of the output.
      /// @return [bool] True if setWithoutOutput() chose the mode. False on a freshly created object.
      virtual bool isWithoutOutput() = 0;

      /// @brief Asks for the layer to be left out of the output entirely.
      /// @details The highest-precedence mode: withoutOutput > withDimensions > withoutDimensions. Clears
      /// both dimension modes and also clears the show-attributes flag, so a setWithAttributesOutput() call
      /// made afterwards on the same object does nothing.
      virtual void setWithoutOutput() = 0;

      /// @brief Tests whether this settings object asks for the layer to be output with dimensions.
      /// @return [bool] True if setWithDimensionsOutput() chose the mode. False on a freshly created object.
      virtual bool isWithDimensionsOutput() = 0;

      /// @brief Asks for the layer to be output with dimensions.
      /// @details Clears the other two modes. Unlike setWithoutOutput(), it leaves the show-attributes flag
      /// as it is, so the flag survives a mode change on the same object.
      virtual void setWithDimensionsOutput() = 0;

      /// @brief Tests whether this settings object asks for the layer to be output without dimensions.
      /// @return [bool] True if setWithoutDimensionsOutput() chose the mode. False on a freshly created
      /// object.
      virtual bool isWithoutDimensionsOutput() = 0;

      /// @brief Asks for the layer to be output without dimensions ("verdeckt").
      /// @details The lowest-precedence mode. Clears the other two modes and, like
      /// setWithDimensionsOutput(), leaves the show-attributes flag as it is.
      virtual void setWithoutDimensionsOutput() = 0;

      /// @brief Tests whether this settings object asks for the layer's attributes to be shown.
      /// @return [bool] True only if setWithAttributesOutput() was called and took effect. False on a freshly
      /// created object — the flag is never on unless it was turned on.
      virtual bool isWithAttributesOutput() = 0;

      /// @brief Asks for the layer's attributes (Positionsnummern) to be shown alongside the chosen mode.
      /// @details Does nothing while isWithoutOutput() is true — a layer that is not output has no attributes
      /// to show — so choose a dimension mode before calling this.
      /// @note The element carries no structured getter for this flag. Once written it is readable only as
      /// the " ShowAttributes[...]" tail of ICwAPI3DAttributeController::getPrefabLayer().
      virtual void setWithAttributesOutput() = 0;
    };
  }
}
