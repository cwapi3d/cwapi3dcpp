// Copyright (C) Cadwork. All rights reserved.

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DDisplayAttribute
    {
    public:
      /// @brief
      virtual void setNone() = 0;
      /// @brief
      virtual void setName() = 0;
      /// @brief
      virtual void setGroup() = 0;
      /// @brief
      virtual void setSubgroup() = 0;
      /// @brief
      virtual void setComment() = 0;
      /// @brief
      virtual void setEdvCode() = 0;
      /// @brief
      virtual void setMaterial() = 0;
      /// @brief
      virtual void setMaterialGroup() = 0;
      /// @brief
      virtual void setUser1() = 0;
      /// @brief
      virtual void setUser2() = 0;
      /// @brief
      virtual void setUser3() = 0;
      /// @brief
      virtual void setUser4() = 0;
      /// @brief
      virtual void setUser5() = 0;
      /// @brief
      virtual void setUser6() = 0;
      /// @brief
      virtual void setUser7() = 0;
      /// @brief
      virtual void setUser8() = 0;
      /// @brief
      virtual void setUser9() = 0;
      /// @brief
      virtual void setUser10() = 0;
      /// @brief
      virtual void setProductionNumber() = 0;
      /// @brief
      virtual void setTimberNumber() = 0;
      /// @brief
      virtual void setAssemblyNumber() = 0;
      /// @brief
      virtual void setIFCBuilding() = 0;
      /// @brief
      virtual void setIFCStorey() = 0;
    };
  }
}
