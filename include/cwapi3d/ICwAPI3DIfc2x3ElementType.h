/** @file
* Copyright (C) 2019 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         26.0
* @author        Paquet
* @date          2019-10-10
*/

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DIfc2x3ElementType
    * \brief
    */
    class ICwAPI3DIfc2x3ElementType
    {
    public:
      virtual void destroy() = 0;

      virtual bool isNone() = 0;
      virtual bool isIfcBeam() = 0;
      virtual bool isIfcColumn() = 0;
      virtual bool isIfcCurtainWall() = 0;
      virtual bool isIfcDoor() = 0;
      virtual bool isIfcMember() = 0;
      virtual bool isIfcPlate() = 0;
      virtual bool isIfcRailing() = 0;
      virtual bool isIfcRamp() = 0;
      virtual bool isIfcRampFlight() = 0;
      virtual bool isIfcRoof() = 0;
      virtual bool isIfcSlab() = 0;
      virtual bool isIfcStair() = 0;
      virtual bool isIfcStairFlight() = 0;
      virtual bool isIfcWall() = 0;
      virtual bool isIfcWallStandardCase() = 0;
      virtual bool isIfcWindow() = 0;
      virtual void setNone() = 0;
      virtual void setIfcBeam() = 0;
      virtual void setIfcColumn() = 0;
      virtual void setIfcCurtainWall() = 0;
      virtual void setIfcDoor() = 0;
      virtual void setIfcMember() = 0;
      virtual void setIfcPlate() = 0;
      virtual void setIfcRailing() = 0;
      virtual void setIfcRamp() = 0;
      virtual void setIfcRampFlight() = 0;
      virtual void setIfcRoof() = 0;
      virtual void setIfcSlab() = 0;
      virtual void setIfcStair() = 0;
      virtual void setIfcStairFlight() = 0;
      virtual void setIfcWall() = 0;
      virtual void setIfcWallStandardCase() = 0;
      virtual void setIfcWindow() = 0;
      virtual bool isIfcBuildingElementProxy() = 0;
      virtual bool isIfcChimney() = 0;
      virtual bool isIfcCovering() = 0;
      virtual bool isIfcFooting() = 0;
      virtual bool isIfcFurnishingElement() = 0;
      virtual bool isIfcOpeningElement() = 0;
      virtual bool isIfcSpace() = 0;
      virtual bool isIfcFlowSegment() = 0;
      virtual bool isIfcBuildingElementPart() = 0;
      virtual bool isIfcDiscreteAccessory() = 0;
      virtual bool isIfcFastener() = 0;
      virtual bool isIfcMechanicalFastener() = 0;
      virtual void setIfcBuildingElementProxy() = 0;
      virtual void setIfcChimney() = 0;
      virtual void setIfcCovering() = 0;
      virtual void setIfcFooting() = 0;
      virtual void setIfcFurnishingElement() = 0;
      virtual void setIfcOpeningElement() = 0;
      virtual void setIfcSpace() = 0;
      virtual void setIfcFlowSegment() = 0;
      virtual void setIfcBuildingElementPart() = 0;
      virtual void setIfcDiscreteAccessory() = 0;
      virtual void setIfcFastener() = 0;
      virtual void setIfcMechanicalFastener() = 0;
    };
  }
}
