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
#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DStringList
    * \brief
    */
    class ICwAPI3DStringList
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
       * \param aIndex
       * \return element at index
       */
      virtual ICwAPI3DString* at(uint32_t aIndex) = 0;
      /**
       * \brief Appends an element to the list
       * \param aString
       */
      virtual void append(const character* aString) = 0;
    };
  }
}
