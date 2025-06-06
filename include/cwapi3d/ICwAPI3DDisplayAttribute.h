#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DWebGLExportAttribute
    * \brief
    */
    class ICwAPI3DDisplayAttribute
    {
    public:
      virtual void setNone() = 0;
      virtual void setName() = 0;
      virtual void setGroup() = 0;
      virtual void setSubgroup() = 0;
      virtual void setComment() = 0;
      virtual void setEdvCode() = 0;
      virtual void setMaterial() = 0;
      virtual void setMaterialGroup() = 0;
      virtual void setUser1() = 0;
      virtual void setUser2() = 0;
      virtual void setUser3() = 0;
      virtual void setUser4() = 0;
      virtual void setUser5() = 0;
      virtual void setUser6() = 0;
      virtual void setUser7() = 0;
      virtual void setUser8() = 0;
      virtual void setUser9() = 0;
      virtual void setUser10() = 0;
      virtual void setProductionNumber() = 0;
      virtual void setTimberNumber() = 0;
      virtual void setAssemblyNumber() = 0;
      virtual void setIFCBuilding() = 0;
      virtual void setIFCStorey() = 0;
    };
  }
}
