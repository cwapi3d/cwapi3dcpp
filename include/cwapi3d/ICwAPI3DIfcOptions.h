// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {

#pragma region fwd declaration

    class ICwAPI3DIfcOptionsProjectData;
    class ICwAPI3DIfcOptionsProperties;
    class ICwAPI3DIfcOptionsLevelOfDetail;
    class ICwAPI3DIfcOptionsAggregation;

#pragma endregion fwd declaration

    class ICwAPI3DIfcOptions
    {
    public:
      virtual ~ICwAPI3DIfcOptions() noexcept = default;

      virtual void destroy() = 0;

      virtual ICwAPI3DIfcOptionsProjectData* getCwAPI3DIfcOptionsProjectData() = 0;
      virtual ICwAPI3DIfcOptionsProperties* getCwAPI3DIfcOptionsProperties() = 0;
      virtual ICwAPI3DIfcOptionsLevelOfDetail* getCwAPI3DIfcOptionsLevelOfDetail() = 0;
      virtual ICwAPI3DIfcOptionsAggregation* getCwAPI3DIfcOptionsAggregation() = 0;
    };

    class ICwAPI3DIfcOptionsProjectData
    {
    public:
      virtual ~ICwAPI3DIfcOptionsProjectData() noexcept = default;

      virtual bool getExportProjectNameAsIfcProject() const = 0;
      virtual void setExportProjectNameAsIfcProject(const bool aValue) = 0;

      virtual bool getExportAdressInIfcSite() const = 0;
      virtual void setExportAdressInIfcSite(const bool aValue) = 0;

      virtual bool getExportCoordinatesInIfcSite() const = 0;
      virtual void setExportCoordinatesInIfcSite(const bool aValue) = 0;

      virtual bool getExportTrueNorthInGeometricContext() const = 0;
      virtual void setExportTrueNorthInGeometricContext(const bool aValue) = 0;

      virtual bool getExportTrueNorthInObjectPlacement() const = 0;
      virtual void setExportTrueNorthInObjectPlacement(const bool aValue) = 0;
    };

    class ICwAPI3DIfcOptionsProperties
    {
    public:
      virtual ~ICwAPI3DIfcOptionsProperties() noexcept = default;

      virtual uint32_t getCadworkAttributeForIfcLayer() const = 0;
      virtual void setCadworkAttributeForIfcLayer(const uint32_t& aAttribute) = 0;

      virtual uint32_t getCadworkAttributeForIfcTag() const = 0;
      virtual void setCadworkAttributeForIfcTag(const uint32_t& aAttribute) = 0;

      virtual bool getExportEmptyBuildingAndStoreys() const = 0;
      virtual void setExportEmptyBuildingAndStoreys(const bool aValue) = 0;

      virtual bool getExportCadwork3dPSet() const = 0;
      virtual void setExportCadwork3dPSet(const bool aValue) = 0;

      virtual bool getIgnoreUserAttributesUsedInUserPsets() const = 0;
      virtual void setIgnoreUserAttributesUsedInUserPsets(const bool aValue) = 0;

      virtual bool getExportBIMwoodProperty() const = 0;
      virtual void setExportBIMwoodProperty(const bool aValue) = 0;
    };

    class ICwAPI3DIfcOptionsLevelOfDetail
    {
    public:
      virtual ~ICwAPI3DIfcOptionsLevelOfDetail() noexcept = default;

      virtual bool getExportEndtypeMaterialization() const = 0;
      virtual void setExportEndtypeMaterialization(const bool aValue) = 0;

      virtual bool getCutEndtypeCounterparts() const = 0;
      virtual void setCutEndtypeCounterparts(const bool aValue) = 0;

      virtual bool getExportVbaDrillings() const = 0;
      virtual void setExportVbaDrillings(const bool aValue) = 0;

      virtual bool getExportVbaComponents() const = 0;
      virtual void setExportVbaComponents(const bool aValue) = 0;

      virtual bool getCutDrillings() const = 0;
      virtual void setCutDrillings(const bool aValue) = 0;

      virtual bool getExportInstallationRoundMaterialization() const = 0;
      virtual void setExportInstallationRoundMaterialization(const bool aValue) = 0;

      virtual bool getExportInstallationRectangularMaterialization() const = 0;
      virtual void setExportInstallationRectangularMaterialization(const bool aValue) = 0;

      virtual bool getCutInstallationRound() const = 0;
      virtual void setCutInstallationRound(const bool aValue) = 0;

      virtual bool getCutInstallationRectangular() const = 0;
      virtual void setCutInstallationRectangular(const bool aValue) = 0;

      virtual bool getExportSweptSolidForSimpleGeometry() const = 0;
      virtual void setExportSweptSolidForSimpleGeometry(const bool aValue) = 0;
    };

    class ICwAPI3DIfcOptionsAggregation
    {
    public:
      virtual ~ICwAPI3DIfcOptionsAggregation() noexcept = default;

      virtual bool getConsiderElementModuleAgregation() const = 0;
      virtual void setConsiderElementModuleAgregation(const bool aValue) = 0;

      virtual elementGroupingType getElementModuleAgregationAttribute() const = 0;
      virtual void setElementModuleAgregationAttribute(const elementGroupingType aAttribute) = 0;

      virtual ifcElementCombineBehaviour getExportElementCombineBehavior() const = 0;
      virtual void setExportElementCombineBehavior(const ifcElementCombineBehaviour aState) = 0;

      virtual bool getExportCoverGeometry() const = 0;
      virtual void setExportCoverGeometry(const bool aValue) = 0;

      // #TODO_BR_API_BIM: implement setExportMultiLayerWallType getExportMultiLayerWallType
    };
  }

}
