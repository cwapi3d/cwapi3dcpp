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
    * @interface ICwAPI3DElementIDList
    * \brief
    */
    class ICwAPI3DElementIDList
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief
       * \return number of elements in list
       */
      virtual uint32_t count() = 0;
      /**
       * \brief
       * \param aIndex element index
       * \return element at index
       */
      virtual elementID at(uint32_t aIndex) = 0;
      /**
       * \brief Appends an element to the list
       * \param aElementID element to append
       */
      virtual void append(elementID aElementID) = 0;
      /**
       * \brief Appends a list to the list
       * \param aElementIDs list to append
       */
      virtual void appendList(ICwAPI3DElementIDList* aElementIDs) = 0;
    };
  }
}
