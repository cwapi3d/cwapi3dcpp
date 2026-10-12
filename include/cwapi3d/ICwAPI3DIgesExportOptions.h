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
  namespace Interfaces
  {
    /// @interface ICwAPI3DIgesExportOptions
    /// @brief IGES export options. Inherits the common export-options contract and the
    ///        agnostic element LoD options from ICwAPI3DFileExportOptions.
    /// @since 33.0
    class ICwAPI3DIgesExportOptions : public ICwAPI3DFileExportOptions
    {
    public:
      virtual ~ICwAPI3DIgesExportOptions() noexcept = default;
      
      /// @brief The file scale factor.
      virtual double getScaleFactor() const = 0;
      virtual void setScaleFactor(double aValue) = 0;
    };
  } // namespace Interfaces
} // namespace CwAPI3D
