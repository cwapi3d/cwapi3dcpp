// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DGridController
    {
    public:
      /// @brief Gets the last error message.
      /// @param aErrorCode A pointer to an integer where the error code will be stored.
      /// @return A pointer to an ICwAPI3DString object containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
    };
  }
}
