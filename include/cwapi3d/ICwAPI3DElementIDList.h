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
      /**
       * \brief Queries whether the container is empty
       * \return true if there are no elements in the container, false otherwise
       */
      virtual bool empty() = 0;
      /**
       * \brief Gets a pointer to the first element. Note that the pointer is invalid if the container is destroyed.
       * \return pointer to first element, returns nullptr if the container is empty.
       */
      virtual elementID* front() = 0;
      /**
       * \brief Gets a pointer to the last element. Note that the pointer is invalid if the container is destroyed.
       * \return pointer to the last element, returns nullptr if the container is empty.
       */
      virtual elementID* back() = 0;
    };
  }
}
