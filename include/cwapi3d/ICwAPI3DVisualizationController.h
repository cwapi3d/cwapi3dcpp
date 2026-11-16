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

      /// @brief Leaves the 2d working plane and restores a 3d view.
      ///        Does nothing when the 2d working plane is not currently active.
      /// @param aExitView [@ref workingPlaneExitView] The 3d view to restore on leaving.
      ///
      /// @note When the working plane was entered from inside a container block, only
      ///       workingPlaneExitView::previous_view returns into that container block; every
      ///       other value leaves it and switches to the plain 3d model view.
      ///
      /// @since 33.0
      virtual void leaveWorkingPlane(workingPlaneExitView aExitView) = 0;

      /// @brief Tests whether an element is permanently hidden.
      ///
      /// This is a truthful query of the element's own state, so it also returns true for the
      /// geometry cadwork itself keeps permanently hidden (container-block content being edited,
      /// nesting raw parts, rafter and purlin heads, converted exchange objects). It answers
      /// *is this element permanently hidden*, not *did this API hide it* — the set your plugin
      /// may act on is what @ref getPermanentlyHiddenElements returns.
      ///
      /// @param aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is permanently hidden, false otherwise, and false when
      ///         the id does not resolve to an element.
      /// @since 33.0
      virtual bool isPermanentlyHidden(elementID aElementId) = 0;

      /// @brief Takes elements out of the model's working set and keeps them there.
      ///
      /// Permanently hidden elements are gone from the view, from element enumeration
      /// (@ref ICwAPI3DElementController::getAllIdentifiableElementIDs no longer returns them),
      /// from lists and from exports, and @ref showAllElements — as well as the end user's own
      /// *show all* — does **not** bring them back. The state is stored with the drawing, so it
      /// survives save, close and reopen; only @ref showPermanentlyHidden undoes it.
      ///
      /// The elements this call hides are recorded as belonging to this API, which is what lets
      /// @ref getPermanentlyHiddenElements hand them back later even though no enumeration
      /// reaches them any more. Ids that do not resolve to an element, elements of a type this
      /// controller cannot hide (anything other than construction elements, auxiliary objects,
      /// export solids and containers), and elements that are already permanently hidden — whether
      /// by this API or by cadwork itself — are silently skipped, so this call never claims an
      /// element it did not hide. An element that is currently active is deactivated first.
      ///
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The elements to hide permanently.
      /// @since 33.0
      virtual void hidePermanently(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Brings elements this API hid permanently back into the working set.
      ///
      /// The elements return with their colour, material, attributes and position intact, their
      /// geometry is recreated where the drawing was reopened without it, and they are part of
      /// element enumeration, lists and exports again.
      ///
      /// **Only elements that @ref hidePermanently hid can be shown.** An id that this API did not
      /// hide is a silent no-op — passing the id of a container-block content element, a nesting
      /// raw part or a rafter head changes nothing, so cadwork's own permanently hidden geometry
      /// cannot be revealed through this call. Ids that do not resolve to an element are skipped
      /// the same way. There is no error and no return value: use
      /// @ref getPermanentlyHiddenElements to learn which elements are actually yours to show.
      ///
      /// @param aElementIdList [@ref ICwAPI3DElementIDList*] The elements to show again.
      /// @since 33.0
      virtual void showPermanentlyHidden(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Gets the elements this API hid permanently and has not shown again.
      ///
      /// This is the only way back to those elements: they are outside the model's working set, so
      /// no element enumeration returns them. The result is exactly the set
      /// @ref hidePermanently hid — never the geometry cadwork keeps permanently hidden for its own
      /// purposes — and it is therefore always safe to pass straight to
      /// @ref showPermanentlyHidden. Because the ownership record lives in the drawing, the set is
      /// still complete after a save, close and reopen.
      ///
      /// @return [@ref ICwAPI3DElementIDList*] The permanently hidden elements owned by this API,
      ///         empty when there are none.
      /// @since 33.0
      virtual ICwAPI3DElementIDList* getPermanentlyHiddenElements() = 0;

      /// @brief Gets the background color a render view displays.
      ///
      /// Each render view keeps its own background, as set in the graphics options dialog. The
      /// result is the color actually shown: black for a @ref backgroundType::black background,
      /// white for @ref backgroundType::white, the stored color for @ref backgroundType::user, and
      /// black for @ref backgroundType::image, which has no single color. Use
      /// @ref getBackgroundType to tell a user color from a plain black or white background.
      ///
      /// @param aRenderView [@ref renderViewType] The render view to query. Need not be the
      ///        render view currently displayed.
      /// @return [@ref colorRGB] The displayed background color, components 0 to 255; black when
      ///         aRenderView is not a defined render view.
      /// @since 33.0
      /// @par Example:
      /// @code{.cpp}
      /// colorRGB color = aFactory.getVisualizationController()->getBackgroundColor(renderViewType::shading1);
      /// wprintf(L"Shading 1 background: %u %u %u\n", color.mR, color.mG, color.mB);
      /// @endcode
      virtual colorRGB getBackgroundColor(renderViewType aRenderView) = 0;

      /// @brief Sets a user background color for a render view.
      ///
      /// Stores the color and switches the render view's background type to
      /// @ref backgroundType::user, so the color is shown immediately. When aRenderView is the
      /// render view currently displayed, the 3d view is repainted. The background is saved with
      /// the drawing, so the active document is marked modified. Setting the color and type the
      /// render view already has, or an undefined aRenderView, changes nothing.
      ///
      /// @param aRenderView [@ref renderViewType] The render view to change.
      /// @param aColor [@ref colorRGB] The new color, components 0 to 255; larger values are
      ///        clamped to 255.
      /// @since 33.0
      /// @par Example:
      /// @code{.cpp}
      /// aFactory.getVisualizationController()->setBackgroundColor(renderViewType::wireframe, colorRGB{40, 40, 60});
      /// @endcode
      virtual void setBackgroundColor(renderViewType aRenderView, colorRGB aColor) = 0;

      /// @brief Gets how the background of a render view is filled.
      ///
      /// @param aRenderView [@ref renderViewType] The render view to query. Need not be the
      ///        render view currently displayed.
      /// @return [@ref backgroundType] The fill type; @ref backgroundType::black when aRenderView
      ///         is not a defined render view.
      /// @since 33.0
      /// @par Example:
      /// @code{.cpp}
      /// if (aFactory.getVisualizationController()->getBackgroundType(renderViewType::hiddenLine) == backgroundType::image)
      /// {
      ///   wprintf(L"Hidden line view uses a background image\n");
      /// }
      /// @endcode
      virtual backgroundType getBackgroundType(renderViewType aRenderView) = 0;

      /// @brief Sets how the background of a render view is filled.
      ///
      /// Switching to @ref backgroundType::user shows the color last stored for that render view
      /// (see @ref setBackgroundColor); switching away from it keeps that color for later. When
      /// aRenderView is the render view currently displayed, the 3d view is repainted, and the
      /// active document is marked modified. Setting the type the render view already has
      /// changes nothing.
      ///
      /// **@ref backgroundType::image cannot be set through the API**: an image background needs
      /// an image chosen in the graphics options dialog. Passing it, or an undefined aRenderView,
      /// changes nothing.
      ///
      /// @param aRenderView [@ref renderViewType] The render view to change.
      /// @param aType [@ref backgroundType] The new fill type: black, white or user.
      /// @since 33.0
      /// @par Example:
      /// @code{.cpp}
      /// aFactory.getVisualizationController()->setBackgroundType(renderViewType::shading2, backgroundType::white);
      /// @endcode
      virtual void setBackgroundType(renderViewType aRenderView, backgroundType aType) = 0;
    };
  }
}
