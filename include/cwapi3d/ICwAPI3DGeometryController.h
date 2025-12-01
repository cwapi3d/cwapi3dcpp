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
#include "ICwAPI3DFacetList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DVertexList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DGeometryController
    class ICwAPI3DGeometryController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] error code 
      /// @return [@ref ICwAPI3DString*] error string 
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the element width.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element width.
      virtual double getWidth(elementID aElementId) = 0;

      /// @brief Gets the element height.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element height.
      virtual double getHeight(elementID aElementId) = 0;

      /// @brief Gets the element length.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element length.
      virtual double getLength(elementID aElementId) = 0;

      /// @brief Gets the element P1.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref vector3D] The element P1.
      virtual vector3D getP1(elementID aElementId) = 0;

      /// @brief Gets the element P2.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref vector3D] The element P2.
      virtual vector3D getP2(elementID aElementId) = 0;

      /// @brief Gets the element P3.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref vector3D] The element P3.
      virtual vector3D getP3(elementID aElementId) = 0;

      /// @brief Gets the element start height cut angle.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element start height cut angle.
      virtual double getStartHeightCutAngle(elementID aElementId) = 0;

      /// @brief Gets the element start width cut angle.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element start width cut angle.
      virtual double getStartWidthCutAngle(elementID aElementId) = 0; 

      /// @brief Gets the element end height cut angle.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element end height cut angle.
      virtual double getEndHeightCutAngle(elementID aElementId) = 0;

      /// @brief Gets the element end width cut angle.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element end width cut angle.
      virtual double getEndWidthCutAngle(elementID aElementId) = 0;

      /// @brief Rotates the element height axis 90 degrees.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void rotateHeightAxis90(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Rotates the element height axis 180 degrees.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void rotateHeightAxis180(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Gets the element overwidth.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] element overwidth
      virtual double getOverWidth(elementID aElementId) = 0;

      /// @brief Sets the element overwidth.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element overwidth.
      virtual void setOverWidth(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element overheight.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element overheight.
      virtual double getOverHeight(elementID aElementId) = 0;

      /// @brief Sets the element overheight.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element overheight.
      virtual void setOverHeight(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element overlength.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element overlength.
      virtual double getOverLength(elementID aElementId) = 0;

      /// @brief Sets the element overlength.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element overlength.
      virtual void setOverLength(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element rounding width.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element rounding width.
      virtual double getRoundingWidth(elementID aElementId) = 0;

      /// @brief Sets the element rounding width.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element rounding width.
      virtual void setRoundingWidth(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element rounding height.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element rounding height.
      virtual double getRoundingHeight(elementID aElementId) = 0;

      /// @brief Sets the element rounding height.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element rounding height.
      virtual void setRoundingHeight(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element rounding length.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element rounding length.
      virtual double getRoundingLength(elementID aElementId) = 0;

      /// @brief Sets the element rounding length.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element rounding length.
      virtual void setRoundingLength(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element negative width cross correction.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element negative width cross correction.
      virtual double getCrossCorrectionNegativeWidth(elementID aElementId) = 0;

      /// @brief Sets the element negative width cross correction.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element negative width cross correction.
      virtual void setCrossCorrectionNegativeWidth(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element positive width cross correction.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element positive width cross correction.
      virtual double getCrossCorrectionPositiveWidth(elementID aElementId) = 0;

      /// @brief Sets the element positive width cross correction.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element positive width cross correction.
      virtual void setCrossCorrectionPositiveWidth(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element negative height cross correction.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element negative height cross correction.
      virtual double getCrossCorrectionNegativeHeight(elementID aElementId) = 0;

      /// @brief Sets the element negative height cross correction.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element negative height cross correction.
      virtual void setCrossCorrectionNegativeHeight(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element positive height cross correction.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element positive height cross correction.
      virtual double getCrossCorrectionPositiveHeight(elementID aElementId) = 0;

      /// @brief Sets the element positive height cross correction.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element positive height cross correction.
      virtual void setCrossCorrectionPositiveHeight(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element negative length cross correction.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element negative length cross correction.
      virtual double getCrossCorrectionNegativeLength(elementID aElementId) = 0;

      /// @brief Sets the element negative length cross correction.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element negative length cross correction.
      virtual void setCrossCorrectionNegativeLength(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element positive length cross correction.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element positive length cross correction.
      virtual double getCrossCorrectionPositiveLength(elementID aElementId) = 0;

      /// @brief Sets the element positive length cross correction.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [double] The element positive length cross correction.
      virtual void setCrossCorrectionPositiveLength(ICwAPI3DElementIDList* aElementIdList, double aValue) = 0;

      /// @brief Gets the element real weight
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] element real weight
      virtual double getWeight(elementID aElementId) = 0;

      /// @brief Gets the element list weight.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element list weight.
      virtual double getListWeight(elementID aElementId) = 0;

      /// @brief Gets the element rough volume (does not include negative geometry operations, such as end-types, drillings, connectors, openings, and MEP elements).
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element rough volume.
      virtual double getVolume(elementID aElementId) = 0;

      /// @brief Gets the element list volume.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element list volume.
      virtual double getListVolume(elementID aElementId) = 0;

      /// @brief Gets the element length axis direction (direction from P1 to P2).
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref vector3D] The element XL vector.
      virtual vector3D getXL(elementID aElementId) = 0;

      /// @brief Gets the element width axis direction (ZL cross XL).
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref vector3D] The element YL vector.
      virtual vector3D getYL(elementID aElementId) = 0;

      /// @brief Gets the element height/thickness axis direction (direction from P1 to P3).
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref vector3D] The element ZL vector.
      virtual vector3D getZL(elementID aElementId) = 0;

      /// @brief Gets the element center of gravity.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref vector3D] The element center of gravity position.
      virtual vector3D getCenterOfGravity(elementID aElementId) = 0;

      /// @brief Gets the element reference side.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref referenceSide] The element reference side.
      virtual referenceSide getReferenceSide(elementID aElementId) = 0;

      /// @brief Gets the element vertices
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref ICwAPI3DVertexList*] The element vertice list.
      virtual ICwAPI3DVertexList* getElementVertices(elementID aElementId) = 0;

      /// @brief Applies a global scale to element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aScale [double] The global scale.
      /// @param[in] aOrigin [@ref vector3D] The scalling origin.
      virtual void applyGlobalScale(ICwAPI3DElementIDList* aElementIdList, double aScale, vector3D aOrigin) = 0;

      /// @brief Automatically regenerates axes on element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void autoRegenerateAxes(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Rotates element length axis 90 degrees.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void rotateLengthAxis90(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Rotates element length axis 180 degrees.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void rotateLengthAxis180(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Inverts element model.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void invertModel(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Gets the element facet list.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref ICwAPI3DFacetList*] The element facet list.
      virtual ICwAPI3DFacetList* getElementFacets(elementID aElementId) = 0;

      /// @brief Get the element list width.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element list width.
      virtual double getListWidth(elementID aElementId) = 0;

      /// @brief Gets the element list height.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element list height.
      virtual double getListHeight(elementID aElementId) = 0;

      /// @brief Gets the element list length.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element list length.
      virtual double getListLength(elementID aElementId) = 0;

      /// @brief Sets the element real width.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aWidth [double] The element real width.
      virtual void setWidthReal(ICwAPI3DElementIDList* aElementIdList, double aWidth) = 0;

      /// @brief Sets the element real height.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aHeight [double] The element real height.
      virtual void setHeightReal(ICwAPI3DElementIDList* aElementIdList, double aHeight) = 0;

      /// @brief Gets the element real length.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aLength [double] The element real length.
      virtual void setLengthReal(ICwAPI3DElementIDList* aElementIdList, double aLength) = 0;

      /// @brief Rotates the element height axis via 2 points.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aPoint1 [@ref vector3D] The first point.
      /// @param[in] aPoint2 [@ref vector3D] The second point.
      virtual void rotateHeightAxis2Points(ICwAPI3DElementIDList* aElementIdList, vector3D aPoint1, vector3D aPoint2) = 0;

      /// @brief Gets the minimum distance between 2 elements.
      /// @param[in] aFirstElementId [@ref elementID] The first element id.
      /// @param[in] aSecondElementId [@ref elementID] The second element id.
      /// @return [double] The minimum distance.
      virtual double getMinimumDistanceBetweenElements(elementID aFirstElementId, elementID aSecondElementId) = 0;

      /// @brief Gets the total area of all faces for element.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element total faces area.
      virtual double getTotalAreaOfAllFaces(elementID aElementId) = 0;

      /// @brief Gets the front face are for element
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The element front face area.
      virtual double getAreaOfFrontFace(elementID aElementId) = 0;

      /// @brief Gets the element door surface.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @return [double] The element door surface.
      virtual double getDoorSurface(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Gets the element window surface.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @return [double] The element window surface.
      virtual double getWindowSurface(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Creates a division zone.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @param[in] aPoint [@ref vector3D] The division zone point.
      /// @param[in] aDirection [@ref divisionZoneDirection] The division zone direction.
      virtual void createDivisionZone(elementID aElementId, vector3D aPoint, divisionZoneDirection aDirection) = 0;

      /// @brief Deletes a division zone
      /// @param[in] aElementId [@ref elementID] The element Id.
      virtual void deleteDivisionZone(elementID aElementId) = 0;

      /// @brief Gets the division zone points.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref ICwAPI3DVertexList*] The division zone points.
      virtual ICwAPI3DVertexList* getDivisionZonePoints(elementID aElementId) = 0;

      /// @brief Gets the rotated global coordinate direction (X').
      /// @return [@ref vector3D] The local X vector.
      virtual vector3D getLocalX() = 0;

      /// @brief Gets the rotated global coordinate direction (Z').
      /// @return [@ref vector3D] The local Y vector.
      virtual vector3D getLocalZ() = 0;

      /// @brief Gets the rotated global coordinate direction (Y').
      /// @return [@ref vector3D] The local Z vector.
      virtual vector3D getLocalY() = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Gets the division zone points.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aTolerance [double] The new drilling tolerance.
      virtual void setDrillingTolerance(ICwAPI3DElementIDList* aElementIdList, double aTolerance) = 0;

      /// @brief Gets the drilling tolerance of an axis.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The drilling tolerance.
      virtual double getDrillingTolerance(elementID aElementId) = 0;

      /// @brief Gets the vertices of the reference side.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [@ref ICwAPI3DVertexList*] The vertexlist of all points.
      virtual ICwAPI3DVertexList* getElementReferenceFaceVertices(elementID aElementId) = 0;

      /// @brief Gets the area of the reference side.
      /// @param[in] aElementId [@ref elementID] The element Id.
      /// @return [double] The area(size) of reference face.
      virtual double getElementReferenceFaceArea(elementID aElementId) = 0;

      /// @brief Automatically regenerates axes on elements without any user interaction.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] List The list of element IDs for which the axes will be regenerated.
      virtual void autoRegenerateAxesSilently(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Rotates the element length axis via 2 points.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aPoint1 [@ref vector3D] The first point.
      /// @param[in] aPoint2 [@ref vector3D] The second point.
      virtual void rotateLengthAxis2Points(ICwAPI3DElementIDList* aElementIdList, vector3D aPoint1, vector3D aPoint2) = 0;

      /// @brief Gets the center of gravity for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] List The list of element IDs.
      /// @return [@ref vector3D] The center of gravity as a vector3D.
      virtual vector3D getCenterOfGravityForList(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Gets the center of gravity for a list of elements, considering their materials.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] List The list of element IDs.
      /// @return [@ref vector3D] The center of gravity as a vector3D.
      virtual vector3D getCenterOfGravityForListConsideringMaterials(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Gets the count of facets for a specific element.
      /// @param[in] aElementId [@ref elementID] The ID of the element.
      /// @return [uint32_t] The count of facets.
      virtual uint32_t getElementFacetCount(elementID aElementId) = 0;

      /// @brief Gets the real weight of the element.
      /// @param[in] aElementId [@ref elementID] The ID of the element.
      /// @return [double] The real weight of the element.
      virtual double getWeightReal(elementID aElementId) = 0;

      /// @brief Gets actual physical volume (includes negative geometry operations, such as end-types, drillings, connectors, openings, and MEP elements) 
      ///       (it might also take into account different drilling bodies and counterbores in a connector).
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [double] The actual physical volume.
      virtual double getActualPhysicalVolume(elementID aElementId) = 0;

      /// @brief Tests if facets are coplanar.
      /// @param[in] aFirstFacet [@ref ICwAPI3DVertexList*] The first facet.
      /// @param[in] aSecondFacet [@ref ICwAPI3DVertexList*] The second facet.
      /// @return [bool] True if facets are coplanar, false otherwise.
      virtual bool areFacetsCoplanar(ICwAPI3DVertexList* aFirstFacet, ICwAPI3DVertexList* aSecondFacet) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartNegativeWidth.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] The option RoundMachineRoughPartNegativeWidth value.
      virtual bool getRoundMachineRoughPartNegativeWidth(elementID aElementId) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartNegativeWidth.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [bool] The new option RoundMachineRoughPartNegativeWidth value.
      virtual void setRoundMachineRoughPartNegativeWidth(ICwAPI3DElementIDList* aElementIdList, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartPositiveWidth.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] The option RoundMachineRoughPartPositiveWidth value.
      virtual bool getRoundMachineRoughPartPositiveWidth(elementID aElementId) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartPositiveWidth.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [bool] The new option RoundMachineRoughPartPositiveWidth value.
      virtual void setRoundMachineRoughPartPositiveWidth(ICwAPI3DElementIDList* aElementIdList, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartNegativeHeight.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] The option RoundMachineRoughPartNegativeHeight value.
      virtual bool getRoundMachineRoughPartNegativeHeight(elementID aElementId) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartNegativeHeight.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [bool] The new option RoundMachineRoughPartNegativeHeight value.
      virtual void setRoundMachineRoughPartNegativeHeight(ICwAPI3DElementIDList* aElementIdList, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartPositiveHeight.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] The option RoundMachineRoughPartPositiveHeight value.
      virtual bool getRoundMachineRoughPartPositiveHeight(elementID aElementId) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartPositiveHeight.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [bool] The new option RoundMachineRoughPartPositiveHeight options.
      virtual void setRoundMachineRoughPartPositiveHeight(ICwAPI3DElementIDList* aElementIdList, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartNegativeLength.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] The option RoundMachineRoughPartNegativeLength value.
      virtual bool getRoundMachineRoughPartNegativeLength(elementID aElementId) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartNegativeLength.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [bool] The new option RoundMachineRoughPartNegativeLength value.
      virtual void setRoundMachineRoughPartNegativeLength(ICwAPI3DElementIDList* aElementIdList, bool aValue) = 0;

      /// @brief Gets the value of option RoundMachineRoughPartPositiveLength.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] The option RoundMachineRoughPartPositiveLength value.
      virtual bool getRoundMachineRoughPartPositiveLength(elementID aElementId) = 0;

      /// @brief Sets the value of option RoundMachineRoughPartPositiveLength.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [bool] The new option RoundMachineRoughPartPositiveLength value.
      virtual void setRoundMachineRoughPartPositiveLength(ICwAPI3DElementIDList* aElementIdList, bool aValue) = 0;

      /// @brief Get the standard element width.
      /// @param[in] aStandardElementGuid [const @ref character*] The standard element guid.
      /// @return [double] The standard element width.
      virtual double getStandardElementWidthFromGuid(const character* aStandardElementGuid) = 0;

      /// @brief Get the standard element height.
      /// @param[in] aStandardElementGuid [const @ref character*] The standard element guid.
      /// @return [double] The standard element height.
      virtual double getStandardElementHeightFromGuid(const character* aStandardElementGuid) = 0;

      /// @brief Get the standard element length.
      /// @param[in] aStandardElementGuid [const @ref character*] The standard element guid.
      /// @return [double] The standard element length.
      virtual double getStandardElementLengthFromGuid(const character* aStandardElementGuid) = 0;

      /// @brief Get the standard element width.
      /// @param[in] aStandardElementName [const @ref character*] The standard element name.
      /// @return [double] The standard element width.
      virtual double getStandardElementWidthFromName(const character* aStandardElementName) = 0;

      /// @brief Get the standard element height.
      /// @param[in] aStandardElementName [const @ref character*] The standard element name.
      /// @return [double] The standard element height.
      virtual double getStandardElementHeightFromName(const character* aStandardElementName) = 0;

      /// @brief Get the standard element length.
      /// @param[in] aStandardElementName [const @ref character*] The standard element name.
      /// @return [double] The standard element length.
      virtual double getStandardElementLengthFromName(const character* aStandardElementName) = 0;
    };
  }
}
