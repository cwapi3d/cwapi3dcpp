// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * \brief
    */
    class ICwAPI3DElementModuleProperties
    {
    public:
      /// @brief
      virtual void destroy() = 0;
      /// @brief
      /// @return
      virtual bool isStretchWithTopOfWall() = 0;
      /// @brief
      /// @return
      virtual bool isMoveWithTopOfWall() = 0;
      /// @brief
      /// @return
      virtual bool isDistributeInAxisDirection() = 0;
      /// @brief
      /// @return
      virtual bool isDistributePerpendicularToAxisDirection() = 0;
      /// @brief
      /// @return
      virtual bool isStopDistributionInAxisDirection() = 0;
      /// @brief
      /// @return
      virtual bool isStopDistributionPerpendicularToAxisDirection() = 0;
      /// @brief
      /// @return
      virtual bool isBottomPlate() = 0;
      /// @brief
      /// @return
      virtual bool isTopPlate() = 0;
      /// @brief
      /// @return
      virtual bool isOpeningSill() = 0;
      /// @brief
      /// @return
      virtual bool isOpeningLintel() = 0;
      /// @brief
      /// @return
      virtual bool isCuttingElement() = 0;
      /// @brief
      /// @return
      virtual bool isNotCutWithCuttingElement() = 0;
      /// @brief
      /// @return
      virtual bool isAuxiliary() = 0;
      /// @brief
      /// @return
      virtual bool isNotPlacedAtEndOfWall() = 0;
      /// @brief
      /// @return
      virtual bool isNotPlacedAtStartOfWall() = 0;
      /// @brief
      /// @return
      virtual bool isStretchWithOpeningLintel() = 0;
      /// @brief
      /// @return
      virtual bool isStretchWithOpeningSill() = 0;
      /// @brief
      /// @return
      virtual bool isSolderInAxisDirection() = 0;
      /// @brief
      /// @return
      virtual bool isNoCollisionControl() = 0;
      /// @brief
      /// @return
      virtual bool isNoInsideControl() = 0;
      /// @brief
      /// @return
      virtual bool isUseForDetailCoordinateSystem() = 0;
      /// @brief
      /// @param aActive
      virtual void setStretchWithTopOfWall(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setMoveWithTopOfWall(bool aActive) = 0;
      /// @brief
      /// @param aActive
      /// @param aDistance
      virtual void setDistributeInAxisDirection(bool aActive, double aDistance) = 0;
      /// @brief
      /// @param aActive
      /// @param aDistance
      virtual void setDistributePerpendicularToAxisDirection(bool aActive, double aDistance) = 0;
      /// @brief
      /// @param aActive
      virtual void setStopDistributionInAxisDirection(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setStopDistributionPerpendicularToAxisDirection(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setBottomPlate(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setTopPlate(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setOpeningSill(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setOpeningLintel(bool aActive) = 0;
      /// @brief
      /// @param aActive
      /// @param aPriority
      virtual void setCuttingElement(bool aActive, uint32_t aPriority) = 0;
      /// @brief
      /// @param aActive
      virtual void setNotCutWithCuttingElement(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setAuxiliary(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setNotPlacedAtEndOfWall(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setNotPlacedAtStartOfWall(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setStretchWithOpeningLintel(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setStretchWithOpeningSill(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setSolderInAxisDirection(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setNoCollisionControl(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setNoInsideControl(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setUseForDetailCoordinateSystem(bool aActive) = 0;
      /// @brief
      /// @return
      virtual double getDistributeInAxisDirectionDistance() = 0;
      /// @brief
      /// @return
      virtual double getDistributePerpendicularToAxisDirectionDistance() = 0;
      /// @brief
      /// @return
      virtual uint32_t getCuttingElementPriority() = 0;

      /// @brief
      /// @return
      virtual bool isDistributeInAxisDirectionUseMaxDistance() = 0;
      /// @brief
      /// @return
      virtual bool isDistributePerpendicularToAxisDirectionUseMaxDistance() = 0;
      /// @brief
      /// @return
      virtual bool isDistributeInAxisDirectionUseNumber() = 0;
      /// @brief
      /// @return
      virtual bool isDistributePerpendicularToAxisDirectionUseNumber() = 0;

      /// @brief
      /// @param aActive
      virtual void setDistributeInAxisDirectionUseMaxDistance(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setDistributePerpendicularToAxisDirectionUseMaxDistance(bool aActive) = 0;
      /// @brief
      /// @param aActive
      /// @param aNumber
      virtual void setDistributeInAxisDirectionUseNumber(bool aActive, uint32_t aNumber) = 0;
      /// @brief
      /// @param aActive
      /// @param aNumber
      virtual void setDistributePerpendicularToAxisDirectionUseNumber(bool aActive, uint32_t aNumber) = 0;
      /// @brief
      /// @return
      virtual uint32_t getDistributeInAxisDirectionNumber() = 0;
      /// @brief
      /// @return
      virtual uint32_t getDistributePerpendicularToAxisDirectionNumber() = 0;

      /// @brief
      /// @return
      virtual bool isMainElement() = 0;
      /// @brief
      /// @return
      virtual bool isStrechtAccordingThicknessAxis() = 0;
      /// @brief
      /// @return
      virtual bool isStrechtAccordingLengthAxis() = 0;
      /// @brief
      /// @return
      virtual bool isMoveAccordingThicknessAxis() = 0;
      /// @brief
      /// @return
      virtual bool isMoveAccordingLengthAxis() = 0;
      /// @brief
      /// @return
      virtual bool isUniqueLayername() = 0;
      /// @brief
      /// @return
      virtual bool isKeepInCenterOfLayerCurrentWall() = 0;
      /// @brief
      /// @return
      virtual bool isKeepInCenterOfLayerNeighbourWall() = 0;
      /// @brief
      /// @return
      virtual bool isKeepInCenterOfRoughVolume() = 0;
      /// @brief
      /// @return
      virtual bool isElementFromDetail() = 0;

      /// @brief
      /// @param aActive
      virtual void setMainElement(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setStrechtAccordingThicknessAxis(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setStrechtAccordingLengthAxis(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setMoveAccordingThicknessAxis(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setMoveAccordingLengthAxis(bool aActive) = 0;
      /// @brief
      /// @param aActive
      /// @param aLayername
      virtual void setUniqueLayername(bool aActive, CwAPI3D::string aLayername) = 0;
      /// @brief
      /// @param aActive
      /// @param aLayername
      virtual void setKeepInCenterOfLayerCurrentWall(bool aActive, CwAPI3D::string aLayername) = 0;
      /// @brief
      /// @param aActive
      /// @param aLayername
      virtual void setKeepInCenterOfLayerNeighbourWall(bool aActive, CwAPI3D::string aLayername) = 0;
      /// @brief
      /// @param aActive
      virtual void setKeepInCenterOfRoughVolume(bool aActive) = 0;
      /// @brief
      /// @param aActive
      virtual void setElementFromDetail(bool aActive) = 0;

      /// @brief
      /// @return
      virtual CwAPI3D::string getUniqueLayername() = 0;
      /// @brief
      /// @return
      virtual CwAPI3D::string getKeepInCenterOfLayerCurrentWall() = 0;
      /// @brief
      /// @return
      virtual CwAPI3D::string getKeepInCenterOfLayerNeighbourWall() = 0;

      /// @brief
      /// @param aActive
      virtual void setStretchInOpeningWidth(bool aActive) = 0;
      /// @brief
      /// @return
      virtual bool isStretchInOpeningWidth() = 0;
    };
  }
}
