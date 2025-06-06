/** @file
* Copyright (C) 2017 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2017-06-22
*/

#pragma once

#include "CwAPI3DTypes.h"
#include "ICwAPI3DVertexList.h"
#include "ICwAPI3DPolygonList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DFacetList
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
      virtual ICwAPI3DVertexList* getExternalPolygon(uint32_t aIndex) = 0;
      virtual ICwAPI3DPolygonList* getInternalPolygons(uint32_t aIndex) = 0;
      virtual ICwAPI3DVertexList* getVerticesForReferenceFace() = 0;
      virtual ICwAPI3DVertexList* getExternalPolygonForReferenceFace() = 0;
      virtual ICwAPI3DPolygonList* getInternalPolygonsForReferenceFace() = 0;
      virtual CwAPI3D::vector3D getNormalVector(uint32_t aIndex) = 0;
      virtual double getDistanceToOrigin(uint32_t aIndex) = 0;
    };
  }
}
