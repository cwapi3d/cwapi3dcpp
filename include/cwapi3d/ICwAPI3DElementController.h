/** @file
* Copyright (C) 2019 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         26.0
* @author        Paquet
* @date          2019-10-02
*/

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DVertexList.h"
#include "ICwAPI3DFacetList.h"
#include "ICwAPI3DElementIDListMap.h"
#include "ICwAPI3DElementFilter.h"
#include "ICwAPI3DElementMapQuery.h"
#include "ICwAPI3DElementModuleProperties.h"
#include "ICwAPI3DStringList.h"
#include "ICwAPI3DEdgeList.h"
#include "ICwAPI3DTextObjectOptions.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DElementController
    * \brief
    */
    class ICwAPI3DElementController
    {
    public:
      /**
       * \brief Gets the last error
       * \param aErrorCode error code
       * \return error string
       */
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DElementIDList* getAllIdentifiableElementIDs() = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DElementIDList* getVisibleIdentifiableElementIDs() = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DElementIDList* getInvisibleIdentifiableElementIDs() = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DElementIDList* getActiveIdentifiableElementIDs() = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DElementIDList* getInactiveAllIdentifiableElementIDs() = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DElementIDList* getInactiveVisibleIdentifiableElementIDs() = 0;
      /**
       * \brief
       * \param aElementIDList
       */
      virtual void deleteElements(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief
       * \param aElementIDList
       */
      virtual void joinElements(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief
       * \param aElementIDList
       */
      virtual void joinTopLevelElements(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief
       * \param aWidth
       * \param aHeight
       * \param aP1
       * \param aP2
       * \param aP3
       * \return
       */
      virtual elementID createRectangularBeamPoints(double aWidth, double aHeight, vector3D aP1, vector3D aP2, vector3D aP3) = 0;
      /**
       * \brief
       * \param aDiameter
       * \param aP1
       * \param aP2
       * \param aP3
       * \return
       */
      virtual elementID createCircularBeamPoints(double aDiameter, vector3D aP1, vector3D aP2, vector3D aP3) = 0;
      /**
       * \brief
       * \param aWidth
       * \param aP1
       * \param aP2
       * \param aP3
       * \return
       */
      virtual elementID createSquareBeamPoints(double aWidth, vector3D aP1, vector3D aP2, vector3D aP3) = 0;
      /**
       * \brief
       * \param aWidth
       * \param aHeight
       * \param aLength
       * \param aP1
       * \param aXL
       * \param aZL
       * \return
       */
      virtual elementID createRectangularBeamVectors(double aWidth, double aHeight, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;
      /**
       * \brief
       * \param aDiameter
       * \param aLength
       * \param aP1
       * \param aXL
       * \param aZL
       * \return
       */
      virtual elementID createCircularBeamVectors(double aDiameter, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;
      /**
       * \brief
       * \param aWidth
       * \param aLength
       * \param aP1
       * \param aXL
       * \param aZL
       * \return
       */
      virtual elementID createSquareBeamVectors(double aWidth, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;
      /**
       * \brief
       * \param aWidth
       * \param aThickness
       * \param aP1
       * \param aP2
       * \param aP3
       * \return
       */
      virtual elementID createRectangularPanelPoints(double aWidth, double aThickness, vector3D aP1, vector3D aP2, vector3D aP3) = 0;
      /**
       * \brief
       * \param aWidth
       * \param aThickness
       * \param aLength
       * \param aP1
       * \param aXL
       * \param aZL
       * \return
       */
      virtual elementID createRectangularPanelVectors(double aWidth, double aThickness, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;
      /**
       * \brief
       * \param aDiameter
       * \param aP1
       * \param aP2
       * \return
       */
      virtual elementID createDrillingPoints(double aDiameter, vector3D aP1, vector3D aP2) = 0;
      /**
       * \brief
       * \param aDiameter
       * \param aLength
       * \param aP1
       * \param aXL
       * \return
       */
      virtual elementID createDrillingVectors(double aDiameter, double aLength, vector3D aP1, vector3D aXL) = 0;
      /**
       * \brief
       * \param aP1
       * \param aP2
       * \return
       */
      virtual elementID createLinePoints(vector3D aP1, vector3D aP2) = 0;
      /**
       * \brief
       * \param aLength
       * \param aP1
       * \param aXL
       * \return
       */
      virtual elementID createLineVectors(double aLength, vector3D aP1, vector3D aXL) = 0;
      /**
       * \brief
       * \param aP1
       * \return
       */
      virtual elementID createNode(vector3D aP1) = 0;
      /**
       * \brief
       * \param aElementIDList
       * \return
       */
      virtual ICwAPI3DElementIDList* solderElements(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief
       * \param aElementIDList
       */
      virtual void convertBeamToPanel(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief
       * \param aElementIDList
       */
      virtual void convertPanelToBeam(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief
       * \param aElementIDList
       */
      virtual void deleteAllElementEndTypes(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief
       * \param aElementIDList
       */
      virtual void deleteAllElementProcesses(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief
       * \param aElementIDList
       * \param aVector
       */
      virtual void moveElement(ICwAPI3DElementIDList* aElementIDList, vector3D aVector) = 0;
      /**
       * \brief
       * \param aPolygonVertices
       * \param aThickness
       * \param aXL
       * \param aZL
       * \return
       */
      virtual elementID createPolygonBeam(ICwAPI3DVertexList* aPolygonVertices, double aThickness, vector3D aXL, vector3D aZL) = 0;
      /**
       * \brief
       * \param aText
       * \param aPosition
       * \param aXl
       * \param aZl
       * \param aSize
       * \return
       */
      virtual elementID createTextObject(const character* aText, vector3D aPosition, vector3D aXl, vector3D aZl, double aSize) = 0;
      /**
       * \brief
       * \param aElementIDList
       * \param aCopyVector
       * \return
       */
      virtual ICwAPI3DElementIDList* copyElements(ICwAPI3DElementIDList* aElementIDList, vector3D aCopyVector) = 0;
      /**
       * \brief
       * \param aElementIDList
       * \param aOrigin
       * \param aRotationAxis
       * \param aRotationAngle
       */
      virtual void rotateElements(ICwAPI3DElementIDList* aElementIDList, vector3D aOrigin, vector3D aRotationAxis, double aRotationAngle) = 0;
      /**
       * \brief
       * \param aHardElements
       * \param aSoftElements
       * \return
       */
      virtual ICwAPI3DElementIDList* subtractElements(ICwAPI3DElementIDList* aHardElements, ICwAPI3DElementIDList* aSoftElements) = 0;
      /**
       * \brief
       * \param aId
       * \return
       */
      virtual bool checkElementId(elementID aId) = 0;
      /**
       * \brief
       * \param aElements
       * \param aFilter
       * \return
       */
      virtual ICwAPI3DElementIDList* filterElements(ICwAPI3DElementIDList* aElements, ICwAPI3DElementFilter* aFilter) = 0;
      /**
       * \brief
       * \param aElements
       * \param aMapQuery
       * \return
       */
      virtual ICwAPI3DElementIDListMap* mapElements(ICwAPI3DElementIDList* aElements, ICwAPI3DElementMapQuery* aMapQuery) = 0;
      /**
       * \brief
       * \param aCovers
       */
      virtual void startElementModuleCalculation(ICwAPI3DElementIDList* aCovers) = 0;
      /**
       * \brief
       * \param aPath
       */
      virtual void setElementDetailPath(const character* aPath) = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DString* getElementDetailPath() = 0;
      /**
       * \brief
       * \param aID
       * \return
       */
      virtual ICwAPI3DString* getElementCadworkGuid(elementID aID) = 0;
      /**
       * \brief
       * \param aCadworkGuid
       * \return
       */
      virtual elementID getElementFromCadworkGuid(const character* aCadworkGuid) = 0;
      /**
       * \brief
       * \param aElements
       * \param aCmd
       */
      virtual void addElementsToUndo(ICwAPI3DElementIDList* aElements, int32_t aCmd) = 0;
      /**
       * \brief
       */
      virtual void makeUndo() = 0;
      /**
       * \brief
       */
      virtual void makeRedo() = 0;
      /**
       * \brief
       * \param aElements
       */
      virtual void splitElements(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aElements
       */
      virtual void setLineToMarkingLine(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aElements
       */
      virtual void setLineToNormalLine(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aElements
       * \param aOutputName
       * \param aStandardElementName
       * \return
       */
      virtual elementID createAutoExportSolidFromStandard(ICwAPI3DElementIDList* aElements, const character* aOutputName, const character* aStandardElementName) = 0;
      /**
       * \brief
       * \param aElements
       * \param aProperties
       */
      virtual void setElementModulePropertiesForElements(ICwAPI3DElementIDList* aElements, ICwAPI3DElementModuleProperties* aProperties) = 0;
      /**
       * \brief
       * \param aID
       * \return
       */
      virtual ICwAPI3DElementModuleProperties* getElementModulePropertiesForElement(elementID aID) = 0;
      /**
       * \brief
       * \param aID
       * \return
       */
      virtual ICwAPI3DString* getElementTypeDescription(elementID aID) = 0;
      /**
       * \brief
       * \param aText
       * \param aPosition
       * \param aXl
       * \param aZl
       * \param aSize
       * \param aFontName
       * \return
       */
      virtual elementID createTextObjectWithFont(const character* aText, vector3D aPosition, vector3D aXl, vector3D aZl, double aSize, const character* aFontName) = 0;
      /**
       * \brief
       * \param aElements
       * \param aOpeningType
       * \return
       */
      virtual ICwAPI3DElementIDList* getOpeningVariantIDs(ICwAPI3DElementIDList* aElements, int32_t aOpeningType) = 0;
      /**
       * \brief
       * \param aID
       * \return
       */
      virtual elementID getParentContainerId(elementID aID) = 0;
      /**
       * \brief
       * \param aID
       * \return
       */
      virtual ICwAPI3DElementIDList* getExportSolidContentElements(elementID aID) = 0;
      /**
       * \brief
       * \param aID
       * \return
       */
      virtual ICwAPI3DElementIDList* getContainerContentElements(elementID aID) = 0;
      /**
       * \brief
       * \param aElements
       * \param aOldPoint
       * \param aOldXl
       * \param aOldYl
       * \param aNewPoint
       * \param aNewXl
       * \param aNewYl
       */
      virtual void applyTransformationCoordinate(ICwAPI3DElementIDList* aElements, vector3D aOldPoint, vector3D aOldXl, vector3D aOldYl, vector3D aNewPoint, vector3D aNewXl, vector3D aNewYl) = 0;
      /**
       * \brief
       * \param aElements
       */
      virtual void deleteElementsWithUndo(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aElements
       */
      virtual void addCreatedElementsToUndo(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aElements
       */
      virtual void addModifiedElementsToUndo(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aElements
       */
      virtual void recreateElements(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aFirstElementID
       * \param aSecondElementID
       * \return
       */
      virtual bool checkIfElementsAreInCollision(elementID aFirstElementID, elementID aSecondElementID) = 0;
      /**
       * \brief
       * \param aFirstElementID
       * \param aSecondElementID
       * \return
       */
      virtual bool checkIfElementsAreInContact(elementID aFirstElementID, elementID aSecondElementID) = 0;
      /**
      * \brief
      * \param aElements
      */
      virtual void createMultiWall(ICwAPI3DElementIDList* aElements) = 0;
      /**
      * \brief
      * \return
      */
      virtual ICwAPI3DElementIDList* getUserElementIDs() = 0;
      /**
      * \brief
      * \param aFirstID
      * \param aSecondID
      * \return
      */
      virtual ICwAPI3DVertexList* getElementContactVertices(elementID aFirstID, elementID aSecondID) = 0;
      /**
      * \brief
      * \param aID
      * \return
      */
      virtual elementID getNestingParentId(elementID aID) = 0;
      /**
       * \brief
       * \param aElements
       * \return
       */
      virtual ICwAPI3DElementIDList* getUserElementIDsWithExisting(ICwAPI3DElementIDList* aElements) = 0;
      virtual void clearErrors() = 0;
      /**
       * \brief Glides elements
       * \param aElementIDs element IDs
       * \param aGlidePoint point to glide
       */
      virtual void glideElements(ICwAPI3DElementIDList* aElementIDs, vector3D aGlidePoint) = 0;
      /**
       * \brief
       * \param aFirstID
       * \param aSecondID
       * \return
       */
      virtual ICwAPI3DFacetList* getElementContactFacets(elementID aFirstID, elementID aSecondID) = 0;
      /**
       * \brief
       * \param aFirstID
       * \param aSecondID
       * \return
       */
      virtual ICwAPI3DVertexList* getElementRawInterfaceVertices(elementID aFirstID, elementID aSecondID) = 0;
      /**
       * \brief
       * \param aFirstID
       * \param aSecondID
       * \return
       */
      virtual bool cutElementsWithMiter(elementID aFirstID, elementID aSecondID) = 0;
      /**
       * \brief
       * \param aID
       * \param aCutPlaneNormalVector
       * \param aDistanceFromGlobalOrigin
       * \return
       */
      virtual bool cutElementWithPlane(elementID aID, vector3D aCutPlaneNormalVector, double aDistanceFromGlobalOrigin) = 0;
      /**
       * \brief
       * \param aDiameter
       * \param aPoints
       * \return
       */
      virtual elementID createCircularMEP(double aDiameter, ICwAPI3DVertexList* aPoints) = 0;
      /**
       * \brief
       * \param aWidth
       * \param aDepth
       * \param aPoints
       * \return
       */
      virtual elementID createRectangularMEP(double aWidth, double aDepth, ICwAPI3DVertexList* aPoints) = 0;
      /**
       * \brief
       * \param aID
       * \param aCutPlaneNormalVector
       * \param aDistanceFromGlobalOrigin
       * \return
       */
      virtual bool sliceElementWithPlane(elementID aID, vector3D aCutPlaneNormalVector, double aDistanceFromGlobalOrigin) = 0;
      /**
       * \brief
       * \param aElements
       * \param aOutputName
       * \param aStandardElementName
       * \return
       */
      virtual elementID createAutoContainerFromStandard(ICwAPI3DElementIDList* aElements, const character* aOutputName, const character* aStandardElementName) = 0;
      /**
       * \brief
       * \param aElements
       * \param aOutputName
       * \param aStandardElementName
       * \param aReferenceID
       * \return
       */
      virtual elementID createAutoExportSolidFromStandardWithReference(ICwAPI3DElementIDList* aElements, const character* aOutputName, const character* aStandardElementName, elementID aReferenceID) = 0;
      /**
       * \brief
       * \param aElements
       * \param aOutputName
       * \param aStandardElementName
       * \param aReferenceID
       * \return
       */
      virtual elementID createAutoContainerFromStandardWithReference(ICwAPI3DElementIDList* aElements, const character* aOutputName, const character* aStandardElementName, elementID aReferenceID) = 0;
      /**
       * \brief
       * \param aID
       * \param aCutPlaneNormalVector
       * \param aDistanceFromGlobalOrigin
       * \return
       */
      virtual ICwAPI3DElementIDList* sliceElementWithPlaneAndGetNewElements(elementID aID, vector3D aCutPlaneNormalVector, double aDistanceFromGlobalOrigin) = 0;
      /**
       * \brief
       * \param aSurfaceVertices
       * \return
       */
      virtual elementID createSurface(ICwAPI3DVertexList* aSurfaceVertices) = 0;
      /**
       * \brief converts circular/round beams into drillings
       * \param aElements
       */
      virtual void convertCircularBeamToDrilling(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DStringList* getStandardExportSolidList() = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DStringList* getStandardContainerList() = 0;
      /**
       * \brief stretches the start face
       * \param aElements
       * \param aStretchVector
       */
      virtual void stretchStartFace(ICwAPI3DElementIDList* aElements, vector3D aStretchVector) = 0;
      /**
       * \brief stretches the end face
       * \param aElements
       * \param aStretchVector
       */
      virtual void stretchEndFace(ICwAPI3DElementIDList* aElements, vector3D aStretchVector) = 0;
      virtual ICwAPI3DElementIDList* getVariantSiblingElementIDs(elementID aElementID) = 0;
      virtual void setExportSolidContents(elementID aExportSolidID, ICwAPI3DElementIDList* aElementIDs) = 0;
      virtual void setContainerContents(elementID aContainerID, ICwAPI3DElementIDList* aElementIDs) = 0;
      virtual void setParentOpeningVariantsOpeningAngle(ICwAPI3DElementIDList* aElementIDs, double aAngle) = 0;
      virtual elementID createCircularAxisPoints(double aDiameter, CwAPI3D::vector3D aP1, CwAPI3D::vector3D aP2) = 0;
      virtual elementID createCircularAxisVector(double aDiameter, double aLength, CwAPI3D::vector3D aP1, CwAPI3D::vector3D aXL) = 0;
      virtual void convertElementsToAuxiliaryElements(ICwAPI3DElementIDList* aElements) = 0;
      virtual ICwAPI3DElementIDList* getElementsInContact(elementID aElement) = 0;
      virtual ICwAPI3DFacetList* getFacetsWithLasso(ICwAPI3DElementIDList* aElements) = 0;
      virtual void cutElementsWithOvermeasure(ICwAPI3DElementIDList* aHardElements, ICwAPI3DElementIDList* aSoftElements) = 0;
      virtual ICwAPI3DEdgeList* getEdgeSelection(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aPolygonVertices
       * \param aThickness
       * \param aXL
       * \param aZL
       * \return
       */
      virtual elementID createPolygonPanel(ICwAPI3DVertexList* aPolygonVertices, double aThickness, vector3D aXL, vector3D aZL) = 0;
      /**
       * \brief
       * \param aElements
       * \param aPlane
       * \param aPlaneDistance
       */
      virtual void mirrorMoveElements(ICwAPI3DElementIDList* aElements, vector3D aPlane, double aPlaneDistance) = 0;
      /**
       * \brief
       * \param aElements
       * \param aPlane
       * \param aPlaneDistance
       * \return
       */
      virtual ICwAPI3DElementIDList* mirrorCopyElements(ICwAPI3DElementIDList* aElements, vector3D aPlane, double aPlaneDistance) = 0;
      /**
       * \brief sets the Cadwork Guid of an element to NULL
       * \param aID
       */
      virtual void resetElementCadworkGuid(elementID aID) = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DStringList* getStandardBeamList() = 0;
      /**
       * \brief
       * \return
       */
      virtual ICwAPI3DStringList* getStandardPanelList() = 0;
      /**
       * \brief
       * \param aStandardElementName
       * \param aP1
       * \param aP2
       * \param aP3
       * \return
       */
      virtual elementID createStandardBeamPoints(const character* aStandardElementName, CwAPI3D::vector3D aP1, CwAPI3D::vector3D aP2, CwAPI3D::vector3D aP3) = 0;
      /**
       * \brief
       * \param aStandardElementName
       * \param aLength
       * \param aP1
       * \param aXL
       * \param aZL
       * \return
       */
      virtual elementID createStandardBeamVectors(const character* aStandardElementName, double aLength, CwAPI3D::vector3D aP1, CwAPI3D::vector3D aXL, CwAPI3D::vector3D aZL) = 0;
      /**
       * \brief
       * \param aStandardElementName
       * \param aP1
       * \param aP2
       * \param aP3
       * \return
       */
      virtual elementID createStandardPanelPoints(const character* aStandardElementName, CwAPI3D::vector3D aP1, CwAPI3D::vector3D aP2, CwAPI3D::vector3D aP3) = 0;
      /**
       * \brief
       * \param aStandardElementName
       * \param aLength
       * \param aP1
       * \param aXL
       * \param aZL
       * \return
       */
      virtual elementID createStandardPanelVectors(const character* aStandardElementName, double aLength, CwAPI3D::vector3D aP1, CwAPI3D::vector3D aXL, CwAPI3D::vector3D aZL) = 0;
      /**
       * \brief
       * \param aStandardElementName
       * \param aP1
       * \param aP2
       * \param aP3
       * \return
       */
      virtual elementID createStandardSteelPoints(const character* aStandardElementName, CwAPI3D::vector3D aP1, CwAPI3D::vector3D aP2, CwAPI3D::vector3D aP3) = 0;
      /**
       * \brief
       * \param aStandardElementName
       * \param aLength
       * \param aP1
       * \param aXL
       * \param aZL
       * \return
       */
      virtual elementID createStandardSteelVectors(const character* aStandardElementName, double aLength, CwAPI3D::vector3D aP1, CwAPI3D::vector3D aXL, CwAPI3D::vector3D aZL) = 0;
      /**
       * \brief
       * \param aElementIDList
       * \param aVector
       */
      virtual void moveElementWithUndo(ICwAPI3DElementIDList* aElementIDList, vector3D aVector) = 0;
      /**
       * \brief
       * \param aElements
       * \param aOptimizationNumber
       * \param aTotalLength
       * \param aStartCut
       * \param aEndCut
       * \param aSawKerf
       * \param aIsProductionList
       * \return
       */
      virtual elementID createLinearOptimization(ICwAPI3DElementIDList* aElements, uint32_t aOptimizationNumber, double aTotalLength, double aStartCut, double aEndCut, double aSawKerf, bool aIsProductionList) = 0;
      /**
       * \brief
       * \param aElements
       * \return
       */
      virtual ICwAPI3DElementIDList* checkElementDuplicates(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aP1
       * \param aP2
       * \return
       */
      virtual elementID createNormalAxisPoints(CwAPI3D::vector3D aP1, CwAPI3D::vector3D aP2) = 0;
      /**
       * \brief
       * \param aLength
       * \param aP1
       * \param aXL
       * \return
       */
      virtual elementID createNormalAxisVectors(double aLength, CwAPI3D::vector3D aP1, CwAPI3D::vector3D aXL) = 0;
      /**
       * \brief
       * \param aElements
       * \param aStandardElementName
       * \return
       */
      virtual void convertBoltToStandardConnector(ICwAPI3DElementIDList* aElements, const character* aStandardElementName) = 0;
      /**
       * \brief
       * \param aElement
       * \return
       */
      virtual elementID getReferenceElement(elementID aElement) = 0;
      /**
       * \brief
       * \param aSurface
       * \param aVector
       * \return
       */
      virtual elementID extrudeSurfaceToAuxiliaryVector(elementID aSurface, vector3D aVector) = 0;
      /**
       * \brief
       * \param aSurface
       * \param aVector
       * \return
       */
      virtual elementID extrudeSurfaceToPanelVector(elementID aSurface, vector3D aVector) = 0;
      /**
       * \brief
       * \param aSurface
       * \param aVector
       * \return
       */
      virtual elementID extrudeSurfaceToBeamVector(elementID aSurface, vector3D aVector) = 0;
      /**
       * \brief
       * \param aPoint
       * \param aElementID
       * \return
       */
      virtual bool checkIfPointIsInElement(vector3D aPoint, elementID aElementID) = 0;
      /**
       * \brief
       * \param aPoint
       * \param aElementID
       * \return
       */
      virtual bool checkIfPointIsOnElement(vector3D aPoint, elementID aElementID) = 0;
      /**
       * \brief
       * \param aElements
       */
      virtual void convertContainerToContainerBlock(ICwAPI3DElementIDList* aElements) = 0;

      virtual elementID createBoundingBoxLocal(elementID aReferenceElement, ICwAPI3DElementIDList* aElements) = 0;
      virtual elementID createBoundingBoxGlobal(ICwAPI3DElementIDList* aElements) = 0;
      virtual void cutLogCornerJoint(const character* aSettingsName, ICwAPI3DElementIDList* aElements) = 0;
      virtual void convertAuxiliaryToPanel(ICwAPI3DElementIDList* aElements) = 0;
      virtual void convertAuxiliaryToBeam(ICwAPI3DElementIDList* aElements) = 0;
      virtual void autoSetRoughVolumeSituation(ICwAPI3DElementIDList* aElements) = 0;
      virtual void roughVolumeSituationManual(elementID aCover, ICwAPI3DElementIDList* aAddPartner, ICwAPI3DElementIDList* aRemovePartner) = 0;
      virtual void autoSetPartsSituation(ICwAPI3DElementIDList* aElements) = 0;
      virtual void partsSituationManual(elementID aCover, ICwAPI3DElementIDList* aAddChilds, ICwAPI3DElementIDList* aRemoveChilds) = 0;
      virtual ICwAPI3DElementIDList* activateRvWithoutSituation() = 0;
      virtual ICwAPI3DElementIDList* activatePartsWithoutSituation() = 0;
      virtual void addElementToDetail(ICwAPI3DElementIDList* aElements, int32_t aDetail) = 0;
      virtual ICwAPI3DVertexList* getBoundingBoxVerticesLocal(elementID aReferenceElement, ICwAPI3DElementIDList* aElements) = 0;
      virtual ICwAPI3DVertexList* getBoundingBoxVerticesGlobal(ICwAPI3DElementIDList* aElements) = 0;
      virtual ICwAPI3DElementIDList* getAllNestingRawParts() = 0;
      /**
       * \brief
       * \param aHardElements
       * \param aSoftElements
       * \return
       */
      virtual ICwAPI3DElementIDList* subtractElementsWithUndo(ICwAPI3DElementIDList* aHardElements, ICwAPI3DElementIDList* aSoftElements, bool aWithUndo) = 0;
      /**
       * \brief
       * \param aCovers
       */
      virtual void startElementModuleCalculationSilently(ICwAPI3DElementIDList* aCovers) = 0;

      virtual ICwAPI3DElementIDList* getJoinedElements(elementID aElementID) = 0;
      virtual ICwAPI3DElementIDList* replacePhysicalDrillingsWithDrillingAxes(ICwAPI3DElementIDList* aElements, double aMininumDiameter, double aMaximumDiameter) = 0;
      virtual void cutElementWithProcessingGroup(elementID aSoftElement, elementID aProcessing) = 0;

      /**
       * brief
       * \params aPosition
       * \params aXl
       * \params aYl
       * \params text options
       */
      virtual elementID createTextObjectWithOptions(vector3D aPosition, vector3D aXl, vector3D aZl, Interfaces::ICwAPI3DTextObjectOptions* aTextOptions) = 0;
      virtual elementID createStandardElementFromGuidPoints(const character* aGuid, vector3D aP1, vector3D aP2, vector3D aP3) = 0;
      virtual elementID createStandardElementFromGuidVectors(const character* aGuid, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;
      virtual void filletEdge(elementID aElementID, vector3D aEdgeStart, vector3D aEdgeEnd, double aRadius) = 0;
      virtual void chamferEdge(elementID aElementID, vector3D aEdgeStart, vector3D aEdgeEnd, double aLength) = 0;
      /**
       * \brief
       * \param aElements
       */
      virtual void convertDrillingToCircularBeam(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aElements
       * \return
       */
      virtual ICwAPI3DElementIDList* convertLinesToSurfaces(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief
       * \param aElements
       * \return
       */
      virtual elementID convertSurfacesToVolume(ICwAPI3DElementIDList* aElements) = 0;
    };
  }
}
