// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DFacetList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DVertexList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DGeometryController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the element width
      /// @param aID element ID
      /// @return element width
      virtual double getWidth(elementID aID) = 0;

      /// @brief Gets the element height
      /// @param aID element ID
      /// @return element height
      virtual double getHeight(elementID aID) = 0;

      /// @brief Gets the element length
      /// @param aID element ID
      /// @return element length
      virtual double getLength(elementID aID) = 0;

      /// @brief Gets the element P1
      /// @param aID element ID
      /// @return element P1
      virtual vector3D getP1(elementID aID) = 0;

      /// @brief Gets the element P2
      /// @param aID element ID
      /// @return element P2
      virtual vector3D getP2(elementID aID) = 0;

      /// @brief Gets the element P3
      /// @param aID element ID
      /// @return element P3
      virtual vector3D getP3(elementID aID) = 0;

      /// @brief Gets the element start height cut angle
      /// @param aID element ID
      /// @return element start height cut angle
      virtual double getStartHeightCutAngle(elementID aID) = 0;

      /// @brief Gets the element start width cut angle
      /// @param aID element ID
      /// @return element start width cut angle
      virtual double getStartWidthCutAngle(elementID aID) = 0;

      /// @brief Gets the element end height cut angle
      /// @param aID element ID
      /// @return element end height cut angle
      virtual double getEndHeightCutAngle(elementID aID) = 0;

      /// @brief Gets the element end width cut angle
      /// @param aID element ID
      /// @return element end width cut angle
      virtual double getEndWidthCutAngle(elementID aID) = 0;

      /// @brief Rotates the element height axis 90 degrees
      /// @param aElementIDList element ID list
      virtual void rotateHeightAxis90(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Rotates the element height axis 180 degrees
      /// @param aElementIDList element ID list
      virtual void rotateHeightAxis180(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Gets the element overwidth
      /// @param aID element ID
      /// @return element overwidth
      virtual double getOverWidth(elementID aID) = 0;

      /// @brief Sets the element overwidth
      /// @param aElementIDList element ID list
      /// @param aValue element overwidth
      virtual void setOverWidth(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element overheight
      /// @param aID element ID
      /// @return element overheight
      virtual double getOverHeight(elementID aID) = 0;

      /// @brief Sets the element overheight
      /// @param aElementIDList element ID list
      /// @param aValue element overheight
      virtual void setOverHeight(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element overlength
      /// @param aID element ID
      /// @return element overlength
      virtual double getOverLength(elementID aID) = 0;

      /// @brief Sets the element overlength
      /// @param aElementIDList element ID list
      /// @param aValue element overlength
      virtual void setOverLength(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element rounding width
      /// @param aID element ID
      /// @return element rounding width
      virtual double getRoundingWidth(elementID aID) = 0;

      /// @brief Sets the element rounding width
      /// @param aElementIDList element ID list
      /// @param aValue element rounding width
      virtual void setRoundingWidth(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element rounding height
      /// @param aID element ID
      /// @return element rounding height
      virtual double getRoundingHeight(elementID aID) = 0;

      /// @brief Sets the element rounding height
      /// @param aElementIDList element ID list
      /// @param aValue element rounding height
      virtual void setRoundingHeight(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element rounding length
      /// @param aID element ID
      /// @return element rounding length
      virtual double getRoundingLength(elementID aID) = 0;

      /// @brief Sets the element rounding length
      /// @param aElementIDList element ID list
      /// @param aValue element rounding length
      virtual void setRoundingLength(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element negative width cross correction
      /// @param aID element ID
      /// @return element negative width cross correction
      virtual double getCrossCorrectionNegativeWidth(elementID aID) = 0;

      /// @brief Sets the element negative width cross correction
      /// @param aElementIDList element ID list
      /// @param aValue element negative width cross correction
      virtual void setCrossCorrectionNegativeWidth(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element positive width cross correction
      /// @param aID element ID
      /// @return element positive width cross correction
      virtual double getCrossCorrectionPositiveWidth(elementID aID) = 0;

      /// @brief Sets the element positive width cross correction
      /// @param aElementIDList element ID list
      /// @param aValue element positive width cross correction
      virtual void setCrossCorrectionPositiveWidth(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element negative height cross correction
      /// @param aID element ID
      /// @return element negative height cross correction
      virtual double getCrossCorrectionNegativeHeight(elementID aID) = 0;

      /// @brief Sets the element negative height cross correction
      /// @param aElementIDList element ID list
      /// @param aValue element negative height cross correction
      virtual void setCrossCorrectionNegativeHeight(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element positive height cross correction
      /// @param aID element ID
      /// @return element positive height cross correction
      virtual double getCrossCorrectionPositiveHeight(elementID aID) = 0;

      /// @brief Sets the element positive height cross correction
      /// @param aElementIDList element ID list
      /// @param aValue element positive height cross correction
      virtual void setCrossCorrectionPositiveHeight(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element negative length cross correction
      /// @param aID element ID
      /// @return element negative length cross correction
      virtual double getCrossCorrectionNegativeLength(elementID aID) = 0;

      /// @brief Sets the element negative length cross correction
      /// @param aElementIDList element ID list
      /// @param aValue element negative length cross correction
      virtual void setCrossCorrectionNegativeLength(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element positive length cross correction
      /// @param aID element ID
      /// @return element positive length cross correction
      virtual double getCrossCorrectionPositiveLength(elementID aID) = 0;

      /// @brief Sets the element positive length cross correction
      /// @param aElementIDList element ID list
      /// @param aValue element positive length cross correction
      virtual void setCrossCorrectionPositiveLength(ICwAPI3DElementIDList* aElementIDList, double aValue) = 0;

      /// @brief Gets the element real weight
      /// @param aID element ID
      /// @return element real weight
      virtual double getWeight(elementID aID) = 0;

      /// @brief Gets the element list weight
      /// @param aID element ID
      /// @return element list weight
      virtual double getListWeight(elementID aID) = 0;

      /// @brief Gets the element rough volume (does not include negative geometry operations, such as end-types, drillings, connectors, openings, and MEP elements)
      /// @param aID element ID
      /// @return element rough volume
      virtual double getVolume(elementID aID) = 0;

      /// @brief Gets the element list volume
      /// @param aID element ID
      /// @return element list volume
      virtual double getListVolume(elementID aID) = 0;

      /// @brief Gets the element XL vector
      /// @param aID element ID
      /// @return element XL vector
      virtual vector3D getXL(elementID aID) = 0;

      /// @brief Gets the element YL vector
      /// @param aID element ID
      /// @return element YL vector
      virtual vector3D getYL(elementID aID) = 0;

      /// @brief Gets the element ZL vector
      /// @param aID element ID
      /// @return element ZL vector
      virtual vector3D getZL(elementID aID) = 0;

      /// @brief Gets the element center of gravity
      /// @param aID element ID
      /// @return element center of gravity
      virtual vector3D getCenterOfGravity(elementID aID) = 0;

      /// @brief Gets the element reference side
      /// @param aID element ID
      /// @return element reference side
      virtual referenceSide getReferenceSide(elementID aID) = 0;

      /// @brief Gets the element vertices
      /// @param aID element ID
      /// @return element vertices
      virtual ICwAPI3DVertexList* getElementVertices(elementID aID) = 0;

      /// @brief Applies a global scale to element
      /// @param aElementIDList element ID list
      /// @param aScale global scale
      /// @param aOrigin scaling origin
      virtual void applyGlobalScale(ICwAPI3DElementIDList* aElementIDList, double aScale, vector3D aOrigin) = 0;

      /// @brief Automatically regenerates axes on element
      /// @param aElementIDList element ID list
      virtual void autoRegenerateAxes(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Rotates element length axis 90 degrees
      /// @param aElementIDList element ID list
      virtual void rotateLengthAxis90(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Rotates element length axis 180 degrees
      /// @param aElementIDList element ID list
      virtual void rotateLengthAxis180(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Inverts element model
      /// @param aElementIDList element ID list
      virtual void invertModel(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Gets the element facets
      /// @param aID element ID
      /// @return element facets
      virtual ICwAPI3DFacetList* getElementFacets(elementID aID) = 0;

      /// @brief Get the element list width
      /// @param aID element ID
      /// @return element list width
      virtual double getListWidth(elementID aID) = 0;

      /// @brief Gets the element list height
      /// @param aID element ID
      /// @return element list height
      virtual double getListHeight(elementID aID) = 0;

      /// @brief Gets the element list length
      /// @param aID element ID
      /// @return element list length
      virtual double getListLength(elementID aID) = 0;

      /// @brief Sets the element real width
      /// @param aElements element ID list
      /// @param aWidth element real width
      virtual void setWidthReal(ICwAPI3DElementIDList* aElements, double aWidth) = 0;

      /// @brief Sets the element real height
      /// @param aElements element ID list
      /// @param aHeight element real height
      virtual void setHeightReal(ICwAPI3DElementIDList* aElements, double aHeight) = 0;

      /// @brief Gets the element real length
      /// @param aElements element ID list
      /// @param aLength element real length
      virtual void setLengthReal(ICwAPI3DElementIDList* aElements, double aLength) = 0;

      /// @brief Rotates the element height axis via 2 points
      /// @param aElements element ID list
      /// @param aPoint1 first point
      /// @param aPoint2 second point
      virtual void rotateHeightAxis2Points(ICwAPI3DElementIDList* aElements, vector3D aPoint1, vector3D aPoint2) = 0;

      /// @brief Gets the minimum distance between 2 elements
      /// @param aFirstID first element ID
      /// @param aSecondID second element ID
      /// @return minimum distance
      virtual double getMinimumDistanceBetweenElements(elementID aFirstID, elementID aSecondID) = 0;

      /// @brief Gets the total area of all faces for element
      /// @param aElement element ID
      /// @return element total faces area
      virtual double getTotalAreaOfAllFaces(elementID aElement) = 0;

      /// @brief Gets the front face are for element
      /// @param aElement element ID
      /// @return element front face area
      virtual double getAreaOfFrontFace(elementID aElement) = 0;

      /// @brief Gets the element door surface
      /// @param aElements element ID list
      /// @return element door surface
      virtual double getDoorSurface(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Gets the element window surface
      /// @param aElements element ID list
      /// @return element window surface
      virtual double getWindowSurface(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Creates a division zone
      /// @param aElement element ID
      /// @param aPoint division zone point
      /// @param aDirection division zone direction
      virtual void createDivisionZone(elementID aElement, vector3D aPoint, divisionZoneDirection aDirection) = 0;

      /// @brief Deletes a division zone
      /// @param aElement element ID
      virtual void deleteDivisionZone(elementID aElement) = 0;

      /// @brief Gets the division zone points
      /// @param aElement element ID
      /// @return division zone points
      virtual ICwAPI3DVertexList* getDivisionZonePoints(elementID aElement) = 0;

      /// @brief Gets the local X vector
      /// @return local X vector
      virtual vector3D getLocalX() = 0;

      /// @brief Gets the local Y vector
      /// @return local Y vector
      virtual vector3D getLocalZ() = 0;

      /// @brief Gets the local Z vector
      /// @return local Z vector
      virtual vector3D getLocalY() = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Gets the division zone points
      /// @param aElements element IDs
      /// @param aTolerance new drilling tolerance
      virtual void setDrillingTolerance(ICwAPI3DElementIDList* aElements, double aTolerance) = 0;

      /// @brief Gets the drilling tolerance of an axis
      /// @param aElement element ID
      /// @return the drilling tolerance
      virtual double getDrillingTolerance(elementID aElement) = 0;

      /// @brief Gets the vertices of the reference side
      /// @param aElementID element ID
      /// @return vertexlist of all points
      virtual ICwAPI3DVertexList* getElementReferenceFaceVertices(elementID aElementID) = 0;

      /// @brief Gets the area of the reference side
      /// @param aElementID element ID
      /// @return area(size) of reference face
      virtual double getElementReferenceFaceArea(elementID aElementID) = 0;

      /// @brief Automatically regenerates axes on elements without any user interaction.
      /// @param aElementIDList The list of element IDs for which the axes will be regenerated.
      virtual void autoRegenerateAxesSilently(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Rotates the element length axis via 2 points
      /// @param aElements element ID list
      /// @param aPoint1 first point
      /// @param aPoint2 second point
      virtual void rotateLengthAxis2Points(ICwAPI3DElementIDList* aElements, vector3D aPoint1, vector3D aPoint2) = 0;

      /// @brief Gets the center of gravity for a list of elements.
      /// @param aElements The list of element IDs.
      /// @return The center of gravity as a vector3D.
      virtual vector3D getCenterOfGravityForList(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Gets the center of gravity for a list of elements, considering their materials.
      /// @param aElements The list of element IDs.
      /// @return The center of gravity as a vector3D.
      virtual vector3D getCenterOfGravityForListConsideringMaterials(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Gets the count of facets for a specific element.
      /// @param aID The ID of the element.
      /// @return The count of facets.
      virtual uint32_t getElementFacetCount(elementID aID) = 0;

      /// @brief Gets the real weight of the element.
      /// @param aID The ID of the element.
      /// @return The real weight of the element.
      virtual double getWeightReal(elementID aID) = 0;

      /// @brief Gets actual physical volume (includes negative geometry operations, such as end-types, drillings, connectors, openings, and MEP elements) (it might also take into account different drilling bodies and counterbores in a connector)
      /// @param aID element
      /// @return actual physical volume
      virtual double getActualPhysicalVolume(elementID aID) = 0;

      /// @brief Tests if facets are coplanar
      /// @param aFirstFacet first facet
      /// @param aSecondFacet second facet
      /// @return facet coplanarity
      virtual bool areFacetsCoplanar(ICwAPI3DVertexList* aFirstFacet, ICwAPI3DVertexList* aSecondFacet) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartNegativeWidth
      /// @param aID elementID
      /// @return bool value
      virtual bool getRoundMachineRoughPartNegativeWidth(elementID aID) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartNegativeWidth
      /// @param aElements elementID List
      /// @param aValue new Value
      virtual void setRoundMachineRoughPartNegativeWidth(ICwAPI3DElementIDList* aElements, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartPositiveWidth
      /// @param aID elementID
      /// @return bool value
      virtual bool getRoundMachineRoughPartPositiveWidth(elementID aID) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartPositiveWidth
      /// @param aElements elementID List
      /// @param aValue new Value
      virtual void setRoundMachineRoughPartPositiveWidth(ICwAPI3DElementIDList* aElements, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartNegativeHeight
      /// @param aID elementID
      /// @return bool value
      virtual bool getRoundMachineRoughPartNegativeHeight(elementID aID) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartNegativeHeight
      /// @param aElements elementID List
      /// @param aValue new Value
      virtual void setRoundMachineRoughPartNegativeHeight(ICwAPI3DElementIDList* aElements, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartPositiveHeight
      /// @param aID elementID
      /// @return bool value
      virtual bool getRoundMachineRoughPartPositiveHeight(elementID aID) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartPositiveHeight
      /// @param aElements elementID List
      /// @param aValue new Value
      virtual void setRoundMachineRoughPartPositiveHeight(ICwAPI3DElementIDList* aElements, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartNegativeLength
      /// @param aID elementID
      /// @return bool value
      virtual bool getRoundMachineRoughPartNegativeLength(elementID aID) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartNegativeLength
      /// @param aElements elementID List
      /// @param aValue new Value
      virtual void setRoundMachineRoughPartNegativeLength(ICwAPI3DElementIDList* aElements, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartPositiveLength
      /// @param aID elementID
      /// @return bool value
      virtual bool getRoundMachineRoughPartPositiveLength(elementID aID) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartPositiveLength
      /// @param aElements elementID List
      /// @param aValue new Value
      virtual void setRoundMachineRoughPartPositiveLength(ICwAPI3DElementIDList* aElements, bool aValue) = 0;

      /// @brief Get the standard element width
      /// @param aStandardElementGuid
      /// @return standard element width
      virtual double getStandardElementWidthFromGuid(const character* aStandardElementGuid) = 0;

      /// @brief Get the standard element height
      /// @param aStandardElementGuid
      /// @return standard element height
      virtual double getStandardElementHeightFromGuid(const character* aStandardElementGuid) = 0;

      /// @brief Get the standard element length
      /// @param aStandardElementGuid
      /// @return standard element length
      virtual double getStandardElementLengthFromGuid(const character* aStandardElementGuid) = 0;

      /// @brief Get the standard element width
      /// @param aStandardElementName
      /// @return  standard element width
      virtual double getStandardElementWidthFromName(const character* aStandardElementName) = 0;

      /// @brief Get the standard element height
      /// @param aStandardElementName
      /// @return standard element height
      virtual double getStandardElementHeightFromName(const character* aStandardElementName) = 0;

      /// @brief Get the standard element length
      /// @param aStandardElementName
      /// @return standard element length
      virtual double getStandardElementLengthFromName(const character* aStandardElementName) = 0;
    };
  }
}
