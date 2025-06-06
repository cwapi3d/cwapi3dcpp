/// @file
/// Copyright (C) 2019 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         26.0
/// @author        Paquet
/// @date          2019-10-02

#pragma once

#include "ICwAPI3DCoordinateSystemData.h"
#include "ICwAPI3DEdgeList.h"
#include "ICwAPI3DElementFilter.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DElementIDListMap.h"
#include "ICwAPI3DElementMapQuery.h"
#include "ICwAPI3DElementModuleProperties.h"
#include "ICwAPI3DFacetList.h"
#include "ICwAPI3DHitResult.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"
#include "ICwAPI3DTextObjectOptions.h"
#include "ICwAPI3DVertexList.h"
#include "ICwAPI3DShoulderOptions.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DElementController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Retrieves a list of all identifiable elements.
      /// @return A list of IDs of all identifiable elements.
      virtual ICwAPI3DElementIDList* getAllIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of all visible identifiable elements.
      /// @return A list of IDs of all visible identifiable elements.
      virtual ICwAPI3DElementIDList* getVisibleIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of all invisible identifiable elements.
      /// @return A list of IDs of all invisible identifiable elements.
      virtual ICwAPI3DElementIDList* getInvisibleIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of all active identifiable elements.
      /// @return A list of IDs of all active identifiable elements.
      virtual ICwAPI3DElementIDList* getActiveIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of all identifiable elements that are inactive.
      /// @return A list of IDs of all inactive identifiable elements.
      virtual ICwAPI3DElementIDList* getInactiveAllIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of visible identifiable elements that are inactive.
      /// @return A list of IDs of all inactive visible identifiable elements.
      virtual ICwAPI3DElementIDList* getInactiveVisibleIdentifiableElementIDs() = 0;

      /// @brief Deletes the specified elements.
      /// @param aElementIDList The list of elements to be deleted.
      virtual void deleteElements(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Joins the specified elements together.
      /// @param aElementIDList The list of elements to be joined.
      virtual void joinElements(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Joins the specified top-level elements together.
      /// @param aElementIDList The list of top-level elements to be joined.
      virtual void joinTopLevelElements(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Creates a rectangular beam using points.
      /// @param aWidth The width of the beam.
      /// @param aHeight The height of the beam.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @param aP3 The third point.
      /// @return The ID of the created rectangular beam.
      virtual elementID createRectangularBeamPoints(double aWidth, double aHeight, vector3D aP1, vector3D aP2, vector3D aP3) = 0;

      /// @brief Creates a circular beam using points.
      /// @param aDiameter The diameter of the beam.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @param aP3 The third point.
      /// @return The ID of the created circular beam.
      virtual elementID createCircularBeamPoints(double aDiameter, vector3D aP1, vector3D aP2, vector3D aP3) = 0;

      /// @brief Creates a square beam using points.
      /// @param aWidth The width of the beam.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @param aP3 The third point.
      /// @return The ID of the created square beam.
      virtual elementID createSquareBeamPoints(double aWidth, vector3D aP1, vector3D aP2, vector3D aP3) = 0;

      /// @brief Creates a rectangular beam using vectors.
      /// @param aWidth The width of the beam.
      /// @param aHeight The height of the beam.
      /// @param aLength The length of the beam.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @param aZL The direction of the Z-axis.
      /// @return The ID of the created rectangular beam.
      virtual elementID createRectangularBeamVectors(double aWidth, double aHeight, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;

      /// @brief Creates a circular beam using vectors.
      /// @param aDiameter The diameter of the beam.
      /// @param aLength The length of the beam.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @param aZL The direction of the Z-axis.
      /// @return The ID of the created circular beam.
      virtual elementID createCircularBeamVectors(double aDiameter, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;

      /// @brief Creates a square beam using vectors.
      /// @param aWidth The width of the beam.
      /// @param aLength The length of the beam.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @param aZL The direction of the Z-axis.
      /// @return The ID of the created square beam.
      virtual elementID createSquareBeamVectors(double aWidth, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;

      /// @brief Creates a rectangular panel using points.
      /// @param aWidth The width of the panel.
      /// @param aThickness The thickness of the panel.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @param aP3 The third point.
      /// @return The ID of the created rectangular panel.
      virtual elementID createRectangularPanelPoints(double aWidth, double aThickness, vector3D aP1, vector3D aP2, vector3D aP3) = 0;

      /// @brief Creates a rectangular panel using vectors.
      /// @param aWidth The width of the panel.
      /// @param aThickness The thickness of the panel.
      /// @param aLength The length of the panel.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @param aZL The direction of the Z-axis.
      /// @return The ID of the created rectangular panel.
      virtual elementID createRectangularPanelVectors(double aWidth, double aThickness, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;

      /// @brief Creates a drilling using points.
      /// @param aDiameter The diameter of the drilling.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @return The ID of the created drilling.
      virtual elementID createDrillingPoints(double aDiameter, vector3D aP1, vector3D aP2) = 0;

      /// @brief Creates a drilling using vectors.
      /// @param aDiameter The diameter of the drilling.
      /// @param aLength The length of the drilling.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the drilling.
      /// @return The ID of the created drilling.
      virtual elementID createDrillingVectors(double aDiameter, double aLength, vector3D aP1, vector3D aXL) = 0;

      /// @brief Creates a line using points.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @return The ID of the created line.
      virtual elementID createLinePoints(vector3D aP1, vector3D aP2) = 0;

      /// @brief Creates a line using vectors.
      /// @param aLength The length of the line.
      /// @param aP1 The starting point of the line.
      /// @param aXL The direction of the line.
      /// @return The ID of the created line.
      virtual elementID createLineVectors(double aLength, vector3D aP1, vector3D aXL) = 0;

      /// @brief Creates a node at the specified point.
      /// @param aP1 The position of the node.
      /// @return The ID of the created node.
      virtual elementID createNode(vector3D aP1) = 0;

      /// @brief Solder the specified elements together.
      /// @param aElementIDList The list of elements to be soldered.
      /// @return The list of IDs of the soldered elements.
      virtual ICwAPI3DElementIDList* solderElements(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Converts the specified beams to panels.
      /// @param aElementIDList The list of beams to be converted.
      virtual void convertBeamToPanel(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Converts the specified panels to beams.
      /// @param aElementIDList The list of panels to be converted.
      virtual void convertPanelToBeam(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Deletes all end types of the provided elements.
      /// @param aElementIDList The list of elements for which to delete all end types.
      virtual void deleteAllElementEndTypes(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Deletes all processes of the provided elements.
      /// @param aElementIDList The list of elements for which to delete all processes.
      virtual void deleteAllElementProcesses(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Moves the provided elements by a specified vector.
      /// @param aElementIDList The list of elements to move.
      /// @param aVector The vector by which to move the elements.
      virtual void moveElement(ICwAPI3DElementIDList* aElementIDList, vector3D aVector) = 0;

      /// @brief Creates a polygon beam.
      /// @param aPolygonVertices The vertices of the polygon.
      /// @param aThickness The thickness of the beam.
      /// @param aXL The X-axis direction of the beam.
      /// @param aZL The Z-axis direction of the beam.
      /// @return The ID of the created polygon beam.
      virtual elementID createPolygonBeam(ICwAPI3DVertexList* aPolygonVertices, double aThickness, vector3D aXL, vector3D aZL) = 0;

      /// @brief Creates a text object.
      /// @param aText The text to be displayed in the text object.
      /// @param aPosition The position of the text object.
      /// @param aXl The X-axis direction of the text object.
      /// @param aZl The Z-axis direction of the text object.
      /// @param aSize The size of the text object.
      /// @return The ID of the created text object.
      virtual elementID createTextObject(const character* aText, vector3D aPosition, vector3D aXl, vector3D aZl, double aSize) = 0;

      /// @brief Copies a list of elements.
      /// @param aElementIDList The list of elements to be copied.
      /// @param aCopyVector The vector along which the elements should be copied.
      /// @return The list of IDs of the copied elements.
      virtual ICwAPI3DElementIDList* copyElements(ICwAPI3DElementIDList* aElementIDList, vector3D aCopyVector) = 0;

      /// @brief Rotates a list of elements.
      /// @param aElementIDList The list of elements to be rotated.
      /// @param aOrigin The origin of the rotation.
      /// @param aRotationAxis The axis of the rotation.
      /// @param aRotationAngle The angle of the rotation in degrees.
      virtual void rotateElements(ICwAPI3DElementIDList* aElementIDList, vector3D aOrigin, vector3D aRotationAxis, double aRotationAngle) = 0;

      /// @brief Subtracts a list of "soft" elements from a list of "hard" elements.
      /// @param aHardElements The list of "hard" elements.
      /// @param aSoftElements The list of "soft" elements.
      /// @return The list of elements resulting from the subtraction.
      virtual ICwAPI3DElementIDList* subtractElements(ICwAPI3DElementIDList* aHardElements, ICwAPI3DElementIDList* aSoftElements) = 0;

      /// @brief Checks if the provided element ID exists.
      /// @param aId The ID of the element to check.
      /// @return True if the element ID exists, false otherwise.
      virtual bool checkElementId(elementID aId) = 0;

      /// @brief Filters a list of elements based on a provided filter.
      /// @param aElements The list of elements to filter.
      /// @param aFilter The filter to apply to the list of elements.
      /// @return The list of elements that pass the filter.
      virtual ICwAPI3DElementIDList* filterElements(ICwAPI3DElementIDList* aElements, ICwAPI3DElementFilter* aFilter) = 0;

      /// @brief Maps a list of elements based on a provided map query.
      /// @param aElements The list of elements to map.
      /// @param aMapQuery The map query to apply to the list of elements.
      /// @return The map of elements that pass the map query.
      virtual ICwAPI3DElementIDListMap* mapElements(ICwAPI3DElementIDList* aElements, ICwAPI3DElementMapQuery* aMapQuery) = 0;

      /// @brief Starts the calculation of the element module for a list of covers.
      /// @param aCovers The list of covers for which to start the element module calculation.
      virtual void startElementModuleCalculation(ICwAPI3DElementIDList* aCovers) = 0;

      /// @brief Sets the detail path for the element module.
      /// @param aPath The path to be set as the detail path.
      virtual void setElementDetailPath(const character* aPath) = 0;

      /// @brief Retrieves the detail path of the element module.
      /// @return The detail path of the element module.
      virtual ICwAPI3DString* getElementDetailPath() = 0;

      /// @brief Retrieves the Cadwork GUID of a specific element.
      /// @param aID The ID of the element.
      /// @return The Cadwork GUID of the element.
      virtual ICwAPI3DString* getElementCadworkGuid(elementID aID) = 0;

      /// @brief Retrieves the element ID from a Cadwork GUID.
      /// @param aCadworkGuid The Cadwork GUID to retrieve the element ID from.
      /// @return The ID of the element.
      virtual elementID getElementFromCadworkGuid(const character* aCadworkGuid) = 0;

      /// @brief Adds elements to the undo stack.
      /// @param aElements The list of elements to be added to the undo stack.
      /// @param aCmd The command associated with the undo operation.
      virtual void addElementsToUndo(ICwAPI3DElementIDList* aElements, int32_t aCmd) = 0;

      /// @brief Performs an undo operation, reverting the last change made.
      virtual void makeUndo() = 0;

      /// @brief Performs a redo operation, reapplying the last change that was undone.
      virtual void makeRedo() = 0;

      /// @brief Splits the specified elements.
      /// @param aElements The list of elements to be split.
      virtual void splitElements(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Sets the specified lines to be marking lines.
      /// @param aElements The list of lines to be set as marking lines.
      virtual void setLineToMarkingLine(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Sets the specified lines to be normal lines.
      /// @param aElements The list of lines to be set as normal lines.
      virtual void setLineToNormalLine(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Creates an auto export solid from a standard element.
      /// @param aElements The list of elements to be used in the auto export solid.
      /// @param aOutputName The name of the output.
      /// @param aStandardElementName The name of the standard element.
      /// @return The ID of the created auto export solid.
      virtual elementID createAutoExportSolidFromStandard(ICwAPI3DElementIDList* aElements, const character* aOutputName, const character* aStandardElementName) = 0;

      /// @brief Sets the module properties for the provided elements.
      /// @param aElements The list of elements to set the module properties for.
      /// @param aProperties The module properties to be set.
      virtual void setElementModulePropertiesForElements(ICwAPI3DElementIDList* aElements, ICwAPI3DElementModuleProperties* aProperties) = 0;

      /// @brief Retrieves the module properties for a specific element.
      /// @param aID The ID of the element.
      /// @return The module properties of the element.
      virtual ICwAPI3DElementModuleProperties* getElementModulePropertiesForElement(elementID aID) = 0;

      /// @brief Retrieves the type description of a specific element.
      /// @param aID The ID of the element.
      /// @return The type description of the element.
      virtual ICwAPI3DString* getElementTypeDescription(elementID aID) = 0;

      /// @brief Creates a text object with a specific font.
      /// @param aText The text to be displayed in the text object.
      /// @param aPosition The position of the text object.
      /// @param aXl The X-axis direction of the text object.
      /// @param aZl The Z-axis direction of the text object.
      /// @param aSize The size of the text object.
      /// @param aFontName The name of the font to be used in the text object.
      /// @return The ID of the created text object.
      virtual elementID createTextObjectWithFont(const character* aText, vector3D aPosition, vector3D aXl, vector3D aZl, double aSize, const character* aFontName) = 0;

      /// @brief Retrieves the opening variant IDs of the provided elements.
      /// @param aElements The list of elements to check for opening variants.
      /// @param aOpeningType The type of opening to check for.
      /// @return The list of opening variant IDs.
      virtual ICwAPI3DElementIDList* getOpeningVariantIDs(ICwAPI3DElementIDList* aElements, int32_t aOpeningType) = 0;

      /// @brief Retrieves the parent container ID of a nested element.
      /// @param aID The ID of the nested element.
      /// @return The ID of the parent container.
      virtual elementID getParentContainerId(elementID aID) = 0;

      /// @brief Retrieves the content elements of an export solid.
      /// @param aID The ID of the export solid.
      /// @return The list of content elements.
      virtual ICwAPI3DElementIDList* getExportSolidContentElements(elementID aID) = 0;

      /// @brief Retrieves the content elements of a container.
      /// @param aID The ID of the container.
      /// @return The list of content elements.
      virtual ICwAPI3DElementIDList* getContainerContentElements(elementID aID) = 0;

      /// @brief Applies a transformation to the provided elements.
      /// @param aElements The list of elements to transform.
      /// @param aOldPoint The original point of the transformation.
      /// @param aOldXl The original X-axis direction.
      /// @param aOldYl The original Y-axis direction.
      /// @param aNewPoint The new point of the transformation.
      /// @param aNewXl The new X-axis direction.
      /// @param aNewYl The new Y-axis direction.
      virtual void applyTransformationCoordinate(ICwAPI3DElementIDList* aElements, vector3D aOldPoint, vector3D aOldXl, vector3D aOldYl, vector3D aNewPoint, vector3D aNewXl, vector3D aNewYl) = 0;

      /// @brief Deletes the provided elements with undo functionality.
      /// @param aElements The list of elements to delete.
      virtual void deleteElementsWithUndo(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Adds created elements to the undo stack.
      /// @param aElements The list of elements that were created.
      virtual void addCreatedElementsToUndo(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Adds modified elements to the undo stack.
      /// @param aElements The list of elements that were modified.
      virtual void addModifiedElementsToUndo(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Recreates elements based on the provided list.
      /// @param aElements The list of elements to be recreated.
      virtual void recreateElements(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Checks if two elements are in collision.
      /// @param aFirstElementID The ID of the first element.
      /// @param aSecondElementID The ID of the second element.
      /// @return True if the elements are in collision, false otherwise.
      virtual bool checkIfElementsAreInCollision(elementID aFirstElementID, elementID aSecondElementID) = 0;

      /// @brief Checks if two elements are in contact.
      /// @param aFirstElementID The ID of the first element.
      /// @param aSecondElementID The ID of the second element.
      /// @return True if the elements are in contact, false otherwise.
      virtual bool checkIfElementsAreInContact(elementID aFirstElementID, elementID aSecondElementID) = 0;

      /// @brief Creates a multi-wall structure.
      /// @param aElements The list of elements to be used in the multi-wall structure.
      virtual void createMultiWall(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Retrieves a list of user element IDs.
      /// @return The list of user element IDs.
      virtual ICwAPI3DElementIDList* getUserElementIDs() = 0;

      /// @brief Retrieves the contact vertices between two elements.
      /// @param aFirstID The ID of the first element.
      /// @param aSecondID The ID of the second element.
      /// @return The list of contact vertices between the two elements.
      virtual ICwAPI3DVertexList* getElementContactVertices(elementID aFirstID, elementID aSecondID) = 0;

      /// @brief Retrieves the parent ID of a nested element.
      /// @param aID The ID of the nested element.
      /// @return The ID of the parent element.
      virtual elementID getNestingParentId(elementID aID) = 0;

      /// @brief Retrieves a list of user element IDs that exist in the provided list.
      /// @param aElements The list of elements to check for existence.
      /// @return The list of existing user element IDs.
      virtual ICwAPI3DElementIDList* getUserElementIDsWithExisting(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Glides elements
      /// @param aElementIDs element IDs
      /// @param aGlidePoint point to glide
      virtual void glideElements(ICwAPI3DElementIDList* aElementIDs, vector3D aGlidePoint) = 0;

      /// @brief Retrieves the contact facets between two elements.
      /// @param aFirstID The ID of the first element.
      /// @param aSecondID The ID of the second element.
      /// @return The list of contact facets between the two elements.
      virtual ICwAPI3DFacetList* getElementContactFacets(elementID aFirstID, elementID aSecondID) = 0;

      /// @brief Retrieves the raw interface vertices between two elements.
      /// @param aFirstID The ID of the first element.
      /// @param aSecondID The ID of the second element.
      /// @return The list of raw interface vertices between the two elements.
      virtual ICwAPI3DVertexList* getElementRawInterfaceVertices(elementID aFirstID, elementID aSecondID) = 0;

      /// @brief Cuts two elements with a miter joint.
      /// @param aFirstID The ID of the first element.
      /// @param aSecondID The ID of the second element.
      /// @return True if the operation was successful, false otherwise.
      virtual bool cutElementsWithMiter(elementID aFirstID, elementID aSecondID) = 0;

      /// @brief Cuts an element with a plane.
      /// @param aID The ID of the element to be cut.
      /// @param aCutPlaneNormalVector The normal vector of the cutting plane.
      /// @param aDistanceFromGlobalOrigin The distance from the global origin to the cutting plane.
      /// @return True if the operation was successful, false otherwise.
      virtual bool cutElementWithPlane(elementID aID, vector3D aCutPlaneNormalVector, double aDistanceFromGlobalOrigin) = 0;

      /// @brief Creates a circular MEP (Mechanical, Electrical, and Plumbing) element.
      /// @param aDiameter The diameter of the MEP element.
      /// @param aPoints The points defining the path of the MEP element.
      /// @return The ID of the created MEP element.
      virtual elementID createCircularMEP(double aDiameter, ICwAPI3DVertexList* aPoints) = 0;

      /// @brief Creates a rectangular MEP (Mechanical, Electrical, and Plumbing) element.
      /// @param aWidth The width of the MEP element.
      /// @param aDepth The depth of the MEP element.
      /// @param aPoints The points defining the path of the MEP element.
      /// @return The ID of the created MEP element.
      virtual elementID createRectangularMEP(double aWidth, double aDepth, ICwAPI3DVertexList* aPoints) = 0;

      /// @brief Slices an element with a plane.
      /// @param aID The ID of the element to be sliced.
      /// @param aCutPlaneNormalVector The normal vector of the slicing plane.
      /// @param aDistanceFromGlobalOrigin The distance from the global origin to the slicing plane.
      /// @return True if the operation was successful, false otherwise.
      virtual bool sliceElementWithPlane(elementID aID, vector3D aCutPlaneNormalVector, double aDistanceFromGlobalOrigin) = 0;

      /// @brief Creates an auto container from a standard element.
      /// @param aElements The list of elements to be used in the auto container.
      /// @param aOutputName The name of the output.
      /// @param aStandardElementName The name of the standard element.
      /// @return The ID of the created auto container.
      virtual elementID createAutoContainerFromStandard(ICwAPI3DElementIDList* aElements, const character* aOutputName, const character* aStandardElementName) = 0;

      /// @brief Creates an auto export solid from a standard element with a reference.
      /// @param aElements The list of elements to be used in the auto export solid.
      /// @param aOutputName The name of the output.
      /// @param aStandardElementName The name of the standard element.
      /// @param aReferenceID The ID of the reference element.
      /// @return The ID of the created auto export solid.
      virtual elementID createAutoExportSolidFromStandardWithReference(ICwAPI3DElementIDList* aElements, const character* aOutputName, const character* aStandardElementName, elementID aReferenceID) = 0;

      /// @brief Creates an auto container from a standard element with a reference.
      /// @param aElements The list of elements to be used in the auto container.
      /// @param aOutputName The name of the output.
      /// @param aStandardElementName The name of the standard element.
      /// @param aReferenceID The ID of the reference element.
      /// @return The ID of the created auto container.
      virtual elementID createAutoContainerFromStandardWithReference(ICwAPI3DElementIDList* aElements, const character* aOutputName, const character* aStandardElementName, elementID aReferenceID) = 0;

      /// @brief Slices an element with a plane and returns the new elements.
      /// @param aID The ID of the element to be sliced.
      /// @param aCutPlaneNormalVector The normal vector of the cutting plane.
      /// @param aDistanceFromGlobalOrigin The distance from the global origin to the cutting plane.
      /// @return The list of IDs of the new elements created by the slicing operation.
      virtual ICwAPI3DElementIDList* sliceElementWithPlaneAndGetNewElements(elementID aID, vector3D aCutPlaneNormalVector, double aDistanceFromGlobalOrigin) = 0;

      /// @brief Creates a surface.
      /// @param aSurfaceVertices The vertices of the surface.
      /// @return The ID of the created surface.
      virtual elementID createSurface(ICwAPI3DVertexList* aSurfaceVertices) = 0;

      /// @brief converts circular/round beams into drillings
      /// @param aElements
      virtual void convertCircularBeamToDrilling(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Retrieves a list of standard export solid names.
      /// @return A list of names of standard export solids.
      virtual ICwAPI3DStringList* getStandardExportSolidList() = 0;

      /// @brief Retrieves a list of standard container names.
      /// @return A list of names of standard containers.
      virtual ICwAPI3DStringList* getStandardContainerList() = 0;

      /// @brief stretches the start face
      /// @param aElements
      /// @param aStretchVector
      virtual void stretchStartFace(ICwAPI3DElementIDList* aElements, vector3D aStretchVector) = 0;

      /// @brief stretches the end face
      /// @param aElements
      /// @param aStretchVector
      virtual void stretchEndFace(ICwAPI3DElementIDList* aElements, vector3D aStretchVector) = 0;

      /// @brief Retrieves a list of variant sibling element IDs.
      /// @param aElementID The ID of the element to retrieve variant siblings for.
      /// @return A list of IDs of the variant sibling elements.
      virtual ICwAPI3DElementIDList* getVariantSiblingElementIDs(elementID aElementID) = 0;

      /// @brief Sets the contents of an export solid.
      /// @param aExportSolidID The ID of the export solid to set the contents for.
      /// @param aElementIDs The list of element IDs to set as the contents of the export solid.
      virtual void setExportSolidContents(elementID aExportSolidID, ICwAPI3DElementIDList* aElementIDs) = 0;

      /// @brief Sets the contents of a container.
      /// @param aContainerID The ID of the container to set the contents for.
      /// @param aElementIDs The list of element IDs to set as the contents of the container.
      virtual void setContainerContents(elementID aContainerID, ICwAPI3DElementIDList* aElementIDs) = 0;

      /// @brief Sets the opening angle for parent opening variants.
      /// @param aElementIDs The list of element IDs to set the opening angle for.
      /// @param aAngle The opening angle to set.
      virtual void setParentOpeningVariantsOpeningAngle(ICwAPI3DElementIDList* aElementIDs, double aAngle) = 0;

      /// @brief Creates a circular axis using points.
      /// @param aDiameter The diameter of the circular axis.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @return The ID of the created circular axis.
      virtual elementID createCircularAxisPoints(double aDiameter, vector3D aP1, vector3D aP2) = 0;

      /// @brief Creates a circular axis using vectors.
      /// @param aDiameter The diameter of the circular axis.
      /// @param aLength The length of the circular axis.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @return The ID of the created circular axis.
      virtual elementID createCircularAxisVector(double aDiameter, double aLength, vector3D aP1, vector3D aXL) = 0;

      /// @brief Converts elements to auxiliary elements.
      /// @param aElements The list of elements to be converted.
      virtual void convertElementsToAuxiliaryElements(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Retrieves a list of elements in contact with a specific element.
      /// @param aElement The ID of the element to check for contact.
      /// @return The list of elements in contact with the specified element.
      virtual ICwAPI3DElementIDList* getElementsInContact(elementID aElement) = 0;

      /// @brief Retrieves the facets of elements within a lasso selection.
      /// @param aElements The list of elements to check for facets within the lasso selection.
      /// @return The list of facets within the lasso selection.
      virtual ICwAPI3DFacetList* getFacetsWithLasso(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Cuts elements with overmeasure.
      /// @param aHardElements The list of "hard" elements.
      /// @param aSoftElements The list of "soft" elements.
      virtual void cutElementsWithOvermeasure(ICwAPI3DElementIDList* aHardElements, ICwAPI3DElementIDList* aSoftElements) = 0;

      /// @brief Retrieves the edge selection of the provided elements.
      /// @param aElements The list of elements to retrieve the edge selection from.
      /// @return The list of edges selected.
      virtual ICwAPI3DEdgeList* getEdgeSelection(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Creates a polygon panel.
      /// @param aPolygonVertices The vertices of the polygon.
      /// @param aThickness The thickness of the panel.
      /// @param aXL The X-axis direction of the panel.
      /// @param aZL The Z-axis direction of the panel.
      /// @return The ID of the created polygon panel.
      virtual elementID createPolygonPanel(ICwAPI3DVertexList* aPolygonVertices, double aThickness, vector3D aXL, vector3D aZL) = 0;

      /// @brief Moves elements by mirroring them across a plane.
      /// @param aElements The list of elements to move.
      /// @param aPlane The plane to mirror the elements across.
      /// @param aPlaneDistance The distance from the plane to move the elements.
      virtual void mirrorMoveElements(ICwAPI3DElementIDList* aElements, vector3D aPlane, double aPlaneDistance) = 0;

      /// @brief Copies elements by mirroring them across a plane.
      /// @param aElements The list of elements to copy.
      /// @param aPlane The plane to mirror the elements across.
      /// @param aPlaneDistance The distance from the plane to copy the elements.
      /// @return The list of IDs of the copied elements.
      virtual ICwAPI3DElementIDList* mirrorCopyElements(ICwAPI3DElementIDList* aElements, vector3D aPlane, double aPlaneDistance) = 0;

      /// @brief sets the Cadwork Guid of an element to NULL
      /// @param aID
      virtual void resetElementCadworkGuid(elementID aID) = 0;

      /// @brief Retrieves a list of standard beam names.
      /// @return A list of names of standard beams.
      virtual ICwAPI3DStringList* getStandardBeamList() = 0;

      /// @brief Retrieves a list of standard panel names.
      /// @return A list of names of standard panels.
      virtual ICwAPI3DStringList* getStandardPanelList() = 0;

      /// @brief Creates a standard beam using points.
      /// @param aStandardElementName The name of the standard beam.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @param aP3 The third point.
      /// @return The ID of the created standard beam.
      virtual elementID createStandardBeamPoints(const character* aStandardElementName, vector3D aP1, vector3D aP2, vector3D aP3) = 0;

      /// @brief Creates a standard beam using vectors.
      /// @param aStandardElementName The name of the standard beam.
      /// @param aLength The length of the beam.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @param aZL The direction of the Z-axis.
      /// @return The ID of the created standard beam.
      virtual elementID createStandardBeamVectors(const character* aStandardElementName, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;

      /// @brief Creates a standard panel using points.
      /// @param aStandardElementName The name of the standard panel.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @param aP3 The third point.
      /// @return The ID of the created standard panel.
      virtual elementID createStandardPanelPoints(const character* aStandardElementName, vector3D aP1, vector3D aP2, vector3D aP3) = 0;

      /// @brief Creates a standard panel using vectors.
      /// @param aStandardElementName The name of the standard panel.
      /// @param aLength The length of the panel.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @param aZL The direction of the Z-axis.
      /// @return The ID of the created standard panel.
      virtual elementID createStandardPanelVectors(const character* aStandardElementName, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;

      /// @brief Creates a standard steel element using points.
      /// @param aStandardElementName The name of the standard steel element.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @param aP3 The third point.
      /// @return The ID of the created standard steel element.
      virtual elementID createStandardSteelPoints(const character* aStandardElementName, vector3D aP1, vector3D aP2, vector3D aP3) = 0;

      /// @brief Creates a standard steel element using vectors.
      /// @param aStandardElementName The name of the standard steel element.
      /// @param aLength The length of the steel element.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @param aZL The direction of the Z-axis.
      /// @return The ID of the created standard steel element.
      virtual elementID createStandardSteelVectors(const character* aStandardElementName, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;

      /// @brief Moves an element with undo functionality.
      /// @param aElementIDList The list of elements to move.
      /// @param aVector The vector by which to move the elements.
      virtual void moveElementWithUndo(ICwAPI3DElementIDList* aElementIDList, vector3D aVector) = 0;

      /// @brief Creates a linear optimization.
      /// @param aElements The list of elements to be optimized.
      /// @param aOptimizationNumber The optimization number.
      /// @param aTotalLength The total length for the optimization.
      /// @param aStartCut The start cut for the optimization.
      /// @param aEndCut The end cut for the optimization.
      /// @param aSawKerf The saw kerf for the optimization.
      /// @param aIsProductionList A flag indicating if this is a production list.
      /// @return The ID of the created linear optimization.
      virtual elementID createLinearOptimization(ICwAPI3DElementIDList* aElements, uint32_t aOptimizationNumber, double aTotalLength, double aStartCut, double aEndCut, double aSawKerf, bool aIsProductionList) = 0;

      /// @brief Checks for duplicate elements in the provided list.
      /// @param aElements The list of elements to check for duplicates.
      /// @return The list of duplicate elements.
      virtual ICwAPI3DElementIDList* checkElementDuplicates(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Creates a normal axis using points.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @return The ID of the created normal axis.
      virtual elementID createNormalAxisPoints(vector3D aP1, vector3D aP2) = 0;

      /// @brief Creates a normal axis using vectors.
      /// @param aLength The length of the axis.
      /// @param aP1 The starting point of the axis.
      /// @param aXL The direction of the axis.
      /// @return The ID of the created normal axis.
      virtual elementID createNormalAxisVectors(double aLength, vector3D aP1, vector3D aXL) = 0;

      /// @brief Converts bolts to standard connectors.
      /// @param aElements The list of bolts to be converted.
      /// @param aStandardElementName The name of the standard element.
      virtual void convertBoltToStandardConnector(ICwAPI3DElementIDList* aElements, const character* aStandardElementName) = 0;

      /// @brief Retrieves the reference element for a given element.
      /// @param aElement The ID of the element for which to retrieve the reference.
      /// @return The ID of the reference element.
      virtual elementID getReferenceElement(elementID aElement) = 0;

      /// @brief Extrudes a surface to create an auxiliary element.
      /// @param aSurface The ID of the surface to be extruded.
      /// @param aVector The vector along which to extrude the surface.
      /// @return The ID of the created auxiliary element.
      virtual elementID extrudeSurfaceToAuxiliaryVector(elementID aSurface, vector3D aVector) = 0;

      /// @brief Extrudes a surface to create a panel element.
      /// @param aSurface The ID of the surface to be extruded.
      /// @param aVector The vector along which to extrude the surface.
      /// @return The ID of the created panel element.
      virtual elementID extrudeSurfaceToPanelVector(elementID aSurface, vector3D aVector) = 0;

      /// @brief Extrudes a surface to create a beam element.
      /// @param aSurface The ID of the surface to be extruded.
      /// @param aVector The vector along which to extrude the surface.
      /// @return The ID of the created beam element.
      virtual elementID extrudeSurfaceToBeamVector(elementID aSurface, vector3D aVector) = 0;

      /// @brief Checks if a point is inside an element.
      /// @param aPoint The point to check.
      /// @param aElementID The ID of the element to check against.
      /// @return True if the point is inside the element, false otherwise.
      virtual bool checkIfPointIsInElement(vector3D aPoint, elementID aElementID) = 0;

      /// @brief Checks if a point is on an element.
      /// @param aPoint The point to check.
      /// @param aElementID The ID of the element to check against.
      /// @return True if the point is on the element, false otherwise.
      virtual bool checkIfPointIsOnElement(vector3D aPoint, elementID aElementID) = 0;

      /// @brief Converts a container to a container block.
      /// @param aElements The list of elements to be converted.
      virtual void convertContainerToContainerBlock(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Creates a local bounding box for a list of elements relative to a reference element.
      /// @param aReferenceElement The ID of the reference element.
      /// @param aElements The list of elements for which to create the bounding box.
      /// @return The ID of the created bounding box.
      virtual elementID createBoundingBoxLocal(elementID aReferenceElement, ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Creates a global bounding box for a list of elements.
      /// @param aElements The list of elements for which to create the bounding box.
      /// @return The ID of the created bounding box.
      virtual elementID createBoundingBoxGlobal(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Cuts a log corner joint.
      /// @param aSettingsName The name of the settings to be used for the cut.
      /// @param aElements The list of elements to be cut.
      virtual void cutLogCornerJoint(const character* aSettingsName, ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Converts auxiliary elements to panels.
      /// @param aElements The list of auxiliary elements to be converted.
      virtual void convertAuxiliaryToPanel(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Converts auxiliary elements to beams.
      /// @param aElements The list of auxiliary elements to be converted.
      virtual void convertAuxiliaryToBeam(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Automatically sets the rough volume situation for a list of elements.
      /// @param aElements The list of elements for which to set the rough volume situation.
      virtual void autoSetRoughVolumeSituation(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Manually sets the rough volume situation for a cover element.
      /// @param aCover The ID of the cover element.
      /// @param aAddPartner The list of partner elements to be added.
      /// @param aRemovePartner The list of partner elements to be removed.
      virtual void roughVolumeSituationManual(elementID aCover, ICwAPI3DElementIDList* aAddPartner, ICwAPI3DElementIDList* aRemovePartner) = 0;

      /// @brief Automatically sets the parts situation for a list of elements.
      /// @param aElements The list of elements for which to set the parts situation.
      virtual void autoSetPartsSituation(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Manually sets the parts situation for a cover element.
      /// @param aCover The ID of the cover element.
      /// @param aAddChilds The list of child elements to be added.
      /// @param aRemoveChilds The list of child elements to be removed.
      virtual void partsSituationManual(elementID aCover, ICwAPI3DElementIDList* aAddChilds, ICwAPI3DElementIDList* aRemoveChilds) = 0;

      /// @brief Activates the rough volume situation for elements without a situation.
      /// @return The list of IDs of the elements for which the rough volume situation was activated.
      virtual ICwAPI3DElementIDList* activateRvWithoutSituation() = 0;

      /// @brief Activates the parts situation for elements without a situation.
      /// @return The list of IDs of the elements for which the parts situation was activated.
      virtual ICwAPI3DElementIDList* activatePartsWithoutSituation() = 0;

      /// @brief Adds elements to a detail.
      /// @param aElements The list of elements to be added to the detail.
      /// @param aDetail The ID of the detail.
      virtual void addElementToDetail(ICwAPI3DElementIDList* aElements, int32_t aDetail) = 0;

      /// @brief Retrieves the local bounding box vertices for a list of elements relative to a reference element.
      /// @param aReferenceElement The ID of the reference element.
      /// @param aElements The list of elements for which to retrieve the bounding box vertices.
      /// @return A list of vertices representing the local bounding box of the elements.
      virtual ICwAPI3DVertexList* getBoundingBoxVerticesLocal(elementID aReferenceElement, ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Retrieves the global bounding box vertices for a list of elements.
      /// @param aElements The list of elements for which to retrieve the bounding box vertices.
      /// @return A list of vertices representing the global bounding box of the elements.
      virtual ICwAPI3DVertexList* getBoundingBoxVerticesGlobal(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Retrieves a list of all raw parts in a nesting operation.
      /// @return A list of IDs of all raw parts in a nesting operation.
      virtual ICwAPI3DElementIDList* getAllNestingRawParts() = 0;

      /// @brief Subtracts a list of "soft" elements from a list of "hard" elements with undo functionality.
      /// @param aHardElements The list of "hard" elements.
      /// @param aSoftElements The list of "soft" elements.
      /// @param aWithUndo A boolean indicating whether the operation should be added to the undo stack.
      /// @return The list of elements resulting from the subtraction.
      virtual ICwAPI3DElementIDList* subtractElementsWithUndo(ICwAPI3DElementIDList* aHardElements, ICwAPI3DElementIDList* aSoftElements, bool aWithUndo) = 0;

      /// @brief Starts the calculation of the element module for a list of covers silently (without user interaction).
      /// @param aCovers The list of covers for which to start the element module calculation.
      virtual void startElementModuleCalculationSilently(ICwAPI3DElementIDList* aCovers) = 0;

      /// @brief Retrieves the IDs of elements that have been joined with the specified element.
      /// @param aElementID The ID of the element.
      /// @return A list of IDs of the joined elements.
      virtual ICwAPI3DElementIDList* getJoinedElements(elementID aElementID) = 0;

      /// @brief Replaces physical drillings with drilling axes based on diameter range.
      /// @param aElements The list of elements to be processed.
      /// @param aMininumDiameter The minimum diameter of the drilling.
      /// @param aMaximumDiameter The maximum diameter of the drilling.
      /// @return The list of IDs of the elements where the replacement was successful.
      virtual ICwAPI3DElementIDList* replacePhysicalDrillingsWithDrillingAxes(ICwAPI3DElementIDList* aElements, double aMininumDiameter, double aMaximumDiameter) = 0;

      /// @brief Cuts an element with a processing group.
      /// @param aSoftElement The ID of the element to be cut.
      /// @param aProcessing The ID of the processing group.
      virtual void cutElementWithProcessingGroup(elementID aSoftElement, elementID aProcessing) = 0;

      /// @brief Creates a text object with specific options.
      /// @param aPosition The position of the text object.
      /// @param aXl The X-axis direction of the text object.
      /// @param aZl The Z-axis direction of the text object.
      /// @param aTextOptions The options for the text object.
      /// @return The ID of the created text object.
      virtual elementID createTextObjectWithOptions(vector3D aPosition, vector3D aXl, vector3D aZl, ICwAPI3DTextObjectOptions* aTextOptions) = 0;

      /// @brief Creates a standard element from GUID points.
      /// @param aGuid The GUID of the standard element.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @param aP3 The third point.
      /// @return The ID of the created standard element.
      virtual elementID createStandardElementFromGuidPoints(const character* aGuid, vector3D aP1, vector3D aP2, vector3D aP3) = 0;

      /// @brief Creates a standard element from GUID vectors.
      /// @param aGuid The GUID of the standard element.
      /// @param aLength The length of the standard element.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @param aZL The direction of the Z-axis.
      /// @return The ID of the created standard element.
      virtual elementID createStandardElementFromGuidVectors(const character* aGuid, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;

      /// @brief Fillets an edge of an element.
      /// @param aElementID The ID of the element.
      /// @param aEdgeStart The starting point of the edge.
      /// @param aEdgeEnd The ending point of the edge.
      /// @param aRadius The radius of the fillet.
      virtual void filletEdge(elementID aElementID, vector3D aEdgeStart, vector3D aEdgeEnd, double aRadius) = 0;

      /// @brief Chamfers an edge of an element.
      /// @param aElementID The ID of the element.
      /// @param aEdgeStart The starting point of the edge.
      /// @param aEdgeEnd The ending point of the edge.
      /// @param aLength The length of the chamfer.
      virtual void chamferEdge(elementID aElementID, vector3D aEdgeStart, vector3D aEdgeEnd, double aLength) = 0;

      /// @brief Converts drillings to circular beams.
      /// @param aElements The list of elements to be converted.
      virtual void convertDrillingToCircularBeam(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Converts lines to surfaces.
      /// @param aElements The list of elements to be converted.
      /// @return The list of IDs of the created surfaces.
      virtual ICwAPI3DElementIDList* convertLinesToSurfaces(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Converts surfaces to a volume.
      /// @param aElements The list of elements to be converted.
      /// @return The ID of the created volume.
      virtual elementID convertSurfacesToVolume(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief cuts a corner-lap with specific parameters
      /// @param aElements
      /// @param aDepth
      /// @param aClearanceBase
      /// @param aClearanceSide
      /// @param aBackcut
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutCornerLap(ICwAPI3DElementIDList* aElements, double aDepth, double aClearanceBase, double aClearanceSide, double aBackcut, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief cuts a t-lap with specific parameters
      /// @param aElements
      /// @param aDepth
      /// @param aClearanceBase
      /// @param aClearanceSide
      /// @param aBackcut
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutTLap(ICwAPI3DElementIDList* aElements, double aDepth, double aClearanceBase, double aClearanceSide, double aBackcut, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief cuts a cross-lap with specific parameters
      /// @param aElements
      /// @param aDepth
      /// @param aClearanceBase
      /// @param aClearanceSide
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutCrossLap(ICwAPI3DElementIDList* aElements, double aDepth, double aClearanceBase, double aClearanceSide, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Gets the cutting bodies of all processes (and deletes processes), like Ctrl+D Action
      /// @param aElements
      /// @param aKeepCuttingElementsOnly
      /// @return
      virtual ICwAPI3DElementIDList* deleteProcessesKeepCuttingBodies(ICwAPI3DElementIDList* aElements, bool aKeepCuttingElementsOnly) = 0;

      /// @brief cuts a double tenon with specific parameters
      /// @param aElements
      /// @param aDepth1
      /// @param aDepth2
      /// @param aClearance
      /// @param aBackcut
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutDoubleTenon(ICwAPI3DElementIDList* aElements, double aDepth1, double aDepth2, double aClearance, double aBackcut, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Get the coordinate system of nesting child
      /// @param aNestingParentId
      /// @param aNestingChildId
      /// @return A global element coordinate-system of the nested child element consisting of a Point1, a Point2 and a Point3. You can get the local placement by subtracting the parent coordinate - system with child coordinate - system
      virtual ICwAPI3DCoordinateSystemData* getCoordinateSystemDataNestingChild(elementID aNestingParentId, elementID aNestingChildId) = 0;

      /// @brief cuts a half lap joint with specific parameters
      /// @param aElements
      /// @param aLength
      /// @param aClearanceLength
      /// @param aClearanceDepth
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutHalfLap(ICwAPI3DElementIDList* aElements, double aLength, double aClearanceLength, double aClearanceDepth, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief cuts a simple scarf joint with specific parameters
      /// @param aElements
      /// @param aLength
      /// @param aDepth
      /// @param aClearanceLength
      /// @param aClearanceDepth
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutSimpleScarf(ICwAPI3DElementIDList* aElements, double aLength, double aDepth, double aClearanceLength, double aClearanceDepth, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief cuts a diagonal cut joint with specific parameters
      /// @param aElements
      /// @param aLength
      /// @param aClearanceLength
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutDiagonalCut(ICwAPI3DElementIDList* aElements, double aLength, double aClearanceLength, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief converts surfaces to roof surfaces
      /// @param aElements
      /// @param aRoofName
      virtual void convertSurfacesToRoofSurfaces(ICwAPI3DElementIDList* aElements, const character* aRoofName) = 0;

      /// @brief Starts the standard element dialogue based on the chosen element type
      /// @param aStandardElementType
      /// @return Returns guid of selected standard element if item is valid, else null
      virtual ICwAPI3DString* startStandardElementDialog(standardElementType aStandardElementType) = 0;

      /// @brief Removes a standard connector axis.
      /// @param aGuid The unique identifier of the standard connector axis to be removed.
      virtual void removeStandardConnectorAxis(const character* aGuid) = 0;

      /// @brief Removes a standard beam.
      /// @param aGuid The unique identifier of the standard beam to be removed.
      virtual void removeStandardBeam(const character* aGuid) = 0;

      /// @brief Removes a standard panel.
      /// @param aGuid The unique identifier of the standard panel to be removed.
      virtual void removeStandardPanel(const character* aGuid) = 0;

      /// @brief Removes a standard container.
      /// @param aGuid The unique identifier of the standard container to be removed.
      virtual void removeStandardContainer(const character* aGuid) = 0;

      /// @brief Removes a standard export solid.
      /// @param aGuid The unique identifier of the standard export solid to be removed.
      virtual void removeStandardExportSolid(const character* aGuid) = 0;

      /// @brief Retrieves a list of user element IDs.
      /// @param aCount The maximal number of elements to select.
      /// @return The list of user element IDs.
      virtual ICwAPI3DElementIDList* getUserElementIDsWithCount(uint64_t aCount) = 0;

      /// @brief cuts a straight scarf length joint with specific parameters
      /// @param aElements
      /// @param aLength
      /// @param aDepth
      /// @param aClearanceLength
      /// @param aClearanceDepth
      /// @param aClearanceHook
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutScarfStraight(ICwAPI3DElementIDList* aElements, double aLength, double aDepth, double aClearanceLength, double aClearanceDepth, double aClearanceHook, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief cuts a diagonal scarf length joint with specific parameters
      /// @param aElements
      /// @param aLength
      /// @param aDepth
      /// @param aClearanceLength
      /// @param aClearanceDepth
      /// @param aClearanceHook
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutScarfDiagonal(ICwAPI3DElementIDList* aElements, double aLength, double aDepth, double aClearanceLength, double aClearanceDepth, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief cuts a diagonal scarf with wedge length joint with specific parameters
      /// @param aElements
      /// @param aLength
      /// @param aDepth
      /// @param aClearanceLength
      /// @param aClearanceDepth
      /// @param aWedgeWidth
      /// @param aDrillingCount
      /// @param aDrillingDiameter
      /// @param aDrillingTolerance
      virtual void cutScarfWithWedge(ICwAPI3DElementIDList* aElements, double aLength, double aDepth, double aClearanceLength, double aClearanceDepth, double aWedgeWidth, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief adds end profiles to a beam with the given name
      /// @param aElements
      /// @param aProfileName
      /// @param aOnStartFace
      /// @param aOnEndFace
      virtual void cutBeamEndProfile(ICwAPI3DElementIDList* aElements, const character* aProfileName, bool aOnStartFace, bool aOnEndFace) = 0;

      /// @brief Creates a truncated cone beam using points.
      /// @param aStartDiameter The starting diameter of the beam.
      /// @param aEndDiameter The ending diameter of the beam.
      /// @param aP1 The first point.
      /// @param aP2 The second point.
      /// @param aP3 The third point.
      /// @return The ID of the created beam.
      virtual elementID createTruncatedConeBeamPoints(double aStartDiameter, double aEndDiameter, vector3D aP1, vector3D aP2, vector3D aP3) = 0;

      /// @brief Creates a truncated cone beam using vectors.
      /// @param aStartDiameter The starting diameter of the beam.
      /// @param aEndDiameter The ending diameter of the beam.
      /// @param aLength The length of the beam.
      /// @param aP1 The starting point.
      /// @param aXL The direction of the X-axis.
      /// @param aZL The direction of the Z-axis.
      /// @return The ID of the created beam.
      virtual elementID createTruncatedConeBeamVectors(double aStartDiameter, double aEndDiameter, double aLength, vector3D aP1, vector3D aXL, vector3D aZL) = 0;
      /// @brief Creates a spline line using a list of points.
      /// @param aSplinePoints The points of the line.
      /// @return The ID of the created line.
      virtual elementID createSplineLine(ICwAPI3DVertexList* aSplinePoints) = 0;

      /// @brief Unjoins the specified elements.
      /// @param aElementIDList The list of elements to be unjoined.
      /// @return True if the operation was successful, false if an error occured.
      virtual bool unjoinElements(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Unjoins the specified top-level elements.
      /// @param aElementIDList The list of top-level elements to be unjoined.
      /// @return True if the operation was successful, false if an error occured.
      virtual bool unjoinTopLevelElements(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Switches the current element group selection mode so that single elements of a group are selectable.
      virtual void setElementGroupSingleSelectMode() = 0;

      /// @brief Switches the current element group selection mode so that all elements of a group are selected when selecting one of it.
      virtual void setElementGroupMultiSelectMode() = 0;

      /// @brief Retrieves a list of elements in collision with a specific element.
      /// @param aElement The ID of the element to check for collision.
      /// @return The list of elements in collision with the specified element.
      virtual ICwAPI3DElementIDList* getElementsInCollision(elementID aElement) = 0;


      /// @brief Retrieve the data of a text object, e.g. font, text content, etc.
      /// @param aElement The ID of a Text Object
      /// @return TextObjectOptions
      virtual ICwAPI3DTextObjectOptions* getTextObjectOptions(elementID aElement) = 0;

      /// @brief Gets whether the current element group selection mode is setup to select single elements
      virtual bool getIsElementGroupSingleSelectMode() = 0;

      /// @brief Gets whether the current element group selection mode is setup to select groups when a grouped element is selected
      virtual bool getIsElementGroupMultiSelectMode() = 0;

      /// @brief Applies an image texture to a specified surface element.
      /// This function allows you to set an image as a texture on a given surface element.
      /// The image is mapped to the surface between two specified points that define the alignment and scaling.
      ///
      /// @param aElement Surface element
      /// @param aImageFilePath The file path to the image to be applied.
      /// Supported formats include `.jpg`, `.png`, `.bmp`, and `.tif`.
      /// Path example:
      /// `LR"(C:/path/to/Image.png)"`.
      /// @param aP1 The starting alignment point for mapping the image on the surface.
      /// @param aP2 The ending alignment point for mapping the image on the surface.
      /// @return Returns `true` if the image was successfully applied to the surface;
      /// otherwise, returns `false` in case of failure. Failures can occur due to invalid file paths,
      /// unsupported formats, or issues with the surface element.
      ///
      /// @note Ensure that the file path is valid and accessible, and that the surface element exists
      /// Proper error handling for invalid inputs is recommended.
      virtual bool applyImageToSurface(elementID aElement, const character* aImageFilePath, vector3D aP1, vector3D aP2) = 0;

      /// @brief Sets shoulder cut options.
      /// @param aOptions
      virtual void setShoulderOptions(ICwAPI3DShoulderOptions* aOptions) = 0;

      /// @brief Sets heel shoulder cut options.
      /// @param aOptions
      virtual void setHeelShoulderOptions(ICwAPI3DHeelShoulderOptions* aOptions) = 0;

      /// @brief Sets double shoulder cut options.
      /// @param aOptions
      virtual void setDoubleShoulderOptions(ICwAPI3DDoubleShoulderOptions* aOptions) = 0;

      /// @brief Cuts shoulder with current 3D options.
      /// @param aElementIDList
      /// @param aConnectingElementIDList
      virtual void cutShoulder(ICwAPI3DElementIDList* aElementIDList, ICwAPI3DElementIDList* aConnectingElementIDList) = 0;

      /// @brief Cuts heel shoulder with current 3D options.
      /// @param aElementIDList
      /// @param aConnectingElementIDList
      virtual void cutHeelShoulder(ICwAPI3DElementIDList* aElementIDList, ICwAPI3DElementIDList* aConnectingElementIDList) = 0;

      /// @brief Cuts double shoulder with current 3D options.
      /// @param aElementIDList
      /// @param aConnectingElementIDList
      virtual void cutDoubleShoulder(ICwAPI3DElementIDList* aElementIDList, ICwAPI3DElementIDList* aConnectingElementIDList) = 0;

      /// @brief Casts a ray through the 3D model and calculates all intersection points between the ray and specified elements.
      /// This function performs ray casting against each specified element to find intersection points.
      /// For each element hit by the ray, it returns the element ID and all points where the ray intersects with that element.
      /// The ray is defined by a start point, end point, and radius.
      /// @param aElementIDList List of element IDs to test against the ray
      /// @param aRayStartPosition 3D start point of the ray
      /// @param aRayEndPosition 3D end point of the ray
      /// @param aRadius Radius of the ray cylinder (allows testing against a volume rather than just a line)
      /// @return Contains list of elements that were hit by the ray and list of vertices that are queried via ElementID
      ///
      /// @note The ray direction is calculated as the normalized vector from aRayStart to aRayEnd.
      virtual ICwAPI3DHitResult* castRayAndGetElementIntersections(ICwAPI3DElementIDList* aElementIDList, vector3D aRayStartPosition, vector3D aRayEndPosition, double aRadius) = 0;

      /// @brief Gets shoulder cut options.
      /// @return Shoulder options
      virtual ICwAPI3DShoulderOptions* getShoulderOptions() = 0;

      /// @brief Gets heel shoulder cut options.
      /// @return Heel shoulder options
      virtual ICwAPI3DHeelShoulderOptions* getHeelShoulderOptions() = 0;

      /// @brief Gets double shoulder cut options.
      /// @return Double shoulder options
      virtual ICwAPI3DDoubleShoulderOptions* getDoubleShoulderOptions() = 0;
    };
  }
}
