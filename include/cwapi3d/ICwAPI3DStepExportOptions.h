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
  /// @brief Named STEP AP version constants. Purely additive - setVersion() still
  ///        accepts any int32_t, so a version not yet named here can be passed directly.
  namespace StepApVersion
  {
    constexpr int32_t eAP203 = 203;
    constexpr int32_t eAP214 = 214;
  }
  
  namespace Interfaces
  {
    /// @interface ICwAPI3DStepExportOptions
    /// @brief STEP export options. Inherits the common export-options contract and the
    ///        agnostic element LoD options from ICwAPI3DFileExportOptions.
    /// @since 33.0
    class ICwAPI3DStepExportOptions : public ICwAPI3DFileExportOptions
    {
    public:
      virtual ~ICwAPI3DStepExportOptions() noexcept = default;
      
      /// @brief The file scale factor.
      virtual double getScaleFactor() const = 0;
      virtual void setScaleFactor(double aValue) = 0;
      
      /// @brief The STEP AP version to use. See CwAPI3D::StepApVersion for named
      ///        constants (e.g. StepApVersion::eAP214 = 214).
      virtual int32_t getVersion() const = 0;
      virtual void setVersion(int32_t aValue) = 0;
      
      /// @brief Whether imperial units are used.
      virtual bool getImperialUnits() const = 0;
      virtual void setImperialUnits(bool aValue) = 0;
    };
  } // namespace Interfaces
} // namespace CwAPI3D
