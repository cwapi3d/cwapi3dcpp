// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DAttributeDisplaySettings
    {
    public:
      /// @brief
      virtual void destroy() = 0;
      /// @brief
      /// @return
      virtual uint32_t getTextPositionPercentage() = 0;
      /// @brief
      /// @param aPercentage
      virtual void setTextPositionPercentage(uint32_t aPercentage) = 0;
      /// @brief
      /// @return
      virtual uint32_t getTextPositionAbsolute() = 0;
      /// @brief
      /// @param aAbsolute
      virtual void setTextPositionAbsolute(uint32_t aAbsolute) = 0;
      /// @brief
      /// @return
      virtual bool isTextPositionTypePercentage() = 0;
      /// @brief
      /// @param aPercentageType
      virtual void setTextPositionTypePercentage(bool aPercentageType) = 0;
      /// @brief
      /// @return
      virtual bool isTextPositionTypeAbsolute() = 0;
      /// @brief
      /// @param aAbsoluteType
      virtual void setTextPositionTypeAbsolute(bool aAbsoluteType) = 0;
    };
  }
}
