/** @file
* Copyright (C) 2016 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2016-12-15
*/

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DMenu
    * \brief
    */
    class ICwAPI3DMenu
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Adds a button menu item
       * \param aLabel button label
       * \return menu index
       */
      virtual menuIndex addButtonMenuItem(const character* aLabel) = 0;
      /**
       * \brief Adds a blank menu item
       */
      virtual void addBlankMenuItem() = 0;
    };
  }
}
