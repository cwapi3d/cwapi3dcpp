// Copyright (C) Cadwork. All rights reserved.

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DVisibilityState
    * \brief
    */
    class ICwAPI3DVisibilityState
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
    };
  }
}
