// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * \brief
    */
    class ICwAPI3DElementIDListMap
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
       * \brief Returns the value at index
       * \param aIndex element index
       * \return value at index
       */
      virtual ICwAPI3DString* valueAt(uint32_t aIndex) = 0;
      /**
       * \brief Returns the element list at index
       * \param aIndex element index
       * \return element list at index
       */
      virtual ICwAPI3DElementIDList* itemAt(uint32_t aIndex) = 0;
    };
  }
}
