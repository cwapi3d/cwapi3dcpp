/// @file
/// Copyright (C) 2017 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         24.0
/// @author        Paquet
/// @date          2017-05-25

#pragma once

#include "ICwAPI3DStringList.h"
#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DConnectorAxisController
    class ICwAPI3DConnectorAxisController
    {
    public:
      /// @brief Gets the last error message.
      /// @param[out] aErrorCode A pointer to an integer where the error code will be stored.
      /// @return [@ref ICwAPI3DString*] A string containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Creates a standard connector axis between two points.
      /// @param[in] aAxisName [const @ref character*] Name of the standard axis
      /// @param[in] aPoint1 [@ref vector3D] first point
      /// @param[in] aPoint2 [@ref vector3D] second point
      /// @return [@ref elementID] The id of the created standard connector.
      virtual elementID createStandardConnector(const character* aAxisName, CwAPI3D::vector3D aPoint1, CwAPI3D::vector3D aPoint2) = 0;

      /// @brief Gets the GUID of an item by its name and type.
      /// @param[in] aName [const @ref character*] The name of the item.
      /// @param[in] aItemType [@ref vbaCatalogItemType] The type of the item.
      /// @return [@ref ICwAPI3DString*] The GUID of the item.
      virtual ICwAPI3DString* getItemGuidByName(const character* aName, uint64_t aItemType) = 0;

      /// @brief Gets the Bolt Length.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [double] The bolt length.
      virtual double getBoltLength(elementID aAxisId) = 0;

      /// @brief Sets the Bolt Length.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aLength [double] The bolt length.
      virtual void setBoltLength(elementID aAxisId, double aLength) = 0;

      /// @brief Gets the Bolt OverLength.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [double] The bolt over length.
      virtual double getBoltOverLength(elementID aAxisId) = 0;

      /// @brief Sets the Bolt OverLength.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aOverLength [double] The bolt over length.
      virtual void setBoltOverLength(elementID aAxisId, double aOverLength) = 0;

      /// @brief Returns if Bolt Length Automatic is set.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [bool] True if the bolt length is set to automatic, false otherwise.
      virtual bool getBoltLengthAutomatic(elementID aAxisId) = 0;

      /// @brief Sets the Bolt Length Automatic value.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aLengthAutomatic [bool] The automatic length value.
      virtual void setBoltLengthAutomatic(elementID aAxisId, bool aLengthAutomatic) = 0;

      /// @brief Gets the Guid of the Bolt Item.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [@ref ICwAPI3DString*] The bolt item Guid.
      virtual ICwAPI3DString* getBoltItemGuid(elementID aAxisId) = 0;

      /// @brief Sets the Bolt Item.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aItemGuid [const @ref character*] The bolt item Guid.
      virtual void setBoltItem(elementID aAxisId, const character* aItemGuid) = 0;

      /// @brief Sets the Drilling Diameter for all Sections.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aDiameter [double] The drilling diameter.
      virtual void setDiameter(elementID aAxisId, double aDiameter) = 0;

      /// @brief Sets the Drilling Diameter for a specific Sections.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @param[in] aDiameter [double] The drilling diameter.
      virtual void setSectionDiameter(elementID aAxisId, uint32_t aSectionIndex, double aDiameter) = 0;

      /// @brief Gets the Drilling Diameter of a specific Sections.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [double] The drilling diameter.
      virtual double getSectionDiameter(elementID aAxisId, uint32_t aSectionIndex) = 0;

      /// @brief Returns a list of GUIDs of all axis items.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [@ref ICwAPI3DStringList*] The list of GUIDs of all axis items.
      virtual ICwAPI3DStringList* getAxisItemsGUIDs(elementID aAxisId) = 0;

      /// @brief Returns the name of an axis item.
      /// @param[in] aGuid [const @ref character*] The axis item Guid.
      /// @return [@ref ICwAPI3DString*] The axis item name.
      virtual ICwAPI3DString* getAxisItemName(const character* aGuid) = 0;

      /// @brief Returns the material of an axis item.
      /// @param[in] aGuid [const @ref character*] The axis item Guid.
      /// @return [@ref ICwAPI3DString*] The material of the axis item.
      virtual ICwAPI3DString* getAxisItemMaterial(const character* aGuid) = 0;

      /// @brief Returns the norm of an axis item.
      /// @param[in] aGuid [const @ref character*] The axis item Guid.
      /// @return [@ref ICwAPI3DString*] The norm of the axis item.
      virtual ICwAPI3DString* getAxisItemNorm(const character* aGuid) = 0;

      /// @brief Returns the strength category of an axis item.
      /// @param[in] aGuid [const @ref character*] The axis item Guid.
      /// @return [@ref ICwAPI3DString*] The strength category of the axis item.
      virtual ICwAPI3DString* getAxisItemStrengthCategory(const character* aGuid) = 0;

      /// @brief Returns an userfield value of an axis item.
      /// @param[in] aGuid [const @ref character*] The axis item Guid.
      /// @param[in] aUserItemNumber [int32_t] The user item field number. (1-5)
      /// @return [@ref ICwAPI3DString*] The user field value.
      virtual ICwAPI3DString* getAxisItemUserField(const character* aGuid, int32_t aUserItemNumber) = 0;

      /// @brief Returns the axis item order number of an axis item.
      /// @param[in] aGuid [const @ref character*] The axis item Guid.
      /// @return [@ref ICwAPI3DString*] The axis item order number of the axis item.
      virtual ICwAPI3DString* getAxisItemOrderNumber(const character* aGuid) = 0;

      /// @brief Returns the order number of a bolt item.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [@ref ICwAPI3DString*] The order number of the bolt item.
      virtual ICwAPI3DString* getBoltOrderNumber(elementID aAxisId) = 0;

      /// @brief Returns if the axis is valid.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [bool] True if valid, false otherwise.
      virtual bool checkAxis(elementID aAxisId) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Updates the Connection Config (CuttingAbility) of Axis/VBAs.
      /// @param[in] aAxisIdList [@ref ICwAPI3DElementIDList*] The axis id list to update.
      virtual void updateAxisCuttingAbility(ICwAPI3DElementIDList* aAxisIdList) = 0;

      /// @brief Returns the number of sections.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [int] The number of sections of the axis.
      virtual int getSectionCount(elementID aAxisId) = 0;

      /// @brief Returns material name of a section contact element.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [@ref ICwAPI3DString*] The material name of the section contact element.
      virtual ICwAPI3DString* getSectionMaterialName(elementID aAxisId, uint32_t aSectionIndex) = 0;

      /// @brief Returns a list of all standard connectors.
      /// @return [@ref ICwAPI3DStringList*] The list of all standard connectors.
      virtual ICwAPI3DStringList* getStandardConnectorList() = 0;

      /// @brief Starts the ConnectorAxis configuration dialog.
      virtual void startConfigurationDialog() = 0;

      /// @brief Creates a blank connector between two points.
      /// @param[in] aDiameter [double] The diameter of the connector.
      /// @param[in] aPoint1 [@ref vector3D] The first point for the connector.
      /// @param[in] aPoint2 [@ref vector3D] The second point for the connector.
      /// @return [@ref elementID] The ID of the created connector.
      virtual elementID createBlankConnector(double aDiameter, CwAPI3D::vector3D aPoint1, CwAPI3D::vector3D aPoint2) = 0;

      /// @brief Gets the contact element of a specific section.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [@ref elementID] The ID of the contact element.
      virtual elementID getSectionContactElement(elementID aAxisId, uint32_t aSectionIndex) = 0;

      /// @brief Gets the diameter of a bolt.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [double] The diameter of the bolt.
      virtual double getBoltDiameter(CwAPI3D::elementID aAxisId) = 0;

      /// @brief Imports a file.
      /// @param[in] aFilePath The path to the file to be imported.
      virtual void importFromFile(const character* aFilePath) = 0;

      /// @brief Get counterbore diameter for start side.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [double] The counterbore diameter for start side.
      virtual double getCounterboreDiameterForStartSide(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Get counterbore diameter for end side.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [double] The counterbore diameter for end side.
      virtual double getCounterboreDiameterForEndSide(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Get counterbore depth for start side.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [double] The counterbore depth for start side.
      virtual double getCounterboreDepthForStartSide(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Get counterbore depth for end side.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [double] The counterbore depth for end side.
      virtual double getCounterboreDepthForEndSide(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Get if the counterbore conical for start side.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [bool] True if the counterbore conical for start side, false otherwise.
      virtual bool getCounterboreIsConicalForStartSide(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Get if the counterbore conical for end side.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [bool] True if the counterbore conical for End side, false otherwise.
      virtual bool getCounterboreIsConicalForEndSide(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Set counterbore for start side.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @param[in] aDiameter [double] The counterbore diameter.
      /// @param[in] aDepth [double] The counterbore depth.
      /// @param[in] aIsConical [bool] Is the counterbore conical.
      virtual void setCounterboreForStartSide(elementID aAxisId, int32_t aSectionIndex, double aDiameter, double aDepth, bool aIsConical) = 0;

      /// @brief Set counterbore  for end side.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @param[in] aDiameter [double] The counterbore diameter.
      /// @param[in] aDepth [double] The counterbore depth.
      /// @param[in] aIsConical [bool] Is the counterbore conical.
      virtual void setCounterboreForEndSide(elementID aAxisId, int32_t aSectionIndex, double aDiameter, double aDepth, bool aIsConical) = 0;

      /// @brief Get the intersection count.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @return [int32_t] The intersection count.
      virtual int32_t getIntersectionCount(elementID aAxisId) const = 0;

      /// @brief Get the the items Guid at intersection.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aIntersectionIndex [int32_t] The intersection index. (0 based index)
      /// @return [@ref ICwAPI3DStringList*] The items Guid list at intersection.
      virtual ICwAPI3DStringList* getItemGuidsAtIntersection(elementID aAxisId, int32_t aIntersectionIndex) = 0;

      /// @brief Set items Guid at intersection.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aIntersectionIndex [int32_t] The intersection index. (0 based index)
      /// @param[in] aItemGuids [@ref ICwAPI3DStringList*] The items Guid list at intersection.
      virtual void setItemGuidsAtIntersection(elementID aAxisId, int32_t aIntersectionIndex, ICwAPI3DStringList* aItemGuids) = 0;

      /// @brief Get the section length.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [double] The section length.
      virtual double getSectionLength(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Get if the section oblong drilling is enabled.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [bool] True if the section oblong drilling is enabled, false otherwise.
      virtual bool getSectionOblongDrillingIsEnabled(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Get the section oblong drilling positive value.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [double] The section oblong drilling positive value.
      virtual double getSectionOblongDrillingPositiveValue(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Get the section oblong drilling negative value.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [double] The section oblong drilling negative value.
      virtual double getSectionOblongDrillingNegativeValue(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Get the section oblong drilling angle.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @return [double] The section oblong drilling angle.
      virtual double getSectionOblongDrillingAngle(elementID aAxisId, int32_t aSectionIndex) const = 0;

      /// @brief Disable section oblong drilling.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      virtual void setSectionOblongDrillingIsDisabled(elementID aAxisId, int32_t aSectionIndex) = 0;

      /// @brief Enable section oblong drilling.
      /// @param[in] aAxisId [@ref elementID] The ID of the axis.
      /// @param[in] aSectionIndex [uint32_t] The section index. (0 based index)
      /// @param[in] aPositiveValue  [double] The positive value.
      /// @param[in] aNegativeValue [double] The negative value.
      /// @param[in] aAngle [double] The drilling angle.
      virtual void setSectionOblongDrillingIsEnabled(elementID aAxisId, int32_t aSectionIndex, double aPositiveValue, double aNegativeValue, double aAngle) = 0;
    };
  }
}
