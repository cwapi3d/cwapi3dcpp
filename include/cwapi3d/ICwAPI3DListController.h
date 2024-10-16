// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DListController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Exports a production list
      /// @param aElementIDList element ID list
      /// @param aFilePath file path
      virtual void exportProductionList(ICwAPI3DElementIDList* aElementIDList, const character* aFilePath) = 0;

      /// @brief Exports a part list
      /// @param aElementIDList element ID list
      /// @param aFilePath file path
      virtual void exportPartList(ICwAPI3DElementIDList* aElementIDList, const character* aFilePath) = 0;

      /// @brief Checks the production list numbers and returns the element ids with discrepancies
      /// @return element ids with discrepancies
      virtual ICwAPI3DElementIDList* checkPositionNumbersProductionList() = 0;

      /// @brief Checks the part list numbers and returns the element ids with discrepancies
      /// @return element ids with discrepancies
      virtual ICwAPI3DElementIDList* checkPositionNumbersPartList() = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief
      /// @param aElementIDList element ID list
      /// @param aFilePath
      /// @param aSettingsFilePath
      virtual void exportProductionListWithSettings(ICwAPI3DElementIDList* aElementIDList, const character* aFilePath, const character* aSettingsFilePath) = 0;

      /// @brief
      /// @param aElementIDList element ID list
      /// @param aFilePath
      /// @param aSettingsFilePath
      virtual void exportPartListWithSettings(ICwAPI3DElementIDList* aElementIDList, const character* aFilePath, const character* aSettingsFilePath) = 0;

      /// @brief generates new positions numbers for production list
      /// @param aElementIDList element ID list
      virtual void generateNewNumbersProductionList(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief generates new positions numbers for part list
      /// @param aElementIDList element ID list
      virtual void generateNewNumbersPartList(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief loads a settings file for production list calculation
      /// @param aSettingsFilePath
      virtual void loadListCalculationSettingsProductionList(const character* aSettingsFilePath) = 0;

      /// @brief loads a settings file for part list calculation
      /// @param aSettingsFilePath
      virtual void loadListCalculationSettingsPartList(const character* aSettingsFilePath) = 0;

      /// @brief generates new positions numbers for production list
      /// @param aElements element ID list
      /// @param aStartingNumber
      /// @param aKeepExistingNumbers
      /// @param aWithContainers
      virtual void generateNewNumbersProductionListSilently(ICwAPI3DElementIDList* aElements, uint32_t aStartingNumber, bool aKeepExistingNumbers, bool aWithContainers) = 0;

      /// @brief generates new positions numbers for part list
      /// @param aElements element ID list
      /// @param aStartingNumber
      /// @param aKeepExistingNumbers
      /// @param aWithContainers
      virtual void generateNewNumbersPartListSilently(ICwAPI3DElementIDList* aElements, uint32_t aStartingNumber, bool aKeepExistingNumbers, bool aWithContainers) = 0;

      /// @brief Exports a Wall/Roof/Floor list
      /// @param aElementIDList element ID list
      /// @param aFilePath file path
      virtual void exportCoverList(ICwAPI3DElementIDList* aElementIDList, const character* aFilePath) = 0;

      /// @brief Exports a Wall/Roof/Floor list with settings file
      /// @param aElementIDList element ID list
      /// @param aFilePath
      /// @param aSettingsFilePath
      virtual void exportCoverListWithSettings(ICwAPI3DElementIDList* aElementIDList, const character* aFilePath, const character* aSettingsFilePath) = 0;
    };
  }
}
