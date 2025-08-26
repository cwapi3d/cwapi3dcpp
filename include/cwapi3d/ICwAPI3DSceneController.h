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
    /// @interface ICwAPI3DSceneController
    class ICwAPI3DSceneController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Adds a new scene.
      /// @param[in] aName [const @ref character*] The scene name.
      /// @return [bool] True if the operation succeeded, false otherwise.
      virtual bool addScene(const character* aName) = 0;

      /// @brief Renames a scene.
      /// @param[in] aOldName [const @ref character*] The old scene name.
      /// @param[in] aNewName [const @ref character*] The new scene name.
      /// @return [bool] True if the operation succeeded, false otherwise.
      virtual bool renameScene(const character* aOldName, const character* aNewName) = 0;

      /// @brief Deletes a scene.
      /// @param[in] aName [const @ref character*] The scene name.
      /// @return [bool] True if the operation succeeded, false otherwise.
      virtual bool deleteScene(const character* aName) = 0;

      /// @brief Adds elements to a scene.
      /// @param[in] aName [const @ref character*] The scene name.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @return [bool] True if the operation succeeded, false otherwise.
      virtual bool addElementsToScene(const character* aName, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Removes elements from a scene.
      /// @param[in] aName [const @ref character*] The scene name.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @return [bool] True if the operation succeeded, false otherwise.
      virtual bool removeElementsFromScene(const character* aName, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Gets the elements from a scene.
      /// @param[in] aName [const @ref character*] The scene name.
      /// @return [@ref ICwAPI3DElementIDList*] The element id list.
      virtual ICwAPI3DElementIDList* getElementsFromScene(const character* aName) = 0;

      /// @brief Activates a scene.
      /// @param[in] aName [const @ref character*] The scene name.
      /// @return [bool] True if the operation succeeded, false otherwise.
      virtual bool activateScene(const character* aName) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Gets the list of scenes.
      /// @return [@ref ICwAPI3DStringList*] The list of scene names.
      virtual ICwAPI3DStringList* getSceneList() = 0;

      /// @brief Groups the scenes to a scene group.
      /// @param[in] aSceneNames [@ref ICwAPI3DStringList*] The scene names.
      /// @return [uint64_t] The index of the new group.
      virtual uint64_t groupScenes(ICwAPI3DStringList* aSceneNames) = 0;

      /// @brief Deletes the Group of scenes.
      /// @param[in] aGroupIndex [uint64_t] The index of the group.
      virtual void ungroupScenes(uint64_t aGroupIndex) = 0;

      /// @brief Checks if a scene is present.
      /// @param[in] aName [const @ref character*] The name of the scene to check.
      /// @return [bool] True if the scene is present, false otherwise.
      virtual bool isScenePresent(const character* aName) = 0;

      /// @brief Set group tab color.
      /// @param[in] aSceneGroupName [const @ref character*] The name of the scene group.
      /// @param[in] aRed [int] Red
      /// @param[in] aGreen [int] Green
      /// @param[in] aBlue [int] Blue
      /// @param[in] aAlpha [int] Alpha from 0 to 255, default is 255 (opaque)
      virtual void setGroupTabColor(const character* aSceneGroupName, int aRed, int aGreen, int aBlue, int aAlpha = 255) = 0;

      /// @brief Rename the scene group.
      /// @param[in] aOldName [const @ref character*] The old scene group name.
      /// @param[in] aNewName [const @ref character*] The new scene group name.
      virtual void renameSceneGroup(const character* aOldName, const character* aNewName) = 0;

      /// @brief Gets the index of a scene group by its name.
      /// @param[in] aSceneGroupName [const @ref character*] The group name.
      /// @return [uint64_t] The index of the group, or std::numeric_limits<uint64_t>::max() if not found.
      virtual uint64_t getGroupIndexByName(const character* aSceneGroupName) = 0;

      /// @brief Rename the scene group by its index.
      /// @param[in] aGroupIndex [uint64_t] The index of the group.
      /// @param[in] aNewName [const @ref character*] The new scene group name.
      virtual void renameSceneGroupByIndex(uint64_t aGroupIndex, const character* aNewName) = 0;

      /// @brief Groups the scenes to a scene group and sets the name of the new group.
      /// @param[in] aSceneNames [@ref ICwAPI3DStringList*] The scene names to group.
      /// @param[in] aGroupName [const @ref character*] The name of the new group.
      /// @return [uint64_t] The index of the new group.
      virtual uint64_t groupScenesWithName(ICwAPI3DStringList* aSceneNames, const character* aGroupName) = 0;
    };
  }
}
