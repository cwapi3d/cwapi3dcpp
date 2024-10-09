// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DAttributeDisplaySettings
    * \brief
    */
    class ICwAPI3DAttributeDisplaySettings
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      virtual uint32_t getTextPositionPercentage() = 0;
      virtual void setTextPositionPercentage(uint32_t aPercentage) = 0;
      virtual uint32_t getTextPositionAbsolute() = 0;
      virtual void setTextPositionAbsolute(uint32_t aAbsolute) = 0;
      virtual bool isTextPositionTypePercentage() = 0;
      virtual void setTextPositionTypePercentage(bool aPercentageType) = 0;
      virtual bool isTextPositionTypeAbsolute() = 0;
      virtual void setTextPositionTypeAbsolute(bool aAbsoluteType) = 0;
    };
  }
}
