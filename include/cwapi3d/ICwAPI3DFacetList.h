// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"
#include "ICwAPI3DPolygonList.h"
#include "ICwAPI3DVertexList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * \brief
    */
    class ICwAPI3DFacetList
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Returns the number of elements in the list
       * \return number of elements in list
       */
      virtual uint32_t count() = 0;
      /**
       * \brief Returns the element at index
       * \param aIndex element index
       * \return element at index
       */
      virtual ICwAPI3DVertexList* at(uint32_t aIndex) = 0;
      /// @brief
      /// @param aIndex
      /// @return
      virtual ICwAPI3DVertexList* getExternalPolygon(uint32_t aIndex) = 0;
      /// @brief
      /// @param aIndex
      /// @return
      virtual ICwAPI3DPolygonList* getInternalPolygons(uint32_t aIndex) = 0;
      /// @brief
      /// @return
      virtual ICwAPI3DVertexList* getVerticesForReferenceFace() = 0;
      /// @brief
      /// @return
      virtual ICwAPI3DVertexList* getExternalPolygonForReferenceFace() = 0;
      /// @brief
      /// @return
      virtual ICwAPI3DPolygonList* getInternalPolygonsForReferenceFace() = 0;
      /// @brief
      /// @param aIndex
      /// @return
      virtual CwAPI3D::vector3D getNormalVector(uint32_t aIndex) = 0;
      /// @brief
      /// @param aIndex
      /// @return
      virtual double getDistanceToOrigin(uint32_t aIndex) = 0;
    };
  }
}
