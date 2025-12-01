/** @file 
* Copyright (C) 2025 cadwork informatik AG
* 
* This file is part of the CwAPI3D module for cadwork 3d.
* 
* @ingroup       CwAPI3D
* @since         30.0
* @author        Paquet
* @date          2025-01-15
*/

#pragma once

#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    class ICwAPI3DShoulderOptions
    {
    public:
      virtual ~ICwAPI3DShoulderOptions() noexcept = default;

      virtual void destroy() = 0;

      virtual bool getAddDrillingAxis() const = 0;
      virtual void setAddDrillingAxis(bool aValue) = 0;
      virtual bool getAddDrillingAxisQueryUserFlag() const = 0;
      virtual void setAddDrillingAxisQueryUserFlag(bool aFlag) = 0;

      virtual double getDrillingDiameter() const = 0;
      virtual void setDrillingDiameter(double aValue) = 0;
      virtual bool getDrillingDiameterQueryUserFlag() const = 0;
      virtual void setDrillingDiameterQueryUserFlag(bool aFlag) = 0;

      virtual double getDrillingTolerance() const = 0;
      virtual void setDrillingTolerance(double aValue) = 0;
      virtual bool getDrillingToleranceQueryUserFlag() const = 0;
      virtual void setDrillingToleranceQueryUserFlag(bool aFlag) = 0;

      virtual ShoulderDrillingOrientation getDrillingOrientation() const = 0;
      virtual void setDrillingOrientation(ShoulderDrillingOrientation aValue) = 0;
      virtual bool getDrillingOrientationQueryUserFlag() const = 0;
      virtual void setDrillingOrientationQueryUserFlag(bool aFlag) = 0;

      virtual ShoulderBeamGeometry getBeamGeometry() const = 0;
      virtual void setBeamGeometry(ShoulderBeamGeometry aValue) = 0;
      virtual bool getBeamGeometryQueryUserFlag() const = 0;
      virtual void setBeamGeometryQueryUserFlag(bool aFlag) = 0;

      virtual double getShoulderDepth() const = 0;
      virtual void setShoulderDepth(double aValue) = 0;
      virtual bool getShoulderDepthQueryUserFlag() const = 0;
      virtual void setShoulderDepthQueryUserFlag(bool aFlag) = 0;

      virtual double getToeOffset() const = 0;
      virtual void setToeOffset(double aValue) = 0;
      virtual bool getToeOffsetQueryUserFlag() const = 0;
      virtual void setToeOffsetQueryUserFlag(bool aFlag) = 0;

      virtual bool getCutCounterPartThroughWholeWidth() const = 0;
      virtual void setCutCounterPartThroughWholeWidth(bool aValue) = 0;
      virtual bool getCutCounterPartThroughWholeWidthQueryUserFlag() const = 0;
      virtual void setCutCounterPartThroughWholeWidthQueryUserFlag(bool aFlag) = 0;

      virtual bool getAddEndType() const = 0;
      virtual void setAddEndType(bool aValue) = 0;
      virtual bool getAddEndTypeQueryUserFlag() const = 0;
      virtual void setAddEndTypeQueryUserFlag(bool aFlag) = 0;

      virtual ICwAPI3DString* getEndTypeName() const = 0;
      virtual void setEndTypeName(const character* aValue) = 0;
      virtual bool getEndTypeNameQueryUserFlag() const = 0;
      virtual void setEndTypeNameQueryUserFlag(bool aFlag) = 0;
    };

    class ICwAPI3DHeelShoulderOptions
    {
    public:
      virtual ~ICwAPI3DHeelShoulderOptions() noexcept = default;

      virtual void destroy() = 0;

      virtual HeelShoulderBeamGeometry getBeamGeometry() const = 0;
      virtual void setBeamGeometry(HeelShoulderBeamGeometry aValue) = 0;
      virtual bool getBeamGeometryQueryUserFlag() const = 0;
      virtual void setBeamGeometryQueryUserFlag(bool aFlag) = 0;

      virtual double getShoulderDepth() const = 0;
      virtual void setShoulderDepth(double aValue) = 0;
      virtual bool getShoulderDepthQueryUserFlag() const = 0;
      virtual void setShoulderDepthQueryUserFlag(bool aFlag) = 0;

      virtual double getGap() const = 0;
      virtual void setGap(double aValue) = 0;
      virtual bool getGapQueryUserFlag() const = 0;
      virtual void setGapQueryUserFlag(bool aFlag) = 0;

      virtual bool getCutCounterPartThroughWholeWidth() const = 0;
      virtual void setCutCounterPartThroughWholeWidth(bool aValue) = 0;
      virtual bool getCutCounterPartThroughWholeWidthQueryUserFlag() const = 0;
      virtual void setCutCounterPartThroughWholeWidthQueryUserFlag(bool aFlag) = 0;

      virtual bool getAddEndType() const = 0;
      virtual void setAddEndType(bool aValue) = 0;
      virtual bool getAddEndTypeQueryUserFlag() const = 0;
      virtual void setAddEndTypeQueryUserFlag(bool aFlag) = 0;

      virtual ICwAPI3DString* getEndTypeName() const = 0;
      virtual void setEndTypeName(const character* aValue) = 0;
      virtual bool getEndTypeNameQueryUserFlag() const = 0;
      virtual void setEndTypeNameQueryUserFlag(bool aFlag) = 0;
    };

    class ICwAPI3DDoubleShoulderOptions
    {
    public:
      virtual ~ICwAPI3DDoubleShoulderOptions() noexcept = default;

      virtual void destroy() = 0;

      virtual bool getAddDrillingAxis() const = 0;
      virtual void setAddDrillingAxis(bool aValue) = 0;
      virtual bool getAddDrillingAxisQueryUserFlag() const = 0;
      virtual void setAddDrillingAxisQueryUserFlag(bool aFlag) = 0;

      virtual double getDrillingDiameter() const = 0;
      virtual void setDrillingDiameter(double aValue) = 0;
      virtual bool getDrillingDiameterQueryUserFlag() const = 0;
      virtual void setDrillingDiameterQueryUserFlag(bool aFlag) = 0;

      virtual double getDrillingTolerance() const = 0;
      virtual void setDrillingTolerance(double aValue) = 0;
      virtual bool getDrillingToleranceQueryUserFlag() const = 0;
      virtual void setDrillingToleranceQueryUserFlag(bool aFlag) = 0;

      virtual ShoulderDrillingOrientation getDrillingOrientation() const = 0;
      virtual void setDrillingOrientation(ShoulderDrillingOrientation aValue) = 0;
      virtual bool getDrillingOrientationQueryUserFlag() const = 0;
      virtual void setDrillingOrientationQueryUserFlag(bool aFlag) = 0;

      virtual ShoulderBeamGeometry getBeamGeometry() const = 0;
      virtual void setBeamGeometry(ShoulderBeamGeometry aValue) = 0;
      virtual bool getBeamGeometryQueryUserFlag() const = 0;
      virtual void setBeamGeometryQueryUserFlag(bool aFlag) = 0;

      virtual double getDoubleShoulderDepth() const = 0;
      virtual void setDoubleShoulderDepth(double aValue) = 0;
      virtual bool getDoubleShoulderDepthQueryUserFlag() const = 0;
      virtual void setDoubleShoulderDepthQueryUserFlag(bool aFlag) = 0;

      virtual double getHeelShoulderDepth() const = 0;
      virtual void setHeelShoulderDepth(double aValue) = 0;
      virtual bool getHeelShoulderDepthQueryUserFlag() const = 0;
      virtual void setHeelShoulderDepthQueryUserFlag(bool aFlag) = 0;

      virtual bool getCutCounterPartThroughWholeWidth() const = 0;
      virtual void setCutCounterPartThroughWholeWidth(bool aValue) = 0;
      virtual bool getCutCounterPartThroughWholeWidthQueryUserFlag() const = 0;
      virtual void setCutCounterPartThroughWholeWidthQueryUserFlag(bool aFlag) = 0;
    };
  }
}
