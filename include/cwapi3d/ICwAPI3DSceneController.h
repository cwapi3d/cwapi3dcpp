/** @file
* Copyright (C) 2017 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2017-07-05
*/

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"
#include "ICwAPI3DElementIDList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DSceneController
    * \brief
    */
    class ICwAPI3DSceneController
    {
    public:
      /**
       * \brief Gets the last error
       * \param aErrorCode error code
       * \return error string
       */
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      /**
       * \brief Adds a new scene
       * \param aName scene name
       * \return did operation succeed
       */
      virtual bool addScene(const character* aName) = 0;
      /**
       * \brief Renames a scene
       * \param aOldName old scene name
       * \param aNewName new scene name
       * \return did operation succeed
       */
      virtual bool renameScene(const character* aOldName, const character* aNewName) = 0;
      /**
       * \brief Deletes a scene
       * \param aName scene name
       * \return did operation succeed
       */
      virtual bool deleteScene(const character* aName) = 0;
      /**
       * \brief Adds elements to a scene
       * \param aName scene name
       * \param aElementIDs element ID list
       * \return did operation succeed
       */
      virtual bool addElementsToScene(const character* aName, ICwAPI3DElementIDList* aElementIDs) = 0;
      /**
       * \brief Removes elements from a scene
       * \param aName scene name
       * \param aElementIDs element ID list
       * \return did operation succeed
       */
      virtual bool removeElementsFromScene(const character* aName, ICwAPI3DElementIDList* aElementIDs) = 0;
      /**
       * \brief Gets the elements from a scene
       * \param aName scene name
       * \return element ID list
       */
      virtual ICwAPI3DElementIDList* getElementsFromScene(const character* aName) = 0;
      /**
       * \brief Activates a scene
       * \param aName scene name
       * \return did operation succeed
       */
      virtual bool activateScene(const character* aName) = 0;
      virtual void clearErrors() = 0;
      virtual ICwAPI3DStringList* getSceneList() = 0;
      /**
       * \brief Groups the scenes to a scene group
       * \param aSceneNames scene names
       * \return index of new group
       */
      virtual uint64_t groupScenes(ICwAPI3DStringList* aSceneNames) = 0;
      /**
       * \brief Deletes the Group of scenes 
       * \param index of group
       */
      virtual void ungroupScenes(uint64_t aGroupIndex) = 0;
    };
  }
}
