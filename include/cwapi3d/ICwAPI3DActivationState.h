// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DActivationState
    * \brief
    */
    class ICwAPI3DActivationState
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
    };
  }
}
