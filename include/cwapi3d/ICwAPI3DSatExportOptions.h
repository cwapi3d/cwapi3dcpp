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
#include "ICwAPI3DFileExportOptions.h"
namespace CwAPI3D
{
  /// @brief Named ACIS/SAT version constants. Purely additive - setVersion() still
  ///        accepts any int32_t, so a version not yet named here can be passed directly.
  namespace SatAcisVersion
  {
    constexpr int32_t eV21_0 = 2100;
    constexpr int32_t eV32_0 = 3200;
    constexpr int32_t eV33_0 = 3300;
    constexpr int32_t eV34_0 = 3400;
  }
  
  namespace Interfaces
  {
    /// @interface ICwAPI3DSatExportOptions
    /// @brief SAT export options. Inherits the common export-options contract and the
    ///        agnostic element LoD options from ICwAPI3DFileExportOptions.
    /// @since 33.0
    class ICwAPI3DSatExportOptions : public ICwAPI3DFileExportOptions
    {
    public:
      virtual ~ICwAPI3DSatExportOptions() noexcept = default;
      
      /// @brief The file scale factor.
      virtual double getScaleFactor() const = 0;
      virtual void setScaleFactor(double aValue) = 0;
      
      /// @brief Whether to write the SAT file in binary or a human-readable format.
      virtual bool getBinary() const = 0;
      virtual void setBinary(bool aValue) = 0;
      
      /// @brief The ACIS version to use. See CwAPI3D::SatAcisVersion for named
      ///        constants (e.g. SatAcisVersion::eV33_0 = 3300).
      virtual int32_t getVersion() const = 0;
      virtual void setVersion(int32_t aValue) = 0;
    };
  } // namespace Interfaces
} // namespace CwAPI3D
