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

#include "CwAPI3DTypes.h"
#include "ICwAPI3DControllerFactory.h"

namespace CwAPI3D
{
  /**
   * @brief abstraction of current controller factory for convenience purposes
   *
   */
  using ControllerFactory = Interfaces::ICwAPI3DControllerFactory;

  /**
   * @brief abstraction on current attribute controller
   *
   */
  using AttributeController = Interfaces::ICwAPI3DAttributeController;

  /**
   * @brief abstraction of current connector axis controller
   */
  using ConnectorAxisController = Interfaces::ICwAPI3DConnectorAxisController;

  /**
   * @brief abstraction of current element controller
   */
  using ElementController = Interfaces::ICwAPI3DElementController;

  /**
  * @brief abstraction of current endtype controller
  */
  using EndtypeController = Interfaces::ICwAPI3DEndtypeController;

  /**
   * @brief abstraction of current file controller
   */
  using FileController = Interfaces::ICwAPI3DFileController;

  /**
   * @brief abstraction of current geometry controller
   */
  using GeometryController = Interfaces::ICwAPI3DGeometryController;

  /**
   * @brief abstraction of current list controller for convenience purposes
   */
  using ListController = Interfaces::ICwAPI3DListController;

  /**
   * @brief abstraction of current machine controller for convenience purposes
   */
  using MachineController = Interfaces::ICwAPI3DMachineController;

  /**
   * @brief abstraction of current material controller for convenience purposes
   */
  using MaterialController = Interfaces::ICwAPI3DMaterialController;

  /**
   * @brief abstraction of current menu controller for convenience purposes
   */
  using MenuController = Interfaces::ICwAPI3DMenuController;

  /**
   * @brief abstraction of current scene controller for convenience purposes
   */
  using SceneController = Interfaces::ICwAPI3DSceneController;

  /**
   * @brief abstraction of current shop drawing controller for convenience purposes
   */
  using ShopDrawingController = Interfaces::ICwAPI3DShopDrawingController;

  /**
   * @brief abstraction of current utility controller for convenience purposes
   */
  using UtilityController = Interfaces::ICwAPI3DUtilityController;

  /**
   * @brief abstraction of current visualization controller for convenience purposes
   */
  using VisualizationController = Interfaces::ICwAPI3DVisualizationController;

  /**
   * @brief abstraction of current activation state helper for convenience purposes
   */
  using ActivationState = Interfaces::ICwAPI3DActivationState;

  /**
   * @brief abstraction of current element filter helper for convenience purposes
   */
  using ElementFilter = Interfaces::ICwAPI3DElementFilter;

  /**
   * @brief abstraction of current element ID list helper for convenience purposes
   */
  using ElementIDList = Interfaces::ICwAPI3DElementIDList;

  /**
   * @brief abstraction of current element ID list map helper for convenience purposes
   */
  using ElementIDListMap = Interfaces::ICwAPI3DElementIDListMap;

  /**
   * @brief abstraction of current element map query helper for convenience purposes
   */
  using ElementMapQuery = Interfaces::ICwAPI3DElementMapQuery;

  /**
   * @brief abstraction of current element type helper for convenience purposes
   */
  using ElementType = Interfaces::ICwAPI3DElementType;

  /**
   * @brief abstraction of current extended settings helper for convenience purposes
   */
  using ExtendedSettings = Interfaces::ICwAPI3DExtendedSettings;

  /**
   * @brief abstraction of current facet list helper for convenience purposes
   */
  using FacetList = Interfaces::ICwAPI3DFacetList;

  /**
   * @brief abstraction of current menu helper for convenience purposes
   */
  using Menu = Interfaces::ICwAPI3DMenu;

  /**
   * @brief abstraction of current process type helper for convenience purposes
   */
  using ProcessType = Interfaces::ICwAPI3DProcessType;

  /**
   * @brief abstraction of current string helper for convenience purposes
   */
  using String = Interfaces::ICwAPI3DString;

  /**
   * @brief abstraction of current vertex list helper for convenience purposes
   */
  using VertexList = Interfaces::ICwAPI3DVertexList;

  /**
   * @brief abstraction of current visibility state helper for convenience purposes
   */
  using VisibilityState = Interfaces::ICwAPI3DVisibilityState;

  /**
   * @brief abstraction of current material ID list helper for convenience purposes
   */
  using MaterialIDList = Interfaces::ICwAPI3DMaterialIDList;

  /**
   * @brief abstraction of current BIM controller for convenience purposes
   */
  using BimController = Interfaces::ICwAPI3DBimController;

  using LayerSettings = Interfaces::ICwAPI3DLayerSettings;

  using Ifc2x3ElementType = Interfaces::ICwAPI3DIfc2x3ElementType;
  using PolygonList = Interfaces::ICwAPI3DPolygonList;
  using AttributeDisplaySettings = Interfaces::ICwAPI3DAttributeDisplaySettings;
  using DimensionController = Interfaces::ICwAPI3DDimensionController;
  using GridController = Interfaces::ICwAPI3DGridController;
  using RhinoOptions = Interfaces::ICwAPI3DRhinoOptions;
  using IfcOptions = Interfaces::ICwAPI3DIfcOptions;
}

/**
 * @brief macro used to define a CwAPI3D plugin
 */
#define CWAPI3D_PLUGIN extern "C" __declspec(dllexport)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

extern "C" inline uint32_t __declspec(dllexport) get_min_version_major()
{
  return CwAPI3D::versionMajor;
}

extern "C" inline uint32_t __declspec(dllexport) get_min_version_minor()
{
  return CwAPI3D::versionMinor;
}

extern "C" __declspec(dllexport) inline const CwAPI3D::character* get_plugin_name()
{
#ifndef CWAPI3D_PLUGIN_NAME
  static_assert(false, "CWAPI3D_PLUGIN_NAME must be defined...");
  return L"";
#else
  return CWAPI3D_PLUGIN_NAME;
#endif
}

extern "C" __declspec(dllexport) inline const CwAPI3D::character* get_contact_name()
{
#ifndef CWAPI3D_AUTHOR_NAME
  static_assert(false, "CWAPI3D_AUTHOR_NAME must be defined...");
  return L"";
#else
  return CWAPI3D_AUTHOR_NAME;
#endif
}

extern "C" __declspec(dllexport) inline const CwAPI3D::character* get_contact_email()
{
#ifndef CWAPI3D_AUTHOR_EMAIL
  static_assert(false, "CWAPI3D_AUTHOR_EMAIL must be defined...");
  return L"";
#else
  return CWAPI3D_AUTHOR_EMAIL;
#endif
}

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
