/// @file
/// Copyright (C) 2017 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         24.0
/// @author        Paquet
/// @date          2017-03-06

#pragma once

#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DListController
    class ICwAPI3DListController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Exports a production list.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      /// @param[in] aExportFilePath [const @ref character*] The exported file path.
      virtual void exportProductionList(ICwAPI3DElementIDList* aElementIdList, const character* aExportFilePath) = 0;

      /// @brief Exports a part list.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      /// @param[in] aExportFilePath [const @ref character*] The exported file path.
      virtual void exportPartList(ICwAPI3DElementIDList* aElementIdList, const character* aExportFilePath) = 0;

      /// @brief Checks the production list numbers and returns the element id list with discrepancies.
      /// @return [@ref ICwAPI3DElementIDList*] The element id list with discrepancies.
      virtual ICwAPI3DElementIDList* checkPositionNumbersProductionList() = 0;

      /// @brief Checks the part list numbers and returns the element id list with discrepancies.
      /// @return [@ref ICwAPI3DElementIDList*] The element id list with discrepancies.
      virtual ICwAPI3DElementIDList* checkPositionNumbersPartList() = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Exports a production list with settings file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      /// @param[in] aExportFilePath [const @ref character*] The exported file path.
      /// @param[in] aSettingsFilePath [const @ref character*] The settings file path.
      virtual void exportProductionListWithSettings(ICwAPI3DElementIDList* aElementIdList, const character* aExportFilePath, const character* aSettingsFilePath) = 0;

      /// @brief Exports a part list with settings file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      /// @param[in] aExportFilePath [const @ref character*] The exported file path.
      /// @param[in] aSettingsFilePath [const @ref character*] The settings file path.
      virtual void exportPartListWithSettings(ICwAPI3DElementIDList* aElementIdList, const character* aExportFilePath, const character* aSettingsFilePath) = 0;

      /// @brief Generates new numbers for production list.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      virtual void generateNewNumbersProductionList(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Generates new numbers for part list.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      virtual void generateNewNumbersPartList(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Loads a settings file for production list calculation.
      /// @param[in] aSettingsFilePath [const @ref character*] The settings file path.
      virtual void loadListCalculationSettingsProductionList(const character* aSettingsFilePath) = 0;

      /// @brief Loads a settings file for part list calculation.
      /// @param[in] aSettingsFilePath [const @ref character*] The settings file path.
      virtual void loadListCalculationSettingsPartList(const character* aSettingsFilePath) = 0;

      /// @brief Generates new numbers for production list (silently).
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      /// @param[in] aStartingNumber [uint32_t] The starting number.
      /// @param[in] aKeepExistingNumbers [bool] True to keep existing numbers, false to overwrite them.
      /// @param[in] aWithContainers [bool] True to include containers, false to exclude them.
      virtual void generateNewNumbersProductionListSilently(ICwAPI3DElementIDList* aElementIdList, uint32_t aStartingNumber, bool aKeepExistingNumbers, bool aWithContainers) = 0;

      /// @brief Generates new positions numbers for part list.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      /// @param[in] aStartingNumber [uint32_t] The starting number.
      /// @param[in] aKeepExistingNumbers [bool] True to keep existing numbers, false to overwrite them.
      /// @param[in] aWithContainers [bool] True to include containers, false to exclude them.
      virtual void generateNewNumbersPartListSilently(ICwAPI3DElementIDList* aElementIdList, uint32_t aStartingNumber, bool aKeepExistingNumbers, bool aWithContainers) = 0;

      /// @brief Exports a Wall/Roof/Floor list.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      /// @param[in] aExportFilePath [const @ref character*] The exported file path.
      virtual void exportCoverList(ICwAPI3DElementIDList* aElementIdList, const character* aExportFilePath) = 0;

      /// @brief Exports a Wall/Roof/Floor list with settings file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list id.
      /// @param[in] aExportFilePath [const @ref character*] The exported file path.
      /// @param[in] aSettingsFilePath [const @ref character*] The settings file path.
      virtual void exportCoverListWithSettings(ICwAPI3DElementIDList* aElementIdList, const character* aExportFilePath, const character* aSettingsFilePath) = 0;
    };
  }
}
