/** @file
* Copyright (C) 2017 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2017-03-06
*/

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DElementIDList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DShopDrawingController
    * \brief
    */
    class ICwAPI3DShopDrawingController
    {
    public:
      /**
       * \brief Gets the last error
       * \param aErrorCode error code
       * \return error string
       */
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      /**
       * \brief Exports a 2D wireframe to the clipboard
       * \param aClipboardNumber clipboard number
       * \param aWithLayout use layout
       */
      virtual void export2DWireframeWithClipboard(uint32_t aClipboardNumber, bool aWithLayout = false) = 0;
      /**
       * \brief Exports a 2D hidden lines to the clipboard
       * \param aClipboardNumber clipboard number
       * \param aWithLayout use layout
       */
      virtual void export2DHiddenLinesWithClipboard(uint32_t aClipboardNumber, bool aWithLayout = false) = 0;
      /**
       * \brief Exports a 2D wireframe to a 2DC file
       * \param aFilePath file path
       * \param aWithLayout use layout
       */
      virtual void export2DWireframeWith2DC(const character* aFilePath, bool aWithLayout = false) = 0;
      /**
       * \brief Exports a 2D hidden lines to a 2DC file
       * \param aFilePath file path
       * \param aWithLayout use layout
       */
      virtual void export2DHiddenLinesWith2DC(const character* aFilePath, bool aWithLayout = false) = 0;
      /**
       * \brief Exports a wall to the clipboard
       * \param aClipboardNumber clipboard number
       * \param aElementIDList elements to export
       */
      virtual void exportWallWithClipboard(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Exports an export solid to the clipboard
       * \param aClipboardNumber clipboard number
       * \param aElementIDList elements to export
       */
      virtual void exportExportSolidWithClipboard(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Exports a piece-by-piece to the clipboard
       * \param aClipboardNumber clipboard number
       * \param aElementIDList elements to export
       */
      virtual void exportPieceByPieceWithClipboard(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Assigns elements to an export solid
       * \param aCeoElement export solid element
       * \param aElementIDList elements to assign
       */
      virtual void assignExportSolid(ICwAPI3DElementIDList* aCeoElement, ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Export a container to the clipboard
       * \param aClipboardNumber clipboard number
       * \param aElements elements to export
       */
      virtual void exportContainerWithClipboard(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief Adds a horizontal wall section
       * \param aElement element
       * \param aPosition section position
       */
      virtual void addWallSectionHorizontal(elementID aElement, vector3D aPosition) = 0;
      /**
       * \brief Adds a vertical wall section
       * \param aElement element
       * \param aPosition section position
       */
      virtual void addWallSectionVertical(elementID aElement, vector3D aPosition) = 0;
      /**
      * \brief Exports a wall to the clipboard
      * \param aClipboardNumber clipboard number
      * \param aElementIDList elements to export
      * \param aPresettingFile
      */
      virtual void exportWallWithClipboardAndPresetting(uint32_t aClipboardNumber, ICwAPI3DElementIDList* aElementIDList, const character* aPresettingFile) = 0;
      /**
       * \brief Loads piece by piece export settings
       * \param aSettingsFilePath settings file path
       */
      virtual void loadExportPieceByPieceSettings(const character* aSettingsFilePath) = 0;
      /**
       * \brief Saves piece by piece export settings
       * \param aSettingsFilePath settings file path
       */
      virtual void saveExportPieceByPieceSettings(const character* aSettingsFilePath) = 0;
      virtual void clearErrors() = 0;
      /**
       * \brief Loads wall export settings
       * \param aSettingsFilePath settings file path
       */
      virtual void loadExportWallSettings(const character* aSettingsFilePath) = 0;
      /**
       * \brief Loads export solid settings
       * \param aSettingsFilePath settings file path
       */
      virtual void loadExportSolidSettings(const character* aSettingsFilePath) = 0;
      /**
       * \brief Loads container export settings
       * \param aSettingsFilePath settings file path
       */
      virtual void loadExportContainerSettings(const character* aSettingsFilePath) = 0;
    };
  }
}
