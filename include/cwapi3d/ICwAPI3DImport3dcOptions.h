// Copyright (C) Cadwork. All rights reserved.

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DImport3dcOptions
    {
    public:
      /// @brief
      virtual ~ICwAPI3DImport3dcOptions() = default;
      /// @brief
      virtual void destroy() = 0;

      /// @brief
      /// @param aValue
      virtual void setImportSaved2dPlanes(bool aValue) = 0;
      /// @brief
      /// @return
      virtual bool getImportSaved2dPlanes() = 0;

      /// @brief
      /// @param aValue
      virtual void setImportSavedScenes(bool aValue) = 0;
      /// @brief
      /// @return
      virtual bool getImportSavedScenes() = 0;

      /// @brief
      /// @param aValue
      virtual void setImportExportSolids(bool aValue) = 0;
      /// @brief
      /// @return
      virtual bool getImportExportSolids() = 0;

      /// @brief
      /// @param aValue
      virtual void setResetPositionNumbers(bool aValue) = 0;
      /// @brief
      /// @return
      virtual bool getResetPositionNumbers() = 0;
    };
  }
}
