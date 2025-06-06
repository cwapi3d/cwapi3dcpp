#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DElementModuleProperties
    * \brief
    */
    class ICwAPI3DElementModuleProperties
    {
    public:
      virtual void destroy() = 0;
      virtual bool isStretchWithTopOfWall() = 0;
      virtual bool isMoveWithTopOfWall() = 0;
      virtual bool isDistributeInAxisDirection() = 0;
      virtual bool isDistributePerpendicularToAxisDirection() = 0;
      virtual bool isStopDistributionInAxisDirection() = 0;
      virtual bool isStopDistributionPerpendicularToAxisDirection() = 0;
      virtual bool isBottomPlate() = 0;
      virtual bool isTopPlate() = 0;
      virtual bool isOpeningSill() = 0;
      virtual bool isOpeningLintel() = 0;
      virtual bool isCuttingElement() = 0;
      virtual bool isNotCutWithCuttingElement() = 0;
      virtual bool isAuxiliary() = 0;
      virtual bool isNotPlacedAtEndOfWall() = 0;
      virtual bool isNotPlacedAtStartOfWall() = 0;
      virtual bool isStretchWithOpeningLintel() = 0;
      virtual bool isStretchWithOpeningSill() = 0;
      virtual bool isSolderInAxisDirection() = 0;
      virtual bool isNoCollisionControl() = 0;
      virtual bool isNoInsideControl() = 0;
      virtual bool isUseForDetailCoordinateSystem() = 0;
      virtual void setStretchWithTopOfWall(bool aActive) = 0;
      virtual void setMoveWithTopOfWall(bool aActive) = 0;
      virtual void setDistributeInAxisDirection(bool aActive, double aDistance) = 0;
      virtual void setDistributePerpendicularToAxisDirection(bool aActive, double aDistance) = 0;
      virtual void setStopDistributionInAxisDirection(bool aActive) = 0;
      virtual void setStopDistributionPerpendicularToAxisDirection(bool aActive) = 0;
      virtual void setBottomPlate(bool aActive) = 0;
      virtual void setTopPlate(bool aActive) = 0;
      virtual void setOpeningSill(bool aActive) = 0;
      virtual void setOpeningLintel(bool aActive) = 0;
      virtual void setCuttingElement(bool aActive, uint32_t aPriority) = 0;
      virtual void setNotCutWithCuttingElement(bool aActive) = 0;
      virtual void setAuxiliary(bool aActive) = 0;
      virtual void setNotPlacedAtEndOfWall(bool aActive) = 0;
      virtual void setNotPlacedAtStartOfWall(bool aActive) = 0;
      virtual void setStretchWithOpeningLintel(bool aActive) = 0;
      virtual void setStretchWithOpeningSill(bool aActive) = 0;
      virtual void setSolderInAxisDirection(bool aActive) = 0;
      virtual void setNoCollisionControl(bool aActive) = 0;
      virtual void setNoInsideControl(bool aActive) = 0;
      virtual void setUseForDetailCoordinateSystem(bool aActive) = 0;
      virtual double getDistributeInAxisDirectionDistance() = 0;
      virtual double getDistributePerpendicularToAxisDirectionDistance() = 0;
      virtual uint32_t getCuttingElementPriority() = 0;

      virtual bool isDistributeInAxisDirectionUseMaxDistance() = 0;
      virtual bool isDistributePerpendicularToAxisDirectionUseMaxDistance() = 0;
      virtual bool isDistributeInAxisDirectionUseNumber() = 0;
      virtual bool isDistributePerpendicularToAxisDirectionUseNumber() = 0;

      virtual void setDistributeInAxisDirectionUseMaxDistance(bool aActive) = 0;
      virtual void setDistributePerpendicularToAxisDirectionUseMaxDistance(bool aActive) = 0;
      virtual void setDistributeInAxisDirectionUseNumber(bool aActive, uint32_t aNumber) = 0;
      virtual void setDistributePerpendicularToAxisDirectionUseNumber(bool aActive, uint32_t aNumber) = 0;
      virtual uint32_t getDistributeInAxisDirectionNumber() = 0;
      virtual uint32_t getDistributePerpendicularToAxisDirectionNumber() = 0;

      virtual bool isMainElement() = 0;
      virtual bool isStrechtAccordingThicknessAxis() = 0;
      virtual bool isStrechtAccordingLengthAxis() = 0;
      virtual bool isMoveAccordingThicknessAxis() = 0;
      virtual bool isMoveAccordingLengthAxis() = 0;
      virtual bool isUniqueLayername() = 0;
      virtual bool isKeepInCenterOfLayerCurrentWall() = 0;
      virtual bool isKeepInCenterOfLayerNeighbourWall() = 0;
      virtual bool isKeepInCenterOfRoughVolume() = 0;
      virtual bool isElementFromDetail() = 0;

      virtual void setMainElement(bool aActive) = 0;
      virtual void setStrechtAccordingThicknessAxis(bool aActive) = 0;
      virtual void setStrechtAccordingLengthAxis(bool aActive) = 0;
      virtual void setMoveAccordingThicknessAxis(bool aActive) = 0;
      virtual void setMoveAccordingLengthAxis(bool aActive) = 0;
      virtual void setUniqueLayername(bool aActive, CwAPI3D::string aLayername) = 0;
      virtual void setKeepInCenterOfLayerCurrentWall(bool aActive, CwAPI3D::string aLayername) = 0;
      virtual void setKeepInCenterOfLayerNeighbourWall(bool aActive, CwAPI3D::string aLayername) = 0;
      virtual void setKeepInCenterOfRoughVolume(bool aActive) = 0;
      virtual void setElementFromDetail(bool aActive) = 0;

      virtual CwAPI3D::string getUniqueLayername() = 0;
      virtual CwAPI3D::string getKeepInCenterOfLayerCurrentWall() = 0;
      virtual CwAPI3D::string getKeepInCenterOfLayerNeighbourWall() = 0;

      virtual void setStretchInOpeningWidth(bool aActive) = 0;
      virtual bool isStretchInOpeningWidth() = 0;
    };
  }
}
