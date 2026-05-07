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
    class ICwAPI3DConnectorAxisItem
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Sets the item guid
       * \param aGuid
       */
      virtual void setGuid(const character* aGuid) = 0;
      /**
       * \brief Sets the item position
       * \param aPosition
       */
      virtual void setPosition(int32_t aPosition) = 0;
      /**
       * \brief Returns the item guid
       * \return item guid
       */
      virtual ICwAPI3DString* getGuid() const = 0;
      /**
       * \brief Returns the item position
       * \return item position
       */
      virtual int32_t getPosition() const = 0;
    };
  }
}
