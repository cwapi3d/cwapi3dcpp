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
    /// \brief
    class ICwAPI3DFileController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Exports an STL file
      /// @param aElementIDList element ID list
      /// @param aFilePath file path
      virtual void exportSTLFile(ICwAPI3DElementIDList* aElementIDList, const character* aFilePath) = 0;

      /// @brief Imports a STEP file
      /// @param aFilePath file path
      /// @param aScaleFactor file scale factor
      /// @return imported element ID list
      virtual ICwAPI3DElementIDList* importStepFile(const character* aFilePath, double aScaleFactor) = 0;

      /// @brief Imports a STEP file
      /// @param aFilePath file path
      /// @param aScaleFactor file scale factor
      /// @param aHideMessage hide message
      /// @return imported element ID list
      virtual ICwAPI3DElementIDList* importStepFileWithMessageOption(const character* aFilePath, double aScaleFactor, bool aHideMessage) = 0;

      /// @brief Exports a WebGL file
      /// @param aElementIdList element ID list
      /// @param aFilePath file path
      /// @return did operation succeed
      virtual bool exportWebGl(ICwAPI3DElementIDList* aElementIdList, const character* aFilePath) = 0;

      /// @brief Exports a 3D file
      /// @param aElementIdList element ID list
      /// @param aFilePath file path
      /// @return did operation succeed
      virtual bool export3dFile(ICwAPI3DElementIDList* aElementIdList, const CwAPI3D::character* aFilePath) = 0;

      /// @brief Imports an SAT file
      /// @param aFilePath file path
      /// @param aScaleFactor file scale factor
      /// @param aBinary use binary mode
      /// @return imported element ID list
      virtual ICwAPI3DElementIDList* importSATFile(const character* aFilePath, double aScaleFactor, bool aBinary) = 0;

      /// @brief Imports a 3DC file
      /// @param aFilePath file path
      /// @return imported element ID list
      virtual ICwAPI3DElementIDList* import3dcFile(const character* aFilePath) = 0;

      /// @brief Imports a Rhino file
      /// @param aFilePath file path
      /// @param aWithoutDialog import without dialog
      /// @return imported element ID list
      virtual ICwAPI3DElementIDList* importRhinoFile(const character* aFilePath, bool aWithoutDialog) = 0;

      /// @brief Exports a STEP file
      /// @param aElementList element ID list
      /// @param aFilePath file path
      /// @param aScaleFactor file scale factor
      /// @param aVersion file version
      /// @param aTextMode use text mode
      virtual void exportStepFile(ICwAPI3DElementIDList* aElementList, const character* aFilePath, double aScaleFactor, int32_t aVersion, bool aTextMode) = 0;

      /// @brief Imports a 3DZ file
      /// @param aFilePath file path
      virtual void import3DZFile(const character* aFilePath) = 0;

      /// @brief Exports a OBJ file
      /// @param aElements element ID list
      /// @param aFilePath file path
      virtual void exportOBJFile(ICwAPI3DElementIDList* aElements, const character* aFilePath) = 0;

      /// @brief Imports a SAT File without messages
      /// @param aFilePath file path
      /// @param aScaleFactor
      /// @param aBinary
      virtual ICwAPI3DElementIDList* importSATFileSilently(const character* aFilePath, double aScaleFactor, bool aBinary) = 0;

      /// @brief Exports a FBX file
      /// @param aElements element ID list
      /// @param aFilePath file path
      /// @param aFBXFormat 1 = "FBX binary(*.fbx) ; 2 = "FBX ascii(*.fbx)" ; 3 = "FBX encrypted(*.fbx)" ; 4 = "FBX 6.0 binary(*.fbx)" ; 5 = "FBX 6.0 ascii(*.fbx)" ; 6 = "FBX 6.0 encrypted(*.fbx)";
      virtual void exportFBXFile(ICwAPI3DElementIDList* aElements, const character* aFilePath, uint32_t aFBXFormat) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Imports a 3DC file with glide
      /// @param aFilePath file path
      /// @return imported element ID list
      virtual ICwAPI3DElementIDList* import3dcFileWithGlide(const character* aFilePath) = 0;

      /// @brief Imports a BTL file
      /// @param aFilePath file path
      virtual void importBTLFile(const character* aFilePath) = 0;

      /// @brief Exports a 3D file
      /// @param aElementIdList element ID list
      /// @param aFilePath file path
      virtual void export3DCFile(ICwAPI3DElementIDList* aElementIdList, const CwAPI3D::character* aFilePath) = 0;

      /// @brief Imports a BTL file for nesting
      /// @param aFilePath file path
      virtual void importBTLFileForNesting(const character* aFilePath) = 0;

      /// @brief Exports a BTL file for nesting
      /// @param aFilePath file path
      virtual void exportBTLFileForNesting(const character* aFilePath) = 0;

      /// @brief Exports a 3dm rhino file
      /// @param aElementIdList
      /// @param aFilePath file path
      /// @param aVersion Rhino V5.0 = 5, V6.0 = 6, V7.0 = 7, V8.0 = 8
      /// @param aUseDefaultAssignment true: default assignment is used; false: no attributes are exported
      /// @param aWriteStandardAttributes see checkbox in assignment dialog
      virtual void exportRhinoFile(ICwAPI3DElementIDList* aElementIdList, const CwAPI3D::character* aFilePath, int aVersion, bool aUseDefaultAssignment, bool aWriteStandardAttributes) = 0;

      /// @brief Imports a BXF file.
      /// @param aFilePath The path of the file to import.
      /// @param aInsertPosition The position where the imported elements will be inserted.
      /// @return The list of IDs of the imported elements.
      virtual ICwAPI3DElementIDList* importBXFFile(const CwAPI3D::character* aFilePath, CwAPI3D::vector3D aInsertPosition) = 0;

      /// @brief Gets the path of the Blum export.
      /// @return The path of the Blum export.
      virtual ICwAPI3DString* getBlumExportPath() = 0;

      /// @brief Sets the path of the Blum export.
      /// @param aPath The new path for the Blum export.
      virtual void setBlumExportPath(const CwAPI3D::character* aPath) = 0;

      /// @brief sets the webGL Export hierachie
      /// @param aStage
      /// @param aAttribute
      virtual void setWebGLHierarchy(uint32_t aStage, ICwAPI3DDisplayAttribute* aAttribute) = 0;

      /// @brief exports a SAT File
      /// @param aElements
      /// @param aFilePath
      /// @param aScaleFactor
      /// @param aBinary
      /// @param aVersion
      virtual void exportSATFile(ICwAPI3DElementIDList* aElements, const character* aFilePath, double aScaleFactor, bool aBinary, int32_t aVersion) = 0;

      /// @brief exports a GLB File
      /// @param aElements
      /// @param aFilePath
      virtual void exportGLBFile(ICwAPI3DElementIDList* aElements, const character* aFilePath) = 0;

      /// @brief imports a variant by .val-File
      /// @param aFilePath
      /// @param aInsertPosition
      /// @return imported element ID list
      virtual ICwAPI3DElementIDList* importVariantFile(const character* aFilePath, CwAPI3D::vector3D aInsertPosition) = 0;


      /// @brief Imports a light element from a file.
      /// @param aFilePath The path of the file to import.
      /// @param aInsertPosition The position where the imported light element will be inserted.
      /// @return The ID of the imported light element.
      virtual elementID importElementLight(const character* aFilePath, CwAPI3D::vector3D aInsertPosition) = 0;

      /// @brief exports elements to a rhino 3dm file based on the export options
      /// @param aElementIdList
      /// @param aFilePath
      /// @param aVersion Rhino V5.0 = 5, V6.0 = 6, V7.0 = 7, V8.0 = 8
      /// @param aUseDefaultAssignment true: default assignment is used; false: no attributes are exported
      /// @param aWriteStandardAttributes see checkbox in assignment dialog
      /// @param aRhinoOptions
      virtual void exportRhinoFileWithOptions(ICwAPI3DElementIDList* aElementIdList, const CwAPI3D::character* aFilePath, int aVersion, bool aUseDefaultAssignment, bool aWriteStandardAttributes, ICwAPI3DRhinoOptions* aRhinoOptions) = 0;

      /// @brief imports a 3d or a 3dc file depending on the import options
      /// @param aFilePath
      /// @param aImport3dcOptions
      /// @return imported element ID list
      virtual ICwAPI3DElementIDList* import3dcFileWithOptions(const character* aFilePath, ICwAPI3DImport3dcOptions* aImport3dcOptions) = 0;

      /// @brief loads a preset file for the WebGl export
      /// @param aFilePath
      virtual void loadWebGlPresetFile(const character* aFilePath) = 0;

      /// @brief Exports a STEP file with extruded drillings
      /// @param aElementList element ID list
      /// @param aFilePath file path
      /// @param aScaleFactor file scale factor
      /// @param aVersion file version
      /// @param aTextMode use text mode
      /// @param aImperialUnits use imperial units
      virtual void exportStepFileExtrudeDrillings(ICwAPI3DElementIDList* aElements, const character* aFilePath, double aScaleFactor, int32_t aVersion, bool aTextMode, bool aImperialUnits) = 0;
    };
  }
}
