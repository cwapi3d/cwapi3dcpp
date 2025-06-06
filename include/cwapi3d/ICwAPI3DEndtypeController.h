/// @file
/// Copyright (C) 2016 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         25.0
/// @author        Nodurft
/// @date          2018-02-19

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DEndtypeIDList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DEndtypeController
    {
    public:
      /// @brief Gets the last error message.
      /// @param aErrorCode A pointer to an integer where the error code will be stored.
      /// @return A string containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the endtypename by endtypeID
      /// @param aID
      /// @return
      virtual ICwAPI3DString* getEndtypeName(endtypeID aID) = 0;

      /// @brief Gets the endtypeID by endtypename
      /// @param aName
      /// @return
      virtual endtypeID getEndtypeID(const character* aName) = 0;

      /// @brief Gets the endtypeID of the start face
      /// @param aID
      /// @return
      virtual endtypeID getEndtypeIdStart(elementID aID) = 0;

      /// @brief Gets the endtypeID of the end face
      /// @param aID
      /// @return
      virtual endtypeID getEndtypeIdEnd(elementID aID) = 0;

      /// @brief Gets the endtypeID of the face with a number
      /// @param aID
      /// @param aFaceNumber
      /// @return
      virtual endtypeID getEndtypeIdFac(elementID aID, uint32_t aFaceNumber) = 0;

      /// @brief Gets the endtypename of the start face
      /// @param aID
      /// @return
      virtual ICwAPI3DString* getEndtypeNameStart(elementID aID) = 0;

      /// @brief Gets the endtypename of the end face
      /// @param aID
      /// @return
      virtual ICwAPI3DString* getEndtypeNameEnd(elementID aID) = 0;

      /// @brief Gets the endtypename of the face with a number
      /// @param aID
      /// @param aFaceNumber
      /// @return
      virtual ICwAPI3DString* getEndtypeNameFac(elementID aID, uint32_t aFaceNumber) = 0;

      /// @brief Sets the endtype to start face by endtypename
      /// @param aID
      /// @param aName
      virtual void setEndtypeNameStart(elementID aID, const character* aName) = 0;

      /// @brief Sets the endtype to end face by endtypename
      /// @param aID
      /// @param aName
      virtual void setEndtypeNameEnd(elementID aID, const character* aName) = 0;

      /// @brief Sets the endtype to a face by endtypename
      /// @param aElementID
      /// @param aName
      /// @param aFaceNumber
      virtual void setEndtypeNameFac(elementID aElementID, const character* aName, uint32_t aFaceNumber) = 0;

      /// @brief Sets the endtype to start face by endtypeID
      /// @param aElementID
      /// @param aEndtypeID
      virtual void setEndtypeIdStart(elementID aElementID, endtypeID aEndtypeID) = 0;

      /// @brief Sets the endtype to end face by endtypeID
      /// @param aElementID
      /// @param aEndtypeID
      virtual void setEndtypeIdEnd(elementID aElementID, endtypeID aEndtypeID) = 0;

      /// @brief Sets the endtype to a face by endtypeID
      /// @param aElementID
      /// @param aEndtypeID
      /// @param aFaceNumber
      virtual void setEndtypeIdFac(elementID aElementID, endtypeID aEndtypeID, uint32_t aFaceNumber) = 0;

      /// @brief Creates a new Endtype
      /// @param aEndtypeName
      /// @param aEndtypeID
      /// @param aFolderName
      virtual endtypeID createNewEndtype(const character* aEndtypeName, uint32_t aEndtypeID, const character* aFolderName) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Get the existing tenon endtypeIDs
      /// @return list of existing tenon endtypeIDs
      virtual ICwAPI3DEndtypeIDList* getExistingTenonIds() = 0;

      /// @brief Get the existing lengthening endtypeIDs
      /// @return list of existing lengthening endtypeIDs
      virtual ICwAPI3DEndtypeIDList* getExistingLengtheningIds() = 0;

      /// @brief Get the existing dovetail endtypeIDs
      /// @return list of existing dovetail endtypeIDs
      virtual ICwAPI3DEndtypeIDList* getExistingDovetailIds() = 0;

      /// @brief Get the existing dado endtypeIDs
      /// @return list of existing dado endtypeIDs
      virtual ICwAPI3DEndtypeIDList* getExistingDovetailDadoIds() = 0;

      /// @brief Get the existing japanese-tenon endtypeIDs
      /// @return list of existing japanese-tenon endtypeIDs
      virtual ICwAPI3DEndtypeIDList* getExistingJapaneseTenonIds() = 0;

      /// @brief Start endtype dialog
      /// @return Selected endtypeID
      virtual endtypeID startEndtypeDialog() = 0;
    };
  }
}
