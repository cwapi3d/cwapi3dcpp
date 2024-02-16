/** @file
* Copyright (C) 2016 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2016-12-15
*/

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DVisibilityState.h"
#include "ICwAPI3DActivationState.h"
#include "ICwAPI3DCameraData.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DVisualizationController
    * \brief
    */
    class ICwAPI3DVisualizationController
    {
    public:
      /**
       * \brief Gets the last error
       * \param aErrorCode error code
       * \return error string
       */
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      /**
       * \brief Gets the element color
       * \param aID element ID
       * \return color ID
       */
      virtual colorID getColor(elementID aID) = 0;
      /**
       * \brief Sets the element color
       * \param aElementIDList element ID list
       * \param aColorID color ID
       */
      virtual void setColor(ICwAPI3DElementIDList* aElementIDList, colorID aColorID) = 0;
      /**
       * \brief Gets the element OpenGL color
       * \param aID element ID
       * \return RBG color
       */
      virtual colorRGB getOpenGLColor(elementID aID) = 0;
      /**
       * \brief Sets the element OpenGL color
       * \param aElementIDList element ID list
       * \param aColor RGB color
       */
      virtual void setOpenGLColor(ICwAPI3DElementIDList* aElementIDList, colorRGB aColor) = 0;
      /**
       * \brief Tests if element is active
       * \param aID element ID
       * \return is element active
       */
      virtual bool isActive(elementID aID) = 0;
      /**
       * \brief Sets element active
       * \param aElementIDList element ID list
       */
      virtual void setActive(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Sets the element inactive
       * \param aElementIDList element ID list
       */
      virtual void setInactive(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Tests if element is visible
       * \param aID element ID
       * \return is element visible
       */
      virtual bool isVisible(elementID aID) = 0;
      /**
       * \brief Sets the element visible
       * \param aElementIDList element ID list
       */
      virtual void setVisible(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Sets the element invisible
       * \param aElementIDList element ID list
       */
      virtual void setInvisible(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Tests if the element is immutable
       * \param aID element ID
       * \return is element immutable
       */
      virtual bool isImmutable(elementID aID) = 0;
      /**
       * \brief Sets the element immutable
       * \param aElementIDList element ID list
       */
      virtual void setImmutable(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Sets the element mutable
       * \param aElementIDList element ID list
       */
      virtual void setMutable(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Shows all elements
       */
      virtual void showAllElements() = 0;
      /**
       * \brief Hides all elements
       */
      virtual void hideAllElements() = 0;
      /**
       * \brief Zooms on all elements
       */
      virtual void zoomAllElements() = 0;
      /**
       * \brief Zooms on all active elements
       */
      virtual void zoomActiveElements() = 0;
      /**
       * \brief Refresh the drawing area
       */
      virtual void refresh() = 0;
      /**
       * \brief Sets the element material
       * \param aElementIDList element ID list
       * \param aID material ID
       */
      virtual void setMaterial(ICwAPI3DElementIDList* aElementIDList, materialID aID) = 0;
      /**
       * \brief Gets the element material
       * \param aElementID element ID
       * \return material ID
       */
      virtual materialID getMaterial(elementID aElementID) = 0;
      /**
       * \brief Saves the visibility state
       * \return visibility state
       */
      virtual ICwAPI3DVisibilityState* saveVisibilityState() = 0;
      /**
       * \brief Restores the visibility state
       * \param aState visibility state
       */
      virtual void restoreVisibilityState(ICwAPI3DVisibilityState* aState) = 0;
      /**
       * \brief Saves the activation state
       * \return activation state
       */
      virtual ICwAPI3DActivationState* saveActivationState() = 0;
      /**
       * \brief Restores the activation state
       * \param aState activation state
       */
      virtual void restoreActivationState(ICwAPI3DActivationState* aState) = 0;
      /**
       * \brief Sets the view to +X
       */
      virtual void showViewPositiveX() = 0;
      /**
       * \brief Sets the view to -X
       */
      virtual void showViewNegativeX() = 0;
      /**
       * \brief Sets the view to +Y
       */
      virtual void showViewPositiveY() = 0;
      /**
       * \brief Sets the view to -Y
       */
      virtual void showViewNegativeY() = 0;
      /**
       * \brief Sets the view to +Z
       */
      virtual void showViewPositiveZ() = 0;
      /**
       * \brief Sets the view to -Z
       */
      virtual void showViewNegativeZ() = 0;
      /**
       * \brief Sets the view to standard axonometry
       */
      virtual void showViewStandardAxo() = 0;
      /**
       * \brief Sets the view to wireframe
       */
      virtual void showViewWireframe() = 0;
      /**
       * \brief Sets the view to hidden lines
       */
      virtual void showViewHiddenLines() = 0;
      /**
       * \brief Sets the view to dashed hidden lines
       */
      virtual void showViewDashedHiddenLines() = 0;
      /**
       * \brief Sets the view to shaded 2
       */
      virtual void showViewShaded2() = 0;
      /**
       * \brief Sets the view to shaded 1
       */
      virtual void showViewShaded1() = 0;
      /**
      * \brief Returns if the element is selectable
      * \param aID
      * \return
      */
      virtual bool isSelectable(elementID aID) = 0;
      /**
      * \brief Sets a list of elements unselectable
      * \param aElementIDList
      */
      virtual void setUnselectable(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
      * \brief Sets a list of elements selectable
      * \param aElementIDList
      */
      virtual void setSelectable(ICwAPI3DElementIDList* aElementIDList) = 0;
      virtual void clearErrors() = 0;
      /**
      * \brief Loads marking settings file
      * \param aSettingsFilePath
      */
      virtual void loadMarkingSettings(const character* aSettingsFilePath) = 0;
      /**
      * \brief returns if plane 2d is active
      * \return
      */
      virtual bool isPlane2d() = 0;
      /**
      * \brief Sets the position of the camera, pointing to a target.
      * \param aPosition
      * \param aTarget
      */
      virtual void setCamera(vector3D aPosition, vector3D aTarget) = 0;
      /**
      * \brief changes the viewmode to Axo
      */
      virtual void showViewAxo() = 0;
      /**
      * \brief changes the viewmode to Perpective
      */
      virtual void showPerspectiveCentral() = 0;
      /**
      * \brief
      * \param aShow
      */
      virtual void showReferenceSideBeam(bool aShow) = 0;
      /**
      * \brief
      * \param aShow
      */
      virtual void showReferenceSidePanel(bool aShow) = 0;
      /**
      * \brief
      * \param aShow
      */
      virtual void showReferenceSideWall(bool aShow) = 0;
      /**
       * \brief
       * \param aColorID
       * \return colorRGB
       */
      virtual colorRGB getRGBFromCadworkColorID(uint16_t aColorID) = 0;
      virtual void setColorWithoutMaterial(ICwAPI3DElementIDList* aElementIDList, colorID aColorID) = 0;
      virtual bool isTextureRotated(elementID aID) = 0;
      virtual void setTextureRotated(ICwAPI3DElementIDList* aElementIDList, bool aFlag) = 0;

      /**
       * \brief Get the camera data
       * \return camera data
       */
      virtual ICwAPI3DCameraData* getCameraData() = 0;

      /**
       * \brief Set the camera data - this will override the current camera data 
       * \param camera data
       */
      virtual void setCameraData(ICwAPI3DCameraData* aCameraData) = 0;
      /**
       * \brief Check if Cadwork window is in light mode
       * \return window is in light mode
       */
      virtual bool isCadworkWindowInLightMode() = 0;
      /**
       * \brief Check if Cadwork window is in dark mode
       * \return window is in dark mode
       */
      virtual bool isCadworkWindowInDarkMode() = 0;
    };
  }
}
