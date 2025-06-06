/** @file 
* Copyright (C) 2023 cadwork informatik AG
* 
* This file is part of the CwAPI3D module for cadwork 3d.
* 
* @ingroup       CwAPI3D
* @since         30.0
* @author        Brunner
* @date          2023-09-29
*/


#pragma once
#include "CwAPI3DTypes.h"


namespace CwAPI3D
{
  namespace Interfaces
  {

    class ICwAPI3DIfcOptionsProjectData;
    class ICwAPI3DIfcOptionsProperties;
    class ICwAPI3DIfcOptionsLevelOfDetail;
    class ICwAPI3DIfcOptionsAggregation;


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
      virtual void setExportProjectNameAsIfcProject(bool aValue) = 0;

      virtual bool getExportAdressInIfcSite() const = 0;
      virtual void setExportAdressInIfcSite(bool aValue) = 0;

      virtual bool getExportCoordinatesInIfcSite() const = 0;
      virtual void setExportCoordinatesInIfcSite(bool aValue) = 0;

      virtual bool getExportTrueNorthInGeometricContext() const = 0;
      virtual void setExportTrueNorthInGeometricContext(bool aValue) = 0;

      virtual bool getExportTrueNorthInObjectPlacement() const = 0;
      virtual void setExportTrueNorthInObjectPlacement(bool aValue) = 0;
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
      virtual void setExportEmptyBuildingAndStoreys(bool aValue) = 0;

      virtual bool getExportCadwork3dPSet() const = 0;
      virtual void setExportCadwork3dPSet(bool aValue) = 0;

      virtual bool getIgnoreUserAttributesUsedInUserPsets() const = 0;
      virtual void setIgnoreUserAttributesUsedInUserPsets(bool aValue) = 0;

      virtual bool getExportBIMwoodProperty() const = 0;
      virtual void setExportBIMwoodProperty(bool aValue) = 0;

      virtual bool getExportQuantitySets() const = 0;
      virtual void setExportQuantitySets(bool aValue) = 0;
    };

    class ICwAPI3DIfcOptionsLevelOfDetail
    {
    public:
      virtual ~ICwAPI3DIfcOptionsLevelOfDetail() noexcept = default;

      virtual bool getExportEndtypeMaterialization() const = 0;
      virtual void setExportEndtypeMaterialization(bool aValue) = 0;

      virtual bool getCutEndtypeCounterparts() const = 0;
      virtual void setCutEndtypeCounterparts(bool aValue) = 0;

      virtual bool getExportVbaDrillings() const = 0;
      virtual void setExportVbaDrillings(bool aValue) = 0;

      virtual bool getExportVbaComponents() const = 0;
      virtual void setExportVbaComponents(bool aValue) = 0;

      virtual bool getCutDrillings() const = 0;
      virtual void setCutDrillings(bool aValue) = 0;

      virtual bool getExportInstallationRoundMaterialization() const = 0;
      virtual void setExportInstallationRoundMaterialization(bool aValue) = 0;

      virtual bool getExportInstallationRectangularMaterialization() const = 0;
      virtual void setExportInstallationRectangularMaterialization(bool aValue) = 0;

      virtual bool getCutInstallationRound() const = 0;
      virtual void setCutInstallationRound(bool aValue) = 0;

      virtual bool getCutInstallationRectangular() const = 0;
      virtual void setCutInstallationRectangular(bool aValue) = 0;

      virtual bool getExportSweptSolidForSimpleGeometry() const = 0;
      virtual void setExportSweptSolidForSimpleGeometry(bool aValue) = 0;
    };

    class ICwAPI3DIfcOptionsAggregation
    {
    public:
      virtual ~ICwAPI3DIfcOptionsAggregation() noexcept = default;

      virtual bool getConsiderElementModuleAgregation() const = 0;
      virtual void setConsiderElementModuleAgregation(bool aValue) = 0;

      virtual elementGroupingType getElementModuleAgregationAttribute() const = 0;
      virtual void setElementModuleAgregationAttribute(elementGroupingType aAttribute) = 0;

      virtual ifcElementCombineBehaviour getExportElementCombineBehavior() const = 0;
      virtual void setExportElementCombineBehavior(ifcElementCombineBehaviour aState) = 0;

      virtual bool getExportCoverGeometry() const = 0;
      virtual void setExportCoverGeometry(bool aValue) = 0;

      virtual ifcMaterialDefinition getMultiLayerMaterialDefinitionType() const = 0;
      virtual void setMultiLayerMaterialDefinitionType(ifcMaterialDefinition aMaterialDefinition) = 0;
    };
  }

}
