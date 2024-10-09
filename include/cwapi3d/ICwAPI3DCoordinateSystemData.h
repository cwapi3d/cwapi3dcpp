// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DCoordinateSystemData
    {
    public:
      /// @brief
      virtual ~ICwAPI3DCoordinateSystemData() = default;

      /// @brief
      /// @return
      virtual vector3D getP1() const = 0;

      /// @brief
      /// @return
      virtual vector3D getP2() const = 0;

      /// @brief
      /// @return
      virtual vector3D getP3() const = 0;
    };
  }
}
