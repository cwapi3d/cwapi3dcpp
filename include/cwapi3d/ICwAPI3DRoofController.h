// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DRoofController
    {
    public:
      /// @brief Gets the profile length
      /// @param aID element ID
      /// @return profile length
      virtual double getProfileLength(elementID aID) = 0;

      /// @brief Gets the edge length
      /// @param aID element ID
      /// @param aEdgeType edge type
      /// @return edge length
      virtual double getEdgeLength(elementID aID, const character* aEdgeType) = 0;

      /// @brief Gets all caddy elements
      /// @return element ID list
      virtual ICwAPI3DElementIDList* getAllCaddyElementIDs() = 0;

      /// @brief Gets the last error message.
      /// @param aErrorCode A pointer to an integer where the error code will be stored.
      /// @return A pointer to an ICwAPI3DString object containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;
    };
  }
}
