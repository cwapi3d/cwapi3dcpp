/** @file
* Copyright (C) 2017 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         25
* @author        Paquet
* @date          2028-02-27
*/

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DMaterialIDList
    * \brief
    */
    class ICwAPI3DMaterialIDList
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Returns the number of elements in the list
       * \return number of elements in the list
       */
      virtual uint32_t count() = 0;
      /**
       * \brief Returns the element at index
       * \param aIndex index of element
       * \return element at index
       */
      virtual materialID at(uint32_t aIndex) = 0;
      /**
       * \brief Appends an element to the list
       * \param aMaterialID
       */
      virtual void append(materialID aMaterialID) = 0;
      /**
       * \brief Appends a list to the list
       * \param aMaterialIDs
       */
      virtual void appendList(ICwAPI3DMaterialIDList* aMaterialIDs) = 0;
    };
  }
}
