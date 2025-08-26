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
    /// @interface ICwAPI3DElementController
    class ICwAPI3DElementController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Retrieves a list of all identifiable elements.
      /// @return [@ref ICwAPI3DElementIDList*] A list of IDs of all identifiable elements.
      virtual ICwAPI3DElementIDList* getAllIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of all visible identifiable elements.
      /// @return [@ref ICwAPI3DElementIDList*] A list of IDs of all visible identifiable elements.
      virtual ICwAPI3DElementIDList* getVisibleIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of all invisible identifiable elements.
      /// @return [@ref ICwAPI3DElementIDList*] A list of IDs of all invisible identifiable elements.
      virtual ICwAPI3DElementIDList* getInvisibleIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of all active identifiable elements.
      /// @return [@ref ICwAPI3DElementIDList*] A list of IDs of all active identifiable elements.
      virtual ICwAPI3DElementIDList* getActiveIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of all identifiable elements that are inactive.
      /// @return [@ref ICwAPI3DElementIDList*] A list of IDs of all inactive identifiable elements.
      virtual ICwAPI3DElementIDList* getInactiveAllIdentifiableElementIDs() = 0;

      /// @brief Retrieves a list of visible identifiable elements that are inactive.
      /// @return [@ref ICwAPI3DElementIDList*] A list of IDs of all inactive visible identifiable elements.
      virtual ICwAPI3DElementIDList* getInactiveVisibleIdentifiableElementIDs() = 0;

      /// @brief Deletes the specified elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be deleted.
      virtual void deleteElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Joins the specified elements together.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be joined.
      virtual void joinElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Joins the specified top-level elements together.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of top-level elements to be joined.
      virtual void joinTopLevelElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Creates a rectangular beam using points.
      /// @param[in] aWidth [double] The width of the beam.
      /// @param[in] aHeight [double] The height of the beam.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @param[in] aThirdPoint [@ref vector3D] The third point.
      /// @return [@ref elementID] The ID of the created rectangular beam.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a rectangular beam defined by points
      /// double beamWidth = 200.0;
      /// double beamHeight = 400.0;
      /// vector3D beamAxisStartPt{300.0, 0.0, 0.0};
      /// vector3D beamAxisEndPt{300.0, 0.0, 4000.0};
      /// vector3D lengthVector = (beamAxisEndPt - beamAxisStartPt).normalized();
      /// vector3D beamAxisY{1.0, 0.0, 0.0};
      /// vector3D beamAxisZ = lengthVector.cross(beamAxisY).normalized();
      /// vector3D beamHeightAxisPt = beamAxisStartPt + beamAxisZ;
      ///
      /// elementID beamID = aFactory.getElementController()->createRectangularBeamPoints(
      ///     beamWidth,
      ///     beamHeight,
      ///     beamAxisStartPt,
      ///     beamAxisEndPt,
      ///     beamHeightAxisPt
      /// );
      /// @endcode
      virtual elementID createRectangularBeamPoints(double aWidth, double aHeight, vector3D aFirstPoint, vector3D aSecondPoint, vector3D aThirdPoint) = 0;

      /// @brief Creates a circular beam using points.
      /// @param[in] aDiameter [double] The diameter of the beam.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @param[in] aThirdPoint [@ref vector3D] The third point.
      /// @return [@ref elementID] The ID of the created circular beam.
      /// @par Example :
      /// @code{.cpp}
      /// double beamDiameter = 120.0;
      /// vector3D beamAxisStartPt{0.0, 0.0, 0.0};
      /// vector3D beamAxisEndPt{0.0, 0.0, 3000.0};
      /// vector3D lengthVector = (beamAxisEndPt - beamAxisStartPt).normalized();
      /// vector3D beamAxisY{1.0, 0.0, 0.0};
      /// vector3D beamAxisZ = (lengthVector.cross(beamAxisY)).normalized();
      /// vector3D beamOrientationPt = beamAxisStartPt + beamAxisZ;
      /// elementID beamID = aFactory.getElementController()->createCircularBeamPoints(beamDiameter, beamAxisStartPt, beamAxisEndPt, beamOrientationPt);
      /// @endcode
      virtual elementID createCircularBeamPoints(double aDiameter, vector3D aFirstPoint, vector3D aSecondPoint, vector3D aThirdPoint) = 0;

      /// @brief Creates a square beam using points.
      /// @param[in] aWidth [double] The width of the beam.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @param[in] aThirdPoint [@ref vector3D] The third point.
      /// @return [@ref elementID] The ID of the created square beam.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a square beam using two axis points and an orientation point
      /// double beamWidth = 100.0;
      /// vector3D beamAxisStartPt{500.0, 500.0, 0.0};
      /// vector3D beamAxisEndPt{500.0, 500.0, 2500.0};
      ///
      /// vector3D lengthVector = (beamAxisEndPt - beamAxisStartPt).normalized();
      /// vector3D referenceVector{0.0, 1.0, 0.0};
      /// vector3D beamAxisZ = lengthVector.cross(referenceVector).normalized();
      /// vector3D orientationPt = beamAxisStartPt + beamAxisZ;
      ///
      /// elementID beamID = aFactory.getElementController()->createSquareBeamPoints(
      ///     beamWidth,
      ///     beamAxisStartPt,
      ///     beamAxisEndPt,
      ///     orientationPt
      /// );
      /// @endcode
      virtual elementID createSquareBeamPoints(double aWidth, vector3D aFirstPoint, vector3D aSecondPoint, vector3D aThirdPoint) = 0;

      /// @brief Creates a rectangular beam using vectors.
      /// @param[in] aWidth [double] The width of the beam.
      /// @param[in] aHeight [double] The height of the beam.
      /// @param[in] aLength [double] The length of the beam.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @param[in] aZDirectionLocal [@ref vector3D] The direction of the Z-axis.
      /// @return [@ref elementID] The ID of the created rectangular beam.
      /// @par Example:
      /// @code{.cpp}
      /// double beamWidth = 150.0;
      /// double beamHeight = 300.0;
      /// double beamLength = 4000.0;
      /// vector3D originPoint{0.0, 0.0, 0.0};
      /// vector3D xDirection{1.0, 0.0, 0.0};  // Direction along length
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Direction along height
      ///
      /// elementID beamID = aFactory.getElementController()->createRectangularBeamVectors(
      ///     beamWidth,
      ///     beamHeight,
      ///     beamLength,
      ///     originPoint,
      ///     xDirection,
      ///     zDirection
      /// );
      /// @endcode
      virtual elementID createRectangularBeamVectors(double aWidth, double aHeight, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Creates a circular beam using vectors.
      /// @param[in] aDiameter [double] The diameter of the beam.
      /// @param[in] aLength [double] The length of the beam.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @param[in] aZDirectionLocal [@ref vector3D] The direction of the Z-axis.
      /// @return [@ref elementID] The ID of the created circular beam.
      /// @par Example :
      /// @code{.cpp}
      /// double beamDiameter = 100.0;
      /// double beamLength = 3500.0;
      /// vector3D originPoint{200.0, 200.0, 200.0};
      /// vector3D xDirection{0.0, 1.0, 0.0};  // Beam aligned with Y axis
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Z orientation (arbitrary for circular beam)
      /// elementID beamID = aFactory.getElementController()->createCircularBeamVectors(beamDiameter, beamLength, originPoint, xDirection, zDirection);
      /// @endcode
      virtual elementID createCircularBeamVectors(double aDiameter, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Creates a square beam using vectors.
      /// @param[in] aWidth [double] The width of the beam.
      /// @param[in] aLength [double] The length of the beam.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @param[in] aZDirectionLocal [@ref vector3D] The direction of the Z-axis.
      /// @return [@ref elementID] The ID of the created square beam.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a square beam using length and orientation vectors
      /// double beamWidth = 120.0;
      /// double beamLength = 2800.0;
      ///
      /// vector3D originPoint{0.0, 0.0, 500.0};
      /// vector3D xDirection{1.0, 0.0, 0.0};  // Direction along length
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Direction for orientation
      ///
      /// elementID beamID = aFactory.getElementController()->createSquareBeamVectors(
      ///     beamWidth,
      ///     beamLength,
      ///     originPoint,
      ///     xDirection,
      ///     zDirection
      /// );
      /// @endcode
      virtual elementID createSquareBeamVectors(double aWidth, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Creates a rectangular panel using points.
      /// @param[in] aWidth [double] The width of the panel.
      /// @param[in] aThickness [double] The thickness of the panel.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @param[in] aThirdPoint [@ref vector3D] The third point.
      /// @return [@ref elementID] The ID of the created rectangular panel.
      /// @par Example:
      /// @code{.cpp}
      /// double panelWidth = 1200.0;
      /// double panelThickness = 27.0;
      /// vector3D panelCornerPt{0.0, 0.0, 0.0};
      /// vector3D panelLengthPt{0.0, 2400.0, 0.0};
      /// // Calculate a point to define panel orientation
      /// vector3D normalVector{0.0, 0.0, 1.0};  // Panel normal in Z direction
      /// vector3D orientationPt = panelCornerPt + normalVector;
      ///
      /// elementID panelID = aFactory.getElementController()->createRectangularPanelPoints(
      ///     panelWidth,
      ///     panelThickness,
      ///     panelCornerPt,
      ///     panelLengthPt,
      ///     orientationPt
      /// );
      /// @endcode
      virtual elementID createRectangularPanelPoints(double aWidth, double aThickness, vector3D aFirstPoint, vector3D aSecondPoint, vector3D aThirdPoint) = 0;

      /// @brief Creates a rectangular panel using vectors.
      /// @param[in] aWidth [double] The width of the panel.
      /// @param[in] aThickness [double] The thickness of the panel.
      /// @param[in] aLength [double] The length of the panel.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @param[in] aZDirectionLocal [@ref vector3D] The direction of the Z-axis.
      /// @return [@ref elementID] The ID of the created rectangular panel.
      /// @par Example:
      /// @code{.cpp}
      /// double panelWidth = 1000.0;
      /// double panelThickness = 20.0;
      /// double panelLength = 2000.0;
      /// vector3D originPoint{0.0, 0.0, 100.0};
      /// vector3D xDirection{1.0, 0.0, 0.0};  // Direction along length
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Panel normal direction
      ///
      /// elementID panelID = aFactory.getElementController()->createRectangularPanelVectors(
      ///     panelWidth,
      ///     panelThickness,
      ///     panelLength,
      ///     originPoint,
      ///     xDirection,
      ///     zDirection
      /// );
      /// @endcode
      virtual elementID createRectangularPanelVectors(double aWidth, double aThickness, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Creates a drilling using points.
      /// @param[in] aDiameter [double] The diameter of the drilling.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @return [@ref elementID] The ID of the created drilling.
      /// @par Example :
      /// @code{.cpp}
      /// double drillDiameter = 30.0;
      /// vector3D drillStartPt{100.0, 100.0, 0.0};
      /// vector3D drillEndPt{100.0, 100.0, 200.0};
      /// elementID drillingID = aFactory.getElementController()->createDrillingPoints(drillDiameter, drillStartPt, drillEndPt);
      /// @endcode
      virtual elementID createDrillingPoints(double aDiameter, vector3D aFirstPoint, vector3D aSecondPoint) = 0;

      /// @brief Creates a drilling using vectors.
      /// @param[in] aDiameter [double] The diameter of the drilling.
      /// @param[in] aLength [double] The length of the drilling.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aDrillingDirection [@ref vector3D] The direction of the drilling.
      /// @return [@ref elementID] The ID of the created drilling.
      /// @par Example :
      /// @code{.cpp}
      /// double drillDiameter = 12.0;
      /// double drillLength = 180.0;
      /// vector3D drillStartPt{200.0, 200.0, 50.0};
      /// vector3D drillDirection{0.0, 0.0, 1.0};  // Drilling in Z direction
      /// elementID drillingID = aFactory.getElementController()->createDrillingVectors(drillDiameter, drillLength, drillStartPt, drillDirection);
      /// @endcode
      virtual elementID createDrillingVectors(double aDiameter, double aLength, vector3D aStartingPoint, vector3D aDrillingDirection) = 0;

      /// @brief Creates a line using points.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @return [@ref elementID] The ID of the created line.
      /// @par Example :
      /// @code{.cpp}
      /// vector3D lineStartPt{0.0, 0.0, 0.0};
      /// vector3D lineEndPt{500.0, 500.0, 0.0};
      /// elementID lineID = aFactory.getElementController()->createLinePoints(lineStartPt, lineEndPt);
      /// @endcode
      virtual elementID createLinePoints(vector3D aFirstPoint, vector3D aSecondPoint) = 0;

      /// @brief Creates a line using vectors.
      /// @param[in] aLength [double] The length of the line.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point of the line.
      /// @param[in] aLineDirection [@ref vector3D] The direction of the line.
      /// @return [@ref elementID] The ID of the created line.
      /// @par Example :
      /// @code{.cpp}
      /// double lineLength = 1000.0;
      /// vector3D lineStartPt{200.0, 0.0, 200.0};
      /// vector3D lineDirection{1.0, 1.0, 0.0};  // 45 degree line in XY plane
      /// lineDirection = lineDirection.normalized();
      /// elementID lineID = aFactory.getElementController()->createLineVectors(lineLength, lineStartPt, lineDirection);
      /// @endcode
      virtual elementID createLineVectors(double aLength, vector3D aStartingPoint, vector3D aLineDirection) = 0;

      /// @brief Creates a node at the specified point.
      /// @param[in] aNodePosition [@ref vector3D] The position of the node.
      /// @return [@ref elementID] The ID of the created node.
      /// @par Example :
      /// @code{.cpp}
      /// vector3D nodePosition{250.0, 250.0, 100.0};
      /// elementID nodeID = aFactory.getElementController()->createNode(nodePosition);
      /// @endcode
      virtual elementID createNode(vector3D aNodePosition) = 0;

      /// @brief Solder the specified elements together.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be soldered.
      /// @return [@ref ICwAPI3DElementIDList*] The list of IDs of the soldered elements.
      virtual ICwAPI3DElementIDList* solderElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Converts the specified beams to panels.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of beams to be converted.
      virtual void convertBeamToPanel(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Converts the specified panels to beams.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of panels to be converted.
      virtual void convertPanelToBeam(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Deletes all end types of the provided elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements for which to delete all end types.
      virtual void deleteAllElementEndTypes(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Deletes all processes of the provided elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements for which to delete all processes.
      virtual void deleteAllElementProcesses(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Moves the provided elements by a specified vector.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to move.
      /// @param[in] aMoveVector [@ref vector3D] The vector by which to move the elements.
      virtual void moveElement(ICwAPI3DElementIDList* aElementIdList, vector3D aMoveVector) = 0;

      /// @brief Creates a polygon beam.
      /// @param[in] aPolygonVertices [@ref ICwAPI3DVertexList*] The vertices of the polygon.
      /// @param[in] aThickness [double] The thickness of the beam.
      /// @param[in] aXDirectionLocal [@ref vector3D] The X-axis direction of the beam.
      /// @param[in] aZDirectionLocal [@ref vector3D] The Z-axis direction of the beam.
      /// @return [@ref elementID] The ID of the created polygon beam.
      /// @par Example :
      /// @code{.cpp}
      /// // Create a triangular beam
      /// ICwAPI3DVertexList* vertices = aFactory.createVertexList();
      /// vertices->append(vector3D{0.0, 0.0, 0.0});
      /// vertices->append(vector3D{200.0, 0.0, 0.0});
      /// vertices->append(vector3D{100.0, 173.2, 0.0});  // Equilateral triangle
      /// double beamThickness = 1000.0;  // Length of the beam
      /// vector3D extrusionVector{0.0, 0.0, 1.0};  // Direction of extrusion
      /// vector3D zVector{1.0, 0.0, 0.0};  // Orientation vector
      /// elementID polygonBeamID = aFactory.getElementController()->createPolygonBeam(vertices, beamThickness, extrusionVector, zVector);
      /// @endcode
      virtual elementID createPolygonBeam(ICwAPI3DVertexList* aPolygonVertices, double aThickness, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Creates a text object.
      /// @param[in] aText [const @ref character*] The text to be displayed in the text object.
      /// @param[in] aPosition [@ref vector3D] The position of the text object.
      /// @param[in] aXDirectionLocal [@ref vector3D] The X-axis direction of the text object.
      /// @param[in] aZDirectionLocal [@ref vector3D] The Z-axis direction of the text object.
      /// @param[in] aSize [double] The size of the text object.
      /// @return [@ref elementID] The ID of the created text object.
      /// @par Example:
      /// @code{.cpp}
      /// const character* textContent = L"Cadwork API";
      /// vector3D textPosition{0.0, 0.0, 0.0};
      /// vector3D xDirection{1.0, 0.0, 0.0};  // Text direction
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Text orientation
      /// double textHeight = 200.0;
      ///
      /// elementID textID = aFactory.getElementController()->createTextObject(
      ///     textContent,
      ///     textPosition,
      ///     xDirection,
      ///     zDirection,
      ///     textHeight
      /// );
      /// @endcode
      virtual elementID createTextObject(const character* aText, vector3D aPosition, vector3D aXDirectionLocal, vector3D aZDirectionLocal, double aSize) = 0;

      /// @brief Copies a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be copied.
      /// @param[in] aCopyVector [@ref vector3D] The vector along which the elements should be copied.
      /// @return [@ref ICwAPI3DElementIDList*] The list of IDs of the copied elements.
      virtual ICwAPI3DElementIDList* copyElements(ICwAPI3DElementIDList* aElementIdList, vector3D aCopyVector) = 0;

      /// @brief Rotates a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be rotated.
      /// @param[in] aOrigin [@ref vector3D] The origin of the rotation.
      /// @param[in] aRotationAxis [@ref vector3D] The axis of the rotation.
      /// @param[in] aRotationAngle [double] The angle of the rotation in degrees.
      virtual void rotateElements(ICwAPI3DElementIDList* aElementIdList, vector3D aOrigin, vector3D aRotationAxis, double aRotationAngle) = 0;

      /// @brief Subtracts a list of "soft" elements from a list of "hard" elements.
      /// @param[in] aHardElements [@ref ICwAPI3DElementIDList*] The list of "hard" elements.
      /// @param[in] aSoftElements [@ref ICwAPI3DElementIDList*] The list of "soft" elements.
      /// @return [@ref ICwAPI3DElementIDList*] The list of elements resulting from the subtraction.
      virtual ICwAPI3DElementIDList* subtractElements(ICwAPI3DElementIDList* aHardElements, ICwAPI3DElementIDList* aSoftElements) = 0;

      /// @brief Checks if the provided element ID exists.
      /// @param[in] aElementId [@ref elementID] The ID of the element to check.
      /// @return [bool] True if the element ID exists, false otherwise.
      virtual bool checkElementId(elementID aElementId) = 0;

      /// @brief Filters a list of elements based on a provided filter.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to filter.
      /// @param[in] aFilter [ICwAPI3DElementFilter*] The filter to apply to the list of elements.
      /// @return [@ref ICwAPI3DElementIDList*] The list of elements that pass the filter.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* allElements = aFactory.getElementController()->getActiveIdentifiableElementIDs();
      ///
      /// ICwAPI3DElementFilter elementFilter;
      /// elementFilter.setName(L"beam");
      ///
      /// ICwAPI3DElementIDList* filteredElements = aFactory.getElementController()->filterElements(
      ///     allElements,
      ///     &elementFilter
      /// );
      /// @endcode
      virtual ICwAPI3DElementIDList* filterElements(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DElementFilter* aFilter) = 0;

      /// @brief Maps a list of elements based on a provided map query.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to map.
      /// @param[in] aMapQuery [@ref ICwAPI3DElementMapQuery*] The map query to apply to the list of elements.
      /// @return [@ref ICwAPI3DElementIDListMap*] The map of elements that pass the map query.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a map query by subgroup
      /// ICwAPI3DElementMapQuery mapQuery;
      /// mapQuery.setBySubgroup();
      ///
      /// // Map the active identifiable elements using the query
      /// ICwAPI3DElementIDMap* mappedItems = aFactory.getElementController()->mapElements(
      ///     aFactory.getElementController()->getActiveIdentifiableElementIDs(),
      ///     &mapQuery
      /// );
      ///
      /// printf("Mapped item count: %d\n", mappedItems->count());
      /// @endcode
      virtual ICwAPI3DElementIDListMap* mapElements(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DElementMapQuery* aMapQuery) = 0;

      /// @brief Starts the calculation of the element module for a list of covers.
      /// @param[in] aCoverIdList [@ref ICwAPI3DElementIDList*] The list of covers for which to start the element module calculation.
      virtual void startElementModuleCalculation(ICwAPI3DElementIDList* aCoverIdList) = 0;

      /// @brief Sets the detail path for the element module.
      /// @param[in] aPath [const @ref character*] The path to be set as the detail path.
      virtual void setElementDetailPath(const character* aPath) = 0;

      /// @brief Retrieves the detail path of the element module.
      /// @return [@ref ICwAPI3DString*] The detail path of the element module.
      virtual ICwAPI3DString* getElementDetailPath() = 0;

      /// @brief Retrieves the Cadwork GUID of a specific element.
      /// @param[in] aElementId [@ref elementID] The ID of the element.
      /// @return [@ref ICwAPI3DString*] The Cadwork GUID of the element.
      virtual ICwAPI3DString* getElementCadworkGuid(elementID aElementId) = 0;

      /// @brief Retrieves the element ID from a Cadwork GUID.
      /// @param[in] aCadworkGuid [const @ref character*] The Cadwork GUID to retrieve the element ID from.
      /// @return [@ref elementID] The ID of the element.
      virtual elementID getElementFromCadworkGuid(const character* aCadworkGuid) = 0;

      /// @brief Adds elements to the undo stack.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be added to the undo stack.
      /// @param[in] aCmd [int32_t] The command associated with the undo operation.
      virtual void addElementsToUndo(ICwAPI3DElementIDList* aElementIdList, int32_t aCmd) = 0;

      /// @brief Performs an undo operation, reverting the last change made.
      virtual void makeUndo() = 0;

      /// @brief Performs a redo operation, reapplying the last change that was undone.
      virtual void makeRedo() = 0;

      /// @brief Splits the specified elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be split.
      virtual void splitElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the specified lines to be marking lines.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of lines to be set as marking lines.
      virtual void setLineToMarkingLine(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the specified lines to be normal lines.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of lines to be set as normal lines.
      virtual void setLineToNormalLine(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Creates an auto export solid from a standard element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be used in the auto export solid.
      /// @param[in] aOutputName [const @ref character*] The name of the output.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard element.
      /// @return [@ref elementID] The ID of the created auto export solid.
      virtual elementID createAutoExportSolidFromStandard(ICwAPI3DElementIDList* aElementIdList, const character* aOutputName, const character* aStandardElementName) = 0;

      /// @brief Sets the module properties for the provided elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to set the module properties for.
      /// @param[in] aProperties The module properties to be set.
      virtual void setElementModulePropertiesForElements(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DElementModuleProperties* aProperties) = 0;

      /// @brief Retrieves the module properties for a specific element.
      /// @param[in] aElementId [@ref elementID] The ID of the element.
      /// @return [@ref ICwAPI3DElementModuleProperties*] The module properties of the element.
      virtual ICwAPI3DElementModuleProperties* getElementModulePropertiesForElement(elementID aElementId) = 0;

      /// @brief Retrieves the type description of a specific element.
      /// @param[in] aElementId [@ref elementID] The ID of the element.
      /// @return [@ref ICwAPI3DString*] The type description of the element.
      virtual ICwAPI3DString* getElementTypeDescription(elementID aElementId) = 0;

      /// @brief Creates a text object with a specific font.
      /// @param[in] aText [const @ref character*] The text to be displayed in the text object.
      /// @param[in] aPosition [@ref vector3D] The position of the text object.
      /// @param[in] aXDirectionLocal [@ref vector3D] The X-axis direction of the text object.
      /// @param[in] aZDirectionLocal [@ref vector3D] The Z-axis direction of the text object.
      /// @param[in] aSize [double] The size of the text object.
      /// @param[in] aFontName [const @ref character*] The name of the font to be used in the text object.
      /// @return [@ref elementID] The ID of the created text object.
      /// @par Example:
      /// @code{.cpp}
      /// const character* textContent = L"Custom Text";
      /// vector3D textPosition{0.0, 0.0, 0.0};
      /// vector3D xDirection{1.0, 0.0, 0.0};  // Text direction
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Text orientation
      /// double textHeight = 150.0;
      /// const character* fontName = L"Arial";
      ///
      /// elementID textID = aFactory.getElementController()->createTextObjectWithFont(
      ///     textContent,
      ///     textPosition,
      ///     xDirection,
      ///     zDirection,
      ///     textHeight,
      ///     fontName
      /// );
      /// @endcode
      virtual elementID createTextObjectWithFont(const character* aText, vector3D aPosition, vector3D aXDirectionLocal, vector3D aZDirectionLocal, double aSize, const character* aFontName) = 0;

      /// @brief Retrieves the opening variant IDs of the provided elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to check for opening variants.
      /// @param[in] aOpeningType [int32_t] The type of opening to check for.
      /// @return [@ref ICwAPI3DElementIDList*] The list of opening variant IDs.
      virtual ICwAPI3DElementIDList* getOpeningVariantIDs(ICwAPI3DElementIDList* aElementIdList, int32_t aOpeningType) = 0;

      /// @brief Retrieves the parent container ID of a nested element.
      /// @param[in] aElementId [@ref elementID] The ID of the nested element.
      /// @return [@ref elementID] The ID of the parent container.
      virtual elementID getParentContainerId(elementID aElementId) = 0;

      /// @brief Retrieves the content elements of an export solid.
      /// @param[in] aElementId [@ref elementID] The ID of the export solid.
      /// @return [@ref ICwAPI3DElementIDList*] The list of content elements.
      virtual ICwAPI3DElementIDList* getExportSolidContentElements(elementID aElementId) = 0;

      /// @brief Retrieves the content elements of a container.
      /// @param[in] aElementId [@ref elementID] The ID of the container.
      /// @return [@ref ICwAPI3DElementIDList*] The list of content elements.
      virtual ICwAPI3DElementIDList* getContainerContentElements(elementID aElementId) = 0;

      /// @brief Applies a transformation to the provided elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to transform.
      /// @param[in] aOldPoint [@ref vector3D] The original point of the transformation.
      /// @param[in] aOldXDirectionLocal [@ref vector3D] The original X-axis direction.
      /// @param[in] aOldYDirectionLocal [@ref vector3D] The original Y-axis direction.
      /// @param[in] aNewPoint [@ref vector3D] The new point of the transformation.
      /// @param[in] aNewXDirectionLocal [@ref vector3D] The new X-axis direction.
      /// @param[in] aNewYDirectionLocal [@ref vector3D] The new Y-axis direction.
      virtual void applyTransformationCoordinate(ICwAPI3DElementIDList* aElementIdList, vector3D aOldPoint, vector3D aOldXDirectionLocal, vector3D aOldYDirectionLocal, vector3D aNewPoint, vector3D aNewXDirectionLocal, vector3D aNewYDirectionLocal) = 0;

      /// @brief Deletes the provided elements with undo functionality.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to delete.
      virtual void deleteElementsWithUndo(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Adds created elements to the undo stack.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements that were created.
      virtual void addCreatedElementsToUndo(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Adds modified elements to the undo stack.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements that were modified.
      virtual void addModifiedElementsToUndo(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Recreates elements based on the provided list.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be recreated.
      virtual void recreateElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Checks if two elements are in collision.
      /// @param[in] aFirstElementID [@ref elementID] The ID of the first element.
      /// @param[in] aSecondElementID [@ref elementID] The ID of the second element.
      /// @return [bool] True if the elements are in collision, false otherwise.
      virtual bool checkIfElementsAreInCollision(elementID aFirstElementID, elementID aSecondElementID) = 0;

      /// @brief Checks if two elements are in contact.
      /// @param[in] aFirstElementID [@ref elementID] The ID of the first element.
      /// @param[in] aSecondElementID [@ref elementID] The ID of the second element.
      /// @return [bool] True if the elements are in contact, false otherwise.
      virtual bool checkIfElementsAreInContact(elementID aFirstElementID, elementID aSecondElementID) = 0;

      /// @brief Creates a multi-wall structure.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be used in the multi-wall structure.
      virtual void createMultiWall(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Retrieves a list of user element IDs.
      /// @return [@ref ICwAPI3DElementIDList*] The list of user element IDs.
      virtual ICwAPI3DElementIDList* getUserElementIDs() = 0;

      /// @brief Retrieves the contact vertices between two elements.
      /// @param[in] aFirstID [@ref elementID] The ID of the first element.
      /// @param[in] aSecondID [@ref elementID] The ID of the second element.
      /// @return [@ref ICwAPI3DVertexList*] The list of contact vertices between the two elements.
      virtual ICwAPI3DVertexList* getElementContactVertices(elementID aFirstID, elementID aSecondID) = 0;

      /// @brief Retrieves the parent ID of a nested element.
      /// @param[in] aElementId [@ref elementID] The ID of the nested element.
      /// @return [@ref elementID] The ID of the parent element.
      virtual elementID getNestingParentId(elementID aElementId) = 0;

      /// @brief Retrieves a list of user element IDs that exist in the provided list.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to check for existence.
      /// @return [@ref ICwAPI3DElementIDList*] The list of existing user element IDs.
      virtual ICwAPI3DElementIDList* getUserElementIDsWithExisting(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Glides elements to a specified point.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList] The element list id to move.
      /// @param[in] aGlidePoint [@ref vector3D] The glide destination point.
      virtual void glideElements(ICwAPI3DElementIDList* aElementIdList, vector3D aGlidePoint) = 0;

      /// @brief Retrieves the contact facets between two elements.
      /// @param[in] aFirstID [@ref elementID] The ID of the first element.
      /// @param[in] aSecondID [@ref elementID] The ID of the second element.
      /// @return [@ref ICwAPI3DFacetList*] The list of contact facets between the two elements.
      virtual ICwAPI3DFacetList* getElementContactFacets(elementID aFirstID, elementID aSecondID) = 0;

      /// @brief Retrieves the raw interface vertices between two elements.
      /// @param[in] aFirstID [@ref elementID] The ID of the first element.
      /// @param[in] aSecondID [@ref elementID] The ID of the second element.
      /// @return [@ref ICwAPI3DVertexList*] The list of raw interface vertices between the two elements.
      virtual ICwAPI3DVertexList* getElementRawInterfaceVertices(elementID aFirstID, elementID aSecondID) = 0;

      /// @brief Cuts two elements with a miter joint.
      /// @param[in] aFirstID [@ref elementID] The ID of the first element.
      /// @param[in] aSecondID [@ref elementID] The ID of the second element.
      /// @return [bool] True if the operation was successful, false otherwise.
      virtual bool cutElementsWithMiter(elementID aFirstID, elementID aSecondID) = 0;

      /// @brief Cuts an element with a plane.
      /// @param[in] aElementId [@ref elementID] The ID of the element to be cut.
      /// @param[in] aCutPlaneNormalVector [@ref vector3D] The normal vector of the cutting plane.
      /// @param[in] aDistanceFromGlobalOrigin [double] The distance from the global origin to the cutting plane.
      /// @return [bool] True if the operation was successful, false otherwise.
      /// @par Example:
      /// @code{.cpp}
      /// double beamHeight = 240.0;
      ///
      /// vector3D origin{0.0, 0.0, 0.0};
      /// vector3D xDir{0.0, 0.0, 1.0};
      /// vector3D zDir{0.0, 1.0, 0.0};
      ///
      /// elementID beamID = aFactory.getElementController()->createRectangularBeamVectors(
      ///     120.0,
      ///     beamHeight,
      ///     3000.0,
      ///     origin,
      ///     xDir,
      ///     zDir
      /// );
      ///
      /// double angleRad = M_PI / 6.0;  // 30°
      /// vector3D planeNormal{0.0, -std::sin(angleRad), std::cos(angleRad)};
      /// planeNormal = planeNormal.normalized();
      ///
      /// vector3D planePoint{0.0, beamHeight * 0.5, 1500.0};
      /// double distance = planePoint.dot(planeNormal);
      ///
      /// bool result = aFactory.getElementController()->cutElementWithPlane(beamID, planeNormal, distance);
      /// @endcode
      virtual bool cutElementWithPlane(elementID aElementId, vector3D aCutPlaneNormalVector, double aDistanceFromGlobalOrigin) = 0;

      /// @brief Creates a circular MEP (Mechanical, Electrical, and Plumbing) element.
      /// @param[in] aDiameter [double] The diameter of the MEP element.
      /// @param[in] aPoints [@ref ICwAPI3DVertexList*] The points defining the path of the MEP element.
      /// @return [@ref elementID] The ID of the created MEP element.
      virtual elementID createCircularMEP(double aDiameter, ICwAPI3DVertexList* aPoints) = 0;

      /// @brief Creates a rectangular MEP (Mechanical, Electrical, and Plumbing) element.
      /// @param[in] aWidth [double] The width of the MEP element.
      /// @param[in] aDepth [double] The depth of the MEP element.
      /// @param[in] aPoints [@ref ICwAPI3DVertexList*] The points defining the path of the MEP element.
      /// @return [@ref elementID] The ID of the created MEP element.
      virtual elementID createRectangularMEP(double aWidth, double aDepth, ICwAPI3DVertexList* aPoints) = 0;

      /// @brief Slices an element with a plane.
      /// @param[in] aElementId [@ref elementID] The ID of the element to be sliced.
      /// @param[in] aCutPlaneNormalVector [@ref vector3D] The normal vector of the slicing plane.
      /// @param[in] aDistanceFromGlobalOrigin [double] The distance from the global origin to the slicing plane.
      /// @return [bool] True if the operation was successful, false otherwise.
      /// @par Example:
      /// @code{.cpp}
      /// const double panelWidth = 1200.0;
      /// const double panelThickness = 20.0;
      /// const double panelLength = 2400.0;
      ///
      /// // Create a panel to slice
      /// vector3D origin{0.0, 0.0, 0.0};
      /// vector3D xDir{1.0, 0.0, 0.0};
      /// vector3D zDir{0.0, 0.0, 1.0};
      ///
      /// elementID panelID = aFactory.getElementController()->createRectangularPanelVectors(
      ///     panelWidth,
      ///     panelThickness,
      ///     panelLength,
      ///     origin,
      ///     xDir,
      ///     zDir
      /// );
      ///
      /// // Define plane normal vector (45° in XY plane)
      /// const double angleRad = M_PI / 4.0;
      /// vector3D planeNormal{std::cos(angleRad), std::sin(angleRad), 0.0};
      /// planeNormal = planeNormal.normalized();
      ///
      /// // Calculate distance from origin to plane - slice through center of panel
      /// vector3D panelCenter{panelLength * 0.5, panelWidth * 0.5, 0.0};
      /// aFactory.getElementController()->createNode(panelCenter);  // Create a node at the center of the panel
      ///
      /// double distance = panelCenter.dot(planeNormal);
      ///
      /// // Verify plane equation: dot(point_on_plane, normal) = distance
      /// // Any point on the plane should satisfy this equation
      ///
      /// bool result = aFactory.getElementController()->sliceElementWithPlane(panelID, planeNormal, distance);
      ///
      /// // Note: sliceElementWithPlane keeps both parts as a joined element
      /// @endcode
      virtual bool sliceElementWithPlane(elementID aElementId, vector3D aCutPlaneNormalVector, double aDistanceFromGlobalOrigin) = 0;

      /// @brief Creates an auto container from a standard element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be used in the auto container.
      /// @param[in] aOutputName [const @ref character*] The name of the output.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard element.
      /// @return [@ref elementID] The ID of the created auto container.
      virtual elementID createAutoContainerFromStandard(ICwAPI3DElementIDList* aElementIdList, const character* aOutputName, const character* aStandardElementName) = 0;

      /// @brief Creates an auto export solid from a standard element with a reference.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be used in the auto export solid.
      /// @param[in] aOutputName [const @ref character*] The name of the output.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard element.
      /// @param[in] aReferenceID [const @ref character*] The ID of the reference element.
      /// @return [@ref elementID] The ID of the created auto export solid.
      virtual elementID createAutoExportSolidFromStandardWithReference(ICwAPI3DElementIDList* aElementIdList, const character* aOutputName, const character* aStandardElementName, elementID aReferenceID) = 0;

      /// @brief Creates an auto container from a standard element with a reference.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be used in the auto container.
      /// @param[in] aOutputName [const @ref character*] The name of the output.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard element.
      /// @param[in] aReferenceID [const @ref character*] The ID of the reference element.
      /// @return [@ref elementID] The ID of the created auto container.
      virtual elementID createAutoContainerFromStandardWithReference(ICwAPI3DElementIDList* aElementIdList, const character* aOutputName, const character* aStandardElementName, elementID aReferenceID) = 0;

      /// @brief Slices an element with a plane and returns the new elements.
      /// @param[in] aElementId [@ref elementID] The ID of the element to be sliced.
      /// @param[in] aCutPlaneNormalVector [@ref vector3D] The normal vector of the cutting plane.
      /// @param[in] aDistanceFromGlobalOrigin [double] The distance from the global origin to the cutting plane.
      /// @return [@ref ICwAPI3DElementIDList*] The list of IDs of the new elements created by the slicing operation.
      /// @par Example:
      /// @code{.cpp}
      /// double beamWidth = 150.0;
      /// double beamHeight = 300.0;
      /// double beamLength = 4000.0;
      ///
      /// // Create a beam to slice
      /// elementID beamID = aFactory.getElementController()->createRectangularBeamVectors(
      ///     beamWidth,
      ///     beamHeight,
      ///     beamLength,
      ///     vector3D{0.0, 0.0, 0.0},
      ///     vector3D{1.0, 0.0, 0.0},
      ///     vector3D{0.0, 0.0, 1.0}
      /// );
      ///
      /// // Define a vertical cutting plane through the middle of the beam
      /// vector3D planeNormal{1.0, 0.0, 0.0};  // Normal vector points along X-axis
      /// // A point on the plane (midpoint of the beam)
      /// vector3D planePoint{beamLength / 2.0, 0.0, 0.0};
      /// double distance = planePoint.dot(planeNormal);  // Distance from origin to plane
      ///
      /// // Verify with additional points on the plane
      /// vector3D testPoint{beamLength / 2.0, 100.0, 200.0};
      /// bool onPlane = std::abs(testPoint.dot(planeNormal) - distance) < 0.001;
      /// printf("Test point is on plane: %s\n", onPlane ? "true" : "false");
      ///
      /// // Slice the beam at the midpoint and get the resulting pieces
      /// ICwAPI3DElementIDList* newElementIDs = aFactory.getElementController()->sliceElementsWithPlaneAndGetNewElements(
      ///     beamID,
      ///     planeNormal,
      ///     distance
      /// );
      ///
      /// printf("Created %d new elements\n", newElementIDs->size());
      ///
      /// // Visualization: different pen colors for the new elements
      /// for (size_t i = 0; i < newElementIDs->size(); ++i)
      /// {
      ///     aFactory.getViewController()->setColor({newElementIDs->at(i)}, i + 5);
      /// }
      /// @endcode
      virtual ICwAPI3DElementIDList* sliceElementWithPlaneAndGetNewElements(elementID aElementId, vector3D aCutPlaneNormalVector, double aDistanceFromGlobalOrigin) = 0;

      /// @brief Creates a surface.
      /// @param[in] aSurfaceVertices [@ref ICwAPI3DVertexList*] The vertices of the surface.
      /// @return [@ref elementID] The ID of the created surface.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a rectangular surface
      /// ICwAPI3DVertexList vertices;
      ///
      /// vertices.append(vector3D{0.0, 0.0, 0.0});
      /// vertices.append(vector3D{1000.0, 0.0, 0.0});
      /// vertices.append(vector3D{1000.0, 800.0, 0.0});
      /// vertices.append(vector3D{0.0, 800.0, 0.0});
      ///
      /// elementID surfaceID = aFactory.getElementController()->createSurface(&vertices);
      /// @endcode
      virtual elementID createSurface(ICwAPI3DVertexList* aSurfaceVertices) = 0;

      /// @brief Converts circular/round beams into drillings.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be converted.
      virtual void convertCircularBeamToDrilling(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Retrieves a list of standard export solid names.
      /// @return [@ref ICwAPI3DStringList*] A list of names of standard export solids.
      virtual ICwAPI3DStringList* getStandardExportSolidList() = 0;

      /// @brief Retrieves a list of standard container names.
      /// @return [@ref ICwAPI3DStringList*] A list of names of standard containers.
      virtual ICwAPI3DStringList* getStandardContainerList() = 0;

      /// @brief Stretches the start face.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to strech.
      /// @param[in] aStretchVector [@ref vector3D] The stretch vector (direction and distance).
      virtual void stretchStartFace(ICwAPI3DElementIDList* aElementIdList, vector3D aStretchVector) = 0;

      /// @brief Stretches the end face.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to strech.
      /// @param[in] aStretchVector [@ref vector3D] The stretch vector (direction and distance).
      virtual void stretchEndFace(ICwAPI3DElementIDList* aElementIdList, vector3D aStretchVector) = 0;

      /// @brief Retrieves a list of variant sibling element IDs.
      /// @param[in] aElementId [@ref elementID] The ID of the element to retrieve variant siblings for.
      /// @return [@ref ICwAPI3DElementIDList*] A list of IDs of the variant sibling elements.
      virtual ICwAPI3DElementIDList* getVariantSiblingElementIDs(elementID aElementId) = 0;

      /// @brief Sets the contents of an export solid.
      /// @param[in] aExportSolidID [@ref elementID] The ID of the export solid to set the contents for.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element IDs to set as the contents of the export solid.
      virtual void setExportSolidContents(elementID aExportSolidID, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the contents of a container.
      /// @param[in] aContainerID [@ref elementID] The ID of the container to set the contents for.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element IDs to set as the contents of the container.
      virtual void setContainerContents(elementID aContainerID, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the opening angle for parent opening variants.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element IDs to set the opening angle for.
      /// @param[in] aAngle [double] The opening angle to set.
      virtual void setParentOpeningVariantsOpeningAngle(ICwAPI3DElementIDList* aElementIdList, double aAngle) = 0;

      /// @brief Creates a circular axis using points.
      /// @param[in] aDiameter [double] The diameter of the circular axis.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @return [@ref elementID] The ID of the created circular axis.
      /// @par Example :
      /// @code{.cpp}
      /// double axisDiameter = 50.0;
      /// vector3D axisStartPt{100.0, 100.0, 0.0};
      /// vector3D axisEndPt{100.0, 100.0, 300.0};
      /// elementID circularAxisID = aFactory.getElementController()->createCircularAxisPoints(axisDiameter, axisStartPt, axisEndPt);
      /// @endcode
      virtual elementID createCircularAxisPoints(double aDiameter, vector3D aFirstPoint, vector3D aSecondPoint) = 0;

      /// @brief Creates a circular axis using vectors.
      /// @param[in] aDiameter [double] The diameter of the circular axis.
      /// @param[in] aLength [double] The length of the circular axis.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @return [@ref elementID] The ID of the created circular axis.
      /// @par Example :
      /// @code{.cpp}
      /// double axisDiameter = 60.0;
      /// double axisLength = 400.0;
      /// vector3D axisStartPt{200.0, 200.0, 200.0};
      /// vector3D axisDirection{0.0, 1.0, 0.0};
      /// elementID circularAxisID = aFactory.getElementController()->createCircularAxisVector(axisDiameter, axisLength, axisStartPt, axisDirection);
      /// @endcode
      virtual elementID createCircularAxisVector(double aDiameter, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocal) = 0;

      /// @brief Converts elements to auxiliary elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be converted.
      virtual void convertElementsToAuxiliaryElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Retrieves a list of elements in contact with a specific element.
      /// @param[in] aElement [@ref elementID] The ID of the element to check for contact.
      /// @return [@ref ICwAPI3DElementIDList*] The list of elements in contact with the specified element.
      virtual ICwAPI3DElementIDList* getElementsInContact(elementID aElement) = 0;

      /// @brief Retrieves the facets of elements within a lasso selection.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to check for facets within the lasso selection.
      /// @return [@ref ICwAPI3DFacetList*] The list of facets within the lasso selection.
      virtual ICwAPI3DFacetList* getFacetsWithLasso(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Cuts elements with overmeasure.
      /// @param[in] aHardElements [@ref ICwAPI3DElementIDList*] The list of "hard" elements.
      /// @param[in] aSoftElements [@ref ICwAPI3DElementIDList*] The list of "soft" elements.
      virtual void cutElementsWithOvermeasure(ICwAPI3DElementIDList* aHardElements, ICwAPI3DElementIDList* aSoftElements) = 0;

      /// @brief Retrieves the edge selection of the provided elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to retrieve the edge selection from.
      /// @return [@ref ICwAPI3DEdgeList*] The list of edges selected.
      virtual ICwAPI3DEdgeList* getEdgeSelection(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Creates a polygon panel.
      /// @param[in] aPolygonVertices The vertices of the polygon.
      /// @param[in] aThickness [double] The thickness of the panel.
      /// @param[in] aXDirectionLocal [@ref vector3D] The X-axis direction of the panel.
      /// @param[in] aZDirectionLocal [@ref vector3D] The Z-axis direction of the panel.
      /// @return [@ref elementID] The ID of the created polygon panel.
      /// @par Example :
      /// @code{.cpp}
      /// // Create a hexagonal panel
      /// ICwAPI3DVertexList* vertices = aFactory.createVertexList();
      /// double radius = 500.0;
      /// int sides = 6;
      /// for (int i = 0; i < sides; ++i)
      /// {
      ///     double angle = 2 * M_PI * i / sides;
      ///     vertices->append(vector3D{radius * std::cos(angle), radius * std::sin(angle), 0.0});
      /// }
      /// vertices->append(vertices->at(0));  // Close the polygon
      /// double panelThickness = 20.0;
      /// vector3D extrusionVector{0.0, 0.0, 1.0};  // Normal direction
      /// vector3D zVector{1.0, 0.0, 0.0};  // Orientation vector
      /// elementID polygonPanelID = aFactory.getElementController()->createPolygonPanel(vertices, panelThickness, extrusionVector, zVector);
      /// @endcode
      virtual elementID createPolygonPanel(ICwAPI3DVertexList* aPolygonVertices, double aThickness, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Moves elements by mirroring them across a plane.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to move.
      /// @param[in] aPlane [@ref vector3D] The plane to mirror the elements across.
      /// @param[in] aPlaneDistance [double] The distance from the plane to move the elements.
      virtual void mirrorMoveElements(ICwAPI3DElementIDList* aElementIdList, vector3D aPlane, double aPlaneDistance) = 0;

      /// @brief Copies elements by mirroring them across a plane.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to copy.
      /// @param[in] aPlane [@ref vector3D] The plane to mirror the elements across.
      /// @param[in] aPlaneDistance [double] The distance from the plane to copy the elements.
      /// @return [@ref ICwAPI3DElementIDList*] The list of IDs of the copied elements.
      virtual ICwAPI3DElementIDList* mirrorCopyElements(ICwAPI3DElementIDList* aElementIdList, vector3D aPlane, double aPlaneDistance) = 0;

      /// @brief Sets the Cadwork Guid of an element to NULL.
      /// @param[in] aElementId [@ref elementID] The id of the element to reset.
      virtual void resetElementCadworkGuid(elementID aElementId) = 0;

      /// @brief Retrieves a list of standard beam names.
      /// @return [@ref ICwAPI3DStringList*] A list of names of standard beams.
      virtual ICwAPI3DStringList* getStandardBeamList() = 0;

      /// @brief Retrieves a list of standard panel names.
      /// @return [@ref ICwAPI3DStringList*] A list of names of standard panels.
      virtual ICwAPI3DStringList* getStandardPanelList() = 0;

      /// @brief Creates a standard beam using points.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard beam.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @param[in] aThirdPoint [@ref vector3D] The third point.
      /// @return [@ref elementID] The ID of the created standard beam.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a standard beam from the library using 3 points
      /// const character* stdBeamName = L"Standard-Timber-120x240";  // Name from standard elements library
      ///
      /// vector3D beamStartPt{0.0, 0.0, 0.0};
      /// vector3D beamEndPt{0.0, 0.0, 3000.0};
      ///
      /// vector3D lengthVector = (beamEndPt - beamStartPt).normalized();
      /// vector3D refVector{1.0, 0.0, 0.0};
      /// vector3D orientationVector = lengthVector.cross(refVector).normalized();
      ///
      /// vector3D orientationPt = beamStartPt + orientationVector;
      ///
      /// elementID stdBeamID = aFactory.getElementController()->createStandardBeamPoints(
      ///     stdBeamName,
      ///     beamStartPt,
      ///     beamEndPt,
      ///     orientationPt
      /// );
      /// @endcode
      virtual elementID createStandardBeamPoints(const character* aStandardElementName, vector3D aFirstPoint, vector3D aSecondPoint, vector3D aThirdPoint) = 0;

      /// @brief Creates a standard beam using vectors.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard beam.
      /// @param[in] aLength [double] The length of the beam.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @param[in] aZDirectionLocal [@ref vector3D] The direction of the Z-axis.
      /// @return [@ref elementID] The ID of the created standard beam.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a standard beam from the library using vectors
      /// const character* stdBeamName = L"Standard-Timber-100x100";  // Name from standard elements library
      ///
      /// double beamLength = 2500.0;
      /// vector3D originPoint{100.0, 100.0, 100.0};
      /// vector3D xDirection{1.0, 0.0, 0.0};  // Direction along length
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Orientation vector
      ///
      /// elementID stdBeamID = aFactory.getElementController()->createStandardBeamVectors(
      ///     stdBeamName,
      ///     beamLength,
      ///     originPoint,
      ///     xDirection,
      ///     zDirection
      /// );
      /// @endcode
      virtual elementID createStandardBeamVectors(const character* aStandardElementName, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Creates a standard panel using points.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard panel.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @param[in] aThirdPoint [@ref vector3D] The third point.
      /// @return [@ref elementID] The ID of the created standard panel.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a standard panel from the library using 3 points
      /// const character* stdPanelName = L"Standard-Panel-27mm";  // Name from standard elements library
      ///
      /// vector3D panelCornerPt{0.0, 0.0, 0.0};
      /// vector3D panelWidthPt{1200.0, 0.0, 0.0};
      ///
      /// // Calculate normal point for panel orientation (assuming Z is up)
      /// vector3D panelNormal{0.0, 0.0, 1.0};
      /// vector3D orientationPt = panelCornerPt + panelNormal;
      ///
      /// elementID stdPanelID = aFactory.getElementController()->createStandardPanelPoints(
      ///     stdPanelName,
      ///     panelCornerPt,
      ///     panelWidthPt,
      ///     orientationPt
      /// );
      /// @endcode
      virtual elementID createStandardPanelPoints(const character* aStandardElementName, vector3D aFirstPoint, vector3D aSecondPoint, vector3D aThirdPoint) = 0;

      /// @brief Creates a standard panel using vectors.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard panel.
      /// @param[in] aLength [double] The length of the panel.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @param[in] aZDirectionLocal [@ref vector3D] The direction of the Z-axis.
      /// @return [@ref elementID] The ID of the created standard panel.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a standard panel from the library using vectors
      /// const character* stdPanelName = L"Standard-Panel-20mm";  // Name from standard elements library
      ///
      /// double panelLength = 2400.0;
      /// vector3D originPoint{0.0, 0.0, 0.0};
      /// vector3D xDirection{1.0, 0.0, 0.0};  // Direction along length
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Panel normal direction
      ///
      /// elementID stdPanelID = aFactory.getElementController()->createStandardPanelVectors(
      ///     stdPanelName,
      ///     panelLength,
      ///     originPoint,
      ///     xDirection,
      ///     zDirection
      /// );
      /// @endcode
      virtual elementID createStandardPanelVectors(const character* aStandardElementName, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocalaXL, vector3D aZDirectionLocal) = 0;

      /// @brief Creates a standard steel element using points.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard steel element.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @param[in] aThirdPoint [@ref vector3D] The third point.
      /// @return [@ref elementID] The ID of the created standard steel element.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a standard steel profile using start and end points
      /// const character* stdSteelName = L"IPE 200";  // Name of standard steel profile from library
      ///
      /// vector3D steelStartPt{0.0, 0.0, 500.0};
      /// vector3D steelEndPt{3000.0, 0.0, 500.0};
      ///
      /// vector3D lengthVector = (steelEndPt - steelStartPt).normalized();
      /// vector3D upVector{0.0, 0.0, 1.0};
      /// vector3D sideVector = lengthVector.cross(upVector).normalized();
      ///
      /// vector3D orientationPt = steelStartPt + upVector;
      ///
      /// elementID steelID = aFactory.getElementController()->createStandardSteelPoints(
      ///     stdSteelName,
      ///     steelStartPt,
      ///     steelEndPt,
      ///     orientationPt
      /// );
      /// @endcode
      virtual elementID createStandardSteelPoints(const character* aStandardElementName, vector3D aFirstPoint, vector3D aSecondPoint, vector3D aThirdPoint) = 0;

      /// @brief Creates a standard steel element using vectors.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard steel element.
      /// @param[in] aLength [double] The length of the steel element.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @param[in] aZDirectionLocal [@ref vector3D] The direction of the Z-axis.
      /// @return [@ref elementID] The ID of the created standard steel element.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a standard steel profile using length and direction vectors
      /// const character* stdSteelName = L"HEA 220";  // Name of standard steel profile from library
      ///
      /// double steelLength = 4500.0;
      /// vector3D originPoint{200.0, 0.0, 200.0};
      /// vector3D xDirection{0.0, 1.0, 0.0};  // Direction along Y axis
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Up direction
      ///
      /// elementID steelID = aFactory.getElementController()->createStandardSteelVectors(
      ///     stdSteelName,
      ///     steelLength,
      ///     originPoint,
      ///     xDirection,
      ///     zDirection
      /// );
      /// @endcode
      virtual elementID createStandardSteelVectors(const character* aStandardElementName, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Moves an element with undo functionality.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to move.
      /// @param[in] aMoveVector [@ref vector3D] The vector by which to move the elements.
      virtual void moveElementWithUndo(ICwAPI3DElementIDList* aElementIdList, vector3D aMoveVector) = 0;

      /// @brief Creates a linear optimization.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be optimized.
      /// @param[in] aOptimizationNumber [uint32_t] The optimization number, nested parent element id.
      /// @param[in] aTotalLength [double] The total length for the optimization.
      /// @param[in] aStartCut [double] The start cut for the optimization.
      /// @param[in] aEndCut [double] The end cut for the optimization.
      /// @param[in] aSawKerf [double] The saw kerf for the optimization.
      /// @param[in] aIsProductionList [bool] A flag indicating if this is a production list.
      /// @return [@ref elementID] The ID of the created linear optimization.
      virtual elementID createLinearOptimization(ICwAPI3DElementIDList* aElementIdList, uint32_t aOptimizationNumber, double aTotalLength, double aStartCut, double aEndCut, double aSawKerf, bool aIsProductionList) = 0;

      /// @brief Checks for duplicate elements in the provided list.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to check for duplicates.
      /// @return [@ref ICwAPI3DElementIDList*] The list of duplicate elements.
      virtual ICwAPI3DElementIDList* checkElementDuplicates(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Creates a normal axis using points.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @return [@ref elementID] The ID of the created normal axis.
      /// @par Example :
      /// @code{.cpp}
      /// vector3D axisStartPt{0.0, 0.0, 0.0};
      /// vector3D axisEndPt{0.0, 0.0, 2000.0};
      /// elementID axisID = aFactory.getElementController()->createNormalAxisPoints(axisStartPt, axisEndPt);
      /// @endcode
      virtual elementID createNormalAxisPoints(vector3D aFirstPoint, vector3D aSecondPoint) = 0;

      /// @brief Creates a normal axis using vectors.
      /// @param[in] aLength [double] The length of the axis.
      /// @param[in] aAxisStartingPoint [@ref vector3D] The starting point of the axis.
      /// @param[in] aAxisDirection [@ref vector3D] The direction of the axis.
      /// @return [@ref elementID] The ID of the created normal axis.
      /// @par Example :
      /// @code{.cpp}
      /// double axisLength = 1500.0;
      /// vector3D axisStartPt{200.0, 200.0, 0.0};
      /// vector3D axisDirection{1.0, 0.0, 0.0};  // Direction along X axis
      /// elementID axisID = aFactory.getElementController()->createNormalAxisVectors(axisLength, axisStartPt, axisDirection);
      /// @endcode
      virtual elementID createNormalAxisVectors(double aLength, vector3D aAxisStartingPoint, vector3D aAxisDirection) = 0;

      /// @brief Converts bolts to standard connectors.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of bolts to be converted.
      /// @param[in] aStandardElementName [const @ref character*] The name of the standard element.
      virtual void convertBoltToStandardConnector(ICwAPI3DElementIDList* aElementIdList, const character* aStandardElementName) = 0;

      /// @brief Retrieves the reference element for a given element.
      /// @param[in] aElement [@ref elementID] The ID of the element for which to retrieve the reference.
      /// @return [@ref elementID] The ID of the reference element.
      virtual elementID getReferenceElement(elementID aElement) = 0;

      /// @brief Extrudes a surface to create an auxiliary element.
      /// @param[in] aSurface [@ref elementID] The ID of the surface to be extruded.
      /// @param[in] aExtrudeDirection [@ref vector3D] The vector along which to extrude the surface.
      /// @return [@ref elementID] The ID of the created auxiliary element.
      virtual elementID extrudeSurfaceToAuxiliaryVector(elementID aSurface, vector3D aExtrudeDirection) = 0;

      /// @brief Extrudes a surface to create a panel element.
      /// @param[in] aSurface [@ref elementID] The ID of the surface to be extruded.
      /// @param[in] aExtrudeDirection [@ref vector3D] The vector along which to extrude the surface.
      /// @return [@ref elementID] The ID of the created panel element.
      virtual elementID extrudeSurfaceToPanelVector(elementID aSurface, vector3D aExtrudeDirection) = 0;

      /// @brief Extrudes a surface to create a beam element.
      /// @param[in] aSurface [@ref elementID] The ID of the surface to be extruded.
      /// @param[in] aExtrudeDirection [@ref vector3D] The vector along which to extrude the surface.
      /// @return [@ref elementID] The ID of the created beam element.
      virtual elementID extrudeSurfaceToBeamVector(elementID aSurface, vector3D aExtrudeDirection) = 0;

      /// @brief Checks if a point is inside an element.
      /// @param[in] aPoint [@ref vector3D] The point to check.
      /// @param[in] aElementID [@ref elementID] The ID of the element to check against.
      /// @return [bool] True if the point is inside the element, false otherwise.
      virtual bool checkIfPointIsInElement(vector3D aPoint, elementID aElementID) = 0;

      /// @brief Checks if a point is on an element.
      /// @param[in] aPoint [@ref vector3D] The point to check.
      /// @param[in] aElementID [@ref elementID] The ID of the element to check against.
      /// @return [bool] True if the point is on the element, false otherwise.
      virtual bool checkIfPointIsOnElement(vector3D aPoint, elementID aElementID) = 0;

      /// @brief Converts a container to a container block.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be converted.
      virtual void convertContainerToContainerBlock(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Creates a local bounding box for a list of elements relative to a reference element.
      /// @param[in] aReferenceElementId [@ref elementID] The ID of the reference element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements for which to create the bounding box.
      /// @return [@ref elementID] The ID of the created bounding box.
      virtual elementID createBoundingBoxLocal(elementID aReferenceElementId, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Creates a global bounding box for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements for which to create the bounding box.
      /// @return [@ref elementID] The ID of the created bounding box.
      virtual elementID createBoundingBoxGlobal(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Cuts a log corner joint.
      /// @param[in] aSettingsName [const @ref character*] The name of the settings to be used for the cut.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be cut.
      virtual void cutLogCornerJoint(const character* aSettingsName, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Converts auxiliary elements to panels.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of auxiliary elements to be converted.
      virtual void convertAuxiliaryToPanel(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Converts auxiliary elements to beams.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of auxiliary elements to be converted.
      virtual void convertAuxiliaryToBeam(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Automatically sets the rough volume situation for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements for which to set the rough volume situation.
      virtual void autoSetRoughVolumeSituation(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Manually sets the rough volume situation for a cover element.
      /// @param[in] aCover [@ref elementID] The ID of the cover element.
      /// @param[in] aAddPartner [@ref ICwAPI3DElementIDList*] The list of partner elements to be added.
      /// @param[in] aRemovePartner [@ref ICwAPI3DElementIDList*] The list of partner elements to be removed.
      virtual void roughVolumeSituationManual(elementID aCover, ICwAPI3DElementIDList* aAddPartner, ICwAPI3DElementIDList* aRemovePartner) = 0;

      /// @brief Automatically sets the parts situation for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements for which to set the parts situation.
      virtual void autoSetPartsSituation(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Manually sets the parts situation for a cover element.
      /// @param[in] aCover [@ref elementID] The ID of the cover element.
      /// @param[in] aAddChilds [@ref ICwAPI3DElementIDList*] The list of child elements to be added.
      /// @param[in] aRemoveChilds [@ref ICwAPI3DElementIDList*] The list of child elements to be removed.
      virtual void partsSituationManual(elementID aCover, ICwAPI3DElementIDList* aAddChilds, ICwAPI3DElementIDList* aRemoveChilds) = 0;

      /// @brief Activates the rough volume situation for elements without a situation.
      /// @return [@ref ICwAPI3DElementIDList*] The list of IDs of the elements for which the rough volume situation was activated.
      virtual ICwAPI3DElementIDList* activateRvWithoutSituation() = 0;

      /// @brief Activates the parts situation for elements without a situation.
      /// @return [@ref ICwAPI3DElementIDList*] The list of IDs of the elements for which the parts situation was activated.
      virtual ICwAPI3DElementIDList* activatePartsWithoutSituation() = 0;

      /// @brief Adds elements to a detail.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be added to the detail.
      /// @param[in] aDetail [int32_t] The ID of the detail.
      virtual void addElementToDetail(ICwAPI3DElementIDList* aElementIdList, int32_t aDetail) = 0;

      /// @brief Retrieves the local bounding box vertices for a list of elements relative to a reference element.
      /// @param[in] aReferenceElementId [@ref elementID] The ID of the reference element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements for which to retrieve the bounding box vertices.
      /// @return [@ref ICwAPI3DVertexList*] A list of vertices representing the local bounding box of the elements.
      virtual ICwAPI3DVertexList* getBoundingBoxVerticesLocal(elementID aReferenceElementId, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Retrieves the global bounding box vertices for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements for which to retrieve the bounding box vertices.
      /// @return [@ref ICwAPI3DVertexList*] A list of vertices representing the global bounding box of the elements.
      virtual ICwAPI3DVertexList* getBoundingBoxVerticesGlobal(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Retrieves a list of all raw parts in a nesting operation.
      /// @return [@ref ICwAPI3DElementIDList*] A list of IDs of all raw parts in a nesting operation.
      virtual ICwAPI3DElementIDList* getAllNestingRawParts() = 0;

      /// @brief Subtracts a list of "soft" elements from a list of "hard" elements with undo functionality.
      /// @param[in] aHardElements [@ref ICwAPI3DElementIDList*] The list of "hard" elements.
      /// @param[in] aSoftElements [@ref ICwAPI3DElementIDList*] The list of "soft" elements.
      /// @param[in] aWithUndo [bool] Indicate whether the operation should be added to the undo stack.
      /// @return [@ref ICwAPI3DElementIDList*] The list of elements resulting from the subtraction.
      virtual ICwAPI3DElementIDList* subtractElementsWithUndo(ICwAPI3DElementIDList* aHardElements, ICwAPI3DElementIDList* aSoftElements, bool aWithUndo) = 0;

      /// @brief Starts the calculation of the element module for a list of covers silently (without user interaction).
      /// @param[in] aCoverIdList [@ref ICwAPI3DElementIDList*] The list of covers for which to start the element module calculation.
      virtual void startElementModuleCalculationSilently(ICwAPI3DElementIDList* aCoverIdList) = 0;

      /// @brief Retrieves the IDs of elements that have been joined with the specified element.
      /// @param[in] aElementID [@ref elementID] The ID of the element.
      /// @return [@ref ICwAPI3DElementIDList*] A list of IDs of the joined elements.
      virtual ICwAPI3DElementIDList* getJoinedElements(elementID aElementID) = 0;

      /// @brief Replaces physical drillings with drilling axes based on diameter range.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be processed.
      /// @param[in] aMininumDiameter [double] The minimum diameter of the drilling.
      /// @param[in] aMaximumDiameter [double] The maximum diameter of the drilling.
      /// @return [@ref ICwAPI3DElementIDList*] The list of IDs of the elements where the replacement was successful.
      virtual ICwAPI3DElementIDList* replacePhysicalDrillingsWithDrillingAxes(ICwAPI3DElementIDList* aElementIdList, double aMininumDiameter, double aMaximumDiameter) = 0;

      /// @brief Cuts an element with a processing group.
      /// @param[in] aSoftElement [@ref elementID] The ID of the element to be cut.
      /// @param[in] aProcessing [@ref elementID] The ID of the processing group.
      virtual void cutElementWithProcessingGroup(elementID aSoftElement, elementID aProcessing) = 0;

      /// @brief Creates a text object with specific options.
      /// @param[in] aPosition The position of the text object.
      /// @param[in] aXDirectionLocal [@ref vector3D] The X-axis direction of the text object.
      /// @param[in] aZDirectionLocal [@ref vector3D] The Z-axis direction of the text object.
      /// @param[in] aTextOptions [@ref ICwAPI3DTextObjectOptions*] The options for the text object.
      /// @return [@ref elementID] The ID of the created text object.
      /// @par Example:
      /// @code{.cpp}
      /// vector3D textPosition{0.0, 0.0, 0.0};
      /// vector3D xDirection{1.0, 0.0, 0.0};  // Text direction
      /// vector3D zDirection{0.0, 0.0, 1.0};  // Text orientation
      ///
      /// ICwAPI3DTextObjectOptions options;
      /// options.setText(L"Advanced Text");
      /// options.setHeight(200.0);
      /// options.setFontName(L"Verdana");
      /// options.setBold(true);
      ///
      /// elementID textID = aFactory.getElementController()->createTextObjectWithOptions(
      ///     textPosition,
      ///     xDirection,
      ///     zDirection,
      ///     &options
      /// );
      /// @endcode
      virtual elementID createTextObjectWithOptions(vector3D aPosition, vector3D aXDirectionLocal, vector3D aZDirectionLocal, ICwAPI3DTextObjectOptions* aTextOptions) = 0;

      /// @brief Creates a standard element from GUID points.
      /// @param[in] aGuid [const @ref character*] The GUID of the standard element.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @param[in] aThirdPoint [@ref vector3D] The third point.
      /// @return [@ref elementID] The ID of the created standard element.
      virtual elementID createStandardElementFromGuidPoints(const character* aGuid, vector3D aFirstPoint, vector3D aSecondPoint, vector3D aThirdPoint) = 0;

      /// @brief Creates a standard element from GUID vectors.
      /// @param[in] aGuid [const @ref character*] The GUID of the standard element.
      /// @param[in] aLength [double] The length of the standard element.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @param[in] aZDirectionLocal [@ref vector3D] The direction of the Z-axis.
      /// @return [@ref elementID] The ID of the created standard element.
      virtual elementID createStandardElementFromGuidVectors(const character* aGuid, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Fillets an edge of an element.
      /// @param[in] aElementID [@ref elementID] The ID of the element.
      /// @param[in] aEdgeStart [@ref vector3D] The starting point of the edge.
      /// @param[in] aEdgeEnd [@ref vector3D] The ending point of the edge.
      /// @param[in] aRadius [double] The radius of the fillet.
      virtual void filletEdge(elementID aElementID, vector3D aEdgeStart, vector3D aEdgeEnd, double aRadius) = 0;

      /// @brief Chamfers an edge of an element.
      /// @param[in] aElementID [@ref elementID] The ID of the element.
      /// @param[in] aEdgeStart [@ref vector3D] The starting point of the edge.
      /// @param[in] aEdgeEnd [@ref vector3D] The ending point of the edge.
      /// @param[in] aLength [double] The length of the chamfer.
      virtual void chamferEdge(elementID aElementID, vector3D aEdgeStart, vector3D aEdgeEnd, double aLength) = 0;

      /// @brief Converts drillings to circular beams.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be converted.
      virtual void convertDrillingToCircularBeam(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Converts lines to surfaces.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be converted.
      /// @return [@ref ICwAPI3DElementIDList*] The list of IDs of the created surfaces.
      virtual ICwAPI3DElementIDList* convertLinesToSurfaces(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Converts surfaces to a volume.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be converted.
      /// @return [@ref elementID] The ID of the created volume.
      virtual elementID convertSurfacesToVolume(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Cuts a corner-lap joint with specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be cut.
      /// @param[in] aDepth [double] The vertical depth of the lap cut applied to each element.
      /// @param[in] aClearanceBase [double] Additional clearance applied at the bottom (base) of the lap cut for fitting tolerance.
      /// @param[in] aClearanceSide [double] Additional clearance on the side faces of the cut to prevent tight joints or interference.
      /// @param[in] aBackcut [double] A small offset or undercut applied to the outer face of the cut to improve fit or reduce friction during assembly.
      /// @param[in] aDrillingCount [uint64_t] The number of drill holes to create for fasteners (e.g., bolts or dowels).
      /// @param[in] aDrillingDiameter [double] The diameter of each drill hole.
      /// @param[in] aDrillingTolerance [double] The tolerance applied to the hole size for bolt head clearance or easier insertion.
      virtual void cutCornerLap(ICwAPI3DElementIDList* aElementIdList, double aDepth, double aClearanceBase, double aClearanceSide, double aBackcut, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Cuts a T-lap joint with specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be cut.
      /// @param[in] aDepth [double] The vertical depth of the cut where the intersecting element will be placed.
      /// @param[in] aClearanceBase [double] Additional clearance at the base (bottom) of the cut to ensure a proper fit.
      /// @param[in] aClearanceSide [double] Additional clearance on the side faces of the cut to avoid tight fitting.
      /// @param[in] aBackcut [double] A small offset or undercut applied inward to improve fitting during assembly.
      /// @param[in] aDrillingCount [uint64_t] The number of drill holes to create for fasteners (e.g., bolts or dowels).
      /// @param[in] aDrillingDiameter [double] The diameter of each drill hole.
      /// @param[in] aDrillingTolerance [double] The tolerance applied to the hole size for bolt head clearance or easier insertion.
      virtual void cutTLap(ICwAPI3DElementIDList* aElementIdList, double aDepth, double aClearanceBase, double aClearanceSide, double aBackcut, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Cuts a cross-lap joint with specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be cut.
      /// @param[in] aDepth [double] The vertical depth of the cross-lap cut, typically half the thickness of the material.
      /// @param[in] aClearanceBase [double] Additional clearance at the bottom of the cut to ensure a proper fit between intersecting elements.
      /// @param[in] aClearanceSide [double] Additional clearance on the side walls of the cut to prevent tight fits or friction.
      /// @param[in] aDrillingCount [uint64_t] The number of drill holes to create for fasteners (e.g., bolts or dowels).
      /// @param[in] aDrillingDiameter [double] The diameter of each drill hole.
      /// @param[in] aDrillingTolerance [double] The tolerance applied to the hole size for bolt head clearance or easier insertion.
      virtual void cutCrossLap(ICwAPI3DElementIDList* aElementIdList, double aDepth, double aClearanceBase, double aClearanceSide, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Gets the cutting bodies of all processes (and deletes processes), like Ctrl+D Action
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The elements to process.
      /// @param[in] aKeepCuttingElementsOnly [bool] True if the return element id contains only cutting elements, false otherwise.
      /// @return [@ref ICwAPI3DElementIDList*] The id list of all removed geometry, cuttings bodies.
      virtual ICwAPI3DElementIDList* deleteProcessesKeepCuttingBodies(ICwAPI3DElementIDList* aElementIdList, bool aKeepCuttingElementsOnly) = 0;

      /// @brief Cuts a double tenon joint with specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be cut.
      /// @param[in] aDepth1 [double] The depth of the first tenon shoulder.
      /// @param[in] aDepth2 [double] The depth of the second tenon shoulder.
      /// @param[in] aClearance [double] Additional clearance applied around the tenons for fitting tolerance during assembly.
      /// @param[in] aBackcut [double] A small undercut or inward offset to ensure the tenons fit without surface interference.
      /// @param[in] aDrillingCount [uint64_t] The number of drill holes to create for fasteners (e.g., bolts or dowels).
      /// @param[in] aDrillingDiameter [double] The diameter of each drill hole.
      /// @param[in] aDrillingTolerance [double] The tolerance applied to the hole size for bolt head clearance or easier insertion.
      virtual void cutDoubleTenon(ICwAPI3DElementIDList* aElementIdList, double aDepth1, double aDepth2, double aClearance, double aBackcut, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Get the coordinate system of nesting child
      /// @param[in] aNestingParentId [@ref elementID] The nesting parent id.
      /// @param[in] aNestingChildId [@ref elementID] The nesting child id.
      /// @return [@ref ICwAPI3DCoordinateSystemData*] A global element coordinate-system of the nested child element consisting of a Point1, a Point2 and a Point3. You can get the local placement by subtracting the parent coordinate - system with child coordinate - system.
      virtual ICwAPI3DCoordinateSystemData* getCoordinateSystemDataNestingChild(elementID aNestingParentId, elementID aNestingChildId) = 0;

      /// @brief Cuts a half-lap joint with specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be cut.
      /// @param[in] aLength [double] The length of the half-lap joint along the main axis of the elements.
      /// @param[in] aClearanceLength [double] Additional clearance along the length of the cut to ensure proper fitting.
      /// @param[in] aClearanceDepth [double] Additional clearance in the depth direction to avoid tight joints or surface interference.
      /// @param[in] aDrillingCount [uint64_t] The number of drill holes to create for fasteners (e.g., bolts or dowels).
      /// @param[in] aDrillingDiameter [double] The diameter of each drill hole.
      /// @param[in] aDrillingTolerance [double] The tolerance applied to the hole size for bolt head clearance or easier insertion.
      virtual void cutHalfLap(ICwAPI3DElementIDList* aElementIdList, double aLength, double aClearanceLength, double aClearanceDepth, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Cuts a simple scarf joint with specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be cut.
      /// @param[in] aLength [double] The distance between the two starting points of the cut.
      /// @param[in] aDepth [double] The vertical depth of the initial straight cut before the diagonal cut begins.
      /// @param[in] aClearanceLength [double] The additional length clearance applied along the initial (depth) cut.
      /// @param[in] aClearanceDepth [double] The additional depth clearance applied along the diagonal cut.
      /// @param[in] aDrillingCount [uint64_t] The number of drill holes to be created for fasteners (e.g., bolts or dowels).
      /// @param[in] aDrillingDiameter [double] The diameter of each drill hole.
      /// @param[in] aDrillingTolerance [double] The tolerance applied to the hole size, typically for fitting the bolt head or allowing easier assembly.
      virtual void cutSimpleScarf(ICwAPI3DElementIDList* aElementIdList, double aLength, double aDepth, double aClearanceLength, double aClearanceDepth, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Cuts a diagonal cut joint with specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be cut.
      /// @param[in] aLength [double] The total length of the diagonal cut applied along the element.
      /// @param[in] aClearanceLength [double] Additional clearance along the cut length to ensure proper fitting between elements.
      /// @param[in] aDrillingCount [uint64_t] The number of drill holes to create for fasteners (e.g., bolts or dowels).
      /// @param[in] aDrillingDiameter [double] The diameter of each drill hole.
      /// @param[in] aDrillingTolerance [double] The tolerance applied to the hole size for bolt head clearance or easier insertion.
      virtual void cutDiagonalCut(ICwAPI3DElementIDList* aElementIdList, double aLength, double aClearanceLength, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief converts surfaces to roof surfaces
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be converted.
      /// @param[in] aRoofName [const @ref character*] The roof name.
      virtual void convertSurfacesToRoofSurfaces(ICwAPI3DElementIDList* aElementIdList, const character* aRoofName) = 0;

      /// @brief Starts the standard element dialogue based on the chosen element type.
      /// @param[in] aStandardElementType [@ref standardElementType] The chosen element type.
      /// @return [@ref ICwAPI3DString*] The guid of selected standard element if item is valid, else null.
      virtual ICwAPI3DString* startStandardElementDialog(standardElementType aStandardElementType) = 0;

      /// @brief Removes a standard connector axis.
      /// @param[in] aGuid [const @ref character*] The unique identifier of the standard connector axis to be removed.
      virtual void removeStandardConnectorAxis(const character* aGuid) = 0;

      /// @brief Removes a standard beam.
      /// @param[in] aGuid [const @ref character*] The unique identifier of the standard beam to be removed.
      virtual void removeStandardBeam(const character* aGuid) = 0;

      /// @brief Removes a standard panel.
      /// @param[in] aGuid [const @ref character*] The unique identifier of the standard panel to be removed.
      virtual void removeStandardPanel(const character* aGuid) = 0;

      /// @brief Removes a standard container.
      /// @param[in] aGuid [const @ref character*] The unique identifier of the standard container to be removed.
      virtual void removeStandardContainer(const character* aGuid) = 0;

      /// @brief Removes a standard export solid.
      /// @param[in] aGuid [const @ref character*] The unique identifier of the standard export solid to be removed.
      virtual void removeStandardExportSolid(const character* aGuid) = 0;

      /// @brief Retrieves a list of user element IDs.
      /// @param[in] aCount [uint64_t] The maximal number of elements to select.
      /// @return [@ref ICwAPI3DElementIDList*] The list of user element IDs.
      virtual ICwAPI3DElementIDList* getUserElementIDsWithCount(uint64_t aCount) = 0;

      /// @brief Cuts a straight scarf joint (lengthwise) with specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to apply the scarf cut to.
      /// @param[in] aLength [double] The total length of the scarf joint cut, measured along the element’s longitudinal axis.
      /// @param[in] aDepth [double] The depth of the vertical cut where both side join.
      /// @param[in] aClearanceLength [double] Additional clearance along the length direction to ensure proper fitting of the joint.
      /// @param[in] aClearanceDepth [double] Additional clearance in the depth direction to avoid tight fits or interference.
      /// @param[in] aClearanceHook [double] Clearance added specifically at the hook or notch feature of the joint, if any.
      /// @param[in] aDrillingCount [uint64_t] The number of holes to be drilled, typically for bolts, pegs, or dowels to reinforce the joint.
      /// @param[in] aDrillingDiameter [double] The diameter of each drilled hole.
      /// @param[in] aDrillingTolerance [double] The tolerance added to the hole size for easier assembly or bolt head fitting.
      virtual void cutScarfStraight(ICwAPI3DElementIDList* aElementIdList, double aLength, double aDepth, double aClearanceLength, double aClearanceDepth, double aClearanceHook, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Cuts a diagonal scarf joint (lengthwise) with specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements on which the diagonal scarf cut will be applied.
      /// @param[in] aLength [double] The total length of the scarf joint measured along the element’s axis.
      /// @param[in] aDepth [double] The vertical depth of the initial straight section before the diagonal cut begins.
      /// @param[in] aClearanceLength [double] Additional clearance along the length direction to facilitate proper fitting of the joint.
      /// @param[in] aClearanceDepth [double] Additional clearance along the depth direction to avoid tight joints or misalignment.
      /// @param[in] aDrillingCount [uint64_t] The number of drill holes for mechanical fasteners (e.g., bolts or dowels).
      /// @param[in] aDrillingDiameter [double] The diameter of each drill hole.
      /// @param[in] aDrillingTolerance [double] Tolerance added to the hole diameter for ease of insertion or head fit.
      virtual void cutScarfDiagonal(ICwAPI3DElementIDList* aElementIdList, double aLength, double aDepth, double aClearanceLength, double aClearanceDepth, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief Cuts a diagonal scarf joint with an added wedge, using specific parameters.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements on which to apply the scarf-with-wedge cut.
      /// @param[in] aLength [double] The total length of the scarf joint, measured along the main axis of the element.
      /// @param[in] aDepth [double] The vertical depth of the straight portion of the cut before the diagonal section.
      /// @param[in] aClearanceLength [double] Additional clearance along the length direction for proper fit of the joint.
      /// @param[in] aClearanceDepth [double] Additional clearance in the depth direction to avoid interference.
      /// @param[in] aWedgeWidth [double] The width of the wedge feature inserted or carved as part of the joint geometry.
      /// @param[in] aDrillingCount [uint64_t] The number of drill holes used to secure the joint (e.g., for bolts, pegs, or dowels).
      /// @param[in] aDrillingDiameter [double] The diameter of the drilled holes.
      /// @param[in] aDrillingTolerance [double] Tolerance applied to the hole size, often used for easier bolt fitting or head clearance.
      virtual void cutScarfWithWedge(ICwAPI3DElementIDList* aElementIdList, double aLength, double aDepth, double aClearanceLength, double aClearanceDepth, double aWedgeWidth, uint64_t aDrillingCount, double aDrillingDiameter, double aDrillingTolerance) = 0;

      /// @brief adds end profiles to a beam with the given name
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be modified
      /// @param[in] aProfileName [const @ref character*] The name of the profile.
      /// @param[in] aOnStartFace [bool] Cut on the start face ?
      /// @param[in] aOnEndFace [bool] Cut on the end face ?
      virtual void cutBeamEndProfile(ICwAPI3DElementIDList* aElementIdList, const character* aProfileName, bool aOnStartFace, bool aOnEndFace) = 0;

      /// @brief Creates a truncated cone beam using points.
      /// @param[in] aStartDiameter [double] The starting diameter of the beam.
      /// @param[in] aEndDiameter [double] The ending diameter of the beam.
      /// @param[in] aFirstPoint [@ref vector3D] The first point.
      /// @param[in] aSecondPoint [@ref vector3D] The second point.
      /// @param[in] aThirdPoint [@ref vector3D] The third point.
      /// @return [@ref elementID] The ID of the created beam.
      /// @par Example:
      /// @code{.cpp}
      /// double startDia = 200.0;
      /// double endDia = 150.0;
      /// vector3D coneStartPt{0.0, 0.0, 0.0};
      /// vector3D coneEndPt{0.0, 0.0, 3000.0};
      ///
      /// // Calculate orientation point
      /// vector3D lengthVector = (coneEndPt - coneStartPt).normalized();
      /// vector3D refVector{1.0, 0.0, 0.0};
      /// vector3D orientationVector = lengthVector.cross(refVector).normalized();
      /// vector3D orientationPt = coneStartPt + orientationVector;
      ///
      /// elementID coneID = aFactory.getElementController()->createTruncatedConeBeamPoints(
      ///     startDia,
      ///     endDia,
      ///     coneStartPt,
      ///     coneEndPt,
      ///     orientationPt
      /// );
      /// @endcode
      virtual elementID createTruncatedConeBeamPoints(double aStartDiameter, double aEndDiameter, vector3D aFirstPoint, vector3D aSecondPoint, vector3D aThirdPoint) = 0;

      /// @brief Creates a truncated cone beam using vectors.
      /// @param[in] aStartDiameter [double] The starting diameter of the beam.
      /// @param[in] aEndDiameter [double] The ending diameter of the beam.
      /// @param[in] aLength [double] The length of the beam.
      /// @param[in] aStartingPoint [@ref vector3D] The starting point.
      /// @param[in] aXDirectionLocal [@ref vector3D] The direction of the X-axis.
      /// @param[in] aZDirectionLocal [@ref vector3D] The direction of the Z-axis.
      /// @return [@ref elementID] The ID of the created beam.
      /// @par Example:
      /// @code{.cpp}
      /// double startDia = 120.0;
      /// double endDia = 80.0;
      /// double coneLength = 2500.0;
      /// vector3D originPoint{0.0, 0.0, 0.0};
      /// vector3D xDirection{0.0, 0.0, 1.0};  // Direction along Z axis
      /// vector3D zDirection{1.0, 0.0, 0.0};  // Orientation vector
      ///
      /// elementID coneID = aFactory.getElementController()->createTruncatedConeBeamVectors(
      ///     startDia,
      ///     endDia,
      ///     coneLength,
      ///     originPoint,
      ///     xDirection,
      ///     zDirection
      /// );
      /// @endcode
      virtual elementID createTruncatedConeBeamVectors(double aStartDiameter, double aEndDiameter, double aLength, vector3D aStartingPoint, vector3D aXDirectionLocal, vector3D aZDirectionLocal) = 0;

      /// @brief Creates a spline line using a list of points.
      /// @param[in] aSplinePoints [@ref ICwAPI3DVertexList*] The points of the line.
      /// @return [@ref elementID] The ID of the created line.
      /**
       * @code{.cpp}
       * // Create a spline through multiple points
       * ICwAPI3DVertexList* points = aFactory.createVertexList();
       * points->append(vector3D{0.0, 0.0, 0.0});
       * points->append(vector3D{500.0, 200.0, 0.0});
       * points->append(vector3D{1000.0, 0.0, 200.0});
       * points->append(vector3D{1500.0, -100.0, 100.0});
       * 
       * elementID splineID = aFactory.getElementController()->createSplineLine(points);
       * @endcode
       */
      virtual elementID createSplineLine(ICwAPI3DVertexList* aSplinePoints) = 0;

      /// @brief Unjoins the specified elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements to be unjoined.
      /// @return [bool] True if the operation was successful, false if an error occured.
      virtual bool unjoinElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Unjoins the specified top-level elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of top-level elements to be unjoined.
      /// @return [bool] True if the operation was successful, false if an error occured.
      virtual bool unjoinTopLevelElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Switches the current element group selection mode so that single elements of a group are selectable.
      virtual void setElementGroupSingleSelectMode() = 0;

      /// @brief Switches the current element group selection mode so that all elements of a group are selected when selecting one of it.
      virtual void setElementGroupMultiSelectMode() = 0;

      /// @brief Retrieves a list of elements in collision with a specific element.
      /// @param[in] aElementId [@ref elementID] The ID of the element to check for collision.
      /// @return [@ref ICwAPI3DElementIDList*] The list of elements in collision with the specified element.
      virtual ICwAPI3DElementIDList* getElementsInCollision(elementID aElementId) = 0;

      /// @brief Retrieve the data of a text object, e.g. font, text content, etc.
      /// @param[in] aElementId [@ref elementID] The ID of a Text Object.
      /// @return [@ref ICwAPI3DTextObjectOptions*]
      virtual ICwAPI3DTextObjectOptions* getTextObjectOptions(elementID aElementId) = 0;

      /// @brief Gets whether the current element group selection mode is setup to select single elements
      /// @return [bool] True if the current element group selection mode is setup to select single elements, false otherwise.
      virtual bool getIsElementGroupSingleSelectMode() = 0;

      /// @brief Gets whether the current element group selection mode is setup to select groups when a grouped element is selected
      /// @return [bool] True if the current element group selection mode is setup to select groups when a grouped element is selected, false otherwise.
      virtual bool getIsElementGroupMultiSelectMode() = 0;

      /// @brief Applies an image texture to a specified surface element.
      /// This function allows you to set an image as a texture on a given surface element.
      /// The image is mapped to the surface between two specified points that define the alignment and scaling.
      ///
      /// @param[in] aElement [@ref elementID] Surface element
      /// @param[in] aImageFilePath [const @ref character*] The file path to the image to be applied.
      /// Supported formats include `.jpg`, `.png`, `.bmp`, and `.tif`.
      /// Path example:
      /// `LR"(C:/path/to/Image.png)"`.
      /// @param[in] aAlignmentStart [@ref vector3D] The starting alignment point for mapping the image on the surface.
      /// @param[in] aAlignmentEnd [@ref vector3D] The ending alignment point for mapping the image on the surface.
      /// @return [bool] Returns `true` if the image was successfully applied to the surface;
      /// otherwise, returns `false` in case of failure. Failures can occur due to invalid file paths,
      /// unsupported formats, or issues with the surface element.
      ///
      /// @note Ensure that the file path is valid and accessible, and that the surface element exists
      /// Proper error handling for invalid inputs is recommended.
      virtual bool applyImageToSurface(elementID aElement, const character* aImageFilePath, vector3D aAlignmentStart, vector3D aAlignmentEnd) = 0;

      /// @brief Sets shoulder cut options.
      /// @param[in] aOptions [@ref ICwAPI3DShoulderOptions*] The shoulder options.
      virtual void setShoulderOptions(ICwAPI3DShoulderOptions* aOptions) = 0;

      /// @brief Sets heel shoulder cut options.
      /// @param[in] aOptions [@ref ICwAPI3DHeelShoulderOptions*] The heel shoulder options.
      virtual void setHeelShoulderOptions(ICwAPI3DHeelShoulderOptions* aOptions) = 0;

      /// @brief Sets double shoulder cut options.
      /// @param[in] aOptions [@ref ICwAPI3DDoubleShoulderOptions*] The double shoulder options.
      virtual void setDoubleShoulderOptions(ICwAPI3DDoubleShoulderOptions* aOptions) = 0;

      /// @brief Cuts shoulder with current 3D options.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements where the shoulder cut will be applied.
      /// @param[in] aConnectingElementIDList [@ref ICwAPI3DElementIDList*] The list of elements that intersect or connect with the cut elements, used to determine the cutting geometry.
      virtual void cutShoulder(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DElementIDList* aConnectingElementIDList) = 0;

      /// @brief Cuts heel shoulder with current 3D options.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements where the heel shoulder cut will be applied.
      /// @param[in] aConnectingElementIDList [@ref ICwAPI3DElementIDList*] The list of elements that intersect or connect with the cut elements, used to determine the cutting geometry.
      virtual void cutHeelShoulder(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DElementIDList* aConnectingElementIDList) = 0;

      /// @brief Cuts a double shoulder joint using the current 3D cutting options.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of elements where the double shoulder cut will be applied.
      /// @param[in] aConnectingElementIDList [@ref ICwAPI3DElementIDList*] The list of elements that intersect or connect with the cut elements, used to determine the cutting geometry.
      virtual void cutDoubleShoulder(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DElementIDList* aConnectingElementIDList) = 0;

      /// @brief Casts a ray through the 3D model and calculates all intersection points between the ray and specified elements.
      /// This function performs ray casting against each specified element to find intersection points.
      /// For each element hit by the ray, it returns the element ID and all points where the ray intersects with that element.
      /// The ray is defined by a start point, end point, and radius.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] List of element IDs to test against the ray.
      /// @param[in] aRayStartPosition [@ref vector3D] 3D start point of the ray.
      /// @param[in] aRayEndPosition [@ref vector3D] 3D end point of the ray.
      /// @param[in] aRadius [double] Radius of the ray cylinder (allows testing against a volume rather than just a line).
      /// @return [@ref ICwAPI3DHitResult*] Contains list of elements that were hit by the ray and list of vertices that are queried via ElementID.
      ///
      /// @note The ray direction is calculated as the normalized vector from aRayStart to aRayEnd.
      /// @par Example :
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* activeElements = aFactory.getElementController()->getActiveIdentifiableElementIDs();
      /// vector3D rayStart{0, 0, 0};
      /// vector3D rayEnd{1000, 0, 0};
      /// ICwAPI3DRayHitResult* hits = aFactory.getElementController()->castRayAndGetElementIntersections(activeElements, rayStart, rayEnd, 40.0);
      /// ICwAPI3DElementIDList* hitElementIDs = hits->getHitElementIDs();
      /// for (int i = 0; i < hitElementIDs->size(); ++i)
      /// {
      ///     elementID* element = hitElementIDs->at(i);
      ///     printf("ElementID %d:\n", *element);
      ///     ICwAPI3DVertexList* hitVertices = hits->getHitVerticesByElement(*element);
      ///     for (int j = 0; j < hitVertices->size(); ++j)
      ///     {
      ///         const vector3D& pos = hitVertices->at(j);
      ///         aFactory.getElementController()->createNode(pos);
      ///     }
      /// }
      /// @endcode
      virtual ICwAPI3DHitResult* castRayAndGetElementIntersections(ICwAPI3DElementIDList* aElementIdList, vector3D aRayStartPosition, vector3D aRayEndPosition, double aRadius) = 0;

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
