/// @file
/// Copyright (C) 2019 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         26.0
/// @author        Paquet
/// @date          2019-03-04

#pragma once

#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DIfc2x3ElementType.h"
#include "ICwAPI3DIfcOptions.h"
#include "ICwAPI3DIfcPredefinedType.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DBimController
    class ICwAPI3DBimController
    {
    public:
      /// @brief Gets the last error message.
      /// @param[out] aErrorCode [int32_t*] A pointer to an integer where the error code will be stored.
      /// @return [@ref ICwAPI3DString*] A string containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the IFC GUID for a given element.
      /// @param[in] aElementId [@ref elementID] The id of the element.
      /// @return [@ref ICwAPI3DString*] A string containing the IFC GUID.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// elementID* element = selectedElements->front();
      /// ICwAPI3DString* ifcGuid = aFactory.getBimController()->getIfcGuid(*element);
      /// wprintf(L"IFC GUID: %s\n", ifcGuid->data());
      /// @endcode
      virtual ICwAPI3DString* getIfcGuid(elementID aElementId) = 0;

      /// @brief Sets the building and storey for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] A list of element ids.
      /// @param[in] aBuilding [const @ref character*] The name of the building.
      /// @param[in] aStorey [const @ref character*] The name of the storey.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* buildingName = L"Building A";
      /// const character* storeyName = L"Ground Floor";
      /// aFactory.getBimController()->setBuildingAndStorey(selectedElements, buildingName, storeyName);
      /// @endcode
      virtual void setBuildingAndStorey(ICwAPI3DElementIDList* aElementIdList, const character* aBuilding, const character* aStorey) = 0;

      /// @brief Gets the building name for a given element.
      /// @param[in] aElementId [@ref elementID] The id of the element.
      /// @return [@ref ICwAPI3DString*] A string containing the name of the building.
      virtual ICwAPI3DString* getBuilding(elementID aElementId) = 0;

      /// @brief Gets the storey name for a given element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] A string containing the name of the storey.
      virtual ICwAPI3DString* getStorey(elementID aElementId) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Gets the IFC 2x3 element type for a given element.
      /// @param[in] aElementId [@ref elementID] The id of the element.
      /// @return [@ref ICwAPI3DIfc2x3ElementType*] The IFC 2x3 element type.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// elementID* element = selectedElements.front();
      /// ICwAPI3DIfc2x3ElementType* ifcType = aFactory.getBimController()->getIfc2x3ElementType(*element);
      /// @endcode
      virtual ICwAPI3DIfc2x3ElementType* getIfc2x3ElementType(elementID aElementId) = 0;

      /// @brief Sets the IFC 2x3 element type for a list of elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] A list of element ids.
      /// @param[in] aElementType [@ref ICwAPI3DIfc2x3ElementType*] The IFC 2x3 element type to set.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// ICwAPI3DIfc2x3ElementType* ifcEntityType = aFactory.createEmptyIfc2x3ElementType();
      /// ifcEntityType->setIfcMember();
      /// aFactory.getBimController()->setIfc2x3ElementType(selectedElements, ifcEntityType);
      /// @endcode
      virtual void setIfc2x3ElementType(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DIfc2x3ElementType* aElementType) = 0;

      /// @brief Imports an IFC file as a graphical object.
      /// @param[in] aFilePath [const @ref character*] The path to the IFC file.
      /// @return [bool] True if the import was successful, false otherwise.
      /// @par Example:
      /// @code{.cpp}
      /// const character ifcFilePath[] = L"C:/imports/building_model.ifc";
      /// bool success = aFactory.getBimController()->importIfcAsGraphicalObject(ifcFilePath);
      /// if (success)
      /// {
      ///     printf("IFC imported as graphical object successfully\n");
      /// }
      /// @endcode
      virtual bool importIfcAsGraphicalObject(const character* aFilePath) = 0;

      /// @brief Imports a BCF file.
      /// @param[in] aFilePath [const @ref character*] The path to the BCF file.
      /// @return [bool] True if the import was successful, false otherwise.
      /// @par Example:
      /// @code{.cpp}
      /// const character bcfFilePath[] = L"C:/imports/issues.bcf";
      /// bool success = aFactory.getBimController()->importBcf(bcfFilePath);
      /// if (success)
      /// {
      ///     printf("BCF file imported successfully\n");
      /// }
      /// @endcode
      virtual bool importBcf(const character* aFilePath) = 0;

      /// @brief Exports a BCF file.
      /// @param[in] aFilePath [const @ref character*] The path to the BCF file to be exported.
      /// @return [bool] True if the export was successful, false otherwise.
      /// @par Example:
      /// @code{.cpp}
      /// const character lBcfOutputPath[] = L"C:/exports/project_issues.bcf";
      /// bool lSuccess = aFactory.getBimController()->exportBcf(lBcfOutputPath);
      /// if(lSuccess)
      /// {
      ///   printf("BCF file exported successfully");
      /// }
      /// @endcode
      virtual bool exportBcf(const character* aFilePath) = 0;

      /// @brief Exports an IFC file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] A list of element ids to be included in the export.
      /// @param[in] aFilePath [const @ref character*] The path where the IFC file will be exported.
      /// @return [bool] True if the export was successful, false otherwise.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character ifcOutputPath[] = L"C:/exports/building_model.ifc";
      /// bool success = aFactory.getBimController()->exportIfc(selectedElements, ifcOutputPath);
      /// if (success)
      /// {
      ///     printf("IFC file exported successfully\n");
      /// }
      /// @endcode
      virtual bool exportIfc(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath) = 0;

      /// @brief imports an IFC File and returns the ids of the Exchange Objects.
      /// @param[in] aFilePath [const @ref character*] The path to the IFC file.
      /// @return [@ref ICwAPI3DElementIDList*] The id of the exchange objects.
      virtual ICwAPI3DElementIDList* importIfcReturnExchangeObjects(const character* aFilePath) = 0;

      /// @brief converts a list of Exchange Objects to Cadwork Elements.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The exchange object id to convert.
      /// @return [@ref ICwAPI3DElementIDList*] The list of cadwork element id.
      virtual ICwAPI3DElementIDList* convertExchangeObjects(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Gets the height of a specific storey in a building.
      /// @param[in] aBuilding [const @ref character*] The name of the building.
      /// @param[in] aStorey [const @ref character*] The name of the storey.
      /// @return [double] The height of the storey.
      virtual double getStoreyHeight(const character* aBuilding, const character* aStorey) = 0;

      /// @brief Sets the height of a specific storey in a building.
      /// @param[in] aBuilding [const @ref character*] The name of the building.
      /// @param[in] aStorey [const @ref character*] The name of the storey.
      /// @param[in] aHeight [double] The height to set for the storey.
      /// @par Example:
      /// @code{.cpp}
      /// const character* buildingName = L"Building A";
      /// const character* storeyName = L"Ground Floor";
      /// double heightMillimeters = 3500;
      /// aFactory.getBimController()->setStoreyHeight(buildingName, storeyName, heightMillimeters);
      /// @endcode
      virtual void setStoreyHeight(const character* aBuilding, const character* aStorey, double aHeight) = 0;

      /// @brief Gets the string representation of an IFC 2x3 element type.
      /// @param[in] aElementType [@ref ICwAPI3DIfc2x3ElementType*] The IFC 2x3 element type.
      /// @return [@ref ICwAPI3DString*] A string representation of the IFC 2x3 element type.
      virtual ICwAPI3DString* getIfc2x3ElementTypeString(ICwAPI3DIfc2x3ElementType* aElementType) = 0;

      /// @brief Gets the display string of an IFC 2x3 element type.
      /// @param[in] aElementType [@ref ICwAPI3DIfc2x3ElementType*] The IFC 2x3 element type.
      /// @return [@ref ICwAPI3DString*] A display string of the IFC 2x3 element type.
      virtual ICwAPI3DString* getIfc2x3ElementTypeDisplayString(ICwAPI3DIfc2x3ElementType* aElementType) = 0;

      /// @brief Gets a list of all buildings.
      /// @return [@ref ICwAPI3DString*] A list of all buildings.
      virtual ICwAPI3DStringList* getAllBuildings() = 0;

      /// @brief Gets a list of all storeys in a given building.
      /// @param[in] aBuilding [const @ref character*] The name of the building.
      /// @return [@ref ICwAPI3DString*] A list of all storeys in the building.
      virtual ICwAPI3DStringList* getAllStoreys(const character* aBuilding) = 0;

      /// @brief Exports an IFC 2x3 file silently.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] A list of element ids to be included in the export.
      /// @param[in] aFilePath [const @ref character*] The path where the IFC file will be exported.
      /// @return [bool] True if the export was successful, false otherwise.
      virtual bool exportIfc2x3Silently(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath) = 0;

      /// @brief Exports an IFC 4 file silently.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] A list of element ids to be included in the export.
      /// @param[in] aFilePath [const @ref character*] The path where the IFC file will be exported.
      /// @return [bool] True if the export was successful, false otherwise.
      virtual bool exportIfc4Silently(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath) = 0;

      /// @brief Exports an IFC 4 file silently with options.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] A list of element ids to be included in the export.
      /// @param[in] aFilePath [const @ref character*] The path where the IFC file will be exported.
      /// @param[in] aOptions [@ref ICwAPI3DIfcOptions*] The options for the IFC export.
      /// @return [bool] True if the export was successful, false otherwise.
      virtual bool exportIfc4SilentlyWithOptions(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath, ICwAPI3DIfcOptions* aOptions) = 0;

      /// @brief Exports an IFC 2x3 file silently with options.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] A list of element ids to be included in the export.
      /// @param[in] aFilePath [const @ref character*] The path where the IFC file will be exported.
      /// @param[in] aOptions [@ref ICwAPI3DIfcOptions*] The options for the IFC export.
      /// @return [bool] True if the export was successful, false otherwise.
      virtual bool exportIfc2x3SilentlyWithOptions(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath, ICwAPI3DIfcOptions* aOptions) = 0;

      /// @brief Get elementID from an IFC base64 Guid.
      /// @param[in] aGuid [const @ref character*] An IFC GUID in base64 string format ("28kif20KPEuBjk2m1N3ep$").
      /// @return The element id.
      virtual elementID getElementIdFromIfcBase64Guid(const character* aGuid) = 0;

      /// @brief Get IFC base64 Guid from element id.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The IFC GUID in base64 string format ("28kif20KPEuBjk2m1N3ep$").
      virtual ICwAPI3DString* getIfcBase64Guid(const elementID aElementId) = 0;

      /// @brief This function takes the specified elements and inserts them into the BMT structure and adds them to the active building and storey.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element ids.
      virtual void updateBmtStructureCreatedElements(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief This function takes the specified elements and inserts them into the BMT structure and adds them to the assigned Building and Storey.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element ids.
      virtual void updateBmtStructureBuildingStorey(ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Get the IfcOptions with the settings used in the document.
      /// @return [@ref ICwAPI3DIfcOptions*] The IfcOptions.
      virtual ICwAPI3DIfcOptions* getIfcOptions() = 0;

      /// @brief Get the IfcPredefinedType of an element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DIfcPredefinedType*] The IfcPredefinedType Wrapper.
      virtual ICwAPI3DIfcPredefinedType* getIfcPredefinedType(elementID aElementId) = 0;

      /// @brief Set a predefined type to elements. Attention, if you change the PredefinedType of the elements, you are responsible for ensuring that valid types are set.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element ids.
      /// @param[in] aPredefinedType [@ref ICwAPI3DIfcPredefinedType*] The predifined type to set.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// ICwAPI3DIfcPredefinedType* predefinedType = aFactory.createEmptyIfcPredefinedType();
      /// predefinedType->setMember();
      /// aFactory.getBimController()->setIfcPredefinedType(selectedElements, predefinedType);
      /// @endcode
      virtual void setIfcPredefinedType(ICwAPI3DElementIDList* aElementIdList, ICwAPI3DIfcPredefinedType* aPredefinedType) = 0;

      /// @brief Exports an IFC 2x3.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] A list of element ids to be included in the export.
      /// @param[in] aFilePath [const @ref character*] The path where the IFC file will be exported.
      /// @return [bool] True if the export was successful, false otherwise.
      virtual bool exportIfc2x3(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath) = 0;

      /// @brief Exports an IFC 4 file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] A list of element ids to be included in the export.
      /// @param[in] aFilePath [const @ref character*] The path where the IFC file will be exported.
      /// @return [bool] True if the export was successful, false otherwise.
      virtual bool exportIfc4(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath) = 0;
    };
  }
}
