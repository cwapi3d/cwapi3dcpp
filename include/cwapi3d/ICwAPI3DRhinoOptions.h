// Copyright (C) Cadwork. All rights reserved.

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    class ICwAPI3DRhinoOptions
    {
    public:
      virtual void destroy() = 0;

      virtual void setMaterializeEndTypes(bool aFlag) = 0;
      virtual bool getMaterializeEndTypes() = 0;

      virtual void setCutEndTypesCounterparts(bool aFlag) = 0;
      virtual bool getCutEndTypesCounterparts() = 0;

      virtual void setCutDrillings(bool aFlag) = 0;
      virtual bool getCutDrillings() = 0;

      virtual void setCutMEP(bool aFlag) = 0;
      virtual bool getCutMEP() = 0;

      virtual void setCutOpenings(bool aFlag) = 0;
      virtual bool getCutOpenings() = 0;
    };
  }
}
