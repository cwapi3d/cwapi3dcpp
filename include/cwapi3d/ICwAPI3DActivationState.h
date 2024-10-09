// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DActivationState
    {
    public:
      /// @brief
      virtual void destroy() = 0;
    };
  }
}
