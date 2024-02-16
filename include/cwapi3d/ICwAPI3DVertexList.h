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

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DVertexList
    * \brief
    */
    class ICwAPI3DVertexList
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
       * \brief Gets element at index
       * \param aIndex
       * \return element at index
       */
      virtual vector3D at(uint32_t aIndex) = 0;
      /**
       * \brief Appends element in list
       * \param aVector
       */
      virtual void append(vector3D aVector) = 0;
    };
  }
}
