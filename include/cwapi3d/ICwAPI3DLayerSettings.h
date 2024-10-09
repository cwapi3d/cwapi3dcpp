// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DLayerSettings
    {
    public:
      /// @brief
      virtual void destroy() = 0;

      /// @brief
      /// @return
      virtual int32_t getLayer() = 0;
      /// @brief
      /// @param aLayerNumber
      virtual void setLayer(int32_t aLayerNumber) = 0;

      /// @brief
      /// @return
      virtual bool isWithoutOutput() = 0;
      /// @brief
      virtual void setWithoutOutput() = 0;

      /// @brief
      /// @return
      virtual bool isWithDimensionsOutput() = 0;
      /// @brief
      virtual void setWithDimensionsOutput() = 0;

      /// @brief
      /// @return
      virtual bool isWithoutDimensionsOutput() = 0;
      /// @brief
      virtual void setWithoutDimensionsOutput() = 0;

      /// @brief
      /// @return
      virtual bool isWithAttributesOutput() = 0;
      /// @brief
      virtual void setWithAttributesOutput() = 0;
    };
  }
}
