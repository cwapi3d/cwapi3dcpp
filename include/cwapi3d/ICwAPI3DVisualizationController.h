/// @file
/// Copyright (C) 2016 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         24.0
/// @author        Paquet
/// @date          2016-12-15

#pragma once

#include "ICwAPI3DActivationState.h"
#include "ICwAPI3DCameraData.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DVisibilityState.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DVisualizationController
    class ICwAPI3DVisualizationController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the element color.
      /// @param aElementId [@ref elementID] The element id.
      /// @return [@ref colorID] The color ID of the element.
      virtual colorID getColor(elementID aElementId) = 0;

      /// @brief Sets the element color.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      /// @param aColorID [@ref colorID] The color ID to set.
      virtual void setColor(ICwAPI3DElementIDList* aElementIdList, colorID aColorID) = 0;

      /// @brief Gets the element OpenGL color.
      /// @param aElementId [@ref elementID] The element id.
      /// @return [@ref colorRGB] The OpenGL color of the element.
      virtual colorRGB getOpenGLColor(elementID aElementId) = 0;

      /// @brief Sets the element OpenGL color.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      /// @param aColor [@ref colorRGB] The OpenGL color to set.
      virtual void setOpenGLColor(ICwAPI3DElementIDList* aElementIdList, colorRGB aColor) = 0;

      /// @brief Tests if element is active.
      /// @param aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is active, false otherwise.
      virtual bool isActive(elementID aElementId) = 0;

      /// @brief Sets element active.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      virtual void setActive(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the element inactive.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      virtual void setInactive(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Tests if element is visible.
      /// @param aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is visible, false otherwise.
      virtual bool isVisible(elementID aElementId) = 0;

      /// @brief Sets the element visible.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      virtual void setVisible(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the element invisible.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      virtual void setInvisible(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Tests if the element is immutable.
      /// @param aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is immutable, false otherwise.
      virtual bool isImmutable(elementID aElementId) = 0;

      /// @brief Sets the element immutable.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      virtual void setImmutable(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the element mutable.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      virtual void setMutable(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Shows all elements.
      virtual void showAllElements() = 0;

      /// @brief Hides all elements
      virtual void hideAllElements() = 0;

      /// @brief Zooms on all elements
      virtual void zoomAllElements() = 0;

      /// @brief Zooms on all active elements
      virtual void zoomActiveElements() = 0;

      /// @brief Refresh the drawing area
      virtual void refresh() = 0;

      /// @brief Sets the element material.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      /// @param aElementId [@ref materialID] The material ID to set.
      virtual void setMaterial(ICwAPI3DElementIDList* aElementIdList, materialID aElementId) = 0;

      /// @brief Gets the element material.
      /// @param aElementID [@ref elementID] The element id.
      /// @return [materialID] The material id.
      virtual materialID getMaterial(elementID aElementID) = 0;

      /// @brief Saves the visibility state.
      /// @return [@ref ICwAPI3DVisibilityState*] The visibility state.
      virtual ICwAPI3DVisibilityState* saveVisibilityState() = 0;

      /// @brief Restores the visibility state.
      /// @param aState [@ref ICwAPI3DVisibilityState*] The visibility state to restore.
      virtual void restoreVisibilityState(ICwAPI3DVisibilityState* aState) = 0;

      /// @brief Saves the activation state.
      /// @return [@ref ICwAPI3DActivationState*] The activation state.
      virtual ICwAPI3DActivationState* saveActivationState() = 0;

      /// @brief Restores the activation state.
      /// @param aState [@ref ICwAPI3DActivationState*] The activation state to restore.
      virtual void restoreActivationState(ICwAPI3DActivationState* aState) = 0;

      /// @brief Sets the view to +X.
      virtual void showViewPositiveX() = 0;

      /// @brief Sets the view to -X.
      virtual void showViewNegativeX() = 0;

      /// @brief Sets the view to +Y.
      virtual void showViewPositiveY() = 0;

      /// @brief Sets the view to -Y.
      virtual void showViewNegativeY() = 0;

      /// @brief Sets the view to +Z.
      virtual void showViewPositiveZ() = 0;

      /// @brief Sets the view to -Z.
      virtual void showViewNegativeZ() = 0;

      /// @brief Sets the view to standard axonometry.
      virtual void showViewStandardAxo() = 0;

      /// @brief Sets the view to wireframe.
      virtual void showViewWireframe() = 0;

      /// @brief Sets the view to hidden lines.
      virtual void showViewHiddenLines() = 0;

      /// @brief Sets the view to dashed hidden lines.
      virtual void showViewDashedHiddenLines() = 0;

      /// @brief Sets the view to shaded 2.
      virtual void showViewShaded2() = 0;

      /// @brief Sets the view to shaded 1.
      virtual void showViewShaded1() = 0;

      /// @brief Returns if the element is selectable.
      /// @param aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is selectable, false otherwise.
      virtual bool isSelectable(elementID aElementId) = 0;

      /// @brief Sets a list of elements unselectable.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      virtual void setUnselectable(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets a list of elements selectable.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id.
      virtual void setSelectable(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Loads marking settings file.
      /// @param aSettingsFilePath [const @ref character*] The path to the settings file.
      virtual void loadMarkingSettings(const character* aSettingsFilePath) = 0;

      /// @brief returns if plane 2d is active.
      /// @return [bool] True if plane 2D is active, false otherwise.
      virtual bool isPlane2d() = 0;

      /// @brief Sets the position of the camera, pointing to a target.
      /// @param aPosition [@ref vector3D] The position of the camera.
      /// @param aTarget [@ref vector3D] The target the camera is pointing at.
      virtual void setCamera(vector3D aPosition, vector3D aTarget) = 0;

      /// @brief changes the viewmode to Axo.
      virtual void showViewAxo() = 0;

      /// @brief changes the viewmode to Perspective.
      virtual void showPerspectiveCentral() = 0;

      /// @brief Shows or hides the reference side beam.
      /// @param aShow [bool] True to show the reference side beam, false to hide it.
      virtual void showReferenceSideBeam(bool aShow) = 0;

      /// @brief Shows or hides the reference side panel.
      /// @param aShow [bool] True to show the reference side panel, false to hide it.
      virtual void showReferenceSidePanel(bool aShow) = 0;

      /// @brief Shows or hides the reference side wall.
      /// @param aShow [bool] True to show the reference side wall, false to hide it.
      virtual void showReferenceSideWall(bool aShow) = 0;

      /// @brief Gets the RGB color from a Cadwork color ID.
      /// @param aColorID [uint16_t] The Cadwork color ID.
      /// @return [@ref colorRGB] The RGB color corresponding to the Cadwork color ID.
      virtual colorRGB getRGBFromCadworkColorID(uint16_t aColorID) = 0;

      /// @brief Sets the color of a list of elements without changing their material.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] A list of element id.
      /// @param aColorID [@ref colorID] The color ID to set.
      virtual void setColorWithoutMaterial(ICwAPI3DElementIDList* aElementIdList, colorID aColorID) = 0;

      /// @brief Checks if the texture of an element is rotated.
      /// @param aElementId [@ref elementID] The element id.
      /// @return [bool] True if the texture is rotated, false otherwise.
      virtual bool isTextureRotated(elementID aElementId) = 0;

      /// @brief Sets the rotation of the texture for a list of elements.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] A list of element id.
      /// @param aFlag [bool] True to rotate the texture, false to not rotate it.
      virtual void setTextureRotated(ICwAPI3DElementIDList* aElementIdList, bool aFlag) = 0;

      /// @brief Get the camera data.
      /// @return [@ref ICwAPI3DCameraData*] The camera data.
      virtual ICwAPI3DCameraData* getCameraData() = 0;

      /// @brief Set the camera data - this will override the current camera data.
      /// @param aCameraData [@ref ICwAPI3DCameraData*] The camera data to set.
      virtual void setCameraData(ICwAPI3DCameraData* aCameraData) = 0;

      /// @brief Check if Cadwork window is in light mode.
      /// @return [bool] True if the window is in light mode, false otherwise.
      virtual bool isCadworkWindowInLightMode() = 0;

      /// @brief Check if Cadwork window is in dark mode.
      /// @return [bool] True if the window is in dark mode, false otherwise.
      virtual bool isCadworkWindowInDarkMode() = 0;

      /// @brief Enter 2d working plane.
      /// @param aPlaneNormal [@ref vector3D] A normalized plane vector.
      /// @param aPlaneOrigin [@ref vector3D] A plane origin.
      virtual void enterWorkingPlane(vector3D aPlaneNormal, vector3D aPlaneOrigin) = 0;

      /// @brief Gets the element transparency.
      /// @param aElementId [@ref elementID] The element id.
      virtual int32_t getElementTransparency(CwAPI3D::elementID aElementId) = 0;

      /// @brief Sets the element transparency.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param aValue [int32_t] Transparency value as percentage.
      virtual void setElementTransparency(ICwAPI3DElementIDList* aElementIdList, int32_t aValue) = 0;

      /// @brief Check if element is using material texture.
      /// @param aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is using material texture, false otherwise.
      virtual bool getUseMaterialTexture(CwAPI3D::elementID aElementId) = 0;

      /// @brief Sets element to use material texture.
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param aValue [bool] True to use material texture, false otherwise.
      virtual void setUseMaterialTexture(ICwAPI3DElementIDList* aElementIdList, bool aValue) = 0;

      /// @brief Set the graphic option to display bitmaps as textures in shaded 1.
      /// @param aValue [bool] True to display bitmaps as textures in shaded 1, false otherwise.
      virtual void displayBitmapsAsTextureRepresentationsInShaded1(bool aValue) = 0;

      /// @brief Set the graphic option to display bitmaps as textures in shaded 2.
      /// @param aValue [bool] True to display bitmaps as textures in shaded 2, false otherwise.
      virtual void displayBitmapsAsTextureRepresentationsInShaded2(bool aValue) = 0;
    };
  }
}
