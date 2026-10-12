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
#include <cstdint>
#include "ICwAPI3DElementLevelOfDetailOptions.h"
namespace CwAPI3D
{
  /// @brief Identifies the concrete format decorating an ICwAPI3DFileExportOptions instance.
  enum class fileExportFormat : uint32_t
  {
    eSAT = 0,
    eSTEP = 1,
    eIGES = 2,
  };
  namespace Interfaces
  {
    /// @interface ICwAPI3DFileExportOptions
    /// @brief Common base for all format-specific export options. Every concrete
    ///        export-options interface (SAT/STEP/IGES/...) inherits from this.
    /// @since 33.0
    class ICwAPI3DFileExportOptions
    {
    public:
      virtual ~ICwAPI3DFileExportOptions() noexcept = default;
      /// @brief Releases this instance. Must be called instead of `delete`.
      virtual void destroy() = 0;
      /// @brief The concrete export format this instance decorates.
      virtual CwAPI3D::fileExportFormat getFileExportFormat() const = 0;
      /// @brief Gets the agnostic element level-of-detail options decorating this export.
      virtual ICwAPI3DElementLevelOfDetailOptions* getLevelOfDetailOptions() = 0;
      // NOTE: ABI compatibility - this base is depended on by every derived options
      // interface. New members are appended below this line only.
    };
  } // namespace Interfaces
} // namespace CwAPI3D
