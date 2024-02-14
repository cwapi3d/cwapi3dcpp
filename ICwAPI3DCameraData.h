/** @file 
* Copyright (C) 2023 cadwork informatik AG
* 
* This file is part of the CwAPI3D module for cadwork 3d.
* 
* @ingroup       CwAPI3D
* @since         30.0
* @author        Brunner
* @date          2023-12-20
*/


#pragma once
#include "CwAPI3DTypes.h"

namespace CwAPI3D::Interfaces
{
  class ICwAPI3DCameraData
  {
  public:
    enum ProjectionType
    {
      Perspective = 0,
      Orthographic = 1
    };

    virtual ~ICwAPI3DCameraData() noexcept = default;

    virtual void destroy() = 0;

    virtual void setPosition(CwAPI3D::vector3D const& aPosition) = 0;
    virtual CwAPI3D::vector3D getPosition() const = 0;

    virtual void setTarget(CwAPI3D::vector3D const& aTarget) = 0;
    virtual CwAPI3D::vector3D getTarget() const = 0;

    virtual void setUpVector(CwAPI3D::vector3D const& aUp) = 0;
    virtual CwAPI3D::vector3D getUpVector() const = 0;

    virtual void setProjectionType(ProjectionType const aProjectionType) = 0;
    virtual ProjectionType getProjectionType() const = 0;

    virtual void setFieldWidth(float const aFieldWidth) = 0;
    virtual float getFieldWidth() const = 0;

    virtual void setFieldHeight(float const aFieldHeight) = 0;
    virtual float getFieldHeight() const = 0;

    virtual void setFieldOfView(double const aFieldOfView) = 0;
    virtual double getFieldOfView() const = 0;
  };
}
