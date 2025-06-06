/** @file 
* Copyright (C) 2025 cadwork informatik AG
* 
* This file is part of the CwAPI3D module for cadwork 3d.
* 
* @ingroup       CwAPI3D
* @since         32.0
* @author        Brunner
* @date          2025-04-04
*/


#pragma once
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DVertexList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DHitResult
    * \brief
    */
    class ICwAPI3DHitResult
    {
    public:
      virtual ~ICwAPI3DHitResult() = default;

      virtual ICwAPI3DElementIDList* getHitElementIDs() = 0;

      virtual ICwAPI3DVertexList* getHitVerticesByElement(elementID aElementID) = 0;
    };
  }
}
