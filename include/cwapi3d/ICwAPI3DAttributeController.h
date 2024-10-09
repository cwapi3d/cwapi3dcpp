// Copyright (C) Cadwork. All rights reserved.

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
    /// \brief
    class ICwAPI3DAttributeController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the element name
      /// @param aID element ID
      /// @return element name
      virtual ICwAPI3DString* getName(elementID aID) = 0;

      /// @brief Sets the element name
      /// @param aElementIDList element ID list
      /// @param aName element name
      virtual void setName(ICwAPI3DElementIDList* aElementIDList, const character* aName) = 0;

      /// @brief Gets the element group
      /// @param aID element ID
      /// @return element group
      virtual ICwAPI3DString* getGroup(elementID aID) = 0;

      /// @brief Sets the element group
      /// @param aElementIDList element ID list
      /// @param aGroup element group
      virtual void setGroup(ICwAPI3DElementIDList* aElementIDList, const character* aGroup) = 0;

      /// @brief Gets the element subgroup
      /// @param aID element ID
      /// @return element subgroup
      virtual ICwAPI3DString* getSubgroup(elementID aID) = 0;

      /// @brief Sets the element subgroup
      /// @param aElementIDList element ID list
      /// @param aSubgroup element subgroup
      virtual void setSubgroup(ICwAPI3DElementIDList* aElementIDList, const character* aSubgroup) = 0;

      /// @brief Gets the element comment
      /// @param aID element ID
      /// @return element comment
      virtual ICwAPI3DString* getComment(elementID aID) = 0;

      /// @brief Sets the element comment
      /// @param aElementIDList element ID list
      /// @param aComment element comment
      virtual void setComment(ICwAPI3DElementIDList* aElementIDList, const character* aComment) = 0;

      /// @brief Gets the element user attribute
      /// @param aID element ID
      /// @param aNumber user attribute number
      /// @return element user attribute
      virtual ICwAPI3DString* getUserAttribute(elementID aID, uint32_t aNumber) = 0;

      /// @brief Sets the element user attribute
      /// @param aElementIDList element ID list
      /// @param aNumber user attribute number
      /// @param aUserAttribute element user attribute
      virtual void setUserAttribute(ICwAPI3DElementIDList* aElementIDList, uint32_t aNumber, const character* aUserAttribute) = 0;

      /// @brief Gets the element SKU
      /// @param aID element ID
      /// @return element SKU
      virtual ICwAPI3DString* getSKU(elementID aID) = 0;

      /// @brief Sets the element SKU
      /// @param aElementIDList element ID list
      /// @param aSKU element SKU
      virtual void setSKU(ICwAPI3DElementIDList* aElementIDList, const character* aSKU) = 0;

      /// @brief Gets the element production number
      /// @param aID element ID
      /// @return element production number
      virtual uint32_t getProductionNumber(elementID aID) = 0;

      /// @brief Sets the element production number
      /// @param aElementIDList element ID list
      /// @param aProductionNumber element production number
      virtual void setProductionNumber(ICwAPI3DElementIDList* aElementIDList, uint32_t aProductionNumber) = 0;

      /// @brief Gets the element part number
      /// @param aID element ID
      /// @return element part number
      virtual uint32_t getPartNumber(elementID aID) = 0;

      /// @brief Sets the element part number
      /// @param aElementIDList element ID list
      /// @param aPartNumber element part number
      virtual void setPartNumber(ICwAPI3DElementIDList* aElementIDList, uint32_t aPartNumber) = 0;

      /// @brief Gets the element additional data
      /// @param aID element ID
      /// @param aDataID data ID
      /// @return element additional data
      virtual ICwAPI3DString* getAdditionalData(elementID aID, const character* aDataID) = 0;

      /// @brief Sets the element additional data
      /// @param aElementIDList element ID list
      /// @param aDataID data ID
      /// @param aDataText element additional data
      virtual void setAdditionalData(ICwAPI3DElementIDList* aElementIDList, const character* aDataID, const character* aDataText) = 0;

      /// @brief Deletes the element additional data
      /// @param aElementIDList element ID list
      /// @param aDataID data ID
      virtual void deleteAdditionalData(ICwAPI3DElementIDList* aElementIDList, const character* aDataID) = 0;

      /// @brief Gets the user attribute name
      /// @param aNumber user attribute number
      /// @return user attribute name
      virtual ICwAPI3DString* getUserAttributeName(uint32_t aNumber) = 0;

      /// @brief Sets the user attribute name
      /// @param aNumber user attribute number
      /// @param aUserAttributeName user attribute name
      virtual void setUserAttributeName(uint32_t aNumber, const character* aUserAttributeName) = 0;

      /// @brief Gets the element wall situation
      /// @param aID element ID
      /// @return element wall situation
      virtual ICwAPI3DString* getWallSituation(elementID aID) = 0;

      /// @brief Tests if element is beam
      /// @param aID element ID
      /// @return is element beam
      virtual bool isBeam(elementID aID) = 0;

      /// @brief Tests if element is panel
      /// @param aID element ID
      /// @return is element panel
      virtual bool isPanel(elementID aID) = 0;

      /// @brief Tests if element is opening
      /// @param aID element ID
      /// @return is element opening
      virtual bool isOpening(elementID aID) = 0;

      /// @brief Tests if element is wall
      /// @param aID element ID
      /// @return is element wall
      virtual bool isWall(elementID aID) = 0;

      /// @brief Tests if element is floor
      /// @param aID element ID
      /// @return is element floor
      virtual bool isFloor(elementID aID) = 0;

      /// @brief Tests if element is roof
      /// @param aID element ID
      /// @return is element roof
      virtual bool isRoof(elementID aID) = 0;

      /// @brief Tests if element is metal
      /// @param aID element ID
      /// @return is element metal
      virtual bool isMetal(elementID aID) = 0;

      /// @brief Tests if element is export solid
      /// @param aID element ID
      /// @return is element export solid
      virtual bool isExportSolid(elementID aID) = 0;

      /// @brief Tests if element is container
      /// @param aID element ID
      /// @return is element container
      virtual bool isContainer(elementID aID) = 0;

      /// @brief Tests if element is connector axis
      /// @param aID element ID
      /// @return is element connector axis
      virtual bool isConnectorAxis(elementID aID) = 0;

      /// @brief Tests if element is drilling
      /// @param aID element ID
      /// @return is element drilling
      virtual bool isDrilling(elementID aID) = 0;

      /// @brief Tests if element is node
      /// @param aID element ID
      /// @return is element node
      virtual bool isNode(elementID aID) = 0;

      /// @brief Tests if element is auxiliary
      /// @param aID element ID
      /// @return is element auxiliary
      virtual bool isAuxiliary(elementID aID) = 0;

      /// @brief Gets the element material name
      /// @param aID element ID
      /// @return element material name
      virtual ICwAPI3DString* getElementMaterialName(elementID aID) = 0;

      /// @brief Gets the element prefab layer
      /// @param aID element ID
      /// @return element prefab layer
      virtual ICwAPI3DString* getPrefabLayer(elementID aID) = 0;

      /// @brief Gets the element machine calculation set
      /// @param aID element ID
      /// @return element machine calculation set
      virtual ICwAPI3DString* getMachineCalculationSet(elementID aID) = 0;

      /// @brief Gets the element cutting set
      /// @param aID element ID
      /// @return element cutting set
      virtual ICwAPI3DString* getCuttingSet(elementID aID) = 0;

      /// @brief Sets the element process type and extended settings from the element name
      /// @param aElementIDList
      virtual void setProcessTypeAndExtendedSettingsFromName(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Sets the process type for an element name
      /// @param aName element name
      /// @param aProcessType process type
      virtual void setNameProcessType(const character* aName, ICwAPI3DProcessType* aProcessType) = 0;

      /// @brief Gets the process type for an element name
      /// @param aName element name
      /// @return process type
      virtual ICwAPI3DProcessType* getNameProcessType(const character* aName) = 0;

      /// @brief Sets the extended settings for an element name
      /// @param aName element name
      /// @param aExtendedSettings extended settings
      virtual void setNameExtendedSettings(const character* aName, ICwAPI3DExtendedSettings* aExtendedSettings) = 0;

      /// @brief Gets the extended settings for an element name
      /// @param aName element name
      /// @return extended settings
      virtual ICwAPI3DExtendedSettings* getNameExtendedSettings(const character* aName) = 0;

      /// @brief Gets the element output type
      /// @param aID element ID
      /// @return element output type
      virtual ICwAPI3DProcessType* getOutputType(elementID aID) = 0;

      /// @brief Sets the element output type
      /// @param aElementIDList element ID list
      /// @param aProcessType element output type
      virtual void setOutputType(ICwAPI3DElementIDList* aElementIDList, ICwAPI3DProcessType* aProcessType) = 0;

      /// @brief Gets the element extended settings
      /// @param aID element ID
      /// @return element extended settings
      virtual ICwAPI3DExtendedSettings* getExtendedSettings(elementID aID) = 0;

      /// @brief Sets the element extended settings
      /// @param aElementIDList element ID list
      /// @param aExtendedSettings element extended settings
      virtual void setExtendedSettings(ICwAPI3DElementIDList* aElementIDList, ICwAPI3DExtendedSettings* aExtendedSettings) = 0;

      /// @brief Gets the element type
      /// @param aID element ID
      /// @return element type
      virtual ICwAPI3DElementType* getElementType(elementID aID) = 0;

      /// @brief Sets the element to wall
      /// @param aElementIDList element ID list
      [[deprecated("Use setFramedWall() instead.")]] virtual void setWall(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Sets the element to floor
      /// @param aElementIDList element ID list
      [[deprecated("Use setFramedFloor() instead.")]] virtual void setFloor(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Sets the element to opening
      /// @param aElementIDList element ID list
      virtual void setOpening(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Get the element fastening attribute
      /// @param aID element ID
      /// @return element fastening attribute
      virtual ICwAPI3DString* getFasteningAttribute(elementID aID) = 0;

      /// @brief Sets the element fastening attribute
      /// @param aElementIDList element ID list
      /// @param aValue element fastening attribute
      virtual void setFasteningAttribute(ICwAPI3DElementIDList* aElementIDList, const character* aValue) = 0;

      /// @brief Tests if the element is roof surface
      /// @param aID element ID
      /// @return is element roof surface
      virtual bool isRoofSurface(elementID aID) = 0;

      /// @brief Tests if the element is caddy object
      /// @param aID element ID
      /// @return is element caddy object
      virtual bool isCaddyObject(elementID aID) = 0;

      /// @brief Sets the element material
      /// @param aElementIDList element ID list
      /// @param aMaterial material ID
      virtual void setElementMaterial(ICwAPI3DElementIDList* aElementIDList, materialID aMaterial) = 0;

      /// @brief Retrieves the assembly number of the given element.
      /// @param aID The ID of the element.
      /// @return The assembly number of the element.
      virtual ICwAPI3DString* getAssemblyNumber(elementID aID) = 0;

      /// @brief Sets the assembly number for a list of elements.
      /// @param aElementIDList The list of element IDs.
      /// @param aAssemblyNumber The assembly number to set.
      virtual void setAssemblyNumber(ICwAPI3DElementIDList* aElementIDList, const character* aAssemblyNumber) = 0;

      /// @brief Retrieves the list quantity of the given element.
      /// @param aID The ID of the element.
      /// @return The list quantity of the element.
      virtual uint32_t getListQuantity(elementID aID) = 0;

      /// @brief Sets the list quantity for a list of elements.
      /// @param aElementIDList The list of element IDs.
      /// @param aListQuantity The list quantity to set.
      virtual void setListQuantity(ICwAPI3DElementIDList* aElementIDList, uint32_t aListQuantity) = 0;

      /// @brief Checks if the given element is an envelope.
      /// @param aID The ID of the element.
      /// @return True if the element is an envelope, false otherwise.
      virtual bool isEnvelope(elementID aID) = 0;

      /// @brief Sets the layer settings for a list of elements.
      /// @param aElementIDList The list of element IDs.
      /// @param aLayerSettings The layer settings to set.
      virtual void setLayerSettings(ICwAPI3DElementIDList* aElementIDList, ICwAPI3DLayerSettings* aLayerSettings) = 0;

      /// @brief Sets if the element should be ignored in VBA Calculation
      /// @param aElements element ID list
      /// @param aIgnore
      virtual void setIgnoreInVBACalculation(ICwAPI3DElementIDList* aElements, bool aIgnore) = 0;

      /// @brief Retrieves the VBA calculation ignore status of the given element.
      /// @param aElement The ID of the element.
      /// @return True if the element is set to be ignored in VBA calculation, false otherwise.
      virtual bool getIgnoreInVBACalculation(elementID aElement) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Tests if the element has a 2dc reference wall
      /// @param aElement element ID
      /// @return is architecturewall 2dc
      virtual bool isArchitectureWall2dc(CwAPI3D::elementID aElement) = 0;

      /// @brief Tests if the element has a xml reference wall
      /// @param aElement element ID
      /// @return is architecturewall xml
      virtual bool isArchitectureWallXml(CwAPI3D::elementID aElement) = 0;

      /// @brief Applies a new 2dc reference wall to an element
      /// @param aElements element IDs
      /// @param a2dcFilePath 2dc file path
      virtual void setReferenceWall2dc(ICwAPI3DElementIDList* aElements, const character* a2dcFilePath) = 0;

      /// @brief Tests if the element is a Surface
      /// @param aID element ID
      /// @return is Surface
      virtual bool isSurface(CwAPI3D::elementID aID) = 0;

      /// @brief Tests if the element is a Line
      /// @param aID element ID
      /// @return is Line
      virtual bool isLine(CwAPI3D::elementID aID) = 0;

      /// @brief Retrieves the attribute display settings for 3D.
      /// @return The attribute display settings for 3D.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor3D() = 0;

      /// @brief Sets the attribute display settings for 3D.
      /// @param aSettings The attribute display settings to set for 3D.
      virtual void setAttributeDisplaySettingsFor3D(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for 2D.
      /// @return The attribute display settings for 2D.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor2D() = 0;

      /// @brief Sets the attribute display settings for 2D.
      /// @param aSettings The attribute display settings to set for 2D.
      virtual void setAttributeDisplaySettingsFor2D(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for 2D without layout.
      /// @return The attribute display settings for 2D without layout.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor2DWithoutLayout() = 0;

      /// @brief Sets the attribute display settings for 2D without layout.
      /// @param aSettings The attribute display settings to set for 2D without layout.
      virtual void setAttributeDisplaySettingsFor2DWithoutLayout(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for 2D with layout.
      /// @return The attribute display settings for 2D with layout.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor2DWithLayout() = 0;

      /// @brief Sets the attribute display settings for 2D with layout.
      /// @param aSettings The attribute display settings to set for 2D with layout.
      virtual void setAttributeDisplaySettingsFor2DWithLayout(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for export solid.
      /// @return The attribute display settings for export solid.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForExportSolid() = 0;

      /// @brief Sets the attribute display settings for export solid.
      /// @param aSettings The attribute display settings to set for export solid.
      virtual void setAttributeDisplaySettingsForExportSolid(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a container.
      /// @return The attribute display settings for a container.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForContainer() = 0;

      /// @brief Sets the attribute display settings for a container.
      /// @param aSettings The attribute display settings to set for a container.
      virtual void setAttributeDisplaySettingsForContainer(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a machine.
      /// @return The attribute display settings for a machine.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForMachine() = 0;

      /// @brief Sets the attribute display settings for a machine.
      /// @param aSettings The attribute display settings to set for a machine.
      virtual void setAttributeDisplaySettingsForMachine(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a log wall beam.
      /// @return The attribute display settings for a log wall beam.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallBeam() = 0;

      /// @brief Sets the attribute display settings for a log wall beam.
      /// @param aSettings The attribute display settings to set for a log wall beam.
      virtual void setAttributeDisplaySettingsForLogWallBeam(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a log wall panel.
      /// @return The attribute display settings for a log wall panel.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallPanel() = 0;

      /// @brief Sets the attribute display settings for a log wall panel.
      /// @param aSettings The attribute display settings to set for a log wall panel.
      virtual void setAttributeDisplaySettingsForLogWallPanel(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a log wall axis.
      /// @return The attribute display settings for a log wall axis.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallAxis() = 0;

      /// @brief Sets the attribute display settings for a log wall axis.
      /// @param aSettings The attribute display settings to set for a log wall axis.
      virtual void setAttributeDisplaySettingsForLogWallAxis(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a log wall opening.
      /// @return The attribute display settings for a log wall opening.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallOpening() = 0;

      /// @brief Sets the attribute display settings for a log wall opening.
      /// @param aSettings The attribute display settings to set for a log wall opening.
      virtual void setAttributeDisplaySettingsForLogWallOpening(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a framed wall beam.
      /// @return The attribute display settings for a framed wall beam.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallBeam() = 0;

      /// @brief Sets the attribute display settings for a framed wall beam.
      /// @param aSettings The attribute display settings to set for a framed wall beam.
      virtual void setAttributeDisplaySettingsForFramedWallBeam(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a framed wall panel.
      /// @return The attribute display settings for a framed wall panel.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallPanel() = 0;

      /// @brief Sets the attribute display settings for a framed wall panel.
      /// @param aSettings The attribute display settings to set for a framed wall panel.
      virtual void setAttributeDisplaySettingsForFramedWallPanel(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a framed wall axis.
      /// @return The attribute display settings for a framed wall axis.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallAxis() = 0;

      /// @brief Sets the attribute display settings for a framed wall axis.
      /// @param aSettings The attribute display settings to set for a framed wall axis.
      virtual void setAttributeDisplaySettingsForFramedWallAxis(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a framed wall opening.
      /// @return The attribute display settings for a framed wall opening.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallOpening() = 0;

      /// @brief Sets the attribute display settings for a framed wall opening.
      /// @param aSettings The attribute display settings to set for a framed wall opening.
      virtual void setAttributeDisplaySettingsForFramedWallOpening(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a solid wall beam.
      /// @return The attribute display settings for a solid wall beam.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallBeam() = 0;

      /// @brief Sets the attribute display settings for a solid wall beam.
      /// @param aSettings The attribute display settings to set for a solid wall beam.
      virtual void setAttributeDisplaySettingsForSolidWallBeam(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a solid wall panel.
      /// @return The attribute display settings for a solid wall panel.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallPanel() = 0;

      /// @brief Sets the attribute display settings for a solid wall panel.
      /// @param aSettings The attribute display settings to set for a solid wall panel.
      virtual void setAttributeDisplaySettingsForSolidWallPanel(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a solid wall axis.
      /// @return The attribute display settings for a solid wall axis.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallAxis() = 0;

      /// @brief Sets the attribute display settings for a solid wall axis.
      /// @param aSettings The attribute display settings to set for a solid wall axis.
      virtual void setAttributeDisplaySettingsForSolidWallAxis(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a solid wall opening.
      /// @return The attribute display settings for a solid wall opening.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallOpening() = 0;

      /// @brief Sets the attribute display settings for a solid wall opening.
      /// @param aSettings The attribute display settings to set for a solid wall opening.
      virtual void setAttributeDisplaySettingsForSolidWallOpening(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a nesting volume.
      /// @return The attribute display settings for a nesting volume.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForNestingVolume() = 0;

      /// @brief Sets the attribute display settings for a nesting volume.
      /// @param aSettings The attribute display settings to set for a nesting volume.
      virtual void setAttributeDisplaySettingsForNestingVolume(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the attribute display settings for a nesting element.
      /// @return The attribute display settings for a nesting element.
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForNestingElement() = 0;

      /// @brief Sets the attribute display settings for a nesting element.
      /// @param aSettings The attribute display settings to set for a nesting element.
      virtual void setAttributeDisplaySettingsForNestingElement(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      /// @brief Retrieves the count of user attributes.
      /// @return The count of user attributes.
      virtual uint32_t getUserAttributeCount() = 0;

      /// @brief Sets covers (wall,opening or floor) to standard part.
      /// @param aElements
      virtual void setStandardPart(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Sets elements to solid wall.
      /// @param aElements
      virtual void setSolidWall(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Sets elements to log wall.
      /// @param aElements
      virtual void setLogWall(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Sets elements to solid floor.
      /// @param aElements
      virtual void setSolidFloor(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Sets elements to roof cover.
      /// @param aElements
      [[deprecated("Use setFramedRoof() instead.")]] virtual void setRoof(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Sets elements to solid roof cover.
      /// @param aElements
      virtual void setSolidRoof(ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Retrieves the symbol of the node for the given element.
      /// @param aElement The ID of the element.
      /// @return The symbol of the node for the element.
      virtual int32_t getNodeSymbol(CwAPI3D::elementID aElement) = 0;

      /// @brief Sets the node symbol for a list of elements.
      /// @param aElements The list of element IDs.
      /// @param aSymbol The symbol to set for the node.
      virtual void setNodeSymbol(ICwAPI3DElementIDList* aElements, int32_t aSymbol) = 0;

      /// @brief Checks if the given element is processing.
      /// @param aID The ID of the element.
      /// @return True if the element is processing, false otherwise.
      virtual bool isProcessing(CwAPI3D::elementID aID) = 0;

      /// @brief Retrieves the standard name of the given element.
      /// @param aID The ID of the element.
      /// @return The standard name of the element.
      virtual ICwAPI3DString* getStandardElementName(CwAPI3D::elementID aID) = 0;

      /// @brief Retrieves the name of the steel shape for the given element.
      /// @param aID The ID of the element.
      /// @return The name of the steel shape for the element.
      virtual ICwAPI3DString* getSteelShapeName(CwAPI3D::elementID aID) = 0;

      /// @brief Retrieves the associated nesting number for the given element.
      /// @param aID The ID of the element.
      /// @return The associated nesting number for the element.
      virtual ICwAPI3DString* getAssociatedNestingNumber(CwAPI3D::elementID aID) = 0;

      /// @brief Retrieves the associated nesting name for the given element.
      /// @param aID The ID of the element.
      /// @return The associated nesting name for the element.
      virtual ICwAPI3DString* getAssociatedNestingName(CwAPI3D::elementID aID) = 0;

      /// @brief Enables the attribute display.
      virtual void enableAttributeDisplay() = 0;

      /// @brief Disables the attribute display.
      virtual void disableAttributeDisplay() = 0;

      /// @brief Checks if the attribute display is enabled.
      /// @return True if the attribute display is enabled, false otherwise.
      virtual bool isAttributeDisplayEnabled() = 0;

      /// @brief Retrieves the auto attribute of the given element.
      /// @param aID The ID of the element.
      /// @param aNumber The number of the auto attribute.
      /// @return The auto attribute of the element.
      virtual ICwAPI3DString* getAutoAttribute(elementID aID, uint32_t aNumber) = 0;

      /// @brief Retrieves the name of the auto attribute.
      /// @param aNumber The number of the auto attribute.
      /// @return The name of the auto attribute.
      virtual ICwAPI3DString* getAutoAttributeName(uint32_t aNumber) = 0;

      /// @brief Updates the auto attributes.
      virtual void updateAutoAttributes() = 0;

      /// @brief Checks if the given element is a framed wall.
      /// @param aID The ID of the element.
      /// @return True if the element is a framed wall, false otherwise.
      virtual bool isFramedWall(elementID aID) = 0;

      /// @brief Checks if the given element is a solid wall.
      /// @param aID The ID of the element.
      /// @return True if the element is a solid wall, false otherwise.
      virtual bool isSolidWall(elementID aID) = 0;

      /// @brief Checks if the given element is a log wall.
      /// @param aID The ID of the element.
      /// @return True if the element is a log wall, false otherwise.
      virtual bool isLogWall(elementID aID) = 0;

      /// @brief Checks if the given element is a framed floor.
      /// @param aID The ID of the element.
      /// @return True if the element is a framed floor, false otherwise.
      virtual bool isFramedFloor(elementID aID) = 0;

      /// @brief Checks if the given element is a solid floor.
      /// @param aID The ID of the element.
      /// @return True if the element is a solid floor, false otherwise.
      virtual bool isSolidFloor(elementID aID) = 0;

      /// @brief Checks if the given element is a framed roof.
      /// @param aID The ID of the element.
      /// @return True if the element is a framed roof, false otherwise.
      virtual bool isFramedRoof(elementID aID) = 0;

      /// @brief Checks if the given element is a solid roof.
      /// @param aID The ID of the element.
      /// @return True if the element is a solid roof, false otherwise.
      virtual bool isSolidRoof(elementID aID) = 0;

      /// @brief Retrieves the additional GUID for the given element.
      /// @param aID The ID of the element.
      /// @param aDataID The data ID.
      /// @return The additional GUID of the element.
      virtual ICwAPI3DString* getAdditionalGuid(elementID aID, const character* aDataID) = 0;

      /// @brief Sets the additional GUID for a list of elements.
      /// @param aElementIDList The list of element IDs.
      /// @param aDataID The data ID.
      /// @param aGuid The GUID to set.
      virtual void setAdditionalGuid(ICwAPI3DElementIDList* aElementIDList, const character* aDataID, const character* aGuid) = 0;

      /// @brief Retrieves all assigned prefab layer numbers for the given element.
      /// @param aID The ID of the element.
      /// @return A vector of all assigned prefab layer numbers.
      virtual std::vector<int32_t> getPrefabLayerAllAssigned(elementID aID) = 0;

      /// @brief Retrieves prefab layer numbers with dimensions for the given element.
      /// @param aID The ID of the element.
      /// @return A vector of prefab layer numbers with dimensions.
      virtual std::vector<int32_t> getPrefabLayerWithDimensions(elementID aID) = 0;

      /// @brief Retrieves prefab layer numbers without dimensions for the given element.
      /// @param aID The ID of the element.
      /// @return A vector of prefab layer numbers without dimensions.
      virtual std::vector<int32_t> getPrefabLayerWithoutDimensions(elementID aID) = 0;

      /// @brief Checks if the given element is a nesting parent.
      /// @param aID The ID of the element.
      /// @return True if the element is a nesting parent, false otherwise.
      virtual bool isNestingParent(elementID aID) = 0;

      /// @brief Checks if the given element is a raw part of a nesting.
      /// @param aID The ID of the element.
      /// @return True if the element is a raw part of a nesting, false otherwise.
      virtual bool isNestingRawPart(elementID aID) = 0;

      /// @brief Retrieves a list of group items.
      /// @return A list of group items.
      virtual ICwAPI3DStringList* getGroupListItems() = 0;

      /// @brief Retrieves a list of subgroup items.
      /// @return A list of subgroup items.
      virtual ICwAPI3DStringList* getSubgroupListItems() = 0;

      /// @brief Retrieves a list of comment items.
      /// @return A list of comment items.
      virtual ICwAPI3DStringList* getCommentListItems() = 0;

      /// @brief Retrieves a list of SKU items.
      /// @return A list of SKU items.
      virtual ICwAPI3DStringList* getSkuListItems() = 0;

      /// @brief Retrieves a list of user attribute items.
      /// @param aNumber The number of the user attribute.
      /// @return A list of user attribute items.
      virtual ICwAPI3DStringList* getUserAttributeListItems(uint32_t aNumber) = 0;

      /// @brief Adds an item to the group list.
      /// @param aItem The item to add to the group list.
      virtual void addItemToGroupList(const character* aItem) = 0;

      /// @brief Adds an item to the subgroup list.
      /// @param aItem The item to add to the subgroup list.
      virtual void addItemToSubgroupList(const character* aItem) = 0;

      /// @brief Adds an item to the comment list.
      /// @param aItem The item to add to the comment list.
      virtual void addItemToCommentList(const character* aItem) = 0;

      /// @brief Adds an item to the SKU list.
      /// @param aItem The item to add to the SKU list.
      virtual void addItemToSkuList(const character* aItem) = 0;

      /// @brief Adds an item to the user attribute list.
      /// @param aNumber The number of the user attribute.
      /// @param aItem The item to add to the user attribute list.
      virtual void addItemToUserAttributeList(uint32_t aNumber, const character* aItem) = 0;

      /// @brief Checks if the given element is a circular MEP.
      /// @param aID The ID of the element.
      /// @return True if the element is a circular MEP, false otherwise.
      virtual bool isCircularMEP(elementID aID) = 0;

      /// @brief Checks if the given element is a rectangular MEP.
      /// @param aID The ID of the element.
      /// @return True if the element is a rectangular MEP, false otherwise.
      virtual bool isRectangularMEP(elementID aID) = 0;

      /// @brief Deletes an item from the group list.
      /// @param aItem The item to delete from the group list.
      /// @return True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromGroupList(const character* aItem) = 0;

      /// @brief Deletes an item from the subgroup list.
      /// @param aItem The item to delete from the subgroup list.
      /// @return True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromSubgroupList(const character* aItem) = 0;

      /// @brief Deletes an item from the comment list.
      /// @param aItem The item to delete from the comment list.
      /// @return True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromCommentList(const character* aItem) = 0;

      /// @brief Deletes an item from the SKU list.
      /// @param aItem The item to delete from the SKU list.
      /// @return True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromSkuList(const character* aItem) = 0;

      /// @brief Deletes an item from the user attribute list.
      /// @param aNumber The number of the user attribute.
      /// @param aItem The item to delete from the user attribute list.
      /// @return True if the item was successfully deleted, false otherwise.
      virtual bool deleteItemFromUserAttributeList(uint32_t aNumber, const character* aItem) = 0;

      /// @brief Retrieves a list of names for all items.
      /// @return A list of names for all items.
      virtual ICwAPI3DStringList* getNameListItems() = 0;

      /// @brief Adds an item to the name list.
      /// @param aItem The item to add to the name list.
      virtual void addItemToNameList(const character* aItem) = 0;

      /// @brief Retrieves the container number of the given element with a prefix.
      /// @param aID The ID of the element.
      /// @return The container number of the element with a prefix.
      virtual ICwAPI3DString* getContainerNumberWithPrefix(elementID aID) = 0;

      /// @brief Retrieves the container number of the given element.
      /// @param aID The ID of the element.
      /// @return The container number of the element.
      virtual uint32_t getContainerNumber(elementID aID) = 0;

      /// @brief Sets the container number for a list of elements.
      /// @param aElements The list of element IDs.
      /// @param aNumber The container number to set.
      virtual void setContainerNumber(ICwAPI3DElementIDList* aElements, uint32_t aNumber) = 0;

      /// @brief Retrieves the machine calculation state of the given element.
      /// @param aID The ID of the element.
      /// @return The machine calculation state of the element.
      virtual ICwAPI3DString* getMachineCalculationState(elementID aID) = 0;

      /// @brief Retrieves the machine type used for the machine calculation set of the given element.
      /// @param aID The ID of the element.
      /// @return The machine type used for the machine calculation set of the element.
      virtual ICwAPI3DString* getMachineCalculationSetMachineType(elementID aID) = 0;

      /// @brief Checks if the given element is part of a BTL processing group.
      /// @param aID The ID of the element.
      /// @return True if the element is part of a BTL processing group, false otherwise.
      virtual bool isBTLProcessingGroup(elementID aID) = 0;

      /// @brief Checks if the given element is part of a Hundegger processing group.
      /// @param aID The ID of the element.
      /// @return True if the element is part of a Hundegger processing group, false otherwise.
      virtual bool isHundeggerProcessingGroup(elementID aID) = 0;

      /// @brief Get the element grouping type (group, subgroup)
      /// @return element grouping type
      virtual elementGroupingType getElementGroupingType() = 0;

      /// @brief Set the element grouping type (group, subgroup)
      /// @param aType elementGroupingType
      /// @return
      virtual void setElementGroupingType(const CwAPI3D::elementGroupingType aType) = 0;

      /// @brief Sets the element to framed wall
      /// @param aElementIDList element ID list
      virtual void setFramedWall(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Delete user attribute from attribute list. The attribute is only deleted when the attribute is not used.
      /// @param aNumber
      /// @return bool deletion successfully
      virtual bool deleteUserAttribute(uint32_t aNumber) = 0;

      /// @brief Sets the elements to framed floor
      /// @param aElementIDList element ID list
      virtual void setFramedFloor(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Sets the elements to framed roof
      /// @param aElementIDList element ID list
      virtual void setFramedRoof(ICwAPI3DElementIDList* aElementIDList) = 0;

      /// @brief Retrieves a list of names for elements of a specific type.
      /// @param aType The type of elements for which to retrieve the names.
      /// @return A list of names for elements of the specified type.
      virtual ICwAPI3DStringList* getNameListItemsByElementType(ICwAPI3DElementType* aType) = 0;


      /// @brief Check if the user-attribute is visible in the modify window.
      /// @param aNumber
      /// @return visibility of Attribute in modify window
      virtual bool isAttributeVisibleInModifyWindow(uint32_t aNumber) = 0;

      /// @brief Sets the visibility state in the modify window for the user-attribute
      /// @param aNumber user-attribute number
      /// @param aVisibility state
      virtual void setAttributeVisibilityInModifyWindow(uint32_t aNumber, bool aVisibility) = 0;

      /// @brief Sets the cutting set on the elements. The cutting set is applied with `cutElementsWithOvermeasure`
      /// @param aElementIDList List of element IDs.
      /// @param aCuttingSetName Name of the cutting set to apply.
      /// @return `true` if the cutting set was successfully applied, `false` otherwise.
      virtual bool setCuttingSet(ICwAPI3DElementIDList* aElementIDList, const character* aCuttingSetName) = 0;
    };
  }
}
