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
#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DPanelPrefabElementData
    /// @brief Read-only machine panel prefabrication data of an element (element type, layer location and MFB prefab config).
    class ICwAPI3DPanelPrefabElementData
    {
    public:
      virtual ~ICwAPI3DPanelPrefabElementData() noexcept = default;

      /// @brief Destroys itself.
      /// @deprecated Do not use this method anymore
      virtual void destroy() = 0;

      /// @brief Gets the panel prefab element type.
      /// @return [@ref panelPrefabElementType] The element type.
      virtual panelPrefabElementType getElementType() const = 0;

      /// @brief Tests if a layer location is set on the element.
      /// @return True if a layer location is set, false otherwise.
      virtual bool hasLayer() const = 0;

      /// @brief Gets the layer location. Only meaningful if hasLayer() returns true.
      /// @return [int32_t] The layer location.
      virtual int32_t getLayer() const = 0;

      /// @brief Gets the machine calculation set (MFB prefab config) name.
      /// @return [@ref ICwAPI3DString*] The MFB prefab config name.
      virtual ICwAPI3DString* getMachineCalculationSet() const = 0;
    };
  }
}
