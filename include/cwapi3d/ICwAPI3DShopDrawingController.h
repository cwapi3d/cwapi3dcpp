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
    /// @interface ICwAPI3DShopDrawingController
    class ICwAPI3DShopDrawingController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Exports a 2D wireframe to the clipboard.
      /// @param aClipboardNumber [uint32_t] The clipboard number.
      /// @param aWithLayout [bool] Use layout, false by default.
      virtual void export2DWireframeWithClipboard(uint32_t aClipboardNumber, bool aWithLayout = false) = 0;

      /// @brief Exports a 2D hidden lines to the clipboard.
      /// @param aClipboardNumber [uint32_t] The clipboard number.
      /// @param aWithLayout [bool] Use layout, false by default.
      virtual void export2DHiddenLinesWithClipboard(uint32_t aClipboardNumber, bool aWithLayout = false) = 0;

      /// @brief Exports a 2D wireframe to a 2DC file.
      /// @param aFilePath [const @ref character*] The export file path.
      /// @param aWithLayout [bool] Use layout, false by default.
      virtual void export2DWireframeWith2DC(const character* aFilePath, bool aWithLayout = false) = 0;

      /// @brief Exports a 2D hidden lines to a 2DC file.
      /// @param aFilePath [const @ref character*] The export file path.
      /// @param aWithLayout [bool] Use layout, false by default.
      virtual void export2DHiddenLinesWith2DC(const character* aFilePath, bool aWithLayout = false) = 0;

      /// @brief Exports a wall to the clipboard.
      /// @param aClipboardNumber [uint32_t] The clipboard number.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The elements to export.
      virtual void exportWallWithClipboard(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Exports an export solid to the clipboard.
      /// @param aClipboardNumber [uint32_t] The clipboard number.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The elements to export.
      virtual void exportExportSolidWithClipboard(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Exports a piece-by-piece to the clipboard.
      /// @param aClipboardNumber [uint32_t] The clipboard number.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The elements to export.
      virtual void exportPieceByPieceWithClipboard(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Assigns elements to an export solid.
      /// @param aCeoElement [@ref ICwAPI3DElementIDList*] The export solid to assign.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The elements to assign.
      virtual void assignExportSolid(ICwAPI3DElementIDList* aCeoElement, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Export a container to the clipboard.
      /// @param aClipboardNumber [uint32_t] The clipboard number.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The elements to export.
      virtual void exportContainerWithClipboard(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Adds a horizontal wall section.
      /// @param aElementId [@ref elementID] The element id.
      /// @param aPosition [@ref vector3D] The section position.
      virtual void addWallSectionHorizontal(elementID aElementId, vector3D aPosition) = 0;

      /// @brief Adds a vertical wall section.
      /// @param aElementId [@ref elementID] The element id.
      /// @param aPosition [@ref vector3D] The section position.
      virtual void addWallSectionVertical(elementID aElementId, vector3D aPosition) = 0;

      /// @brief Exports a wall to the clipboard.
      /// @param aClipboardNumber [uint32_t] The clipboard number.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The element id list to export.
      /// @param aPresettingFile [const @ref character*] The presetting file path.
      virtual void exportWallWithClipboardAndPresetting(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElementIdList, const character* aPresettingFile) = 0;

      /// @brief Loads piece by piece export settings.
      /// @param aSettingsFilePath [const @ref character*] The settings file path.
      virtual void loadExportPieceByPieceSettings(const character* aSettingsFilePath) = 0;

      /// @brief Saves piece by piece export settings.
      /// @param aSettingsFilePath [const @ref character*] The settings file path.
      virtual void saveExportPieceByPieceSettings(const character* aSettingsFilePath) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Loads wall export settings.
      /// @param aSettingsFilePath [const @ref character*] The settings file path.
      virtual void loadExportWallSettings(const character* aSettingsFilePath) = 0;

      /// @brief Loads export solid settings.
      /// @param aSettingsFilePath [const @ref character*] The settings file path.
      virtual void loadExportSolidSettings(const character* aSettingsFilePath) = 0;

      /// @brief Loads container export settings.
      /// @param aSettingsFilePath [const @ref character*] The settings file path.
      virtual void loadExportContainerSettings(const character* aSettingsFilePath) = 0;
    };
  }
}
