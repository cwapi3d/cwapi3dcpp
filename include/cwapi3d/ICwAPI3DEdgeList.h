// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"
#include "ICwAPI3DVertexList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DEdgeList
    {
    public:
      /// @brief
      virtual void destroy() = 0;
      /// @brief
      /// @return
      virtual uint32_t count() = 0;
       /// @brief
       /// @param aIndex
       /// @return
      virtual ICwAPI3DVertexList* at(uint32_t aIndex) = 0;
    };
  }
}
