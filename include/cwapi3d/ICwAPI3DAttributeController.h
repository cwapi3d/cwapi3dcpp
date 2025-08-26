/// @file
/// Copyright (C) 2016 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         24.0
/// @author        Paquet
/// @date          2016-12-15

#pragma once

#include "CwAPI3DTypes.h"
#include "ICwAPI3DAttributeDisplaySettings.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DElementType.h"
#include "ICwAPI3DExtendedSettings.h"
#include "ICwAPI3DLayerSettings.h"
#include "ICwAPI3DProcessType.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"

#include <vector>

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DAttributeController
    class ICwAPI3DAttributeController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the element name.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element name.
      virtual ICwAPI3DString* getName(elementID aElementId) = 0;

      /// @brief Sets the element name.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aName [const @ref character*] The element name.
      virtual void setName(ICwAPI3DElementIDList* aElementIdList, const character* aName) = 0;

      /// @brief Gets the element group.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element group.
      virtual ICwAPI3DString* getGroup(elementID aElementId) = 0;

      /// @brief Sets the element group.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aGroup [const @ref character*] The element group.
      virtual void setGroup(ICwAPI3DElementIDList* aElementIdList, const character* aGroup) = 0;

      /// @brief Gets the element subgroup.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element subgroup.
      virtual ICwAPI3DString* getSubgroup(elementID aElementId) = 0;

      /// @brief Sets the element subgroup.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aSubgroup [const @ref character*] The element subgroup.
      virtual void setSubgroup(ICwAPI3DElementIDList* aElementIdList, const character* aSubgroup) = 0;

      /// @brief Gets the element comment.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element comment.
      virtual ICwAPI3DString* getComment(elementID aElementId) = 0;

      /// @brief Sets the element comment.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aComment [const @ref character*] The element comment.
      virtual void setComment(ICwAPI3DElementIDList* aElementIdList, const character* aComment) = 0;

      /// @brief Gets the element user attribute.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aNumber [uint32_t] user attribute number
      /// @return [@ref ICwAPI3DString*] The element user attribute.
      virtual ICwAPI3DString* getUserAttribute(elementID aElementId, uint32_t aNumber) = 0;

      /// @brief Sets the element user attribute.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aNumber [uint32_t] The user attribute number.
      /// @param[in] aUserAttribute [const @ref character*] The element user attribute value.
      virtual void setUserAttribute(ICwAPI3DElementIDList* aElementIdList, uint32_t aNumber, const character* aUserAttribute) = 0;

      /// @brief Gets the element SKU.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element SKU.
      virtual ICwAPI3DString* getSKU(elementID aElementId) = 0;

      /// @brief Sets the element SKU.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aSKU [const @ref character*] The element SKU.
      virtual void setSKU(ICwAPI3DElementIDList* aElementIdList, const character* aSKU) = 0;

      /// @brief Gets the element production number.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [uint32_t] The element production number.
      virtual uint32_t getProductionNumber(elementID aElementId) = 0;

      /// @brief Sets the element production number.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aProductionNumber [uint32_t] The element production number.
      virtual void setProductionNumber(ICwAPI3DElementIDList* aElementIdList, uint32_t aProductionNumber) = 0;

      /// @brief Gets the element part number.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [uint32_t] The element part number.
      virtual uint32_t getPartNumber(elementID aElementId) = 0;

      /// @brief Sets the element part number.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aPartNumber [uint32_t] The element part number.
      virtual void setPartNumber(ICwAPI3DElementIDList* aElementIdList, uint32_t aPartNumber) = 0;

      /// @brief Gets the element additional data.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aDataID [const @ref character*] The data id to retrieve.
      /// @return [@ref ICwAPI3DString*] The element additional data
      virtual ICwAPI3DString* getAdditionalData(elementID aElementId, const character* aDataID) = 0;

      /// @brief Sets the element additional data.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aDataID [const @ref character*] The data ID.
      /// @param[in] aDataText [const @ref character*] The element additional data.
      virtual void setAdditionalData(ICwAPI3DElementIDList* aElementIdList, const character* aDataID, const character* aDataText) = 0;

      /// @brief Deletes the element additional data.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aDataID  [const @ref character*] The data ID.
      virtual void deleteAdditionalData(ICwAPI3DElementIDList* aElementIdList, const character* aDataID) = 0;

      /// @brief Gets the user attribute name.
      /// @param[in] aNumber [uint32_t] The user attribute number.
      /// @return [@ref ICwAPI3DString*] The user attribute name.
      virtual ICwAPI3DString* getUserAttributeName(uint32_t aNumber) = 0;

      /// @brief Sets the user attribute name.
      /// @param[in] aNumber [uint32_t] The user attribute number.
      /// @param[in] aUserAttributeName [const @ref character*] The user attribute name.
      virtual void setUserAttributeName(uint32_t aNumber, const character* aUserAttributeName) = 0;

      /// @brief Gets the element wall situation.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element wall situation.
      virtual ICwAPI3DString* getWallSituation(elementID aElementId) = 0;

      /// @brief Tests if element is beam.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is beam, false otherwise.
      virtual bool isBeam(elementID aElementId) = 0;

      /// @brief Tests if element is panel.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is panel, false otherwise.
      virtual bool isPanel(elementID aElementId) = 0;

      /// @brief Tests if element is opening.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is opening, false otherwise.
      virtual bool isOpening(elementID aElementId) = 0;

      /// @brief Tests if element is wall.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is wall, false otherwise.
      virtual bool isWall(elementID aElementId) = 0;

      /// @brief Tests if element is floor.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is floor, false otherwise.
      virtual bool isFloor(elementID aElementId) = 0;

      /// @brief Tests if element is roof.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is roof, false otherwise.
      virtual bool isRoof(elementID aElementId) = 0;

      /// @brief Tests if element is metal.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is metal, false otherwise.
      virtual bool isMetal(elementID aElementId) = 0;

      /// @brief Tests if element is export solid.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is export solid, false otherwise.
      virtual bool isExportSolid(elementID aElementId) = 0;

      /// @brief Tests if element is container.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is container, false otherwise.
      virtual bool isContainer(elementID aElementId) = 0;

      /// @brief Tests if element is connector axis.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is connector axis, false otherwise.
      virtual bool isConnectorAxis(elementID aElementId) = 0;

      /// @brief Tests if element is drilling.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is drilling, false otherwise.
      virtual bool isDrilling(elementID aElementId) = 0;

      /// @brief Tests if element is node.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is node, false otherwise.
      virtual bool isNode(elementID aElementId) = 0;

      /// @brief Tests if element is auxiliary.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if element is auxiliary, false otherwise.
      virtual bool isAuxiliary(elementID aElementId) = 0;

      /// @brief Gets the element material name.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element material name.
      virtual ICwAPI3DString* getElementMaterialName(elementID aElementId) = 0;

      /// @brief Gets the element prefab layer.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element prefab layer.
      virtual ICwAPI3DString* getPrefabLayer(elementID aElementId) = 0;

      /// @brief Gets the element machine calculation set.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element machine calculation set.
      virtual ICwAPI3DString* getMachineCalculationSet(elementID aElementId) = 0;

      /// @brief Gets the element cutting set.
      /// @param[in] aElementId element ID
      /// @return [@ref ICwAPI3DString*] The element cutting set.
      virtual ICwAPI3DString* getCuttingSet(elementID aElementId) = 0;

      /// @brief Sets the element process type and extended settings from the element name.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void setProcessTypeAndExtendedSettingsFromName(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the process type for an element name.
      /// @param[in] aName [const @ref character*] The element name.
      /// @param[in] aProcessType [@ref ICwAPI3DProcessType*] The process type.
      virtual void setNameProcessType(const character* aName, ICwAPI3DProcessType* aProcessType) = 0;

      /// @brief Gets the process type for an element name.
      /// @param[in] aName [const @ref character*] The element name.
      /// @return [@ref ICwAPI3DProcessType*] The process type.
      virtual ICwAPI3DProcessType* getNameProcessType(const character* aName) = 0;

      /// @brief Sets the extended settings for an element name.
      /// @param[in] aName [const @ref character*] The element name.
      /// @param[in] aExtendedSettings [@ref ICwAPI3DExtendedSettings*] The extended settings.
      virtual void setNameExtendedSettings(const character* aName, ICwAPI3DExtendedSettings* aExtendedSettings) = 0;

      /// @brief Gets the extended settings for an element name.
      /// @param[in] aName [const @ref character*] The element name.
      /// @return [@ref ICwAPI3DExtendedSettings*] The extended settings.
      virtual ICwAPI3DExtendedSettings* getNameExtendedSettings(const character* aName) = 0;

      /// @brief Gets the element output type.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DProcessType*] The element output type.
      virtual ICwAPI3DProcessType* getOutputType(elementID aElementId) = 0;

      /// @brief Sets the element output type.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aProcessType [@ref ICwAPI3DProcessType*] The element output type.
      virtual void setOutputType(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DProcessType* aProcessType) = 0;

      /// @brief Gets the element extended settings.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DExtendedSettings*] The element extended settings.
      virtual ICwAPI3DExtendedSettings* getExtendedSettings(elementID aElementId) = 0;

      /// @brief Sets the element extended settings.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aExtendedSettings [@ref ICwAPI3DExtendedSettings*] The element extended settings.
      virtual void setExtendedSettings(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DExtendedSettings* aExtendedSettings) = 0;

      /// @brief Gets the element type.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DElementType*] The element type.
      virtual ICwAPI3DElementType* getElementType(elementID aElementId) = 0;

      /// @brief Sets the element to wall.
      /// @deprecated Use setFramedWall() instead.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      [[deprecated("Use setFramedWall() instead.")]] virtual void setWall(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the element to floor.
      /// @deprecated Use setFramedFloor() instead.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      [[deprecated("Use setFramedFloor() instead.")]] virtual void setFloor(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the element to opening.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void setOpening(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Get the element fastening attribute.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The element fastening attribute.
      virtual ICwAPI3DString* getFasteningAttribute(elementID aElementId) = 0;

      /// @brief Sets the element fastening attribute.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aValue [const @ref character*] The element fastening attribute.
      virtual void setFasteningAttribute(ICwAPI3DElementIDList* aElementIdList, const character* aValue) = 0;

      /// @brief Tests if the element is roof surface.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a roof surface, false otherwise.
      virtual bool isRoofSurface(elementID aElementId) = 0;

      /// @brief Tests if the element is caddy object.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a caddy object, false otherwise.
      virtual bool isCaddyObject(elementID aElementId) = 0;

      /// @brief Sets the element material.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aMaterial [@ref materialID] The material ID.
      virtual void setElementMaterial(ICwAPI3DElementIDList* aElementIdList, materialID aMaterial) = 0;

      /// @brief Retrieves the assembly number of the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The assembly number of the element.
      virtual ICwAPI3DString* getAssemblyNumber(elementID aElementId) = 0;

      /// @brief Sets the assembly number for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element IDs.
      /// @param[in] aAssemblyNumber [const @ref character*] The assembly number to set.
      virtual void setAssemblyNumber(ICwAPI3DElementIDList* aElementIdList, const character* aAssemblyNumber) = 0;

      /// @brief Retrieves the list quantity of the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [uint32_t] The list quantity of the element.
      virtual uint32_t getListQuantity(elementID aElementId) = 0;

      /// @brief Sets the list quantity for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element IDs.
      /// @param[in] aListQuantity [uint32_t] The list quantity to set.
      virtual void setListQuantity(ICwAPI3DElementIDList* aElementIdList, uint32_t aListQuantity) = 0;

      /// @brief Checks if the given element is an envelope.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is an envelope, false otherwise.
      virtual bool isEnvelope(elementID aElementId) = 0;

      /// @brief Sets the layer settings for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element IDs.
      /// @param[in] aLayerSettings [@ref ICwAPI3DLayerSettings*] The layer settings to set.
      virtual void setLayerSettings(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DLayerSettings* aLayerSettings) = 0;

      /// @brief Sets if the element should be ignored in VBA Calculation.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      /// @param[in] aIgnore [bool] True if the element should be ignored in VBA calculation, false otherwise.
      virtual void setIgnoreInVBACalculation(ICwAPI3DElementIDList* aElementIdList, bool aIgnore) = 0;

      /// @brief Retrieves the VBA calculation ignore status of the given element.
      /// @param[in] aElement [@ref elementID] The element id.
      /// @return [bool] True if the element is set to be ignored in VBA calculation, false otherwise.
      virtual bool getIgnoreInVBACalculation(elementID aElement) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Tests if the element has a 2dc reference wall.
      /// @param[in] aElement [@ref elementID] The element id.
      /// @return [bool] True if it's an architecture wall 2dc, false otherwise.
      virtual bool isArchitectureWall2dc(CwAPI3D::elementID aElement) = 0;

      /// @brief Tests if the element has a xml reference wall.
      /// @param[in] aElement [@ref elementID] The element id.
      /// @return [bool] True if it's an architecture wall xml, false otherwise.
      virtual bool isArchitectureWallXml(CwAPI3D::elementID aElement) = 0;

      /// @brief Applies a new 2dc reference wall to an element.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The elements to set element IDs
      /// @param[in] a2dcFilePath [const @ref character*] The 2dc file path.
      virtual void setReferenceWall2dc(ICwAPI3DElementIDList* aElementIdList, const character* a2dcFilePath) = 0;

      /// @brief Tests if the element is a Surface.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a Surface, false otherwise.
      virtual bool isSurface(CwAPI3D::elementID aElementId) = 0;

      /// @brief Tests if the element is a Line.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a Line, false otherwise.
      virtual bool isLine(CwAPI3D::elementID aElementId) = 0;

      /// @brief Retrieves the attribute display settings for 3D.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for 3D.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor3D() = 0;

      /// @brief Sets the attribute display settings for 3D.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for 3D.
      virtual void setAttributeDisplaySettingsFor3D(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for 2D.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for 2D.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor2D() = 0;

      /// @brief Sets the attribute display settings for 2D.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for 2D.
      virtual void setAttributeDisplaySettingsFor2D(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for 2D without layout.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for 2D without layout.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor2DWithoutLayout() = 0;

      /// @brief Sets the attribute display settings for 2D without layout.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for 2D without layout.
      virtual void setAttributeDisplaySettingsFor2DWithoutLayout(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for 2D with layout.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for 2D with layout.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor2DWithLayout() = 0;

      /// @brief Sets the attribute display settings for 2D with layout.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for 2D with layout.
      virtual void setAttributeDisplaySettingsFor2DWithLayout(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for export solid.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for export solid.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForExportSolid() = 0;

      /// @brief Sets the attribute display settings for export solid.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for export solid.
      virtual void setAttributeDisplaySettingsForExportSolid(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a container.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a container.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForContainer() = 0;

      /// @brief Sets the attribute display settings for a container.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a container.
      virtual void setAttributeDisplaySettingsForContainer(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a machine.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a machine.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForMachine() = 0;

      /// @brief Sets the attribute display settings for a machine.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a machine.
      virtual void setAttributeDisplaySettingsForMachine(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a log wall beam.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a log wall beam.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallBeam() = 0;

      /// @brief Sets the attribute display settings for a log wall beam.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a log wall beam.
      virtual void setAttributeDisplaySettingsForLogWallBeam(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a log wall panel.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a log wall panel.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallPanel() = 0;

      /// @brief Sets the attribute display settings for a log wall panel.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a log wall panel.
      virtual void setAttributeDisplaySettingsForLogWallPanel(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a log wall axis.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a log wall axis.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallAxis() = 0;

      /// @brief Sets the attribute display settings for a log wall axis.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a log wall axis.
      virtual void setAttributeDisplaySettingsForLogWallAxis(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a log wall opening.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a log wall opening.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallOpening() = 0;

      /// @brief Sets the attribute display settings for a log wall opening.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a log wall opening.
      virtual void setAttributeDisplaySettingsForLogWallOpening(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a framed wall beam.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a framed wall beam.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallBeam() = 0;

      /// @brief Sets the attribute display settings for a framed wall beam.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a framed wall beam.
      virtual void setAttributeDisplaySettingsForFramedWallBeam(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a framed wall panel.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a framed wall panel.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallPanel() = 0;

      /// @brief Sets the attribute display settings for a framed wall panel.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a framed wall panel.
      virtual void setAttributeDisplaySettingsForFramedWallPanel(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a framed wall axis.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a framed wall axis.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallAxis() = 0;

      /// @brief Sets the attribute display settings for a framed wall axis.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a framed wall axis.
      virtual void setAttributeDisplaySettingsForFramedWallAxis(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a framed wall opening.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a framed wall opening.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallOpening() = 0;

      /// @brief Sets the attribute display settings for a framed wall opening.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a framed wall opening.
      virtual void setAttributeDisplaySettingsForFramedWallOpening(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a solid wall beam.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a solid wall beam.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallBeam() = 0;

      /// @brief Sets the attribute display settings for a solid wall beam.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a solid wall beam.
      virtual void setAttributeDisplaySettingsForSolidWallBeam(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a solid wall panel.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a solid wall panel.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallPanel() = 0;

      /// @brief Sets the attribute display settings for a solid wall panel.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a solid wall panel.
      virtual void setAttributeDisplaySettingsForSolidWallPanel(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a solid wall axis.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a solid wall axis.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallAxis() = 0;

      /// @brief Sets the attribute display settings for a solid wall axis.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a solid wall axis.
      virtual void setAttributeDisplaySettingsForSolidWallAxis(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a solid wall opening.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a solid wall opening.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallOpening() = 0;

      /// @brief Sets the attribute display settings for a solid wall opening.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a solid wall opening.
      virtual void setAttributeDisplaySettingsForSolidWallOpening(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a nesting volume.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a nesting volume.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForNestingVolume() = 0;

      /// @brief Sets the attribute display settings for a nesting volume.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a nesting volume.
      virtual void setAttributeDisplaySettingsForNestingVolume(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a nesting element.
      /// @return [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings for a nesting element.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForNestingElement() = 0;

      /// @brief Sets the attribute display settings for a nesting element.
      /// @param[in] aSettings [@ref ICwAPI3DAttributeDisplaySettings*] The attribute display settings to set for a nesting element.
      virtual void setAttributeDisplaySettingsForNestingElement(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the count of user attributes.
      /// @return [uint32_t] The count of user attributes.
      virtual uint32_t getUserAttributeCount() = 0;

      /// @brief Sets covers (wall,opening or floor) to standard part.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The elements to set.
      virtual void setStandardPart(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets elements to solid wall.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The elements to set.
      virtual void setSolidWall(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets elements to log wall.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The elements to set.
      virtual void setLogWall(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets elements to solid floor.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The elements to set.
      virtual void setSolidFloor(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets elements to roof cover.
      /// @deprecated Use setFramedRoof() instead.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The elements to set.
      [[deprecated("Use setFramedRoof() instead.")]] virtual void setRoof(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets elements to solid roof cover.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The elements to set.
      virtual void setSolidRoof(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Retrieves the symbol of the node for the given element.
      /// @param[in] aElement [@ref elementID] The element id.
      /// @return [@ref nodeSymbol] The symbol of the node for the element.
      virtual int32_t getNodeSymbol(CwAPI3D::elementID aElement) = 0;

      /// @brief Sets the node symbol for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element IDs.
      /// @param[in] aSymbol [@ref nodeSymbol] The symbol to set for the nodes.
      virtual void setNodeSymbol(ICwAPI3DElementIDList* aElementIdList, int32_t aSymbol) = 0;

      /// @brief Checks if the given element is processing.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is processing, false otherwise.
      virtual bool isProcessing(CwAPI3D::elementID aElementId) = 0;

      /// @brief Retrieves the standard name of the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The standard name of the element.
      virtual ICwAPI3DString* getStandardElementName(CwAPI3D::elementID aElementId) = 0;

      /// @brief Retrieves the name of the steel shape for the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The name of the steel shape for the element.
      virtual ICwAPI3DString* getSteelShapeName(CwAPI3D::elementID aElementId) = 0;

      /// @brief Retrieves the associated nesting number for the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The associated nesting number for the element.
      virtual ICwAPI3DString* getAssociatedNestingNumber(CwAPI3D::elementID aElementId) = 0;

      /// @brief Retrieves the associated nesting name for the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The associated nesting name for the element.
      virtual ICwAPI3DString* getAssociatedNestingName(CwAPI3D::elementID aElementId) = 0;

      /// @brief Enables the attribute display.
      virtual void enableAttributeDisplay() = 0;

      /// @brief Disables the attribute display.
      virtual void disableAttributeDisplay() = 0;

      /// @brief Checks if the attribute display is enabled.
      /// @return [bool] True if the attribute display is enabled, false otherwise.
      virtual bool isAttributeDisplayEnabled() = 0;

      /// @brief Retrieves the auto attribute of the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aNumber [uint32_t] The number of the auto attribute.
      /// @return [@ref ICwAPI3DString*] The auto attribute of the element.
      virtual ICwAPI3DString* getAutoAttribute(elementID aElementId, uint32_t aNumber) = 0;

      /// @brief Retrieves the name of the auto attribute.
      /// @param[in] aNumber [uint32_t] The number of the auto attribute.
      /// @return [@ref ICwAPI3DString*] The name of the auto attribute.
      virtual ICwAPI3DString* getAutoAttributeName(uint32_t aNumber) = 0;

      /// @brief Updates the auto attributes.
      virtual void updateAutoAttributes() = 0;

      /// @brief Checks if the given element is a framed wall.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a framed wall, false otherwise.
      virtual bool isFramedWall(elementID aElementId) = 0;

      /// @brief Checks if the given element is a solid wall.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a solid wall, false otherwise.
      virtual bool isSolidWall(elementID aElementId) = 0;

      /// @brief Checks if the given element is a log wall.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a log wall, false otherwise.
      virtual bool isLogWall(elementID aElementId) = 0;

      /// @brief Checks if the given element is a framed floor.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a framed floor, false otherwise.
      virtual bool isFramedFloor(elementID aElementId) = 0;

      /// @brief Checks if the given element is a solid floor.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a solid floor, false otherwise.
      virtual bool isSolidFloor(elementID aElementId) = 0;

      /// @brief Checks if the given element is a framed roof.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a framed roof, false otherwise.
      virtual bool isFramedRoof(elementID aElementId) = 0;

      /// @brief Checks if the given element is a solid roof.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a solid roof, false otherwise.
      virtual bool isSolidRoof(elementID aElementId) = 0;

      /// @brief Retrieves the additional GUID for the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aDataID [const @ref character*] The data ID.
      /// @return [@ref ICwAPI3DString*] The additional GUID of the element.
      virtual ICwAPI3DString* getAdditionalGuid(elementID aElementId, const character* aDataID) = 0;

      /// @brief Sets the additional GUID for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element IDs.
      /// @param[in] aDataID [const @ref character*] The data ID.
      /// @param[in] aGuid [const @ref character*] The GUID to set.
      virtual void setAdditionalGuid(ICwAPI3DElementIDList* aElementIdList, const character* aDataID, const character* aGuid) = 0;

      /// @brief Retrieves all assigned prefab layer numbers for the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [std::vector<int32_t>] A vector of all assigned prefab layer numbers.
      virtual std::vector<int32_t> getPrefabLayerAllAssigned(elementID aElementId) = 0;

      /// @brief Retrieves prefab layer numbers with dimensions for the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [std::vector<int32_t>] A vector of prefab layer numbers with dimensions.
      virtual std::vector<int32_t> getPrefabLayerWithDimensions(elementID aElementId) = 0;

      /// @brief Retrieves prefab layer numbers without dimensions for the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [std::vector<int32_t>] A vector of prefab layer numbers without dimensions.
      virtual std::vector<int32_t> getPrefabLayerWithoutDimensions(elementID aElementId) = 0;

      /// @brief Checks if the given element is a nesting parent.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a nesting parent, false otherwise.
      virtual bool isNestingParent(elementID aElementId) = 0;

      /// @brief Checks if the given element is a raw part of a nesting.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a raw part of a nesting, false otherwise.
      virtual bool isNestingRawPart(elementID aElementId) = 0;

      /// @brief Retrieves a list of group items.
      /// @return [@ref ICwAPI3DStringList*] A list of group items.
      virtual ICwAPI3DStringList* getGroupListItems() = 0;

      /// @brief Retrieves a list of subgroup items.
      /// @return [@ref ICwAPI3DStringList*] A list of subgroup items.
      virtual ICwAPI3DStringList* getSubgroupListItems() = 0;

      /// @brief Retrieves a list of comment items.
      /// @return [@ref ICwAPI3DStringList*] A list of comment items.
      virtual ICwAPI3DStringList* getCommentListItems() = 0;

      /// @brief Retrieves a list of SKU items.
      /// @return [@ref ICwAPI3DStringList*] A list of SKU items.
      virtual ICwAPI3DStringList* getSkuListItems() = 0;

      /// @brief Retrieves a list of user attribute items.
      /// @param[in] aNumber [uint32_t] The number of the user attribute.
      /// @return [@ref ICwAPI3DStringList*] A list of user attribute items.
      virtual ICwAPI3DStringList* getUserAttributeListItems(uint32_t aNumber) = 0;

      /// @brief Adds an item to the group list.
      /// @param[in] aItem [const @ref character*] The item to add to the group list.
      virtual void addItemToGroupList(const character* aItem) = 0;

      /// @brief Adds an item to the subgroup list.
      /// @param[in] aItem [const @ref character*] The item to add to the subgroup list.
      virtual void addItemToSubgroupList(const character* aItem) = 0;

      /// @brief Adds an item to the comment list.
      /// @param[in] aItem [const @ref character*] The item to add to the comment list.
      virtual void addItemToCommentList(const character* aItem) = 0;

      /// @brief Adds an item to the SKU list.
      /// @param[in] aItem [const @ref character*] The item to add to the SKU list.
      virtual void addItemToSkuList(const character* aItem) = 0;

      /// @brief Adds an item to the user attribute list.
      /// @param[in] aNumber [uint32_t] The number of the user attribute.
      /// @param[in] aItem [const @ref character*] The item to add to the user attribute list.
      virtual void addItemToUserAttributeList(uint32_t aNumber, const character* aItem) = 0;

      /// @brief Checks if the given element is a circular MEP.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a circular MEP, false otherwise.
      virtual bool isCircularMEP(elementID aElementId) = 0;

      /// @brief Checks if the given element is a rectangular MEP.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is a rectangular MEP, false otherwise.
      virtual bool isRectangularMEP(elementID aElementId) = 0;

      /// @brief Deletes an item from the group list.
      /// @param[in] aItem [const @ref character*] The item to delete from the group list.
      /// @return [bool] True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromGroupList(const character* aItem) = 0;

      /// @brief Deletes an item from the subgroup list.
      /// @param[in] aItem [const @ref character*] The item to delete from the subgroup list.
      /// @return [bool] True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromSubgroupList(const character* aItem) = 0;

      /// @brief Deletes an item from the comment list.
      /// @param[in] aItem [const @ref character*] The item to delete from the comment list.
      /// @return [bool] True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromCommentList(const character* aItem) = 0;

      /// @brief Deletes an item from the SKU list.
      /// @param[in] aItem [const @ref character*] The item to delete from the SKU list.
      /// @return [bool] True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromSkuList(const character* aItem) = 0;

      /// @brief Deletes an item from the user attribute list.
      /// @param[in] aNumber [uint32_t] The number of the user attribute.
      /// @param[in] aItem [const @ref character*] The item to delete from the user attribute list.
      /// @return [bool] True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromUserAttributeList(uint32_t aNumber, const character* aItem) = 0;

      /// @brief Retrieves a list of names for all items.
      /// @return [@ref ICwAPI3DStringList*] A list of names for all items.
      virtual ICwAPI3DStringList* getNameListItems() = 0;

      /// @brief Adds an item to the name list.
      /// @param[in] aItem [const @ref character*] The item to add to the name list.
      virtual void addItemToNameList(const character* aItem) = 0;

      /// @brief Retrieves the container number of the given element with a prefix.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The container number of the element with a prefix.
      virtual ICwAPI3DString* getContainerNumberWithPrefix(elementID aElementId) = 0;

      /// @brief Retrieves the container number of the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [uint32_t] The container number of the element.
      virtual uint32_t getContainerNumber(elementID aElementId) = 0;

      /// @brief Sets the container number for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element IDs.
      /// @param[in] aNumber [uint32_t] The container number to set.
      virtual void setContainerNumber(ICwAPI3DElementIDList* aElementIdList, uint32_t aNumber) = 0;

      /// @brief Retrieves the machine calculation state of the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The machine calculation state of the element.
      virtual ICwAPI3DString* getMachineCalculationState(elementID aElementId) = 0;

      /// @brief Retrieves the machine type used for the machine calculation set of the given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The machine type used for the machine calculation set of the element.
      virtual ICwAPI3DString* getMachineCalculationSetMachineType(elementID aElementId) = 0;

      /// @brief Checks if the given element is part of a BTL processing group.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is part of a BTL processing group, false otherwise.
      virtual bool isBTLProcessingGroup(elementID aElementId) = 0;

      /// @brief Checks if the given element is part of a Hundegger processing group.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [bool] True if the element is part of a Hundegger processing group, false otherwise.
      virtual bool isHundeggerProcessingGroup(elementID aElementId) = 0;

      /// @brief Get the element grouping type (group, subgroup)
      /// @return [@ref elementGroupingType] element grouping type
      virtual elementGroupingType getElementGroupingType() = 0;

      /// @brief Set the element grouping type (group, subgroup).
      /// @param[in] aType [const @ref elementGroupingType] The element grouping type to set.
      virtual void setElementGroupingType(const CwAPI3D::elementGroupingType aType) = 0;

      /// @brief Sets the element to framed wall.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void setFramedWall(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Delete user attribute from attribute list. The attribute is only deleted when the attribute is not used.
      /// @param[in] aNumber [uint32_t] The attribute number.
      /// @return [bool] True if deletion is successful, false otherwise.
      virtual bool deleteUserAttribute(uint32_t aNumber) = 0;

      /// @brief Sets the elements to framed floor.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void setFramedFloor(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Sets the elements to framed roof.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element id list.
      virtual void setFramedRoof(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Retrieves a list of names for elements of a specific type.
      /// @param[in] aType [@ref ICwAPI3DElementType*] The type of elements for which to retrieve the names.
      /// @return [@ref ICwAPI3DStringList*] A list of names for elements of the specified type.
      virtual ICwAPI3DStringList* getNameListItemsByElementType(ICwAPI3DElementType* aType) = 0;

      /// @brief Check if the user-attribute is visible in the modify window.
      /// @param[in] aNumber [uint32_t] User attribute number.
      /// @return [bool] True if the user-attribute is visible in the modify window, false otherwise.
      virtual bool isAttributeVisibleInModifyWindow(uint32_t aNumber) = 0;

      /// @brief Sets the visibility state in the modify window for the user-attribute.
      /// @param[in] aNumber [uint32_t] The user attribute number.
      /// @param[in] aVisibility [bool] The visibility state to set.
      virtual void setAttributeVisibilityInModifyWindow(uint32_t aNumber, bool aVisibility) = 0;

      /// @brief Sets the cutting set on the elements. The cutting set is applied with `cutElementsWithOvermeasure`.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] List of element IDs.
      /// @param[in] aCuttingSetName [const @ref character*] Name of the cutting set to apply.
      /// @return [bool] True if the cutting set was successfully applied, false otherwise.
      virtual bool setCuttingSet(ICwAPI3DElementIDList* aElementIdList, const character* aCuttingSetName) = 0;

      /// @brief Gets the material id of a given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref materialID] The id of the element's material or 0 if no material id could be retrieved.
      virtual materialID getStandardElementMaterialId(CwAPI3D::elementID aElementId) = 0;

      /// @brief Sets the machine calculation set on the elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] List of element IDs.
      /// @param[in] aName [const @ref character*] Name of the machine calculation set.
      /// @return [bool] True if the machine calculation set was successfully set, false otherwise.
      virtual bool setMachineCalculationSet(ICwAPI3DElementIDList* aElementIdList, const character* aName) = 0;
    };
  }
}
