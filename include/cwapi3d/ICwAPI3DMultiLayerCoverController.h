/// @file
/// Copyright (C) 2024 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         30.0
/// @author        Tobias Nodurft
/// @date          2024-01-24

#pragma once

#include "ICwAPI3DString.h"

#include <vector>

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DMultiLayerCoverController
    class ICwAPI3DMultiLayerCoverController
    {
    public:
      /// @brief Gets all multi layer wall ids.
      /// @return [std::vector<@ref multiLayerSetID>] The multi layer wall ids.
      /// @par Example:
      /// @code{.cpp}
      ///     std::vector<multiLayerSetID> wallIds = aFactory->getMultiLayerCoverController()->getMultiLayerWalls();
      ///     printf("Found %d multi-layer wall definitions\n", wallIds.size());
      ///
      ///     for (size_t i = 0; i < wallIds.size(); ++i)
      ///     {
      ///         multiLayerSetID wallId = wallIds[i];
      ///         ICwAPI3DString* name = aFactory->getMultiLayerCoverController()->getMultiLayerSetName(wallId);
      ///         wprintf(L"Wall ID: %d, Name: %ls\n", wallId, name->data());
      ///     }
      /// @endcode
      virtual std::vector<multiLayerSetID> getMultiLayerWalls() = 0;

      /// @brief Gets the name for a multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @return [@ref ICwAPI3DString*] The multi layer set name.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     ICwAPI3DString* setName = aFactory->getMultiLayerCoverController()->getMultiLayerSetName(multiLayerSetId);
      ///     wprintf(L"Element uses multi-layer definition: %ls\n", setName->data());
      /// @endcode
      virtual ICwAPI3DString* getMultiLayerSetName(multiLayerSetID aSetId) = 0;

      /// @brief Sets the name for a multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aSetName  [const @ref character*] The multi layer set name.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->createMultiLayerWall("Default Wall");
      ///     aFactory->getMultiLayerCoverController()->setMultiLayerSetName(multiLayerSetId, "Exterior Wall Type B");
      /// @endcode
      virtual void setMultiLayerSetName(multiLayerSetID aSetId, const character* aSetName) = 0;

      /// @brief Gets the multi layer set id of a cover.
      /// @param[in] aElementId  [@ref elementID] The element id of the cover.
      /// @return [@ref multiLayerSetID] The multi layer set id.
      /// @par Example:
      /// @code{.cpp}
      ///     ICwAPI3DElementIDList* coverIds = element->getCovers();
      ///     for (index i = 0; i < coverIds->count(); ++i)
      ///     {
      ///         elementID coverId = coverIds->at(i);
      ///         multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(coverId);
      ///         ICwAPI3DString* setName = aFactory->getMultiLayerCoverController()->getMultiLayerSetName(multiLayerSetId);
      ///         printf("Cover %d uses wall type: %s\n", coverId, setName->data());
      ///     }
      /// @endcode
      virtual multiLayerSetID getElementMultiLayerSet(elementID aElementId) = 0;

      /// @brief Sets the multi layer set id of a cover.
      /// @param[in] aElementId  [@ref elementID] The element id of the cover.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @par Example:
      /// @code{.cpp}
      ///     elementID coverId = element->createCover(points, normalVector);
      ///
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->createMultiLayerWall(L"Wall Type A");
      ///
      ///     aFactory->getMultiLayerCoverController()->setElementMultiLayerSet(coverId, multiLayerSetId);
      /// @endcode
      virtual void setElementMultiLayerSet(elementID aElementId, multiLayerSetID aSetId) = 0;

      /// @brief Creates a new multi layer wall with given name and default values.
      /// @param[in] aSetName  [const @ref character*] The multi layer set name.
      /// @return [@ref multiLayerSetID] The multi layer set id.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->createMultiLayerWall("Exterior Insulated Wall");
      ///     printf("Created new multi-layer wall with ID: %d\n", multiLayerSetId);
      /// @endcode
      virtual multiLayerSetID createMultiLayerWall(const character* aSetName) = 0;

      /// @brief Gets the cover name defined in the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @return [@ref ICwAPI3DString*] The cover name.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     ICwAPI3DString* coverName = aFactory->getMultiLayerCoverController()->getCoverName(multiLayerSetId);
      ///     printf("Cover name: %ls\n", coverName->data());
      /// @endcode
      virtual ICwAPI3DString* getCoverName(multiLayerSetID aSetId) = 0;

      /// @brief Sets the cover name of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aCoverName [const @ref character*] The cover name.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->createMultiLayerWall(L"Default Wall");
      ///
      ///     aFactory->getMultiLayerCoverController()->setCoverName(multiLayerSetId, L"Exterior Facade");
      /// @endcode
      virtual void setCoverName(multiLayerSetID aSetId, const character* aCoverName) = 0;

      /// @brief Gets the cover material defined in the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @return [@ref materialID] The cover material.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     materialID materialId = aFactory->getMultiLayerCoverController()->getCoverMaterial(multiLayerSetId);
      ///     ICwAPI3DString* materialName = aFactory.getMaterialController()->getName(materialId);
      ///     printf("Cover uses material: %ls\n", materialName->data());
      /// @endcode
      virtual materialID getCoverMaterial(multiLayerSetID aSetId) = 0;

      /// @brief Sets the cover material of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aCoverMaterial [materialID] The cover material.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->createMultiLayerWall(L"Default Wall");
      ///
      ///     materialID materialId = aFactory->getMaterialController()->getMaterialID(L"Cement Board");
      ///
      ///     aFactory->getMultiLayerCoverController()->setCoverMaterial(multiLayerSetId, materialId);
      /// @endcode
      virtual void setCoverMaterial(multiLayerSetID aSetId, materialID aCoverMaterial) = 0;

      /// @brief Gets the cover thickness of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @return [double] The cover thickness.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     double thickness = aFactory->getMultiLayerCoverController()->getCoverThickness(multiLayerSetId);
      ///     printf("Cover thickness: %.2fmm\n", thickness);
      /// @endcode
      virtual double getCoverThickness(multiLayerSetID aSetId) = 0;

      /// @brief Sets the cover thickness of the multi layer set. Only allowed for simple walls (cover without layer).
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aCoverThickness [double] The cover thickness.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->createMultiLayerWall(L"Simple Wall");
      ///
      ///     aFactory->getMultiLayerCoverController()->setCoverThickness(multiLayerSetId, 150.0);
      /// @endcode
      virtual void setCoverThickness(multiLayerSetID aSetId, double aCoverThickness) = 0;

      /// @brief Gets the Number of Layers of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @return [uint64_t] The number of layers.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     uint64_t count = aFactory->getMultiLayerCoverController()->getLayerCount(multiLayerSetId);
      ///     printf("Wall has %llu layers\n", count);
      /// @endcode
      virtual uint64_t getLayerCount(multiLayerSetID aSetId) = 0;

      /// @brief Adds a new layer to the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aType [@ref multiLayerType] The type of the layer.
      /// @param[in] aName [const @ref character*] The name of the layer.
      /// @param[in] aMaterialId [@ref materialID] The material id of the layer.
      /// @param[in] aThickness [double] The thickness of the layer.
      /// @par Example:
      /// @code{.cpp}
      ///     materialID materialId1 = aFactory.getMaterialController()->getMaterialID("material_1");
      ///     materialID materialId2 = aFactory.getMaterialController()->getMaterialID("material_2");
      ///
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->createMultiLayerWall("MultiLayerWall");
      ///
      ///     double layer1Thickness = 200;
      ///     double layer2Thickness = 15;
      ///
      ///     aFactory->getMultiLayerCoverController()->addLayer(multiLayerSetId, multiLayerType::structure, "Layer1", materialId1, layer1Thickness);
      ///     aFactory->getMultiLayerCoverController()->addLayer(multiLayerSetId, multiLayerType::panel, "Layer2", materialId2, layer2Thickness);
      /// @endcode
      virtual void addLayer(multiLayerSetID aSetId, multiLayerType aType, const character* aName, materialID aMaterialId, double aThickness) = 0;

      /// @brief Gets the name of a layer of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @return [@ref ICwAPI3DString*] The layer name.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     uint64_t layerCount = aFactory->getMultiLayerCoverController()->getLayerCount(multiLayerSetId);
      ///
      ///     for (uint64_t i = 0; i < layerCount; ++i)
      ///     {
      ///         ICwAPI3DString* layerName = aFactory->getMultiLayerCoverController()->getLayerName(multiLayerSetId, i);
      ///         printf("Layer %llu: %s\n", i, layerName->data());
      ///     }
      /// @endcode
      virtual ICwAPI3DString* getLayerName(multiLayerSetID aSetId, uint64_t aLayerIndex) = 0;

      /// @brief Sets the name of a layer of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @param[in] aName [const @ref character*] The name of the layer.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///
      ///     aFactory->getMultiLayerCoverController()->setLayerName(multiLayerSetId, 0, L"Exterior Cladding");
      ///     aFactory->getMultiLayerCoverController()->setLayerName(multiLayerSetId, 1, L"Insulation Layer");
      /// @endcode
      virtual void setLayerName(multiLayerSetID aSetId, uint64_t aLayerIndex, const character* aName) = 0;

      /// @brief Gets the material of a layer of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @return [@ref materialID] The layer material.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     uint64_t layerCount = aFactory->getMultiLayerCoverController()->getLayerCount(multiLayerSetId);
      ///
      ///     for (uint64_t i = 0; i < layerCount; ++i)
      ///     {
      ///         materialID materialId = aFactory->getMultiLayerCoverController()->getLayerMaterial(multiLayerSetId, i);
      ///         ICwAPI3DString* materialName = aFactory.getMaterialController()->getName(materialId);
      ///         printf("Layer %llu material: %s\n", i, materialName->data());
      ///     }
      /// @endcode
      virtual materialID getLayerMaterial(multiLayerSetID aSetId, uint64_t aLayerIndex) = 0;

      /// @brief Sets the material of a layer of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @param[in] aMaterialId [@ref materialID] The material id of the layer.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///
      ///     materialID insulationMaterialId = aFactory->getMaterialController()->getMaterialID(L"Mineral Wool");
      ///
      ///     aFactory->getMultiLayerCoverController()->setLayerMaterial(multiLayerSetId, 1, insulationMaterialId);
      /// @endcode
      virtual void setLayerMaterial(multiLayerSetID aSetId, uint64_t aLayerIndex, materialID aMaterialId) = 0;

      /// @brief Gets the thickness of a layer of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @return [double] The layer thickness.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     uint64_t layerCount = aFactory->getMultiLayerCoverController()->getLayerCount(multiLayerSetId);
      ///     double totalThickness = 0.0;
      ///
      ///     for (uint64_t i = 0; i < layerCount; ++i)
      ///     {
      ///         double thickness = aFactory->getMultiLayerCoverController()->getLayerThickness(multiLayerSetId, i);
      ///         totalThickness += thickness;
      ///         printf("Layer %llu thickness: %.2fmm\n", i, thickness);
      ///     }
      ///
      ///     printf("Total wall thickness: %.2fmm\n", totalThickness);
      /// @endcode
      virtual double getLayerThickness(multiLayerSetID aSetId, uint64_t aLayerIndex) = 0;

      /// @brief Sets the thickness of a layer of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @param[in] aThickness [double] The layer thickness.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///
      ///     aFactory->getMultiLayerCoverController()->setLayerThickness(multiLayerSetId, 0, 25.0);   // Set first layer to 25mm
      ///     aFactory->getMultiLayerCoverController()->setLayerThickness(multiLayerSetId, 1, 120.0);  // Set second layer to 120mm
      /// @endcode
      virtual void setLayerThickness(multiLayerSetID aSetId, uint64_t aLayerIndex, double aThickness) = 0;

      /// @brief Gets the type of a layer of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @return [@ref multiLayerType] The layer type.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     uint64_t layerCount = aFactory->getMultiLayerCoverController()->getLayerCount(multiLayerSetId);
      ///
      ///     for (uint64_t i = 1; i <= layerCount; ++i)
      ///     {
      ///         multiLayerType layerType = aFactory->getMultiLayerCoverController()->getLayerType(multiLayerSetId, i);
      ///         ICwAPI3DString* layerName = aFactory->getMultiLayerCoverController()->getLayerName(multiLayerSetId, i);
      ///
      ///         const character* typeStr = (layerType == multiLayerType::structure) ? L"Structure" : L"your logic...";
      ///         wprintf(L"Layer %llu (%ls): Type = %ls\n", i, layerName->data(), typeStr);
      ///     }
      /// @endcode
      virtual multiLayerType getLayerType(multiLayerSetID aSetId, uint64_t aLayerIndex) = 0;

      /// @brief Sets the type of a layer of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @param[in] aType [multiLayerType] The layer type.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     uint64_t layerCount = aFactory->getMultiLayerCoverController()->getLayerCount(multiLayerSetId);
      ///     uint64_t layerMidPointIdx = layerCount / 2;
      ///
      ///     aFactory->getMultiLayerCoverController()->setLayerType(multiLayerSetId, layerMidPointIdx, multiLayerType::structure);
      /// @endcode
      virtual void setLayerType(multiLayerSetID aSetId, uint64_t aLayerIndex, multiLayerType aType) = 0;

      /// @brief Gets the cover color defined in the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @return [@ref colorID] The cover color.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->getElementMultiLayerSet(elementId);
      ///     colorID colorId = aFactory->getMultiLayerCoverController()->getCoverColor(multiLayerSetId);
      ///     printf("Cover uses color: %lu\n", colorId);
      /// @endcode
      virtual CwAPI3D::colorID getCoverColor(CwAPI3D::multiLayerSetID aSetId) = 0;

      /// @brief Sets the cover color of the multi layer set.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aCoverColor [@ref colorID] The cover color.
      /// @par Example:
      /// @code{.cpp}
      ///     multiLayerSetID multiLayerSetId = aFactory->getMultiLayerCoverController()->createMultiLayerWall(L"Default Wall");
      ///
      ///     aFactory->getMultiLayerCoverController()->setCoverColor(multiLayerSetId, 3);
      /// @endcode todo
      virtual void setCoverColor(CwAPI3D::multiLayerSetID aSetId, CwAPI3D::colorID aCoverColor) = 0;

      /// @brief Gets the multi layer set component type.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @return [@ref multiLayerComponentType] The multi layer set component type.
      virtual multiLayerComponentType::multiLayerComponentType getMultiLayerSetComponentType(multiLayerSetID aSetId) = 0;

      /// @brief Sets the multi layer set component type.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aType [@ref multiLayerComponentType] The multi layer set component type.
      virtual void setMultiLayerSetComponentType(multiLayerSetID aSetId, multiLayerComponentType::multiLayerComponentType aType) = 0;

      /// @brief Gets the layer sub type.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @return [@ref multiLayerSubType] The layer sub type.
      virtual multiLayerSubType::multiLayerSubType getLayerSubType(multiLayerSetID aSetId, uint64_t aLayerIndex) = 0;

      /// @brief Sets the layer sub type.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @param[in] aSubType [@ref multiLayerSubType] The layer sub type.
      virtual void setLayerSubType(multiLayerSetID aSetId, uint64_t aLayerIndex, multiLayerSubType::multiLayerSubType aSubType) = 0;

      /// @brief Gets the layer standard panel guid.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @return [@ref ICwAPI3DString*] The layer standard panel guid.
      virtual ICwAPI3DString* getLayerStandardPanelGuid(multiLayerSetID aSetId, uint64_t aLayerIndex) = 0;

      /// @brief Sets the layer standard panel guid.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @param[in] aGuid [@ref character*] The layer standard panel guid.
      virtual void setLayerStandardPanelGuid(multiLayerSetID aSetId, uint64_t aLayerIndex, const character* aGuid) = 0;

      /// @brief Gets the layer standard beam guid.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @return [@ref ICwAPI3DString*] The layer standard beam guid.
      virtual ICwAPI3DString* getLayerStandardBeamGuid(multiLayerSetID aSetId, uint64_t aLayerIndex) = 0;

      /// @brief Sets the layer standard beam guid.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aLayerIndex [uint64_t] The layer index.
      /// @param[in] aGuid [@ref character*] The layer standard beam guid.
      virtual void setLayerStandardBeamGuid(multiLayerSetID aSetId, uint64_t aLayerIndex, const character* aGuid) = 0;

      /// @brief Adds layer by standard element.
      /// @param[in] aSetId [@ref multiLayerSetID] The multi layer set id.
      /// @param[in] aType [@ref multiLayerComponentType] The multi layer set component type.
      /// @param[in] aName [@ref character*] The layer name.
      /// @param[in] aPanelGuid [@ref character*] The layer standard panel guid.
      /// @param[in] aBeamGuid [@ref character*] The layer standard beam guid.
      /// @param[in] aThickness [double] The layer thickness.
      virtual void addLayerByStandardElements(multiLayerSetID aSetId, multiLayerType aType, const character* aName, const character* aPanelGuid, const character* aBeamGuid, double aThickness) = 0;
    };
  }
}
