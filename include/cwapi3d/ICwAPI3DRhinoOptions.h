// Copyright (C) Cadwork. All rights reserved.

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DRhinoOptions
    {
    public:
      /// @brief
      virtual void destroy() = 0;

      /// @brief
      /// @param aFlag
      virtual void setMaterializeEndTypes(bool aFlag) = 0;
      /// @brief
      /// @return
      virtual bool getMaterializeEndTypes() = 0;

      /// @brief
      /// @param aFlag
      virtual void setCutEndTypesCounterparts(bool aFlag) = 0;
      /// @brief
      /// @return
      virtual bool getCutEndTypesCounterparts() = 0;

      /// @brief
      /// @param aFlag
      virtual void setCutDrillings(bool aFlag) = 0;
      /// @brief
      /// @return
      virtual bool getCutDrillings() = 0;

      /// @brief
      /// @param aFlag
      virtual void setCutMEP(bool aFlag) = 0;
      /// @brief
      /// @return
      virtual bool getCutMEP() = 0;

      /// @brief
      /// @param aFlag
      virtual void setCutOpenings(bool aFlag) = 0;
      /// @brief
      /// @return
      virtual bool getCutOpenings() = 0;
    };
  }
}
