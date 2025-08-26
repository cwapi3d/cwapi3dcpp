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
    /// @interface ICwAPI3DMachineController
    class ICwAPI3DMachineController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Exports a BTL file.
      /// @param[in] aBTLVersion [@ref btlVersion] The BTL version.
      /// @param[in] aExportFilePath [const @ref character*] The export file path.
      /// @par Example:
      /// @code{.cpp}
      /// btlVersion btlVersion = btlVersion::btlx_2_1;
      /// const character* outputPath = L"C:/exports/timber_project.btlx";
      ///
      /// aFactory.getMachineController()->exportBTL(static_cast<uint32_t>(btlVersion), outputPath);
      /// @endcode
      virtual void exportBTL(uint32_t aBTLVersion, const character* aExportFilePath) = 0;

      /// @brief Exports a Weinmann MFB file.
      /// @param[in] aMFBVersion [@ref weinmannMfbVersion] The Weinmann MFB version.
      /// @par Example:
      /// @code{.cpp}
      /// weinmannMfbVersion mfbVersion = weinmannMfbVersion::wup_3_4;
      ///
      /// aFactory.getMachineController()->exportWeinmannMfb(static_cast<uint32_t>(mfbVersion));
      /// @endcode
      virtual void exportWeinmannMFB(uint32_t aMFBVersion) = 0;

      /// @brief Exports a Hundegger file.
      /// @param[in] aHundeggertype [@ref hundeggerMachineType] The Hundegger machine type.
      /// @par Example:
      /// @code{.cpp}
      /// hundeggerMachineType hundeggerType = hundeggerMachineType::k2;
      ///
      /// aFactory.getMachineController()->exportHundegger(static_cast<uint32_t>(hundeggerType));
      /// @endcode
      virtual void exportHundegger(uint32_t aHundeggertype) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Exports a Hundegger file.
      /// @param[in] aHundeggertype [@ref hundeggerMachineType] The Hundegger machine type.
      /// @param[in] aExportFilePath [const @ref character*] The export file path.
      /// @par Example:
      /// @code{.cpp}
      /// hundeggerMachineType hundeggerType = hundeggerMachineType::k2;
      /// const character* outputPath = L"C:/exports/hundegger_project.k2";
      ///
      /// aFactory.getMachineController()->exportHundeggerWithFilePath(static_cast<uint32_t>(hundeggerType), outputPath);
      /// @endcode
      virtual void exportHundeggerWithFilePath(uint32_t aHundeggertype, const character* aExportFilePath) = 0;

      /// @brief Exports a Hundegger file
      /// @param[in] aHundeggertype [@ref hundeggerMachineType] The Hundegger machine type.
      /// @param[in] aExportFilePath [const @ref character*] The export file path.
      /// @param[in] aPresetting [const @ref character*] The presetting file path (.xml).
      /// @par Example:
      /// @code{.cpp}
      /// hundeggerMachineType hundeggerType = hundeggerMachineType::k2;
      /// const character* outputPath = L"C:/exports/hundegger_project.k2";
      /// const character* presettingFile = L"...3d/Machine/Hundegger/K2/hundegger_settings.xml";
      ///
      /// aFactory.getMachineController()->exportHundeggerWithFilePathAndPresetting(static_cast<uint32_t>(hundeggerType), outputPath, presettingFile);
      /// @endcode
      virtual void exportHundeggerWithFilePathAndPresetting(uint32_t aHundeggertype, const character* aExportFilePath, const character* aPresetting) = 0;

      /// @brief Exports a BTL file with a presetting file.
      /// @param[in] aBTLVersion [@ref btlVersion] The BTL version.
      /// @param[in] aExportFilePath [const @ref character*] The export file path.
      /// @param[in] aPresetting [const @ref character*] The presetting file path (.xml).
      /// @par Example:
      /// @code{.cpp}
      /// btlVersion btlVersion = btlVersion::btlx_2_1;
      /// const character* outputPath = L"C:/exports/timber_project.btlx";
      /// const character* presettingFile = L"...3d/Machine/BTL/btl_settings.xml";
      ///
      /// aFactory.getMachineController()->exportBTLWithPresetting(static_cast<uint32_t>(btlVersion), outputPath, presettingFile);
      /// @endcode
      virtual void exportBTLWithPresetting(uint32_t aBTLVersion, const character* aExportFilePath, const character* aPresetting) = 0;

      /// @brief Calculates the Machine Data for BTL.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element Id.
      /// @param[in] aBTLVersion [@ref btlVersion] The BTL version.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* beamElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// btlVersion btlVersion = btlVersion::btlx_2_1;
      ///
      /// aFactory.getMachineController()->calculateBTLMachineData(beamElements, static_cast<uint32_t>(btlVersion));
      /// @endcode
      virtual void calculateBTLMachineData(ICwAPI3DElementIDList* aElementIdList, uint32_t aBTLVersion) = 0;

      /// @brief Calculates the Machine Data for Hundegger.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element Id.
      /// @param[in] aHunderggertype [@ref hundeggerMachineType] The Hundegger machine type.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* beamElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// hundeggerMachineType hundeggerType = hundeggerMachineType::k2;
      ///
      /// aFactory.getMachineController()->calculateHundeggerMachineData(beamElements, static_cast<uint32_t>(hundeggerType));
      /// @endcode
      virtual void calculateHundeggerMachineData(ICwAPI3DElementIDList* aElementIdList, uint32_t aHunderggertype) = 0;

      /// @brief Loads the Hundegger calculation set.
      /// @param[in] aHundeggertype [@ref hundeggerMachineType] The Hundegger machine type.
      /// @param[in] aFilePath [const @ref character*] The file path of the calculation set.
      virtual void loadHundeggerCalculationSet(uint32_t aHundeggertype, const character* aFilePath) = 0;

      /// @brief Gets the list of Hundegger processings for a specific element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aHundeggertype [@ref hundeggerMachineType] The Hundegger machine type.
      /// @return [@ref ICwAPI3DElementIDList*] A list of element IDs representing the processings.
      /// @par Example:
      /// @code{.cpp}
      ///     elementID element = 123456789;
      ///     hundeggerMachineType hundeggerMachineType = hundeggerMachineType::k2;
      ///     ICwAPI3DProcessingList* processings = aFactory.getMachineController()->getElementHundeggerProcessings(element, static_cast<uint32_t>(hundeggerMachineType));
      ///     printf("Found %d Hundegger processings\n", processings->count());
      /// @endcode
      virtual ICwAPI3DElementIDList* getElementHundeggerProcessings(elementID aElementId, uint32_t aHundeggertype) = 0;

      /// @brief Gets the list of BTL processings for a specific element.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aBTLVersion [@ref btlVersion] The BTL version.
      /// @return [@ref ICwAPI3DElementIDList*] A list of element IDs representing the processings.
      /// @par Example:
      /// @code{.cpp}
      ///   elementID element = 123456789;
      ///   btlVersion btlVersion = btlVersion::btlx_2_1;
      ///   ICwAPI3DBtlProcessingList* processings = aFactory.getMachineController()->getElementBtlProcessings(element, static_cast<uint32_t>(btlVersion));
      ///   printf("Found %d BTL processings\n", processings->count());
      /// @endcode
      virtual ICwAPI3DElementIDList* getElementBTLProcessings(elementID aElementId, uint32_t aBTLVersion) = 0;

      /// @brief Gets the name of a specific processing.
      /// @param[in] aReferenceElementId [@ref elementID] The reference element id.
      /// @param[in] aProcessingId [@ref elementID] The processing id.
      /// @return [@ref ICwAPI3DString*] The name of the processing.
      /// @par Example:
      /// @code{.cpp}
      ///     elementID element = 123456789;
      ///     btlVersion btlVersion = btlVersion::btlx_2_1;
      ///     ICwAPI3DElementIDList* processings = aFactory.getMachineController()->getElementBTLProcessings(element, static_cast<uint32_t>(btlVersion));
      ///     for (uint32_t i = 0; i < processings->count(); ++i)
      ///     {
      ///         elementID processing = processings->get(i);
      ///         ICwAPI3DString* name = aFactory.getMachineController()->getProcessingName(element, processing);
      ///     }
      /// @endcode
      virtual ICwAPI3DString* getProcessingName(elementID aReferenceElementId, elementID aProcessingId) = 0;

      /// @brief Gets the code of a specific processing.
      /// @param[in] aReferenceElementId [@ref elementID] The reference element id.
      /// @param[in] aProcessingId [@ref elementID] The processing id.
      /// @return [@ref ICwAPI3DString*] The code of the processing.
      /// @par Example:
      /// @code{.cpp}
      ///     elementID element = 123456789;
      ///     btlVersion btlVersion = btlVersion::btlx_2_1;
      ///     ICwAPI3DElementIDList* processings = aFactory.getMachineController()->getElementBTLProcessings(element, static_cast<uint32_t>(btlVersion));
      ///
      ///     for (uint32_t i = 0; i < processings->count(); ++i)
      ///     {
      ///         elementID processing = processings->get(i);
      ///         ICwAPI3DString* code = aFactory.getMachineController()->getProcessingCode(element, processing);
      ///     }
      /// @endcode
      virtual ICwAPI3DString* getProcessingCode(elementID aReferenceElementId, elementID aProcessingId) = 0;

      /// @brief Gets the points of a specific processing.
      /// @param[in] aReferenceElementId [@ref elementID] The reference element id.
      /// @param[in] aProcessingId [@ref elementID] The processing id.
      /// @return [@ref ICwAPI3DVertexList*] A list of vertices representing the points of the processing.
      /// @note This method only works for drillings processings. For other processings, it will return an empty list.
      /// @par Example:
      /// @code{.cpp}
      ///     elementID element = 123456789;
      ///     btlVersion btlVersion = btlVersion::btlx_2_1;
      ///     ICwAPI3DElementIDList* processings = aFactory.getMachineController()->getElementBTLProcessings(element, static_cast<uint32_t>(btlVersion));
      ///
      ///     for (uint32_t i = 0; i < processings->count(); ++i)
      ///     {
      ///         elementID processing = processings->get(i);
      ///         ICwAPI3DVertexList* points = aFactory.getMachineController()->getProcessingPoints(element, processing);
      ///     }
      /// @endcode
      virtual ICwAPI3DVertexList* getProcessingPoints(elementID aReferenceElementId, elementID aProcessingId) = 0;

      /// @brief Gets the BTL parameter set of a specific processing.
      /// @param[in] aReferenceElementId [@ref elementID] The reference element id.
      /// @param[in] aProcessingId [@ref elementID] The processing id.
      /// @return [@ref ICwAPI3DStringList*] A list of strings representing the BTL parameter set of the processing.
      /// @par Example:
      /// @code{.cpp}
      ///     elementID element = 123456789;
      ///     btlVersion btlVersion = btlVersion::btlx_2_1;
      ///     ICwAPI3DElementIDList* processings = aFactory.getMachineController()->getElementBTLProcessings(element, static_cast<uint32_t>(btlVersion));
      ///
      ///     for (uint32_t i = 0; i < processings->count(); ++i)
      ///     {
      ///         elementID processing = processings->get(i);
      ///         ICwAPI3DStringList* parameters = aFactory.getMachineController()->getProcessingBTLParameterset(element, processing);
      ///     }
      /// @endcode
      virtual ICwAPI3DStringList* getProcessingBTLParameterset(elementID aReferenceElementId, elementID aProcessingId) = 0;
      
      /// @brief Exports a Hundegger file silently.
      /// @param[in] aHundeggertype [@ref hundeggerMachineType] The Hundegger machine type.
      /// @param[in] aExportFilePath [const @ref character*] The export file path.
      /// @par Example:
      /// @code{.cpp}
      /// hundeggerMachineType hundeggerType = hundeggerMachineType::k2;
      /// const character* outputPath = L"C:/exports/hundegger_project.k2";
      ///
      /// aFactory.getMachineController()->exportHundeggerWithFilePathSilent(static_cast<uint32_t>(hundeggerType), outputPath);
      /// @endcode
      virtual void exportHundeggerWithFilePathSilent(uint32_t aHundeggertype, const character* aExportFilePath) = 0;

      /// @brief Exports a Hundegger file silently.
      /// @param[in] aHundeggertype [@ref hundeggerMachineType] The Hundegger machine type.
      /// @param[in] aExportFilePath [const @ref character*] The export file path.
      /// @param[in] aPresetting [const @ref character*] The presetting file path (.xml).
      /// @par Example:
      /// @code{.cpp}
      /// hundeggerMachineType hundeggerType = hundeggerMachineType::k2;
      /// const character* outputPath = L"C:/exports/hundegger_project.k2";
      /// const character* presettingFile = L"...3d/Machine/Hundegger/K2/hundegger_settings.xml";
      ///
      /// aFactory.getMachineController()->exportHundeggerWithFilePathAndPresettingSilent(static_cast<uint32_t>(hundeggerType), outputPath, presettingFile);
      /// @endcode
      virtual void exportHundeggerWithFilePathAndPresettingSilent(uint32_t aHundeggertype, const character* aExportFilePath, const character* aPresetting) = 0;
    };
  }
}
