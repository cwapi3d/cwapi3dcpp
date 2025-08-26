/// @file
/// Copyright (C) 2023 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         30.0
/// @author        Paquet
/// @date          2023-05-15

#pragma once

#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DVertexList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DDimensionController
    class ICwAPI3DDimensionController
    {
    public:
      /// @brief Retrieves the last error message.
      /// @param[out] aErrorCode [int32_t*] A pointer to an integer where the error code will be stored.
      /// @return [@ref ICwAPI3DString*] A string containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Creates a dimension element.
      /// @param[in] aXl [@ref vector3D] The x direction of the dimension.
      /// @param[in] aPlaneNormal [@ref vector3D] The plane normal.
      /// @param[in] aDistance [@ref vector3D] The distance vector from the anchor point to the dimension reference point.
      /// @param[in] aDimensionPoints [@ref ICwAPI3DVertexList*] A list of dimension points.
      /// @return [@ref elementID] The element id of created dimension element.
      virtual elementID createDimension(vector3D aXl, vector3D aPlaneNormal, vector3D aDistance, ICwAPI3DVertexList* aDimensionPoints) = 0;

      /// @brief Sets the orientation of a dimension element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aViewDir [@ref vector3D] The view direction vector.
      /// @param[in] aViewDirUp [@ref vector3D] The view direction up vector.
      virtual void setOrientation(ICwAPI3DElementIDList* aElementIdList, vector3D aViewDir, vector3D aViewDirUp) = 0;

      /// @brief Adds a segment to a dimension element.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @param[in] aSegment [@ref vector3D] The segment to add.
      virtual void addSegment(elementID aElementId, vector3D aSegment) = 0;

      /// @brief Sets the precision/decimal places of a dimension element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aPrecision [uint32_t] The precision/decimal places to set.
      virtual void setPrecision(ICwAPI3DElementIDList* aElementIdList, uint32_t aPrecision) = 0;

      /// @brief Sets the text size a dimension element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aTextSize [double] The text size to set.
      virtual void setTextSize(ICwAPI3DElementIDList* aElementIdList, double aTextSize) = 0;

      /// @brief Sets the line thickness a dimension element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aThickness [double] The line thickness to set.
      virtual void setLineThickness(ICwAPI3DElementIDList* aElementIdList, double aThickness) = 0;

      /// @brief Sets if the total dimension is shown in a dimension element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aTotal [bool] True if the total dimension should be shown, false otherwise.
      virtual void setTotalDimension(ICwAPI3DElementIDList* aElementIdList, bool aTotal) = 0;

      /// @brief Sets the text color a dimension element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aColorID [@ref colorID] The color ID to set for the text.
      virtual void setTextColor(ICwAPI3DElementIDList* aElementIdList, colorID aColorID) = 0;

      /// @brief Sets the line color a dimension element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aColorID [@ref colorID] The color ID to set for the line.
      virtual void setLineColor(ICwAPI3DElementIDList* aElementIdList, colorID aColorID) = 0;

      /// @brief Sets the default anchor length a dimension element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aLength [double] The default anchor length to set.
      virtual void setDefaultAnchorLength(ICwAPI3DElementIDList* aElementIdList, double aLength) = 0;

      /// @brief Sets the distance vector between the points and the line.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aDistance [@ref vector3D] The distance vector to set.
      virtual void setDistance(ICwAPI3DElementIDList* aElementIdList, vector3D aDistance) = 0;

      /// @brief Sets if distance and texts are shifted.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The dimension element id list.
      /// @param[in] aShifted [bool] True if the distance and texts should be shifted, false otherwise.
      virtual void shiftDistanceAndTexts(ICwAPI3DElementIDList* aElementIdList, bool aShifted) = 0;

      /// @brief Gets all dimension points ordered by dimension direction.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @return [@ref ICwAPI3DVertexList*] A list of dimension points.
      virtual ICwAPI3DVertexList* getDimensionPoints(elementID aElementId) = 0;

      /// @brief Gets the default anchor length.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @return [double] The default anchor length.
      virtual double getDefaultAnchorLength(elementID aElementId) = 0;

      /// @brief Get the distance to the dimension reference point. The point is in the plane of the dimensioning.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @return [@ref vector3D] The distance vector from the anchor point to the dimension reference point.
      virtual vector3D getDistance(elementID aElementId) = 0;

      /// @brief Get the plane normal.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @return [@ref vector3D] The plane normal vector.
      virtual vector3D getPlaneNormal(elementID aElementId) = 0;

      /// @brief Get the plane x direction.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @return [@ref vector3D] The plane x direction vector.
      virtual vector3D getPlaneXl(elementID aElementId) = 0;

      /// @brief Get count of segments.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @return [int] The number of segments in the dimension element.
      virtual int getSegmentCount(elementID aElementId) = 0;

      /// @brief Get the distance from the anchor point to the dimension segment.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @param aSegmentIndex [int] The index of the segment.
      /// @return [double] The distance from the anchor point to the dimension segment.
      virtual double getSegmentDistance(elementID aElementId, int aSegmentIndex) = 0;

      /// @brief Get the normalized direction from the anchor point to the point on the dimension.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @param aSegmentIndex [int] The index of the segment.
      /// @return [@ref vector3D] The normalized direction vector.
      virtual vector3D getSegmentDirection(elementID aElementId, int aSegmentIndex) = 0;

      /// @brief Query whether the visualisation of the overall dimension is set for a dimension element.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @return [bool] True if the visualisation is set, false otherwise. For elements that are not of type dimension, the return value is per default false.
      virtual bool getTotalDimension(elementID aElementId) = 0;

      /// @brief Gets the base format of a Dimension Element.
      /// @param[in] aElementId [@ref elementID] The dimension element id.
      /// @return [@ref DimensionBaseFormat] the format used for the dimension. Enum value `None` may indicate that something went during
      /// while retrieving the value due to e.g. the element not being a valid dimension.
      virtual CwAPI3D::DimensionBaseFormat getDimensionBaseFormat(const CwAPI3D::elementID aElementId) = 0;
    };
  }
}
