/// @file
/// Copyright (C) 2017 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         24.0
/// @author        Paquet
/// @date          2017-07-05

#pragma once

#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DSceneController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Adds a new scene
      /// @param aName scene name
      /// @return did operation succeed
      virtual bool addScene(const character* aName) = 0;

      /// @brief Renames a scene
      /// @param aOldName old scene name
      /// @param aNewName new scene name
      /// @return did operation succeed
      virtual bool renameScene(const character* aOldName, const character* aNewName) = 0;

      /// @brief Deletes a scene
      /// @param aName scene name
      /// @return did operation succeed
      virtual bool deleteScene(const character* aName) = 0;

      /// @brief Adds elements to a scene
      /// @param aName scene name
      /// @param aElementIDs element ID list
      /// @return did operation succeed
      virtual bool addElementsToScene(const character* aName, ICwAPI3DElementIDList* aElementIDs) = 0;

      /// @brief Removes elements from a scene
      /// @param aName scene name
      /// @param aElementIDs element ID list
      /// @return did operation succeed
      virtual bool removeElementsFromScene(const character* aName, ICwAPI3DElementIDList* aElementIDs) = 0;

      /// @brief Gets the elements from a scene
      /// @param aName scene name
      /// @return element ID list
      virtual ICwAPI3DElementIDList* getElementsFromScene(const character* aName) = 0;

      /// @brief Activates a scene
      /// @param aName scene name
      /// @return did operation succeed
      virtual bool activateScene(const character* aName) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Gets the list of scenes.
      /// @return A list of scenes.
      virtual ICwAPI3DStringList* getSceneList() = 0;

      /// @brief Groups the scenes to a scene group
      /// @param aSceneNames scene names
      /// @return index of new group
      virtual uint64_t groupScenes(ICwAPI3DStringList* aSceneNames) = 0;

      /// @brief Deletes the Group of scenes
      /// @param index of group
      virtual void ungroupScenes(uint64_t aGroupIndex) = 0;

      /// @brief Checks if a scene is present.
      /// @param aName The name of the scene to check.
      /// @return A boolean value indicating whether the scene is present (true) or not (false).
      virtual bool isScenePresent(const character* aName) = 0;
      /// @brief Set group tab color
      /// @param aSceneGroupName The name of the scene
      /// @param aRed Red
      /// @param aGreen Green
      /// @param aBlue Blue
      /// @param aAlpha Alpha from 0 to 255
      virtual void setGroupTabColor(const character* aSceneGroupName, int aRed, int aGreen, int aBlue, int aAlpha = 255) = 0;
      /// @brief Rename the scene group
      /// @param aOldName existing scene group name
      /// @param aNewName new scene group name
      virtual void renameSceneGroup(const character* aOldName, const character* aNewName) = 0;
      /// @brief Gets the index of a scene group by its name.
      /// @param aSceneGroupName existing scene group name
      /// @return the index of the group
      virtual uint64_t getGroupIndexByName(const character* aSceneGroupName) = 0;
      /// @brief Rename the scene group by its index.
      /// @param  aGroupIndex group index
      /// @param aNewName new scene group name
      virtual void renameSceneGroupByIndex(uint64_t aGroupIndex, const character* aNewName) = 0;
      /// @brief Groups the scenes to a scene group and sets the name of the new group.
      /// @param  aSceneNames scene names
      /// @param aGroupName name of the new group
      /// @return index of new group
      virtual uint64_t groupScenesWithName(ICwAPI3DStringList* aSceneNames, const character* aGroupName) = 0;
    };
  }
}
