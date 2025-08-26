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

#include "ICwAPI3DDisplayAttribute.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DImport3dcOptions.h"
#include "ICwAPI3DRhinoOptions.h"
#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DFileController
    class ICwAPI3DFileController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Exports an STL file.
      /// @param[in] aElementIDList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.stl";
      ///
      /// aFactory.getFileController()->exportSTLFile(selectedElements, outputPath);
      /// @endcode
      virtual void exportSTLFile(ICwAPI3DElementIDList* aElementIDList, const character* aFilePath) = 0;

      /// @brief Imports a STEP file.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      /// @param[in] aScaleFactor [double] The file scale factor.
      /// @return [@ref ICwAPI3DElementIDList*] The imported list of element id.
      virtual ICwAPI3DElementIDList* importStepFile(const character* aFilePath, double aScaleFactor) = 0;

      /// @brief Imports a STEP file with message option.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      /// @param[in] aScaleFactor [double] The file scale factor.
      /// @param[in] aHideMessage [bool] Hide message.
      /// @return [@ref ICwAPI3DElementIDList*] The imported list of element id.
      virtual ICwAPI3DElementIDList* importStepFileWithMessageOption(const character* aFilePath, double aScaleFactor, bool aHideMessage) = 0;

      /// @brief Exports a WebGL file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @return [bool] True on successful export, false otherwise.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.html";
      ///
      /// bool success = aFactory.getFileController()->exportWebGL(selectedElements, outputPath);
      /// if (success) {
      ///     printf("WebGL export completed successfully\n");
      /// }
      /// @endcode
      virtual bool exportWebGl(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath) = 0;

      /// @brief Exports a 3D file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @return [bool] True on successful export, false otherwise.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.3d";
      /// bool success = aFactory.getFileController()->export3DFile(selectedElements, outputPath);
      /// if (success) {
      ///     printf("3D file export completed successfully\n");
      /// }
      /// @endcode
      virtual bool export3dFile(ICwAPI3DElementIDList* aElementIdList, const CwAPI3D::character* aFilePath) = 0;

      /// @brief Imports an SAT file
      /// @param[in] aFilePath [const @ref character*] The input file path.
      /// @param[in] aScaleFactor [double] The scale factor.
      /// @param[in] aBinary [bool] Is the import file binary.
      /// @return [@ref ICwAPI3DElementIDList*] The imported list of element id.
      virtual ICwAPI3DElementIDList* importSATFile(const character* aFilePath, double aScaleFactor, bool aBinary) = 0;

      /// @brief Imports a 3DC file.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      /// @return [@ref ICwAPI3DElementIDList*] The imported list of element id.
      virtual ICwAPI3DElementIDList* import3dcFile(const character* aFilePath) = 0;

      /// @brief Imports a Rhino file.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      /// @param[in] aWithoutDialog [bool] Import without dialog?
      /// @return [@ref ICwAPI3DElementIDList*] The imported list of element id.
      virtual ICwAPI3DElementIDList* importRhinoFile(const character* aFilePath, bool aWithoutDialog) = 0;

      /// @brief Exports a STEP file.
      /// @param[in] aElementList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @param[in] aScaleFactor [double] The file scale factor.
      /// @param[in] aVersion The file export version :
      ///                     - 214 = STEP AP214
      ///                     - 203 = STEP AP203 (default value)
      /// @param[in] aTextMode [bool] Use text mode. PARAMETER UNUSED
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.stp";
      /// double scaleFactor = 1000.0;
      /// int version = 214;       // STEP version
      /// bool textMode = false;
      ///
      /// aFactory.getFileController()->exportSTEPFile(selectedElements, outputPath, scaleFactor, version, textMode);
      /// @endcode
      virtual void exportStepFile(ICwAPI3DElementIDList* aElementList, const character* aFilePath, double aScaleFactor, int32_t aVersion, bool aTextMode) = 0;

      /// @brief Imports a 3DZ file.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      virtual void import3DZFile(const character* aFilePath) = 0;

      /// @brief Exports a OBJ file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.obj";
      ///
      /// aFactory.getFileController()->exportOBJFile(selectedElements, outputPath);
      /// @endcode
      virtual void exportOBJFile(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath) = 0;

      /// @brief Imports a SAT File without messages.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      /// @param[in] aScaleFactor [double] The scale factor.
      /// @param[in] aBinary [bool] Is the import file binary.
      /// @return [@ref ICwAPI3DElementIDList*] The imported list of element id.
      virtual ICwAPI3DElementIDList* importSATFileSilently(const character* aFilePath, double aScaleFactor, bool aBinary) = 0;

      /// @brief Exports a FBX file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @param[in] aFBXFormat [uint32_t] The FBX format. Available values :
      ///                                     - 1 = "FBX binary(*.fbx)";
      ///                                     - 2 = "FBX ascii(*.fbx)";
      ///                                     - 3 = "FBX encrypted(*.fbx)";
      ///                                     - 4 = "FBX 6.0 binary(*.fbx)";
      ///                                     - 5 = "FBX 6.0 ascii(*.fbx)";
      ///                                     - 6 = "FBX 6.0 encrypted(*.fbx)";
      ///
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.fbx";
      ///
      /// // FBX binary format
      /// int fbxFormat = 1;
      /// aFactory.getFileController()->exportFBXFile(selectedElements, outputPath, fbxFormat);
      ///
      /// // Export as ASCII format
      /// fbxFormat = 2; // FBX ASCII format
      /// aFactory.getFileController()->exportFBXFile(selectedElements, outputPath, fbxFormat);
      /// @endcode
      virtual void exportFBXFile(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath, uint32_t aFBXFormat) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Imports a 3DC file with glide.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      /// @return [@ref ICwAPI3DElementIDList*] The imported list of element id.
      virtual ICwAPI3DElementIDList* import3dcFileWithGlide(const character* aFilePath) = 0;

      /// @brief Imports a BTL file.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      virtual void importBTLFile(const character* aFilePath) = 0;

      /// @brief Exports a 3D file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.3dc";
      /// aFactory.getFileController()->export3DCFile(selectedElements, outputPath);
      /// @endcode
      virtual void export3DCFile(ICwAPI3DElementIDList* aElementIdList, const CwAPI3D::character* aFilePath) = 0;

      /// @brief Imports a BTL file for nesting.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      virtual void importBTLFileForNesting(const character* aFilePath) = 0;

      /// @brief Exports a BTL file for nesting.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @par Example:
      /// @code{.cpp}
      /// const character* outputPath = L"C:/exports/nesting_project.btl";
      /// aFactory.getFileController()->exportBTLFileForNesting(outputPath);
      /// @endcode
      virtual void exportBTLFileForNesting(const character* aFilePath) = 0;

      /// @brief Exports a 3dm rhino file.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @param[in] aVersion [int] The rhino version :
      ///                           - 5 = V5.0,
      ///                           - 6 = V6.0,
      ///                           - 7 = V7.0,
      ///                           - 8 = V8.0
      /// @param[in] aUseDefaultAssignment [bool] True if default assignment is used. False if no attributes are exported.
      /// @param[in] aWriteStandardAttributes [bool] True if exported with standard attribute, false otherwise.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.3dm";
      /// int version = 8;                       // Rhino version
      /// bool useDefaultAssignment = true;     // Use default Rhino layer assignment
      /// bool writeStandardAttributes = false; // Do not write standard attributes
      ///
      /// aFactory.getFileController()->exportRhinoFile(selectedElements, outputPath, version, useDefaultAssignment, writeStandardAttributes);
      /// @endcode
      virtual void exportRhinoFile(ICwAPI3DElementIDList* aElementIdList, const CwAPI3D::character* aFilePath, int aVersion, bool aUseDefaultAssignment, bool aWriteStandardAttributes) = 0;

      /// @brief Imports a BXF file.
      /// @param[in] aFilePath [const @ref character*] The import file path.
      /// @param[in] aInsertPosition [@ref vector3D] The position where the imported elements will be inserted.
      /// @return [@ref ICwAPI3DElementIDList*] The list of IDs of the imported elements.
      virtual ICwAPI3DElementIDList* importBXFFile(const CwAPI3D::character* aFilePath, CwAPI3D::vector3D aInsertPosition) = 0;

      /// @brief Gets the path of the Blum export.
      /// @return [@ref ICwAPI3DString*] The path of the Blum export.
      virtual ICwAPI3DString* getBlumExportPath() = 0;

      /// @brief Sets the path of the Blum export.
      /// @param[in] aPath [const @ref character*] The new path for the Blum export.
      virtual void setBlumExportPath(const CwAPI3D::character* aPath) = 0;

      /// @brief Sets the webGL Export hierachy
      /// @deprecated Will be deleted in the future.
      virtual void setWebGLHierarchy(uint32_t aStage, ICwAPI3DDisplayAttribute* aAttribute) = 0;

      /// @brief Exports a SAT File.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @param[in] aScaleFactor [double] The file scale factor.
      /// @param[in] aBinary [bool] Whether to write the SAT file in binary or a human readable format.
      /// @param[in] aVersion [int32_t] The ACIS version to use :
      ///                                 - 3400 = v34.0
      ///                                 - 3200 = v32.0
      ///                                 - 2100 = v21.0
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.sat";
      /// double scaleFactor = 1.0;
      /// bool binaryFormat = true;
      /// int version = 25000; // SAT version
      ///
      /// aFactory.getFileController()->exportSATFile(selectedElements, outputPath, scaleFactor, binaryFormat, version);
      /// @endcode
      virtual void exportSATFile(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath, double aScaleFactor, bool aBinary, int32_t aVersion) = 0;

      /// @brief Exports a GLB File.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.glb";
      ///
      /// aFactory.getFileController()->exportGLBFile(selectedElements, outputPath);
      /// @endcode
      virtual void exportGLBFile(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath) = 0;

      /// @brief Imports a variant (.val-File).
      /// @param[in] aFilePath [const @ref character*] The import file path.
      /// @param[in] aInsertPosition [@ref vector3D] The position where the imported variant elements will be inserted.
      /// @return [@ref ICwAPI3DElementIDList*] The imported list of element id.
      virtual ICwAPI3DElementIDList* importVariantFile(const character* aFilePath, CwAPI3D::vector3D aInsertPosition) = 0;


      /// @brief Imports a light element from a file.
      /// @param[in] aFilePath [const @ref character*] The import file path.
      /// @param[in] aInsertPosition [@ref vector3D] The position where the imported light element will be inserted.
      /// @return [@ref elementID] The ID of the imported light element.
      virtual elementID importElementLight(const character* aFilePath, CwAPI3D::vector3D aInsertPosition) = 0;

      /// @brief Exports elements to a rhino 3dm file based on the export options.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @param[in] aVersion [int] The rhino version :
      ///                           - 5 = V5.0,
      ///                           - 6 = V6.0,
      ///                           - 7 = V7.0,
      ///                           - 8 = V8.0
      /// @param[in] aUseDefaultAssignment [bool] True if default assignment is used. False if no attributes are exported.
      /// @param[in] aWriteStandardAttributes [bool] True if exported with standard attribute, false otherwise.
      /// @param[in] aRhinoOptions [@ref ICwAPI3DRhinoOptions*] The Rhino export option.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model.3dm";
      /// int version = 8;                       // Rhino version
      /// bool useDefaultAssignment = true;     // Use default Rhino layer assignment
      /// bool writeStandardAttributes = false; // Do not write standard attributes
      /// ICwAPI3DRhinoExportOptions rhinoOptions; // Use default options
      ///
      /// aFactory.getFileController()->exportRhinoFileWithOptions(selectedElements, outputPath, version, useDefaultAssignment, writeStandardAttributes, &rhinoOptions);
      /// @endcode
      virtual void exportRhinoFileWithOptions(ICwAPI3DElementIDList* aElementIdList, const CwAPI3D::character* aFilePath, int aVersion, bool aUseDefaultAssignment, bool aWriteStandardAttributes, ICwAPI3DRhinoOptions* aRhinoOptions) = 0;

      /// @brief Imports a 3d or a 3dc file depending on the import options.
      /// @param[in] aFilePath [const @ref character*] The input file path.
      /// @param[in] aImport3dcOptions [@ref ICwAPI3DImport3dcOptions*] The 3dc import options.
      /// @return [@ref ICwAPI3DElementIDList*] The imported list of element id.
      virtual ICwAPI3DElementIDList* import3dcFileWithOptions(const character* aFilePath, ICwAPI3DImport3dcOptions* aImport3dcOptions) = 0;

      /// @brief Loads a preset file for the WebGl export.
      /// @param[in] aFilePath [const @ref character*] The preset file path.
      virtual void loadWebGlPresetFile(const character* aFilePath) = 0;

      /// @brief Exports a STEP file with extruded drillings.
      /// @param[in] aElementList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @param[in] aScaleFactor [double] The file scale factor.
      /// @param[in] aVersion The file export version :
      ///                     - 214 = STEP AP214
      ///                     - 203 = STEP AP203 (default value)
      /// @param[in] aTextMode [bool] Use text mode. PARAMETER UNUSED
      /// @param[in] aImperialUnits [bool] Use imperial units.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// const character* outputPath = L"C:/exports/model_with_drillings.step";
      /// double scaleFactor = 1.0;
      /// int version = 214;         // STEP version
      /// bool textMode = false;
      /// bool imperialUnits = false;
      ///
      /// aFactory.getFileController()->exportSTEPFileExtrudeDrillings(selectedElements, outputPath, scaleFactor, version, textMode, imperialUnits);
      /// @endcode
      virtual void exportStepFileExtrudeDrillings(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath, double aScaleFactor, int32_t aVersion, bool aTextMode, bool aImperialUnits) = 0;

      /// @brief Exports a SAT File with extruded drillings (cut drilling holes into bodies).
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @param[in] aScaleFactor [double] The file scale factor.
      /// @param[in] aBinary [bool] Whether to write the SAT file in binary or a human readable format.
      /// @param[in] aVersion [int32_t] The ACIS version to use :
      ///                                 - 3400 = v34.0
      ///                                 - 3200 = v32.0
      ///                                 - 2100 = v21.0
      virtual void exportSATFileCutDrillings(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath, double aScaleFactor, bool aBinary, int32_t aVersion) = 0;

      /// @brief Exports the elements to BIMteam and creates a share link.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The list of element id to export.
      /// @return [@ref bimTeamUploadResult] a result object with a result code and a share link. If the code is not ok (0), the share link string is empty.
      virtual bimTeamUploadResult uploadToBimTeamAndCreateShareLink(Interfaces::ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Exports visible elements in the scene to a DXF file.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @param[in] aDxfLayerFormatType [@ref DxfLayerFormatType] The format type of how to organize layers.
      /// @param[in] aDxfExportVersion [@ref DxfExportVersion] The dxf version to use for the export.
      /// @return [bool] True on successful export, false otherwise.
      virtual bool exportDxfFile(const character* aFilePath, DxfLayerFormatType aDxfLayerFormatType, DxfExportVersion aDxfExportVersion) = 0;

      /// @brief Exports active elements in the scene to a DSTV (.stp) file.
      /// @param[in] aFilePath [const @ref character*] The output file path.
      /// @return [bool] True on successful export, false otherwise.
      virtual bool exportDstvFile(const CwAPI3D::character* aFilePath) = 0;
    };
  }
}
