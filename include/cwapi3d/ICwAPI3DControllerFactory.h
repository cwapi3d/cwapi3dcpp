// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "ICwAPI3DActivationState.h"
#include "ICwAPI3DAttributeController.h"
#include "ICwAPI3DAttributeDisplaySettings.h"
#include "ICwAPI3DBimController.h"
#include "ICwAPI3DCameraData.h"
#include "ICwAPI3DConnectorAxisController.h"
#include "ICwAPI3DCoordinateSystemData.h"
#include "ICwAPI3DDimensionController.h"
#include "ICwAPI3DDisplayAttribute.h"
#include "ICwAPI3DEdgeList.h"
#include "ICwAPI3DElementController.h"
#include "ICwAPI3DElementFilter.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DElementIDListMap.h"
#include "ICwAPI3DElementMapQuery.h"
#include "ICwAPI3DElementModuleProperties.h"
#include "ICwAPI3DElementType.h"
#include "ICwAPI3DEndtypeController.h"
#include "ICwAPI3DExtendedSettings.h"
#include "ICwAPI3DFacetList.h"
#include "ICwAPI3DFileController.h"
#include "ICwAPI3DGeometryController.h"
#include "ICwAPI3DGridController.h"
#include "ICwAPI3DIfc2x3ElementType.h"
#include "ICwAPI3DIfcOptions.h"
#include "ICwAPI3DIfcPredefinedType.h"
#include "ICwAPI3DImport3dcOptions.h"
#include "ICwAPI3DLayerSettings.h"
#include "ICwAPI3DListController.h"
#include "ICwAPI3DMachineController.h"
#include "ICwAPI3DMaterialController.h"
#include "ICwAPI3DMaterialIDList.h"
#include "ICwAPI3DMenuController.h"
#include "ICwAPI3DMultiLayerCoverController.h"
#include "ICwAPI3DPolygonList.h"
#include "ICwAPI3DProcessType.h"
#include "ICwAPI3DRhinoOptions.h"
#include "ICwAPI3DRoofController.h"
#include "ICwAPI3DSceneController.h"
#include "ICwAPI3DShopDrawingController.h"
#include "ICwAPI3DStringList.h"
#include "ICwAPI3DUtilityController.h"
#include "ICwAPI3DVertexList.h"
#include "ICwAPI3DVisibilityState.h"
#include "ICwAPI3DVisualizationController.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DControllerFactory
    {
    public:
      /// @brief Gets the attribute controller
      /// @return attribute controller
      virtual ICwAPI3DAttributeController* getAttributeController() = 0;

      /// @brief Gets the connector axis controller
      /// @return connector axis controller
      virtual ICwAPI3DConnectorAxisController* getConnectorAxisController() = 0;

      /// @brief Gets the element controller
      /// @return element controller
      virtual ICwAPI3DElementController* getElementController() = 0;

      /// @brief Gets the file controller
      /// @return file controller
      virtual ICwAPI3DFileController* getFileController() = 0;

      /// @brief Gets the geometry controller
      /// @return geometry controller
      virtual ICwAPI3DGeometryController* getGeometryController() = 0;

      /// @brief Gets the list controller
      /// @return list controller
      virtual ICwAPI3DListController* getListController() = 0;

      /// @brief Gets the machine controller
      /// @return machine controller
      virtual ICwAPI3DMachineController* getMachineController() = 0;

      /// @brief Gets the material controller
      /// @return material controller
      virtual ICwAPI3DMaterialController* getMaterialController() = 0;

      /// @brief Gets the menu controller
      /// @return menu controller
      virtual ICwAPI3DMenuController* getMenuController() = 0;

      /// @brief Gets the scene controller
      /// @return scene controller
      virtual ICwAPI3DSceneController* getSceneController() = 0;

      /// @brief Gets the shop drawing controller
      /// @return shop drawing controller
      virtual ICwAPI3DShopDrawingController* getShopDrawingController() = 0;

      /// @brief Gets the utility controller
      /// @return utility controller
      virtual ICwAPI3DUtilityController* getUtilityController() = 0;

      /// @brief Gets the visualization controller
      /// @return visualization controller
      virtual ICwAPI3DVisualizationController* getVisualizationController() = 0;

      /// @brief Creates an empty element ID list
      /// @return element ID list
      virtual ICwAPI3DElementIDList* createEmptyElementIDList() = 0;

      /// @brief Creates an empty vertex list
      /// @return vertex list
      virtual ICwAPI3DVertexList* createEmptyVertexList() = 0;

      /// @brief Creates an element filter
      /// @return element filter
      virtual ICwAPI3DElementFilter* createElementFilter() = 0;

      /// @brief Creates an element map query
      /// @return element map query
      virtual ICwAPI3DElementMapQuery* createElementMapQuery() = 0;

      /// @brief Gets the end-type controller
      /// @return end-type controller
      virtual ICwAPI3DEndtypeController* getEndtypeController() = 0;

      /// @brief Creates an element ID list from an existing element ID
      /// @param aID
      /// @return element ID list
      virtual ICwAPI3DElementIDList* createElementIDListFromElement(elementID aID) = 0;

      /// @brief Creates an empty element module properties
      /// @return element module properties
      virtual ICwAPI3DElementModuleProperties* createEmptyElementModuleProperties() = 0;

      /// @brief Gets the roof controller
      /// @return roof controller
      virtual ICwAPI3DRoofController* getRoofController() = 0;

      /// @brief Gets BimController
      /// @return bim controller
      virtual ICwAPI3DBimController* getBimController() = 0;

      /// @brief Creates an empty layer settings
      /// @return layer settings
      virtual ICwAPI3DLayerSettings* createEmptyLayerSettings() = 0;

      /// @brief Creates an empty display attribute
      /// @return display attribute
      virtual ICwAPI3DDisplayAttribute* createEmptyDisplayAttribute() = 0;

      /// @brief Creates an empty string list
      /// @return string list
      virtual ICwAPI3DStringList* createEmptyStringList() = 0;

      /// @brief Creates an empty polygon list
      /// @return polygon list
      virtual ICwAPI3DPolygonList* createEmptyPolygonList() = 0;

      /// @brief Gets dimension controller
      /// @return dimension controller
      virtual ICwAPI3DDimensionController* getDimensionController() = 0;

      /// @brief Gets grid controller
      /// @return grid controller
      virtual ICwAPI3DGridController* getGridController() = 0;

      /// @brief Creates an empty extended settings
      /// @return extended settings
      virtual ICwAPI3DExtendedSettings* createEmptyExtendedSettings() = 0;

      /// @brief Creates a rhino options
      /// @return rhino options
      virtual ICwAPI3DRhinoOptions* createRhinoOptions() = 0;

      /// @brief Creates an ifc options
      /// @return ifc options
      virtual ICwAPI3DIfcOptions* createIfcOptions() = 0;

      /// @brief Creates a text object options
      /// @return text object options
      virtual ICwAPI3DTextObjectOptions* createTextObjectOptions() = 0;

      /// @brief Gets the camera data
      /// @return camera data
      virtual ICwAPI3DCameraData* createCameraData() = 0;

      /// @brief Gets the MultiLayerCover controller
      /// @return multi layer cover controller
      virtual ICwAPI3DMultiLayerCoverController* getMultiLayerCoverController() = 0;

      /// @brief Creates the ICwAPI3DImport3dcOptions class which is used for 3d/3dc file import options
      /// @return import 3dc options
      virtual ICwAPI3DImport3dcOptions* createImport3dcOptions() = 0;

      /// @brief Creates an empty endtypeID list
      /// @return endtypeID list
      virtual ICwAPI3DEndtypeIDList* createEmptyEndtypeIDList() = 0;

      /// @brief Creates a None ElementType
      /// @return element type
      virtual ICwAPI3DElementType* createElementType() = 0;

      /// @brief Creates an empty ActivationState
      /// @return activation state
      virtual ICwAPI3DActivationState* createEmptyActivationState() = 0;

      /// @brief Creates an empty AttributeDisplaySettings
      /// @return attribute display settings
      virtual ICwAPI3DAttributeDisplaySettings* createEmptyAttributeDisplaySettings() = 0;

      /// @brief Creates an empty CoordinateSystemData
      /// @return coordinate system data
      virtual ICwAPI3DCoordinateSystemData* createEmptyCoordinateSystemData() = 0;

      /// @brief Creates an empty EdgeList
      /// @return edge list
      virtual ICwAPI3DEdgeList* createEmptyEdgeList() = 0;

      /// @brief Creates an empty FacetList
      /// @return facet list
      virtual ICwAPI3DFacetList* createEmptyFacetList() = 0;

      /// @brief Creates an empty Ifc2x3ElementType
      /// @return ifc2x3 element type
      virtual ICwAPI3DIfc2x3ElementType* createEmptyIfc2x3ElementType() = 0;

      /// @brief Creates an empty IfcPredefinedType
      /// @return ifc predefined type
      virtual ICwAPI3DIfcPredefinedType* createEmptyIfcPredefinedType() = 0;

      /// @brief Creates an empty MaterialIDList
      /// @return material id list
      virtual ICwAPI3DMaterialIDList* createEmptyMaterialIDList() = 0;

      /// @brief Creates an empty ProcessType
      /// @return process type
      virtual ICwAPI3DProcessType* createEmptyProcessType() = 0;

      /// @brief Creates an empty VisibilityState
      /// @return visibility state
      virtual ICwAPI3DVisibilityState* createEmptyVisibilityState() = 0;
    };
  }
}
