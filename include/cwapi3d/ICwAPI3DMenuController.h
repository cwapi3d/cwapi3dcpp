/// @file
/// Copyright (C) 2016 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         24.0
/// @author        Paquet
/// @date          2016-12-15

#pragma once

#include "ICwAPI3DStringList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DMenu.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DMenuController
    class ICwAPI3DMenuController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Creates an empty menu.
      /// @return [@ref ICwAPI3DMenu*] The created menu.
      virtual ICwAPI3DMenu* createMenu() = 0;

      /// @brief Gets the selected menu item.
      /// @return [@ref menuIndex] The menu index of selected item.
      /// @note In a /PLUGIN= or /RUNPROGRAM= run nobody can answer: returns -2 (escape) without waiting.
      virtual menuIndex getSelectedMenuItem() = 0;

      /// @brief Cleans all menus.
      virtual void cleanupAllMenus() = 0;

      /// @brief Displays a menu
      /// @param aMenu [@ref ICwAPI3DMenu*] The menu.
      /// @note In a /PLUGIN= or /RUNPROGRAM= run nobody can answer: the menu is not shown.
      virtual void displayMenu(ICwAPI3DMenu* aMenu) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Displays a simple menu.
      /// @param aMenuItems [@ref ICwAPI3DStringList*] The menu items.
      /// @return [@ref ICwAPI3DString*] The selected menu item.
      /// @note In a /PLUGIN= or /RUNPROGRAM= run nobody can answer: the menu is not shown and an empty string is returned.
      virtual ICwAPI3DString* displaySimpleMenu(ICwAPI3DStringList* aMenuItems) = 0;
    };
  }
}
