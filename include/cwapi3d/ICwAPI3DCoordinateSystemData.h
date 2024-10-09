// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
   *@interface ICwAPI3DCoordinateSystemData
   * \brief Cadwork element coordinate-System 
   */
    class ICwAPI3DCoordinateSystemData
    {
    public:
      virtual ~ICwAPI3DCoordinateSystemData() = default;

      /**
     * \brief Get element start point
     * \return start point
     */
      virtual vector3D getP1() const = 0;

      /**
     * \brief Get element end point
     * \return end point
     */
      virtual vector3D getP2() const = 0;

      /**
     * \brief Get element height orientation point
     * \return height orientation point
     */
      virtual vector3D getP3() const = 0;
    };
  }
}
