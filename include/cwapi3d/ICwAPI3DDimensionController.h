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
    /// \brief
    class ICwAPI3DDimensionController
    {
    public:
      /// @brief Retrieves the last error message.
      /// @param aErrorCode A pointer to an integer where the error code will be stored.
      /// @return A string containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief creates a dimension element
      /// @param aXl
      /// @param aPlaneNormal
      /// @param aDistance
      /// @param aDimensionPoints
      /// @return elementID of created dimension element
      virtual elementID createDimension(vector3D aXl, vector3D aPlaneNormal, vector3D aDistance, ICwAPI3DVertexList* aDimensionPoints) = 0;

      /// @brief sets the orientation of a dimension element
      /// @param aElements
      /// @param aViewDir
      /// @param aViewDirUp
      virtual void setOrientation(ICwAPI3DElementIDList* aElements, vector3D aViewDir, vector3D aViewDirUp) = 0;

      /// @brief adds a segment to a dimension element
      /// @param aElement
      /// @param aSegment
      virtual void addSegment(elementID aElement, vector3D aSegment) = 0;

      /// @brief sets the precision/decimal places of a dimension element
      /// @param aElement
      /// @param aPrecision
      virtual void setPrecision(ICwAPI3DElementIDList* aElements, uint32_t aPrecision) = 0;

      /// @brief sets the text size a dimension element
      /// @param aElement
      /// @param aTextSize
      virtual void setTextSize(ICwAPI3DElementIDList* aElements, double aTextSize) = 0;

      /// @brief sets the line thickness a dimension element
      /// @param aElement
      /// @param aThickness
      virtual void setLineThickness(ICwAPI3DElementIDList* aElements, double aThickness) = 0;

      /// @brief sets if the total dimension is shown in a dimension element
      /// @param aElement
      /// @param aTotal
      virtual void setTotalDimension(ICwAPI3DElementIDList* aElements, bool aTotal) = 0;

      /// @brief sets the text color a dimension element
      /// @param aElement
      /// @param aColorID
      virtual void setTextColor(ICwAPI3DElementIDList* aElements, colorID aColorID) = 0;

      /// @brief sets the line color a dimension element
      /// @param aElement
      /// @param aColorID
      virtual void setLineColor(ICwAPI3DElementIDList* aElements, colorID aColorID) = 0;

      /// @brief sets the default anchor length a dimension element
      /// @param aElement
      /// @param aLength
      virtual void setDefaultAnchorLength(ICwAPI3DElementIDList* aElements, double aLength) = 0;

      /// @brief sets the distance vector between the points and the line
      /// @param aElement
      /// @param aDistance
      virtual void setDistance(ICwAPI3DElementIDList* aElements, vector3D aDistance) = 0;

      /// @brief sets if distance and texts are shifted
      /// @param aElement
      /// @param aShifted
      virtual void shiftDistanceAndTexts(ICwAPI3DElementIDList* aElements, bool aShifted) = 0;

      /// @brief gets all dimension points ordered by dimension direction
      /// @param aElement
      /// @return ICwAPI3DVertexList
      virtual ICwAPI3DVertexList* getDimensionPoints(elementID aElement) = 0;

      /// @brief gets the default anchor length
      /// @param aElement
      /// @return double
      virtual double getDefaultAnchorLength(elementID aElement) = 0;

      /// @brief Get the distance to the dimension reference point. The point is in the plane of the dimensioning.
      /// @param aElement
      /// @return
      virtual vector3D getDistance(elementID aElement) = 0;

      /// @brief Get the plane normal
      /// @param aElement
      /// @return normal
      virtual vector3D getPlaneNormal(elementID aElement) = 0;

      /// @brief Get the plane x direction
      /// @param aElement
      /// @return x direction
      virtual vector3D getPlaneXl(elementID aElement) = 0;

      /// @brief Get count of segments
      /// @param aElement
      /// @return segment count
      virtual int getSegmentCount(elementID aElement) = 0;

      /// @brief Get the distance from the anchor point to the dimension segment
      /// @param aElement
      /// @param aSegmentIndex
      /// @return distance
      virtual double getSegmentDistance(elementID aElement, int aSegmentIndex) = 0;
    };
  }
}
