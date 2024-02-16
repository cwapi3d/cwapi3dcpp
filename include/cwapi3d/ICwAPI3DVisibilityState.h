/** @file
* Copyright (C) 2017 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2017-06-22
*/

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
