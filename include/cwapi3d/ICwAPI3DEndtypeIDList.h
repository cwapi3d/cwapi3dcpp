// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
   * \brief EndtypeIDList interface
   */
    class ICwAPI3DEndtypeIDList
    {
    public:
      virtual ~ICwAPI3DEndtypeIDList() = default;
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
      virtual endtypeID at(uint32_t aIndex) = 0;
      /**
     * \brief Appends an endtypeID to the list
     * \param aEndtypeID 
     */
      virtual void append(endtypeID aEndtypeID) = 0;
      /**
     * \brief Appends a list to the list
     * \param aEndtypeIDs 
     */
      virtual void appendList(ICwAPI3DEndtypeIDList* aEndtypeIDs) = 0;
    };
  }
}
