// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "ICwAPI3DMenu.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DMenuController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Creates an empty menu
      /// @return menu
      virtual ICwAPI3DMenu* createMenu() = 0;

      /// @brief Gets the selected menu item
      /// @return menu index of selected item
      virtual menuIndex getSelectedMenuItem() = 0;

      /// @brief Cleans all menus
      virtual void cleanupAllMenus() = 0;

      /// @brief Displays a menu
      /// @param aMenu menu
      virtual void displayMenu(ICwAPI3DMenu* aMenu) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief
      /// @param aMenuItems
      /// @return
      virtual ICwAPI3DString* displaySimpleMenu(ICwAPI3DStringList* aMenuItems) = 0;
    };
  }
}
