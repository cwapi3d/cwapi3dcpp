// Copyright (C) Cadwork. All rights reserved.

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * \brief
    */
    class ICwAPI3DIfc2x3ElementType
    {
    public:
      /// @brief
      virtual void destroy() = 0;

      /// @brief
      /// @return
      virtual bool isNone() = 0;
      /// @brief
      /// @return
      virtual bool isIfcBeam() = 0;
      /// @brief
      /// @return
      virtual bool isIfcColumn() = 0;
      /// @brief
      /// @return
      virtual bool isIfcCurtainWall() = 0;
      /// @brief
      /// @return
      virtual bool isIfcDoor() = 0;
      /// @brief
      /// @return
      virtual bool isIfcMember() = 0;
      /// @brief
      /// @return
      virtual bool isIfcPlate() = 0;
      /// @brief
      /// @return
      virtual bool isIfcRailing() = 0;
      /// @brief
      /// @return
      virtual bool isIfcRamp() = 0;
      /// @brief
      /// @return
      virtual bool isIfcRampFlight() = 0;
      /// @brief
      /// @return
      virtual bool isIfcRoof() = 0;
      /// @brief
      /// @return
      virtual bool isIfcSlab() = 0;
      /// @brief
      /// @return
      virtual bool isIfcStair() = 0;
      /// @brief
      /// @return
      virtual bool isIfcStairFlight() = 0;
      /// @brief
      /// @return
      virtual bool isIfcWall() = 0;
      /// @brief
      /// @return
      virtual bool isIfcWallStandardCase() = 0;
      /// @brief
      /// @return
      virtual bool isIfcWindow() = 0;
      /// @brief
      virtual void setNone() = 0;
      /// @brief
      virtual void setIfcBeam() = 0;
      /// @brief
      virtual void setIfcColumn() = 0;
      /// @brief
      virtual void setIfcCurtainWall() = 0;
      /// @brief
      virtual void setIfcDoor() = 0;
      /// @brief
      virtual void setIfcMember() = 0;
      /// @brief
      virtual void setIfcPlate() = 0;
      /// @brief
      virtual void setIfcRailing() = 0;
      /// @brief
      virtual void setIfcRamp() = 0;
      /// @brief
      virtual void setIfcRampFlight() = 0;
      /// @brief
      virtual void setIfcRoof() = 0;
      /// @brief
      virtual void setIfcSlab() = 0;
      /// @brief
      virtual void setIfcStair() = 0;
      /// @brief
      virtual void setIfcStairFlight() = 0;
      /// @brief
      virtual void setIfcWall() = 0;
      /// @brief
      virtual void setIfcWallStandardCase() = 0;
      /// @brief
      virtual void setIfcWindow() = 0;
      /// @brief
      /// @return
      virtual bool isIfcBuildingElementProxy() = 0;
      /// @brief
      /// @return
      virtual bool isIfcChimney() = 0;
      /// @brief
      /// @return
      virtual bool isIfcCovering() = 0;
      /// @brief
      /// @return
      virtual bool isIfcFooting() = 0;
      /// @brief
      /// @return
      virtual bool isIfcFurnishingElement() = 0;
      /// @brief
      /// @return
      virtual bool isIfcOpeningElement() = 0;
      /// @brief
      /// @return
      virtual bool isIfcSpace() = 0;
      /// @brief
      /// @return
      virtual bool isIfcFlowSegment() = 0;
      /// @brief
      /// @return
      virtual bool isIfcBuildingElementPart() = 0;
      /// @brief
      /// @return
      virtual bool isIfcDiscreteAccessory() = 0;
      /// @brief
      /// @return
      virtual bool isIfcFastener() = 0;
      /// @brief
      /// @return
      virtual bool isIfcMechanicalFastener() = 0;
      /// @brief
      virtual void setIfcBuildingElementProxy() = 0;
      /// @brief
      virtual void setIfcChimney() = 0;
      /// @brief
      virtual void setIfcCovering() = 0;
      /// @brief
      virtual void setIfcFooting() = 0;
      /// @brief
      virtual void setIfcFurnishingElement() = 0;
      /// @brief
      virtual void setIfcOpeningElement() = 0;
      /// @brief
      virtual void setIfcSpace() = 0;
      /// @brief
      virtual void setIfcFlowSegment() = 0;
      /// @brief
      virtual void setIfcBuildingElementPart() = 0;
      /// @brief
      virtual void setIfcDiscreteAccessory() = 0;
      /// @brief
      virtual void setIfcFastener() = 0;
      /// @brief
      virtual void setIfcMechanicalFastener() = 0;
      /// @brief
      /// @return
      virtual bool isIfcElementAssembly() = 0;
      /// @brief
      virtual void setIfcElementAssembly() = 0;
    };
  }
}
