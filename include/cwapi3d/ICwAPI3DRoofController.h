/// @file
/// Copyright (C) 2019 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         26.0
/// @author        Paquet
/// @date          2019-02-06

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DElementIDList.h"
#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DRoofController
    class ICwAPI3DRoofController
    {
    public:
      /// @brief Gets the profile length.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [double] The profile length.
      virtual double getProfileLength(elementID aElementId) = 0;

      /// @brief Gets the edge length.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aEdgeType [const @ref character*] The edge type : 
      /// - "none"
      /// 
      /// - "ridge"
      /// 
      /// - "eave"
      /// 
      /// - "vergeright"
      /// - "vergeleft"
      /// - "vergeoblique"
      /// 
      /// - "hip"
      /// 
      /// - "valley"
      /// 
      /// - "userdefined1"
      /// - "userdefined2"
      /// 
      /// - "userdefinedmitrejoint1"
      /// - "userdefinedmitrejoint2"
      /// 
      /// - "wallconnection"
      /// - "wallconnectionright"
      /// - "wallconnectionleft"
      /// - "wallconnectiontop"
      /// - "wallconnectionbottom"
      /// 
      /// - "roofcutout"
      /// - "roofcutoutright"
      /// - "roofcutoutleft"
      /// - "roofcutouttop"
      /// - "roofcutoutbottom"
      /// 
      /// - "roofedgeontoproofsurface"
      /// - "roofedgeonbottomroofsurface"
      /// @return [double] The edge length.
      virtual double getEdgeLength(elementID aElementId, const character* aEdgeType) = 0;

      /// @brief Gets all caddy elements.
      /// @return [@ref ICwAPI3DElementIDList*] The list of all caddy element Id.
      virtual ICwAPI3DElementIDList* getAllCaddyElementIDs() = 0;

      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;
    };
  }
}
