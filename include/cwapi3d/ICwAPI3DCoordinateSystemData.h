/** @file 
* Copyright (C) 2024 cadwork informatik AG
* 
* This file is part of the CwAPI3D module for cadwork 3d.
* 
* @ingroup       CwAPI3D
* @since         30.0
* @author        Brunner
* @date          2024-03-04
*/


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
