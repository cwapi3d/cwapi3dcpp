/** @file
* Copyright (C) 2016 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         25.0
* @author        Nodurft
* @date          2018-02-19
*/

#pragma once

#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DEndtypeController
    * \brief
    */
    class ICwAPI3DEndtypeController
    {
    public:
      /**
      * \brief
      * \param aErrorCode
      * \return
      */
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      /**
      * \brief Gets the endtypename by endtypeID
      * \param aID
      * \return
      */
      virtual ICwAPI3DString* getEndtypeName(endtypeID aID) = 0;

      /**
      * \brief Gets the endtypeID by endtypename
      * \param aName
      * \return
      */
      virtual endtypeID getEndtypeID(const character* aName) = 0;

      /**
      * \brief Gets the endtypeID of the start face
      * \param aID
      * \return
      */
      virtual endtypeID getEndtypeIdStart(elementID aID) = 0;

      /**
      * \brief Gets the endtypeID of the end face
      * \param aID
      * \return
      */
      virtual endtypeID getEndtypeIdEnd(elementID aID) = 0;

      /**
      * \brief Gets the endtypeID of the face with a number
      * \param aID
      * \param aFaceNumber
      * \return
      */
      virtual endtypeID getEndtypeIdFac(elementID aID, uint32_t aFaceNumber) = 0;

      /**
      * \brief Gets the endtypename of the start face
      * \param aID
      * \return
      */
      virtual ICwAPI3DString* getEndtypeNameStart(elementID aID) = 0;

      /**
      * \brief Gets the endtypename of the end face
      * \param aID
      * \return
      */
      virtual ICwAPI3DString* getEndtypeNameEnd(elementID aID) = 0;

      /**
      * \brief Gets the endtypename of the face with a number
      * \param aID
      * \param aFaceNumber
      * \return
      */
      virtual ICwAPI3DString* getEndtypeNameFac(elementID aID, uint32_t aFaceNumber) = 0;

      /**
      * \brief Sets the endtype to start face by endtypename
      * \param aID
      * \param aName
      */
      virtual void setEndtypeNameStart(elementID aID, const character* aName) = 0;

      /**
      * \brief Sets the endtype to end face by endtypename
      * \param aID
      * \param aName
      */
      virtual void setEndtypeNameEnd(elementID aID, const character* aName) = 0;

      /**
      * \brief Sets the endtype to a face by endtypename
      * \param aElementID
      * \param aName
      * \param aFaceNuber
      */
      virtual void setEndtypeNameFac(elementID aElementID, const character* aName, uint32_t aFaceNuber) = 0;

      /**
      * \brief Sets the endtype to start face by endtypeID
      * \param aElementID
      * \param aEndtypeID
      */
      virtual void setEndtypeIdStart(elementID aElementID, endtypeID aEndtypeID) = 0;

      /**
      * \brief Sets the endtype to end face by endtypeID
      * \param aElementID
      * \param aEndtypeID
      */
      virtual void setEndtypeIdEnd(elementID aElementID, endtypeID aEndtypeID) = 0;

      /**
      * \brief Sets the endtype to a face by endtypeID
      * \param aElementID
      * \param aEndtypeID
      * \param aFaceNumber
      */
      virtual void setEndtypeIdFac(elementID aElementID, endtypeID aEndtypeID, uint32_t aFaceNumber) = 0;

      /**
      * \brief Creates a new Endtype
      * \param aEndtypeName
      * \param aEndtypeID
      * \param aFolderName
      */
      virtual endtypeID createNewEndtype(const character* aEndtypeName, uint32_t aEndtypeID, const character* aFolderName) = 0;
      virtual void clearErrors() = 0;
    };
  }
}
