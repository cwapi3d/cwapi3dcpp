/** @file
* Copyright (C) 2020 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         27.0
* @author        Paquet
* @date          2020-08-19
*/
#pragma once

#include "CwAPI3DTypes.h"
#include "ICwAPI3DVertexList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DPolygonList
    * \brief
    */
    class ICwAPI3DPolygonList
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
    };
  }
}
