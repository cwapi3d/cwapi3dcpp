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
    /// \brief
    class ICwAPI3DBimController
    {
    public:
      /// @brief Gets the last error message.
      /// @param aErrorCode A pointer to an integer where the error code will be stored.
      /// @return A string containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the IFC GUID for a given element.
      /// @param aID The ID of the element.
      /// @return A string containing the IFC GUID.
      virtual ICwAPI3DString* getIfcGuid(elementID aID) = 0;

      /// @brief Sets the building and storey for a list of elements.
      /// @param aElementIDList A list of element IDs.
      /// @param aBuilding The name of the building.
      /// @param aStorey The name of the storey.
      virtual void setBuildingAndStorey(ICwAPI3DElementIDList* aElementIDList, const character* aBuilding, const character* aStorey) = 0;

      /// @brief Gets the building name for a given element.
      /// @param aElement The ID of the element.
      /// @return A string containing the name of the building.
      virtual ICwAPI3DString* getBuilding(elementID aElement) = 0;

      /// @brief Gets the storey name for a given element.
      /// @param aElement The ID of the element.
      /// @return A string containing the name of the storey.
      virtual ICwAPI3DString* getStorey(elementID aElement) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Gets the IFC 2x3 element type for a given element.
      /// @param aElementID The ID of the element.
      /// @return The IFC 2x3 element type.
      virtual ICwAPI3DIfc2x3ElementType* getIfc2x3ElementType(elementID aElementID) = 0;

      /// @brief Sets the IFC 2x3 element type for a list of elements.
      /// @param aElementIDs A list of element IDs.
      /// @param aElementType The IFC 2x3 element type to set.
      virtual void setIfc2x3ElementType(ICwAPI3DElementIDList* aElementIDs, ICwAPI3DIfc2x3ElementType* aElementType) = 0;

      /// @brief Imports an IFC file as a graphical object.
      /// @param aFilePath The path to the IFC file.
      /// @return True if the import was successful, false otherwise.
      virtual bool importIfcAsGraphicalObject(const character* aFilePath) = 0;

      /// @brief Imports a BCF file.
      /// @param aFilePath The path to the BCF file.
      /// @return True if the import was successful, false otherwise.
      virtual bool importBcf(const character* aFilePath) = 0;

      /// @brief Exports a BCF file.
      /// @param aFilePath The path to the BCF file to be exported.
      /// @return True if the export was successful, false otherwise.
      virtual bool exportBcf(const character* aFilePath) = 0;

      /// @brief Exports an IFC file.
      /// @param aElementIDs A list of element IDs to be included in the export.
      /// @param aFilePath The path where the IFC file will be exported.
      /// @return True if the export was successful, false otherwise.
      virtual bool exportIfc(ICwAPI3DElementIDList* aElementIDs, const character* aFilePath) = 0;

      /// @brief imports an IFC File and returns the ids of the Exchange Objects
      /// @param aFilePath
      /// @return
      virtual ICwAPI3DElementIDList* importIfcReturnExchangeObjects(const character* aFilePath) = 0;

      /// @brief converts a list of Exchange Objects to Cadwork Elements
      /// @param aExchangeObjects
      /// @return
      virtual ICwAPI3DElementIDList* convertExchangeObjects(ICwAPI3DElementIDList* aExchangeObjects) = 0;

      /// @brief Gets the height of a specific storey in a building.
      /// @param aBuilding The name of the building.
      /// @param aStorey The name of the storey.
      /// @return The height of the storey.
      virtual double getStoreyHeight(const character* aBuilding, const character* aStorey) = 0;

      /// @brief Sets the height of a specific storey in a building.
      /// @param aBuilding The name of the building.
      /// @param aStorey The name of the storey.
      /// @param aHeight The height to set for the storey.
      virtual void setStoreyHeight(const character* aBuilding, const character* aStorey, double aHeight) = 0;

      /// @brief Gets the string representation of an IFC 2x3 element type.
      /// @param aElementType The IFC 2x3 element type.
      /// @return A string representation of the IFC 2x3 element type.
      virtual ICwAPI3DString* getIfc2x3ElementTypeString(ICwAPI3DIfc2x3ElementType* aElementType) = 0;

      /// @brief Gets the display string of an IFC 2x3 element type.
      /// @param aElementType The IFC 2x3 element type.
      /// @return A display string of the IFC 2x3 element type.
      virtual ICwAPI3DString* getIfc2x3ElementTypeDisplayString(ICwAPI3DIfc2x3ElementType* aElementType) = 0;

      /// @brief Gets a list of all buildings.
      /// @return A list of all buildings.
      virtual ICwAPI3DStringList* getAllBuildings() = 0;

      /// @brief Gets a list of all storeys in a given building.
      /// @param aBuilding The name of the building.
      /// @return A list of all storeys in the building.
      virtual ICwAPI3DStringList* getAllStoreys(const character* aBuilding) = 0;

      /// @brief Exports an IFC 2x3 file silently.
      /// @param aElementIDs A list of element IDs to be included in the export.
      /// @param aFilePath The path where the IFC file will be exported.
      /// @return True if the export was successful, false otherwise.
      virtual bool exportIfc2x3Silently(ICwAPI3DElementIDList* aElementIDs, const character* aFilePath) = 0;

      /// @brief Exports an IFC 4 file silently.
      /// @param aElementIDs A list of element IDs to be included in the export.
      /// @param aFilePath The path where the IFC file will be exported.
      /// @return True if the export was successful, false otherwise.
      virtual bool exportIfc4Silently(ICwAPI3DElementIDList* aElementIDs, const character* aFilePath) = 0;

      /// @brief Exports an IFC 4 file silently with options.
      /// @param aElementIDs A list of element IDs to be included in the export.
      /// @param aFilePath The path where the IFC file will be exported.
      /// @param aOptions The options for the IFC export.
      /// @return True if the export was successful, false otherwise.
      virtual bool exportIfc4SilentlyWithOptions(ICwAPI3DElementIDList* aElementIDs, const character* aFilePath, ICwAPI3DIfcOptions* aOptions) = 0;

      /// @brief Exports an IFC 2x3 file silently with options.
      /// @param aElementIDs A list of element IDs to be included in the export.
      /// @param aFilePath The path where the IFC file will be exported.
      /// @param aOptions The options for the IFC export.
      /// @return True if the export was successful, false otherwise.
      virtual bool exportIfc2x3SilentlyWithOptions(ICwAPI3DElementIDList* aElementIDs, const character* aFilePath, ICwAPI3DIfcOptions* aOptions) = 0;

      /// @brief Get elementID from an IFC base64 Guid
      /// @param a base64 IFC Guid ("28kif20KPEuBjk2m1N3ep$")
      /// @return element ID
      virtual elementID getElementIdFromIfcBase64Guid(const character* aGuid) = 0;

      /// @brief Get IFC base64 Guid from element ID
      /// @param aElementID
      /// @return The IFC GUID in base64 string format ("28kif20KPEuBjk2m1N3ep$").
      virtual ICwAPI3DString* getIfcBase64Guid(const elementID aElementID) = 0;

      /// @brief This function takes the specified elements and inserts them into the BMT structure and adds them to the active building and storey.
      /// @param aElementIDs
      virtual void updateBmtStructureCreatedElements(ICwAPI3DElementIDList* aElementIDs) = 0;

      /// @brief This function takes the specified elements and inserts them into the BMT structure and adds them to the assigned Building and Storey.
      /// @param aElementIDs
      virtual void updateBmtStructureBuildingStorey(ICwAPI3DElementIDList* aElementIDs) = 0;

      /// @brief Get the IfcOptions with the settings used in the document
      /// @return IfcOptions
      virtual ICwAPI3DIfcOptions* getIfcOptions() = 0;

      /// @brief Get the IfcPredefinedType of an element.
      /// @return IfcPredefinedType Wrapper
      virtual ICwAPI3DIfcPredefinedType* getIfcPredefinedType(elementID aElementID) = 0;

      /// @brief Set a predefined type to elements. Attention, if you change the PredefinedType of the elements, you are responsible for ensuring that valid types are set
      /// @param aElementIDs
      /// @param aPredefinedType
      virtual void setIfcPredefinedType(ICwAPI3DElementIDList* aElementIDs, ICwAPI3DIfcPredefinedType* aPredefinedType) = 0;
    };
  }
}
