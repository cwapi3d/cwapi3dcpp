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

#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"
#include "ICwAPI3DVertexList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DMachineController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Exports a BTL file
      /// @param aBTLVersion BTL version
      /// @param aFilePath file path
      virtual void exportBTL(uint32_t aBTLVersion, const character* aFilePath) = 0;

      /// @brief Exports a WUP file
      /// @param aMFBVersion WUP version
      virtual void exportWeinmannMFB(uint32_t aMFBVersion) = 0;

      /// @brief Exports a Hundegger file
      /// @param aHundeggertype hundegger type
      virtual void exportHundegger(uint32_t aHundeggertype) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Exports a Hundegger file
      /// @param aHundeggertype hundegger type
      /// @param aFilePath file path
      virtual void exportHundeggerWithFilePath(uint32_t aHundeggertype, const character* aFilePath) = 0;

      /// @brief Exports a Hundegger file
      /// @param aHundeggertype hundegger type
      /// @param aFilePath file path
      /// @param aPresetting export presetting .xml
      virtual void exportHundeggerWithFilePathAndPresetting(uint32_t aHundeggertype, const character* aFilePath, const character* aPresetting) = 0;

      /// @brief Exports a BTL file with a presetting file
      /// @param aBTLVersion BTL version
      /// @param aFilePath file path
      /// @param aPresetting export presetting .xml
      virtual void exportBTLWithPresetting(uint32_t aBTLVersion, const character* aFilePath, const character* aPresetting) = 0;

      /// @brief Calculates the Machine Data for BTL
      /// @param aElements
      /// @param aBTLVersion BTL version
      virtual void calculateBTLMachineData(ICwAPI3DElementIDList* aElements, uint32_t aBTLVersion) = 0;

      /// @brief Calculates the Machine Data for Hundegger
      /// @param aElements
      /// @param aHunderggertype
      virtual void calculateHundeggerMachineData(ICwAPI3DElementIDList* aElements, uint32_t aHunderggertype) = 0;

      /// @brief Loads the Hundegger calculation set.
      /// @param aHundeggertype The type of Hundegger.
      /// @param aFilePath The file path of the calculation set.
      virtual void loadHundeggerCalculationSet(uint32_t aHundeggertype, const character* aFilePath) = 0;

      /// @brief Gets the list of Hundegger processings for a specific element.
      /// @param aElementID The ID of the element.
      /// @param aHundeggertype The type of Hundegger.
      /// @return A list of element IDs representing the processings.
      virtual ICwAPI3DElementIDList* getElementHundeggerProcessings(elementID aElementID, uint32_t aHundeggertype) = 0;

      /// @brief Gets the list of BTL processings for a specific element.
      /// @param aElementID The ID of the element.
      /// @param aBTLVersion The version of BTL.
      /// @return A list of element IDs representing the processings.
      virtual ICwAPI3DElementIDList* getElementBTLProcessings(elementID aElementID, uint32_t aBTLVersion) = 0;

      /// @brief Gets the name of a specific processing.
      /// @param aReferenceElementID The ID of the reference element.
      /// @param aProcessingID The ID of the processing.
      /// @return The name of the processing.
      virtual ICwAPI3DString* getProcessingName(elementID aReferenceElementID, elementID aProcessingID) = 0;

      /// @brief Gets the code of a specific processing.
      /// @param aReferenceElementID The ID of the reference element.
      /// @param aProcessingID The ID of the processing.
      /// @return The code of the processing.
      virtual ICwAPI3DString* getProcessingCode(elementID aReferenceElementID, elementID aProcessingID) = 0;

      /// @brief Gets the points of a specific processing.
      /// @param aReferenceElementID The ID of the reference element.
      /// @param aProcessingID The ID of the processing.
      /// @return A list of vertices representing the points of the processing.
      virtual ICwAPI3DVertexList* getProcessingPoints(elementID aReferenceElementID, elementID aProcessingID) = 0;

      /// @brief Gets the BTL parameter set of a specific processing.
      /// @param aReferenceElementID The ID of the reference element.
      /// @param aProcessingID The ID of the processing.
      /// @return A list of strings representing the BTL parameter set of the processing.
      virtual ICwAPI3DStringList* getProcessingBTLParameterset(elementID aReferenceElementID, elementID aProcessingID) = 0;

      /// @brief Exports a Hundegger file silently
      /// @param aHundeggertype hundegger type
      /// @param aFilePath file path
      virtual void exportHundeggerWithFilePathSilent(uint32_t aHundeggertype, const character* aFilePath) = 0;

      /// @brief Exports a Hundegger file silently
      /// @param aHundeggertype hundegger type
      /// @param aFilePath file path
      /// @param aPresetting export presetting .xml
      virtual void exportHundeggerWithFilePathAndPresettingSilent(uint32_t aHundeggertype, const character* aFilePath, const character* aPresetting) = 0;
    };
  }
}
