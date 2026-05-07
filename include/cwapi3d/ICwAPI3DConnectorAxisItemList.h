/** @file 
* Copyright (C) 2026 cadwork informatik AG
* 
* This file is part of the CwAPI3D module for cadwork 3d.
* 
* @ingroup       CwAPI3D
* @since         33.0
* @author        Paquet
* @date          2026-05-01
*/

#pragma once

#include "ICwAPI3DConnectorAxisItem.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DStringList
    * \brief
    */
    class ICwAPI3DConnectorAxisItemList
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
       * \brief Returns the item at index
       * \param aIndex
       * \return element at index
       */
      virtual ICwAPI3DConnectorAxisItem* at(uint32_t aIndex) = 0;
      /**
       * \brief Appends an item to the list
       * \param aItem
       */
      virtual void append(ICwAPI3DConnectorAxisItem* aItem) = 0;
    };
  }
}
