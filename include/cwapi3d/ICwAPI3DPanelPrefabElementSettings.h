/// @file
/// Copyright (C) 2026 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         33.0
/// @author        Brunner
/// @date          2026-06-09

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DPanelPrefabElementSettings
    /// @brief Machine panel prefabrication settings passed to the setter.
    /// @details Only the fields that are explicitly set are applied to the elements; unset
    /// fields are left untouched, mirroring the interactive "only change what differs" behaviour.
    class ICwAPI3DPanelPrefabElementSettings
    {
    public:
      virtual ~ICwAPI3DPanelPrefabElementSettings() noexcept = default;

      /// @brief Destroys itself.
      /// @deprecated Do not use this method anymore
      virtual void destroy() = 0;

      /// @brief Sets the panel prefab element type to apply.
      /// @param[in] aType [@ref panelPrefabElementType] The element type.
      virtual void setElementType(panelPrefabElementType aType) = 0;

      /// @brief Sets the layer location to apply.
      /// @param[in] aLayer [int32_t] The layer location.
      virtual void setLayer(int32_t aLayer) = 0;

      /// @brief Resets (clears) the layer location.
      virtual void resetLayer() = 0;

      /// @brief Sets the machine calculation set (MFB prefab config) name to apply.
      /// @param[in] aMachineCalculationSet [const @ref character*] The MFB prefab config name.
      virtual void setMachineCalculationSet(const character* aMachineCalculationSet) = 0;
    };
  }
}
