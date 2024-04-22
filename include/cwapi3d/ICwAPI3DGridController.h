/// @file
/// Copyright (C) 2023 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         30.0
/// @author        Paquet
/// @date          2023-05-15

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
