/** @file 
* Copyright (C) 2024 cadwork informatik AG
* 
* This file is part of the CwAPI3D module for cadwork 3d.
* 
* @ingroup       CwAPI3D
* @since         30.0
* @author        Brunner
* @date          2024-02-05
*/


#pragma once

namespace CwAPI3D::Interfaces
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
