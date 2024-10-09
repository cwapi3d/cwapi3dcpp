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

    /// @brief
    class ICwAPI3DIfcOptions
    {
    public:
      /// @brief
      virtual ~ICwAPI3DIfcOptions() noexcept = default;

      /// @brief
      virtual void destroy() = 0;

      /// @brief
      /// @return
      virtual ICwAPI3DIfcOptionsProjectData* getCwAPI3DIfcOptionsProjectData() = 0;
      /// @brief
      /// @return
      virtual ICwAPI3DIfcOptionsProperties* getCwAPI3DIfcOptionsProperties() = 0;
      /// @brief
      /// @return
      virtual ICwAPI3DIfcOptionsLevelOfDetail* getCwAPI3DIfcOptionsLevelOfDetail() = 0;
      /// @brief
      /// @return
      virtual ICwAPI3DIfcOptionsAggregation* getCwAPI3DIfcOptionsAggregation() = 0;
    };

    /// @brief
    class ICwAPI3DIfcOptionsProjectData
    {
    public:
      /// @brief
      virtual ~ICwAPI3DIfcOptionsProjectData() noexcept = default;

      /// @brief
      /// @return
      virtual bool getExportProjectNameAsIfcProject() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportProjectNameAsIfcProject(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportAdressInIfcSite() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportAdressInIfcSite(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportCoordinatesInIfcSite() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportCoordinatesInIfcSite(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportTrueNorthInGeometricContext() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportTrueNorthInGeometricContext(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportTrueNorthInObjectPlacement() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportTrueNorthInObjectPlacement(const bool aValue) = 0;
    };

    /// @brief
    class ICwAPI3DIfcOptionsProperties
    {
    public:
      /// @brief
      virtual ~ICwAPI3DIfcOptionsProperties() noexcept = default;

      /// @brief
      /// @return
      virtual uint32_t getCadworkAttributeForIfcLayer() const = 0;
      /// @brief
      /// @param aAttribute
      virtual void setCadworkAttributeForIfcLayer(const uint32_t& aAttribute) = 0;

      /// @brief
      /// @return
      virtual uint32_t getCadworkAttributeForIfcTag() const = 0;
      /// @brief
      /// @param aAttribute
      virtual void setCadworkAttributeForIfcTag(const uint32_t& aAttribute) = 0;

      /// @brief
      /// @return
      virtual bool getExportEmptyBuildingAndStoreys() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportEmptyBuildingAndStoreys(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportCadwork3dPSet() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportCadwork3dPSet(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getIgnoreUserAttributesUsedInUserPsets() const = 0;
      /// @brief
      /// @param aValue
      virtual void setIgnoreUserAttributesUsedInUserPsets(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportBIMwoodProperty() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportBIMwoodProperty(const bool aValue) = 0;
    };

    /// @brief
    class ICwAPI3DIfcOptionsLevelOfDetail
    {
    public:
      /// @brief
      virtual ~ICwAPI3DIfcOptionsLevelOfDetail() noexcept = default;

      /// @brief
      /// @return
      virtual bool getExportEndtypeMaterialization() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportEndtypeMaterialization(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getCutEndtypeCounterparts() const = 0;
      /// @brief
      /// @param aValue
      virtual void setCutEndtypeCounterparts(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportVbaDrillings() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportVbaDrillings(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportVbaComponents() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportVbaComponents(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getCutDrillings() const = 0;
      /// @brief
      /// @param aValue
      virtual void setCutDrillings(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportInstallationRoundMaterialization() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportInstallationRoundMaterialization(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportInstallationRectangularMaterialization() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportInstallationRectangularMaterialization(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getCutInstallationRound() const = 0;
      /// @brief
      /// @param aValue
      virtual void setCutInstallationRound(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getCutInstallationRectangular() const = 0;
      /// @brief
      /// @param aValue
      virtual void setCutInstallationRectangular(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual bool getExportSweptSolidForSimpleGeometry() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportSweptSolidForSimpleGeometry(const bool aValue) = 0;
    };

    /// @brief
    class ICwAPI3DIfcOptionsAggregation
    {
    public:
      /// @brief
      virtual ~ICwAPI3DIfcOptionsAggregation() noexcept = default;

      /// @brief
      /// @return
      virtual bool getConsiderElementModuleAgregation() const = 0;
      /// @brief
      /// @param aValue
      virtual void setConsiderElementModuleAgregation(const bool aValue) = 0;

      /// @brief
      /// @return
      virtual elementGroupingType getElementModuleAgregationAttribute() const = 0;
      /// @brief
      /// @param aAttribute
      virtual void setElementModuleAgregationAttribute(const elementGroupingType aAttribute) = 0;

      /// @brief
      /// @return
      virtual ifcElementCombineBehaviour getExportElementCombineBehavior() const = 0;
      /// @brief
      /// @param aState
      virtual void setExportElementCombineBehavior(const ifcElementCombineBehaviour aState) = 0;

      /// @brief
      /// @return
      virtual bool getExportCoverGeometry() const = 0;
      /// @brief
      /// @param aValue
      virtual void setExportCoverGeometry(const bool aValue) = 0;

      // #TODO_BR_API_BIM: implement setExportMultiLayerWallType getExportMultiLayerWallType
    };
  }

}
