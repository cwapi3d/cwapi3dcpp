// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"
#include "ICwAPI3DStringList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
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

      /// @brief Gets menu items
      /// @return menu items
      virtual ICwAPI3DStringList* getMenuItems() = 0;
    };
  }
}
