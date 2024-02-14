/** @file
* Copyright (C) 2023 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         30.0
* @author        Paquet
* @date          2023-05-15
*/

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DVertexList.h"
#include "ICwAPI3DElementIDList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DDimensionController
    * \brief
    */
    class ICwAPI3DDimensionController
    {
    public:
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      virtual elementID createDimension(vector3D aXl, vector3D aPlaneNormal, vector3D aDistance, ICwAPI3DVertexList* aDimensionPoints) = 0;
      virtual void setOrientation(ICwAPI3DElementIDList* aElements, vector3D aViewDir, vector3D aViewDirUp) = 0;
      virtual void addSegment(elementID aElement, vector3D aSegment) = 0;
      virtual void setPrecision(ICwAPI3DElementIDList* aElements, uint32_t aPrecision) = 0;
      virtual void setTextSize(ICwAPI3DElementIDList* aElements, double aTextSize) = 0;
      virtual void setLineThickness(ICwAPI3DElementIDList* aElements, double aThickness) = 0;
      virtual void setTotalDimension(ICwAPI3DElementIDList* aElements, bool aTotal) = 0;
      virtual void setTextColor(ICwAPI3DElementIDList* aElements, colorID aColorID) = 0;
      virtual void setLineColor(ICwAPI3DElementIDList* aElements, colorID aColorID) = 0;
      virtual void setDefaultAnchorLength(ICwAPI3DElementIDList* aElements, double aLength) = 0;
    };
  }
}
