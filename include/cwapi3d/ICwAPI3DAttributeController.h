/** @file
* Copyright (C) 2016 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2016-12-15
*/

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DProcessType.h"
#include "ICwAPI3DExtendedSettings.h"
#include "ICwAPI3DElementType.h"
#include "ICwAPI3DLayerSettings.h"
#include "ICwAPI3DAttributeDisplaySettings.h"
#include <vector>
#include "ICwAPI3DStringList.h"
#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DAttributeController
    * \brief
    */
    class ICwAPI3DAttributeController
    {
    public:
      /**
       * \brief Gets the last error
       * \param aErrorCode error code
       * \return error string
       */
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      /**
       * \brief Gets the element name
       * \param aID element ID
       * \return element name
       */
      virtual ICwAPI3DString* getName(elementID aID) = 0;
      /**
       * \brief Sets the element name
       * \param aElementIDList element ID list
       * \param aName element name
       */
      virtual void setName(ICwAPI3DElementIDList* aElementIDList, const character* aName) = 0;
      /**
       * \brief Gets the element group
       * \param aID element ID
       * \return element group
       */
      virtual ICwAPI3DString* getGroup(elementID aID) = 0;
      /**
       * \brief Sets the element group
       * \param aElementIDList element ID list
       * \param aGroup element group
       */
      virtual void setGroup(ICwAPI3DElementIDList* aElementIDList, const character* aGroup) = 0;
      /**
       * \brief Gets the element subgroup
       * \param aID element ID
       * \return element subgroup
       */
      virtual ICwAPI3DString* getSubgroup(elementID aID) = 0;
      /**
       * \brief Sets the element subgroup
       * \param aElementIDList element ID list
       * \param aSubgroup element subgroup
       */
      virtual void setSubgroup(ICwAPI3DElementIDList* aElementIDList, const character* aSubgroup) = 0;
      /**
       * \brief Gets the element comment
       * \param aID element ID
       * \return element comment
       */
      virtual ICwAPI3DString* getComment(elementID aID) = 0;
      /**
       * \brief Sets the element comment
       * \param aElementIDList element ID list
       * \param aComment element comment
       */
      virtual void setComment(ICwAPI3DElementIDList* aElementIDList, const character* aComment) = 0;
      /**
       * \brief Gets the element user attribute
       * \param aID element ID
       * \param aNumber user attribute number
       * \return element user attribute
       */
      virtual ICwAPI3DString* getUserAttribute(elementID aID, uint32_t aNumber) = 0;
      /**
       * \brief Sets the element user attribute
       * \param aElementIDList element ID list
       * \param aNumber user attribute number
       * \param aUserAttribute element user attribute
       */
      virtual void setUserAttribute(ICwAPI3DElementIDList* aElementIDList, uint32_t aNumber, const character* aUserAttribute) = 0;
      /**
       * \brief Gets the element SKU
       * \param aID element ID
       * \return element SKU
       */
      virtual ICwAPI3DString* getSKU(elementID aID) = 0;
      /**
       * \brief Sets the element SKU
       * \param aElementIDList element ID list
       * \param aSKU element SKU
       */
      virtual void setSKU(ICwAPI3DElementIDList* aElementIDList, const character* aSKU) = 0;
      /**
       * \brief Gets the element production number
       * \param aID element ID
       * \return element production number
       */
      virtual uint32_t getProductionNumber(elementID aID) = 0;
      /**
       * \brief Sets the element production number
       * \param aElementIDList element ID list
       * \param aProductionNumber element production number
       */
      virtual void setProductionNumber(ICwAPI3DElementIDList* aElementIDList, uint32_t aProductionNumber) = 0;
      /**
       * \brief Gets the element part number
       * \param aID element ID
       * \return element part number
       */
      virtual uint32_t getPartNumber(elementID aID) = 0;
      /**
       * \brief Sets the element part number
       * \param aElementIDList element ID list
       * \param aPartNumber element part number
       */
      virtual void setPartNumber(ICwAPI3DElementIDList* aElementIDList, uint32_t aPartNumber) = 0;
      /**
       * \brief Gets the element additional data
       * \param aID element ID
       * \param aDataID data ID
       * \return element additional data
       */
      virtual ICwAPI3DString* getAdditionalData(elementID aID, const character* aDataID) = 0;
      /**
       * \brief Sets the element additional data
       * \param aElementIDList element ID list
       * \param aDataID data ID
       * \param aDataText element additional data
       */
      virtual void setAdditionalData(ICwAPI3DElementIDList* aElementIDList, const character* aDataID, const character* aDataText) = 0;
      /**
       * \brief Deletes the element additional data
       * \param aElementIDList element ID list
       * \param aDataID data ID
       */
      virtual void deleteAdditionalData(ICwAPI3DElementIDList* aElementIDList, const character* aDataID) = 0;
      /**
       * \brief Gets the user attribute name
       * \param aNumber user attribute number
       * \return user attribute name
       */
      virtual ICwAPI3DString* getUserAttributeName(uint32_t aNumber) = 0;
      /**
       * \brief Sets the user attribute name
       * \param aNumber user attribute number
       * \param aUserAttributeName user attribute name
       */
      virtual void setUserAttributeName(uint32_t aNumber, const character* aUserAttributeName) = 0;
      /**
       * \brief Gets the element wall situation
       * \param aID element ID
       * \return element wall situation
       */
      virtual ICwAPI3DString* getWallSituation(elementID aID) = 0;
      /**
       * \brief Tests if element is beam
       * \param aID element ID
       * \return is element beam
       */
      virtual bool isBeam(elementID aID) = 0;
      /**
       * \brief Tests if element is panel
       * \param aID element ID
       * \return is element panel
       */
      virtual bool isPanel(elementID aID) = 0;
      /**
       * \brief Tests if element is opening
       * \param aID element ID
       * \return is element opening
       */
      virtual bool isOpening(elementID aID) = 0;
      /**
       * \brief Tests if element is wall
       * \param aID element ID
       * \return is element wall
       */
      virtual bool isWall(elementID aID) = 0;
      /**
       * \brief Tests if element is floor
       * \param aID element ID
       * \return is element floor
       */
      virtual bool isFloor(elementID aID) = 0;
      /**
       * \brief Tests if element is roof
       * \param aID element ID
       * \return is element roof
       */
      virtual bool isRoof(elementID aID) = 0;
      /**
       * \brief Tests if element is metal
       * \param aID element ID
       * \return is element metal
       */
      virtual bool isMetal(elementID aID) = 0;
      /**
       * \brief Tests if element is export solid
       * \param aID element ID
       * \return is element export solid
       */
      virtual bool isExportSolid(elementID aID) = 0;
      /**
       * \brief Tests if element is container
       * \param aID element ID
       * \return is element container
       */
      virtual bool isContainer(elementID aID) = 0;
      /**
       * \brief Tests if element is connector axis
       * \param aID element ID
       * \return is element connector axis
       */
      virtual bool isConnectorAxis(elementID aID) = 0;
      /**
       * \brief Tests if element is drilling
       * \param aID element ID
       * \return is element drilling
       */
      virtual bool isDrilling(elementID aID) = 0;
      /**
       * \brief Tests if element is node
       * \param aID element ID
       * \return is element node
       */
      virtual bool isNode(elementID aID) = 0;
      /**
       * \brief Tests if element is auxiliary
       * \param aID element ID
       * \return is element auxiliary
       */
      virtual bool isAuxiliary(elementID aID) = 0;
      /**
       * \brief Gets the element material name
       * \param aID element ID
       * \return element material name
       */
      virtual ICwAPI3DString* getElementMaterialName(elementID aID) = 0;
      /**
       * \brief Gets the element prefab layer
       * \param aID element ID
       * \return element prefab layer
       */
      virtual ICwAPI3DString* getPrefabLayer(elementID aID) = 0;
      /**
       * \brief Gets the element machine calculation set
       * \param aID element ID
       * \return element machine calculation set
       */
      virtual ICwAPI3DString* getMachineCalculationSet(elementID aID) = 0;
      /**
       * \brief Gets the element cutting set
       * \param aID element ID
       * \return element cutting set
       */
      virtual ICwAPI3DString* getCuttingSet(elementID aID) = 0;
      /**
       * \brief Sets the element process type and extended settings from the element name
       * \param aElementIDList
       */
      virtual void setProcessTypeAndExtendedSettingsFromName(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Sets the process type for an element name
       * \param aName element name
       * \param aProcessType process type
       */
      virtual void setNameProcessType(const character* aName, ICwAPI3DProcessType* aProcessType) = 0;
      /**
       * \brief Gets the process type for an element name
       * \param aName element name
       * \return process type
       */
      virtual ICwAPI3DProcessType* getNameProcessType(const character* aName) = 0;
      /**
       * \brief Sets the extended settings for an element name
       * \param aName element name
       * \param aExtendedSettings extended settings
       */
      virtual void setNameExtendedSettings(const character* aName, ICwAPI3DExtendedSettings* aExtendedSettings) = 0;
      /**
       * \brief Gets the extended settings for an element name
       * \param aName element name
       * \return extended settings
       */
      virtual ICwAPI3DExtendedSettings* getNameExtendedSettings(const character* aName) = 0;
      /**
       * \brief Gets the element output type
       * \param aID element ID
       * \return element output type
       */
      virtual ICwAPI3DProcessType* getOutputType(elementID aID) = 0;
      /**
       * \brief Sets the element output type
       * \param aElementIDList element ID list
       * \param aProcessType element output type
       */
      virtual void setOutputType(ICwAPI3DElementIDList* aElementIDList, ICwAPI3DProcessType* aProcessType) = 0;
      /**
       * \brief Gets the element extended settings
       * \param aID element ID
       * \return element extended settings
       */
      virtual ICwAPI3DExtendedSettings* getExtendedSettings(elementID aID) = 0;
      /**
       * \brief Sets the element extended settings
       * \param aElementIDList element ID list
       * \param aExtendedSettings element extended settings
       */
      virtual void setExtendedSettings(ICwAPI3DElementIDList* aElementIDList, ICwAPI3DExtendedSettings* aExtendedSettings) = 0;
      /**
       * \brief Gets the element type
       * \param aID element ID
       * \return element type
       */
      virtual ICwAPI3DElementType* getElementType(elementID aID) = 0;
      /**
       * \brief Sets the element to wall
       * \param aElementIDList element ID list
       */
      [[deprecated("Use setFramedWall() instead.")]] virtual void setWall(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Sets the element to floor
       * \param aElementIDList element ID list
       */
      virtual void setFloor(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Sets the element to opening
       * \param aElementIDList element ID list
       */
      virtual void setOpening(ICwAPI3DElementIDList* aElementIDList) = 0;
      /**
       * \brief Get the element fastening attribute
       * \param aID element ID
       * \return element fastening attribute
       */
      virtual ICwAPI3DString* getFasteningAttribute(elementID aID) = 0;
      /**
       * \brief Sets the element fastening attribute
       * \param aElementIDList element ID list
       * \param aValue element fastening attribute
       */
      virtual void setFasteningAttribute(ICwAPI3DElementIDList* aElementIDList, const character* aValue) = 0;
      /**
       * \brief Tests if the element is roof surface
       * \param aID element ID
       * \return is element roof surface
       */
      virtual bool isRoofSurface(elementID aID) = 0;
      /**
       * \brief Tests if the element is caddy object
       * \param aID element ID
       * \return is element caddy object
       */
      virtual bool isCaddyObject(elementID aID) = 0;
      /**
       * \brief Sets the element material
       * \param aElementIDList element ID list
       * \param aMaterial material ID
       */
      virtual void setElementMaterial(ICwAPI3DElementIDList* aElementIDList, materialID aMaterial) = 0;
      /**
      * \brief
      * \param aID
      */
      virtual ICwAPI3DString* getAssemblyNumber(elementID aID) = 0;
      /**
      * \brief
      * \param aElementIDList
      * \param aAssemblyNumber
      */
      virtual void setAssemblyNumber(ICwAPI3DElementIDList* aElementIDList, const character* aAssemblyNumber) = 0;
      /**
      * \brief
      * \param aID
      */
      virtual uint32_t getListQuantity(elementID aID) = 0;
      /**
      * \brief
      * \param aElementIDList
      * \param aListQuantity
      */
      virtual void setListQuantity(ICwAPI3DElementIDList* aElementIDList, uint32_t aListQuantity) = 0;
      /**
      * \brief
      * \param aID
      */
      virtual bool isEnvelope(elementID aID) = 0;
      /**
      * \brief
      * \param aElementIDList
      * \param aLayerSettings
      */
      virtual void setLayerSettings(ICwAPI3DElementIDList* aElementIDList, ICwAPI3DLayerSettings* aLayerSettings) = 0;
      /**
      * \brief Sets if the element should be ignored in VBA Calculation
      * \param aElements element ID list
      * \param aIgnore
      */
      virtual void setIgnoreInVBACalculation(ICwAPI3DElementIDList* aElements, bool aIgnore) = 0;
      /**
      * \brief
      * \param aElement
      */
      virtual bool getIgnoreInVBACalculation(elementID aElement) = 0;
      virtual void clearErrors() = 0;
      /**
       * \brief Tests if the element has a 2dc reference wall
       * \param aElement element ID
       * \return is architecturewall 2dc
       */
      virtual bool isArchitectureWall2dc(CwAPI3D::elementID aElement) = 0;
      /**
       * \brief Tests if the element has a xml reference wall
       * \param aElement element ID
       * \return is architecturewall xml
       */
      virtual bool isArchitectureWallXml(CwAPI3D::elementID aElement) = 0;
      /**
       * \brief Applies a new 2dc reference wall to an element
       * \param aElements element IDs
       * \param a2dcFilePath 2dc file path
       */
      virtual void setReferenceWall2dc(ICwAPI3DElementIDList* aElements, const character* a2dcFilePath) = 0;
      /**
       * \brief Tests if the element is a Surface
       * \param aID element ID
       * \return is Surface
       */
      virtual bool isSurface(CwAPI3D::elementID aID) = 0;
      /**
       * \brief Tests if the element is a Line
       * \param aID element ID
       * \return is Line
       */
      virtual bool isLine(CwAPI3D::elementID aID) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor3D() = 0;
      virtual void setAttributeDisplaySettingsFor3D(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor2D() = 0;
      virtual void setAttributeDisplaySettingsFor2D(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor2DWithoutLayout() = 0;
      virtual void setAttributeDisplaySettingsFor2DWithoutLayout(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsFor2DWithLayout() = 0;
      virtual void setAttributeDisplaySettingsFor2DWithLayout(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForExportSolid() = 0;
      virtual void setAttributeDisplaySettingsForExportSolid(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForContainer() = 0;
      virtual void setAttributeDisplaySettingsForContainer(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForMachine() = 0;
      virtual void setAttributeDisplaySettingsForMachine(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallBeam() = 0;
      virtual void setAttributeDisplaySettingsForLogWallBeam(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallPanel() = 0;
      virtual void setAttributeDisplaySettingsForLogWallPanel(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallAxis() = 0;
      virtual void setAttributeDisplaySettingsForLogWallAxis(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForLogWallOpening() = 0;
      virtual void setAttributeDisplaySettingsForLogWallOpening(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallBeam() = 0;
      virtual void setAttributeDisplaySettingsForFramedWallBeam(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallPanel() = 0;
      virtual void setAttributeDisplaySettingsForFramedWallPanel(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallAxis() = 0;
      virtual void setAttributeDisplaySettingsForFramedWallAxis(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForFramedWallOpening() = 0;
      virtual void setAttributeDisplaySettingsForFramedWallOpening(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallBeam() = 0;
      virtual void setAttributeDisplaySettingsForSolidWallBeam(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallPanel() = 0;
      virtual void setAttributeDisplaySettingsForSolidWallPanel(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallAxis() = 0;
      virtual void setAttributeDisplaySettingsForSolidWallAxis(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForSolidWallOpening() = 0;
      virtual void setAttributeDisplaySettingsForSolidWallOpening(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForNestingVolume() = 0;
      virtual void setAttributeDisplaySettingsForNestingVolume(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;
      virtual ICwAPI3DAttributeDisplaySettings* getAttributeDisplaySettingsForNestingElement() = 0;
      virtual void setAttributeDisplaySettingsForNestingElement(ICwAPI3DAttributeDisplaySettings* aSettings) = 0;

      virtual uint32_t getUserAttributeCount() = 0;
      /**
       * \brief Sets covers (wall,opening or floor) to standard part.
       * \param aElements
       */
      virtual void setStandardPart(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief Sets elements to solid wall.
       * \param aElements
       */
      virtual void setSolidWall(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief Sets elements to log wall.
       * \param aElements
       */
      virtual void setLogWall(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief Sets elements to solid floor.
       * \param aElements
       */
      virtual void setSolidFloor(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief Sets elements to roof cover.
       * \param aElements
       */
      virtual void setRoof(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief Sets elements to solid roof cover.
       * \param aElements
       */
      virtual void setSolidRoof(ICwAPI3DElementIDList* aElements) = 0;
      /**
       * \brief 
       * \param aElement element ID
       * \return 
       */
      virtual int32_t getNodeSymbol(CwAPI3D::elementID aElement) = 0;
      /**
       * \brief 
       * \param aElements element ID list
       * \param aSymbol symbol
       * \return 
       */
      virtual void setNodeSymbol(ICwAPI3DElementIDList* aElements, int32_t aSymbol) = 0;
      /**
       * \brief 
       * \param aID element ID
       * \return 
       */
      virtual bool isProcessing(CwAPI3D::elementID aID) = 0;
      /**
       * \brief 
       * \param aID element ID
       * \return 
       */
      virtual ICwAPI3DString* getStandardElementName(CwAPI3D::elementID aID) = 0;
      /**
       * \brief 
       * \param aID element ID
       * \return 
       */
      virtual ICwAPI3DString* getSteelShapeName(CwAPI3D::elementID aID) = 0;
      /**
       * \brief 
       * \param aID element ID
       * \return 
       */
      virtual ICwAPI3DString* getAssociatedNestingNumber(CwAPI3D::elementID aID) = 0;
      /**
       * \brief 
       * \param aID element ID
       * \return 
       */
      virtual ICwAPI3DString* getAssociatedNestingName(CwAPI3D::elementID aID) = 0;
      /**
       * \brief 
       */
      virtual void enableAttributeDisplay() = 0;
      /**
       * \brief 
       */
      virtual void disableAttributeDisplay() = 0;
      virtual bool isAttributeDisplayEnabled() = 0;
      /**
       * \brief 
       * \param aID element ID
       * \param aNumber
       * \return 
       */
      virtual ICwAPI3DString* getAutoAttribute(elementID aID, uint32_t aNumber) = 0;
      /**
       * \brief 
       * \param aNumber
       * \return 
       */
      virtual ICwAPI3DString* getAutoAttributeName(uint32_t aNumber) = 0;
      /**
       * \brief 
       */
      virtual void updateAutoAttributes() = 0;
      /**
       * \brief 
       * \param aID
       * \return 
       */
      virtual bool isFramedWall(elementID aID) = 0;
      /**
       * \brief 
       * \param aID
       * \return 
       */
      virtual bool isSolidWall(elementID aID) = 0;
      /**
       * \brief 
       * \param aID
       * \return 
       */
      virtual bool isLogWall(elementID aID) = 0;
      /**
       * \brief 
       * \param aID
       * \return 
       */
      virtual bool isFramedFloor(elementID aID) = 0;
      /**
       * \brief 
       * \param aID
       * \return 
       */
      virtual bool isSolidFloor(elementID aID) = 0;
      /**
       * \brief 
       * \param aID
       * \return 
       */
      virtual bool isFramedRoof(elementID aID) = 0;
      /**
       * \brief 
       * \param aID
       * \return 
       */
      virtual bool isSolidRoof(elementID aID) = 0;
      virtual ICwAPI3DString* getAdditionalGuid(elementID aID, const character* aDataID) = 0;
      virtual void setAdditionalGuid(ICwAPI3DElementIDList* aElementIDList, const character* aDataID, const character* aGuid) = 0;
      virtual std::vector<int32_t> getPrefabLayerAllAssigned(elementID aID) = 0;
      virtual std::vector<int32_t> getPrefabLayerWithDimensions(elementID aID) = 0;
      virtual std::vector<int32_t> getPrefabLayerWithoutDimensions(elementID aID) = 0;
      virtual bool isNestingParent(elementID aID) = 0;
      virtual bool isNestingRawPart(elementID aID) = 0;
      virtual ICwAPI3DStringList* getGroupListItems() = 0;
      virtual ICwAPI3DStringList* getSubgroupListItems() = 0;
      virtual ICwAPI3DStringList* getCommentListItems() = 0;
      virtual ICwAPI3DStringList* getSkuListItems() = 0;
      virtual ICwAPI3DStringList* getUserAttributeListItems(uint32_t aNumber) = 0;
      virtual void addItemToGroupList(const character* aItem) = 0;
      virtual void addItemToSubgroupList(const character* aItem) = 0;
      virtual void addItemToCommentList(const character* aItem) = 0;
      virtual void addItemToSkuList(const character* aItem) = 0;
      virtual void addItemToUserAttributeList(uint32_t aNumber, const character* aItem) = 0;
      virtual bool isCircularMEP(elementID aID) = 0;
      virtual bool isRectangularMEP(elementID aID) = 0;
      virtual bool deleteItemFromGroupList(const character* aItem) = 0;
      virtual bool deleteItemFromSubgroupList(const character* aItem) = 0;
      virtual bool deleteItemFromCommentList(const character* aItem) = 0;
      virtual bool deleteItemFromSkuList(const character* aItem) = 0;
      virtual bool deleteItemFromUserAttributeList(uint32_t aNumber, const character* aItem) = 0;
      virtual ICwAPI3DStringList* getNameListItems() = 0;
      virtual void addItemToNameList(const character* aItem) = 0;
      virtual ICwAPI3DString* getContainerNumberWithPrefix(elementID aID) = 0;
      virtual uint32_t getContainerNumber(elementID aID) = 0;
      virtual void setContainerNumber(ICwAPI3DElementIDList* aElements, uint32_t aNumber) = 0;
      virtual ICwAPI3DString* getMachineCalculationState(elementID aID) = 0;
      virtual ICwAPI3DString* getMachineCalculationSetMachineType(elementID aID) = 0;
      virtual bool isBTLProcessingGroup(elementID aID) = 0;
      virtual bool isHundeggerProcessingGroup(elementID aID) = 0;
      /**
       * \brief Get the element grouping type (group, subgroup)
       * \param
       * \return element grouping type
       */
      virtual CwAPI3D::elementGroupingType getElementGroupingType() = 0;
      /**
       * \brief Set the element grouping type (group, subgroup)
       * \param aType elementGroupingType
       * \return
       */
      virtual void setElementGroupingType(const CwAPI3D::elementGroupingType aType) = 0;
      /**
       * \brief Sets the element to framed wall
       * \param aElementIDList element ID list
       */
      virtual void setFramedWall(ICwAPI3DElementIDList* aElementIDList) = 0;

      /**
       * \brief Delete user attribute from attribute list. The attribute is only deleted when the attribute is not used.
       * \param aNumber 
       * \return bool deletion successfully
       */
      virtual bool deleteUserAttribute(uint32_t aNumber) = 0;
    };
  }
}
