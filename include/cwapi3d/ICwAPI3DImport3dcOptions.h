// Copyright (C) Cadwork. All rights reserved.

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    class ICwAPI3DImport3dcOptions
    {
    public:
      virtual ~ICwAPI3DImport3dcOptions() = default;
      virtual void destroy() = 0;

      virtual void setImportSaved2dPlanes(bool aValue) = 0;
      virtual bool getImportSaved2dPlanes() = 0;

      virtual void setImportSavedScenes(bool aValue) = 0;
      virtual bool getImportSavedScenes() = 0;

      virtual void setImportExportSolids(bool aValue) = 0;
      virtual bool getImportExportSolids() = 0;

      virtual void setResetPositionNumbers(bool aValue) = 0;
      virtual bool getResetPositionNumbers() = 0;
    };
  }
}
