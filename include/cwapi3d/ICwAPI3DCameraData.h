// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DCameraData
    {
    public:
      enum ProjectionType
      {
        Perspective = 0,
        Orthographic = 1
      };

      /// @brief
      virtual ~ICwAPI3DCameraData() noexcept = default;

      /// @brief
      virtual void destroy() = 0;

      /// @brief
      /// @param aPosition
      virtual void setPosition(CwAPI3D::vector3D const& aPosition) = 0;
      /// @brief
      /// @return
      virtual CwAPI3D::vector3D getPosition() const = 0;

      /// @brief
      /// @param aTarget
      virtual void setTarget(CwAPI3D::vector3D const& aTarget) = 0;
      /// @brief
      /// @return
      virtual CwAPI3D::vector3D getTarget() const = 0;

      /// @brief
      /// @param aUp
      virtual void setUpVector(CwAPI3D::vector3D const& aUp) = 0;
      /// @brief
      /// @return
      virtual CwAPI3D::vector3D getUpVector() const = 0;

      /// @brief
      /// @param aProjectionType
      virtual void setProjectionType(ProjectionType const aProjectionType) = 0;
      /// @brief
      /// @return
      virtual ProjectionType getProjectionType() const = 0;

      /// @brief
      /// @param aFieldWidth
      virtual void setFieldWidth(float const aFieldWidth) = 0;
      /// @brief
      /// @return
      virtual float getFieldWidth() const = 0;

      /// @brief
      /// @param aFieldHeight
      virtual void setFieldHeight(float const aFieldHeight) = 0;
      /// @brief
      /// @return
      virtual float getFieldHeight() const = 0;

      /// @brief
      /// @param aFieldOfView
      virtual void setFieldOfView(double const aFieldOfView) = 0;
      /// @brief
      /// @return
      virtual double getFieldOfView() const = 0;
    };
  }
}
