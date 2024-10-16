// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
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
