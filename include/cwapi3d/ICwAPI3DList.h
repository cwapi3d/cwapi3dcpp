/** @file
 * Copyright (C) 2025 cadwork informatik AG
 *
 * This file is part of the CwAPI3D module for cadwork 3d.
 *
 * @ingroup       CwAPI3D
 * @since         32.0
 * @author        Brunner
 * @date          2025-11-26
 */

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D {
namespace Interfaces {
/**
 * @interface ICwAPI3DList
 * @brief Generic template interface for lists
 * @tparam T The ID type (e.g., elementID, multiLayerSetID, materialID)
 */
template <typename T> class ICwAPI3DList {
public:
  /**
   * @brief Destroys itself
   */
  virtual void destroy() = 0;

  /**
   * @brief Returns the number of elements in the list
   * @return number of elements in list
   */
  virtual uint32_t count() = 0;

  /**
   * @brief Returns the element at index
   * @param aIndex element index
   * @return element at index
   */
  virtual T at(uint32_t aIndex) = 0;

  /**
   * @brief Appends an element to the list
   * @param aID ID to append
   */
  virtual void append(T aID) = 0;

  /**
   * @brief Appends a list to the list
   * @param aIDs list to append
   */
  virtual void appendList(ICwAPI3DList<T> *aIDs) = 0;

  /**
   * @brief Queries whether the container is empty
   * @return true if there are no elements in the container, false otherwise
   */
  virtual bool empty() = 0;

  /**
   * @brief Gets a pointer to the first element. Note that the pointer is
   * invalid if the container is destroyed.
   * @return pointer to first element, returns nullptr if the container is
   * empty.
   */
  virtual T *front() = 0;

  /**
   * @brief Gets a pointer to the last element. Note that the pointer is invalid
   * if the container is destroyed.
   * @return pointer to the last element, returns nullptr if the container is
   * empty.
   */
  virtual T *back() = 0;

protected:
  virtual ~ICwAPI3DList() = default;
};

//////////////////////////////////////
// Type aliases for common ID lists //
/////////////////////////////////////
using ICwAPI3DMultiLayerSetIDList = ICwAPI3DList<multiLayerSetID>;
} // namespace Interfaces
} // namespace CwAPI3D