/// @file
/// Copyright (C) 2026 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         33.0
/// @author        LBobillier
/// @date          2026-09-21
#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DElementLevelOfDetailOptions
    /// @brief Format-agnostic element level-of-detail options. Decorates format-specific
    ///        export options (SAT, STEP, IGES, ...) via ICwAPI3DFileExportOptions.
    /// @since 33.0
    class ICwAPI3DElementLevelOfDetailOptions
    {
    public:
      virtual ~ICwAPI3DElementLevelOfDetailOptions() noexcept = default;

      /// @brief Releases this instance.
      virtual void destroy() = 0;

      /// @brief Whether endtypes are materialized as real geometry.
      virtual bool getMaterializeEndTypes() const = 0;
      virtual void setMaterializeEndTypes(bool aValue) = 0;

      /// @brief Whether endtype counterparts are cut from the materialized endtype.
      virtual bool getCutEndTypeCounterparts() const = 0;
      virtual void setCutEndTypeCounterparts(bool aValue) = 0;

      /// @brief Whether openings are cut from the exported solids.
      virtual bool getCutOpenings() const = 0;
      virtual void setCutOpenings(bool aValue) = 0;

      /// @brief Whether drillings are cut from the exported solids.
      virtual bool getCutDrillings() const = 0;
      virtual void setCutDrillings(bool aValue) = 0;

      /// @brief Whether MEP elements are materialized as real geometry.
      virtual bool getMaterializeMepElements() const = 0;
      virtual void setMaterializeMepElements(bool aValue) = 0;

      /// @brief Whether materialized MEP elements are cut from intersecting solids.
      virtual bool getCutMepElements() const = 0;
      virtual void setCutMepElements(bool aValue) = 0;

      // NOTE: ABI compatibility - new options are appended below this line only.
      // Never insert, reorder, or remove existing virtual methods.
    };
  } // namespace Interfaces
} // namespace CwAPI3D
