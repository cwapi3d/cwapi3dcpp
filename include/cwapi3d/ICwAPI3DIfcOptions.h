/// @file
/// Copyright (C) 2023 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         30.0
/// @author        Brunner
/// @date          2023-09-29


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


    /// @interface ICwAPI3DIfcOptions
    class ICwAPI3DIfcOptions
    {
    public:
      virtual ~ICwAPI3DIfcOptions() noexcept = default;

      /// @brief Destroys itself
      /// @deprecated Do not use this method anymore
      virtual void destroy() = 0;

      virtual ICwAPI3DIfcOptionsProjectData* getCwAPI3DIfcOptionsProjectData() = 0;
      virtual ICwAPI3DIfcOptionsProperties* getCwAPI3DIfcOptionsProperties() = 0;
      virtual ICwAPI3DIfcOptionsLevelOfDetail* getCwAPI3DIfcOptionsLevelOfDetail() = 0;
      virtual ICwAPI3DIfcOptionsAggregation* getCwAPI3DIfcOptionsAggregation() = 0;
    };

    /// @interface ICwAPI3DIfcOptionsProjectData
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

    /// @interface ICwAPI3DIfcOptionsProperties
    class ICwAPI3DIfcOptionsProperties
    {
    public:
      virtual ~ICwAPI3DIfcOptionsProperties() noexcept = default;

      /// @brief Gets the cadwork attribute whose value becomes each element's IFC presentation layer
      /// (IfcPresentationLayerAssignment). This is the "Attribute" choice for the IFC layer in the IFC export dialog.
      /// @details The value is the attribute's own number, the same one the dialog stores:
      /// | Value           | Attribute                                   |
      /// |-----------------|---------------------------------------------|
      /// | 0               | none - elements get no IFC layer name       |
      /// | 1               | Name                                        |
      /// | 2               | Group                                       |
      /// | 3               | Subgroup                                    |
      /// | 4               | Comment                                     |
      /// | 5               | Edvcode                                     |
      /// | 10001 ... 20000 | user attribute 1 ... 10000 (10000 + number) |
      ///
      /// Since 33.0 the value round-trips unchanged through @ref setCadworkAttributeForIfcLayer.
      /// Before 33.0 a user attribute was reported as its plain number (user attribute 3 as 3),
      /// which made it indistinguishable from Name ... Edvcode.
      /// @return [uint32_t] The attribute value, see the table.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DIfcOptions* options = aFactory.getBimController()->getIfcOptions();
      /// uint32_t layerAttribute = options->getCwAPI3DIfcOptionsProperties()->getCadworkAttributeForIfcLayer();
      /// if (layerAttribute > 10000)
      /// {
      ///   wprintf(L"IFC layer = user attribute %u\n", layerAttribute - 10000);
      /// }
      /// @endcode
      virtual uint32_t getCadworkAttributeForIfcLayer() const = 0;

      /// @brief Sets the cadwork attribute whose value becomes each element's IFC presentation layer
      /// (IfcPresentationLayerAssignment). This is the "Attribute" choice for the IFC layer in the IFC export dialog.
      /// @details Takes the attribute's own number. The values are listed at @ref getCadworkAttributeForIfcLayer:
      /// 0 = none, 1 = Name, 2 = Group, 3 = Subgroup, 4 = Comment, 5 = Edvcode, 10000 + n = user attribute n.
      ///
      /// The value only changes this options object. It reaches the document when the object is passed to
      /// ICwAPI3DBimController::exportIfc4SilentlyWithOptions or
      /// ICwAPI3DBimController::exportIfc2x3SilentlyWithOptions. Those exports store it in the document's
      /// IFC export settings, where the dialog and every later export see it.
      ///
      /// Any other value (6 ... 10000, or above 20000) names no attribute and is ignored on export.
      /// The document keeps its current IFC-layer attribute, and no error is reported.
      ///
      /// @warning Changed in 33.0. Before 33.0 the exports read 1 ... 10000 as a user-attribute
      /// number, so 3 meant user attribute 3. Now 3 means Subgroup. Pass 10003 for user attribute 3.
      /// @param[in] aAttribute [const uint32_t&] The attribute value, see the table at
      /// @ref getCadworkAttributeForIfcLayer.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DIfcOptions* options = aFactory.getBimController()->getIfcOptions();
      /// options->getCwAPI3DIfcOptionsProperties()->setCadworkAttributeForIfcLayer(2);     // Group
      /// options->getCwAPI3DIfcOptionsProperties()->setCadworkAttributeForIfcLayer(10003); // user attribute 3
      /// ICwAPI3DElementIDList* elements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// aFactory.getBimController()->exportIfc4SilentlyWithOptions(elements, L"C:\\temp\\model.ifc", options);
      /// @endcode
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

    /// @interface ICwAPI3DIfcOptionsLevelOfDetail
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

    /// @interface ICwAPI3DIfcOptionsAggregation
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
