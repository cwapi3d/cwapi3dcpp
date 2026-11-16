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
#include "ICwAPI3DList.h"
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

      /// @brief Adds a horizontal section to a wall, floor or roof at a relative position across the element's width.
      /// @details The section plane is perpendicular to the element's width axis (yl). The relative position t maps onto that axis:
      /// t = 0.5 places the section through the middle of the element, smaller values move it towards the -yl face and larger ones towards the +yl face.
      /// The section point is stored in global coordinates (mm) as for @ref addWallSectionHorizontal, which this function does not change.
      /// The function acts only on the given element and modifies the active document; it records an undo step (Ctrl+Z removes the section) and refreshes the element.
      /// It does not clear previous errors; call @ref clearErrors first if needed.
      /// @param[in] aElement [@ref elementID] A cover wall, floor or roof (element envelope).
      /// @param[in] aRelativePosition [double] The relative position t in the open interval (0,1) across the element's width (along yl).
      /// 0 and 1 are rejected because they lie on the element's faces.
      /// @return [bool] True if the section was added. False if nothing was added; @ref getLastError then returns the reason and one of these error codes:
      /// @li 1: the element does not exist or is not a wall, floor or roof (e.g. a beam).
      /// @li 2: t is not in the open interval (0,1), is NaN or infinite, or the element has no width.
      /// @li 3: a horizontal section already exists at this position (same yl position within the cadwork tolerance).
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DShopDrawingController* shopDrawingController = aFactory.getShopDrawingController();
      /// const elementID wallId = 42;
      /// const bool added = shopDrawingController->addWallSectionHorizontalAtRelativePosition(wallId, 0.5);
      /// int32_t errorCode = 0;
      /// ICwAPI3DString* error = added ? nullptr : shopDrawingController->getLastError(&errorCode);
      /// @endcode
      virtual bool addWallSectionHorizontalAtRelativePosition(elementID aElement, double aRelativePosition) = 0;

      /// @brief Adds a named cut to an export solid or container, defined by a plane normal and an origin point on the plane.
      /// @details The plane passes through aOrigin perpendicular to aNormal; both are in global coordinates, the origin in mm.
      /// The plane must lie strictly inside the element's extent along the normal and must intersect the element's body.
      /// The cut view's up direction is chosen as the UI does by default: the view looks along -aNormal and is kept level with the global Z axis where possible.
      /// The function acts only on the given element; other "same containers" are not changed.
      /// It modifies the active document; it records an undo step (Ctrl+Z removes the cut) and refreshes the element.
      /// It does not clear previous errors; call @ref clearErrors first if needed.
      /// @param[in] aElement [@ref elementID] An export solid or container.
      /// @param[in] aName [const @ref character*] The cut name; it must not be empty and must not already be used by a cut of this element (exact match).
      /// @param[in] aNormal [@ref vector3D] The plane normal in global coordinates; any non-zero length.
      /// @param[in] aOrigin [@ref vector3D] A point on the plane in global coordinates (mm).
      /// @return [bool] True if the cut was added. False if nothing was added; @ref getLastError then returns the reason and one of these error codes:
      /// @li 1: the element does not exist or is not an export solid or container.
      /// @li 2: aNormal is a zero-length vector.
      /// @li 3: the plane does not lie strictly inside the element's extent along the normal.
      /// @li 5: the element has no extent along the normal.
      /// @li 6: aName is empty or consists of whitespace only.
      /// @li 7: a cut with this name already exists on the element.
      /// @li 8: the element's extent along the normal could not be determined.
      /// @li 9: the plane lies inside the extent but does not intersect the element's body (e.g. the empty corner of an L-shaped body).
      /// @li 10: the cut could not be saved.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DShopDrawingController* shopDrawingController = aFactory.getShopDrawingController();
      /// const elementID exportSolidId = 42;
      /// const vector3D normal{1., 0., 0.};
      /// const vector3D origin{1500., 0., 0.};
      /// const bool added = shopDrawingController->addExportSolidCut(exportSolidId, L"A-A", normal, origin);
      /// int32_t errorCode = 0;
      /// ICwAPI3DString* error = added ? nullptr : shopDrawingController->getLastError(&errorCode);
      /// @endcode
      virtual bool addExportSolidCut(elementID aElement, const character* aName, vector3D aNormal, vector3D aOrigin) = 0;

      /// @brief Adds a named cut to an export solid or container, defined by a plane normal and a relative position across the element's extent along that normal.
      /// @details The element's extent along aNormal runs from its minimum to its maximum, in global coordinates; the plane is perpendicular to aNormal at min + aRelativePosition * (max - min).
      /// aRelativePosition must lie in the open interval (0,1): 0 and 1 are rejected because they would place the plane on a boundary face, which cuts nothing.
      /// The plane must intersect the element's body.
      /// The cut view's up direction is chosen as the UI does by default: the view looks along -aNormal and is kept level with the global Z axis where possible.
      /// The function acts only on the given element; other "same containers" are not changed.
      /// It modifies the active document; it records an undo step (Ctrl+Z removes the cut) and refreshes the element.
      /// It does not clear previous errors; call @ref clearErrors first if needed.
      /// @param[in] aElement [@ref elementID] An export solid or container.
      /// @param[in] aName [const @ref character*] The cut name; it must not be empty and must not already be used by a cut of this element (exact match).
      /// @param[in] aNormal [@ref vector3D] The plane normal in global coordinates; any non-zero length.
      /// @param[in] aRelativePosition [double] The position of the plane across the element's extent along aNormal, in the open interval (0,1); 0.5 is the middle.
      /// @return [bool] True if the cut was added. False if nothing was added; @ref getLastError then returns the reason and one of these error codes:
      /// @li 1: the element does not exist or is not an export solid or container.
      /// @li 2: aNormal is a zero-length vector.
      /// @li 4: aRelativePosition is not inside the open interval (0,1), or is NaN.
      /// @li 5: the element has no extent along the normal.
      /// @li 6: aName is empty or consists of whitespace only.
      /// @li 7: a cut with this name already exists on the element.
      /// @li 8: the element's extent along the normal could not be determined.
      /// @li 9: the plane does not intersect the element's body (e.g. the empty corner of an L-shaped body).
      /// @li 10: the cut could not be saved.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DShopDrawingController* shopDrawingController = aFactory.getShopDrawingController();
      /// const elementID containerId = 42;
      /// const vector3D normal{0., 0., 1.};
      /// const bool added = shopDrawingController->addExportSolidCutAtRelativePosition(containerId, L"Mid height", normal, 0.5);
      /// int32_t errorCode = 0;
      /// ICwAPI3DString* error = added ? nullptr : shopDrawingController->getLastError(&errorCode);
      /// @endcode
      virtual bool addExportSolidCutAtRelativePosition(elementID aElement, const character* aName, vector3D aNormal, double aRelativePosition) = 0;

      /// @brief Gets the wall sections of a wall, floor or roof as planes.
      /// @details Each entry is one section plane: a point on it and its unit normal, both in global coordinates.
      /// A horizontal section is perpendicular to the element's yl axis, a vertical one to its xl axis; both move with the element.
      /// The list holds the horizontal sections first, ordered along yl, then the vertical ones, ordered along xl.
      /// The function only reads; it does not modify the document or record an undo step.
      /// It does not clear previous errors; call @ref clearErrors first if needed.
      /// The list is owned by the API and stays valid until the plugin ends; calling destroy() on it is not required.
      /// @param[in] aElement [@ref elementID] A wall, floor or roof.
      /// @return [@ref ICwAPI3DWallSectionList*] The element's wall sections; never null. An empty list means the element has none.
      /// If the list is empty because of an error, @ref getLastError returns the reason and this error code:
      /// @li 1: the element does not exist or is not a wall, floor or roof.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DShopDrawingController* shopDrawingController = aFactory.getShopDrawingController();
      /// const elementID wallId = 42;
      /// ICwAPI3DWallSectionList* sections = shopDrawingController->getWallSections(wallId);
      /// for (uint32_t i = 0; i < sections->count(); ++i)
      /// {
      ///   const wallSection section = sections->at(i);
      ///   wprintf(L"%s section through (%f, %f, %f)\n", section.mType == wallSectionType::horizontal ? L"Horizontal" : L"Vertical", section.mPoint.mX, section.mPoint.mY, section.mPoint.mZ);
      /// }
      /// @endcode
      virtual ICwAPI3DWallSectionList* getWallSections(elementID aElement) = 0;

      /// @brief Gets the cuts of an export solid or container as planes.
      /// @details Each entry is one cut: its name, a point on the plane, the unit plane normal and the unit up direction of the cut view, all in global coordinates.
      /// A cut stores only its plane, not the point it was created through (e.g. by @ref addExportSolidCut), so the point returned is the plane's point nearest the global origin.
      /// The list is in the order the cuts are stored on the element.
      /// The function only reads; it does not modify the document or record an undo step.
      /// It does not clear previous errors; call @ref clearErrors first if needed.
      /// The list is owned by the API and stays valid until the plugin ends; calling destroy() on it is not required.
      /// @param[in] aElement [@ref elementID] An export solid or container.
      /// @return [@ref ICwAPI3DExportSolidCutList*] The element's cuts; never null. An empty list means the element has none.
      /// If the list is empty because of an error, @ref getLastError returns the reason and this error code:
      /// @li 1: the element does not exist or is not an export solid or container.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DShopDrawingController* shopDrawingController = aFactory.getShopDrawingController();
      /// const elementID exportSolidId = 42;
      /// ICwAPI3DExportSolidCutList* cuts = shopDrawingController->getExportSolidCuts(exportSolidId);
      /// for (uint32_t i = 0; i < cuts->count(); ++i)
      /// {
      ///   const exportSolidCut cut = cuts->at(i);
      ///   wprintf(L"Cut %s, normal (%f, %f, %f)\n", cut.mName.c_str(), cut.mNormal.mX, cut.mNormal.mY, cut.mNormal.mZ);
      /// }
      /// @endcode
      virtual ICwAPI3DExportSolidCutList* getExportSolidCuts(elementID aElement) = 0;
    };
  }
}
