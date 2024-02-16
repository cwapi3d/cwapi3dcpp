/** @file
* Copyright (C) 2019 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         26.0
* @author        Paquet
* @date          2019-04-30
*/

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
		* @interface ICwAPI3DLayerSettings
		* \brief
		*/
    class ICwAPI3DLayerSettings
    {
    public:
      virtual void destroy() = 0;

      virtual int32_t getLayer() = 0;
      virtual void setLayer(int32_t aLayerNumber) = 0;

      virtual bool isWithoutOutput() = 0;
      virtual void setWithoutOutput() = 0;

      virtual bool isWithDimensionsOutput() = 0;
      virtual void setWithDimensionsOutput() = 0;

      virtual bool isWithoutDimensionsOutput() = 0;
      virtual void setWithoutDimensionsOutput() = 0;

      virtual bool isWithAttributesOutput() = 0;
      virtual void setWithAttributesOutput() = 0;
    };
  }
}
