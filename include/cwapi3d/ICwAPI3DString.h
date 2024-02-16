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
    * @interface ICwAPI3DString
    * \brief
    */
    class ICwAPI3DString
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Returns the length of the string
       * \return length of string
       */
      virtual uint32_t length() = 0;
      /**
       * \brief Returns the data of the string
       * \return data of string
       */
      virtual const character* data() = 0;
      /**
       * \brief Returns the narrow data of the string
       * \return narrow data of string
       */
      virtual const narrowCharacter* narrowData() = 0;
      /**
       * \brief Copies the data to a buffer
       * \param aBuffer buffer
       * \param aSize size of buffer
       */
      virtual void copyToBuffer(character* aBuffer, uint32_t aSize) = 0;
      /**
       * \brief Copies the data to a narrow buffer
       * \param aBuffer narrow buffer
       * \param aSize size of narrow buffer
       */
      virtual void copyToNarrowBuffer(narrowCharacter* aBuffer, uint32_t aSize) = 0;
    };
  }
}
