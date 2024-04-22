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
    /// \brief
    class ICwAPI3DMultiLayerCoverController
    {
    public:
      /// @brief Gets all multi layer wall ids
      /// @return
      virtual std::vector<multiLayerSetID> getMultiLayerWalls() = 0;

      /// @brief Gets the name for a multi layer set
      /// @param aSetID
      /// @return string
      virtual ICwAPI3DString* getMultiLayerSetName(multiLayerSetID aSetID) = 0;

      /// @brief Sets the name for a multi layer set
      /// @param aSetID
      /// @param aSetName
      virtual void setMultiLayerSetName(multiLayerSetID aSetID, const character* aSetName) = 0;

      /// @brief Gets the multi layer set id of a cover
      /// @param aElementID
      /// @return multiLayerSetID
      virtual multiLayerSetID getElementMultiLayerSet(elementID aElementID) = 0;

      /// @brief Sets the multi layer set id of a cover
      /// @param aElementID
      /// @param aSetID
      virtual void setElementMultiLayerSet(elementID aElementID, multiLayerSetID aSetID) = 0;

      /// @brief Creates a new multi layer wall with given name and default values
      /// @param aSetName
      /// @return multiLayerSetID
      virtual multiLayerSetID createMultiLayerWall(const character* aSetName) = 0;

      /// @brief Gets the cover name defined in the multi layer set
      /// @param aSetID
      /// @return string
      virtual ICwAPI3DString* getCoverName(multiLayerSetID aSetID) = 0;

      /// @brief Sets the cover name of the multi layer set
      /// @param aSetID
      /// @param aCoverName
      virtual void setCoverName(multiLayerSetID aSetID, const character* aCoverName) = 0;

      /// @brief Gets the cover material defined in the multi layer set
      /// @param aSetID
      /// @return materialID
      virtual materialID getCoverMaterial(multiLayerSetID aSetID) = 0;

      /// @brief Sets the cover material of the multi layer set
      /// @param aSetID
      /// @param aCoverMaterial
      virtual void setCoverMaterial(multiLayerSetID aSetID, materialID aCoverMaterial) = 0;

      /// @brief Gets the cover thickness of the multi layer set
      /// @param aSetID
      /// @return double
      virtual double getCoverThickness(multiLayerSetID aSetID) = 0;

      /// @brief Sets the cover thickness of the multi layer set. Only allowed for simple walls (cover without layer)
      /// @param aSetID
      /// @param aCoverThickness
      virtual void setCoverThickness(multiLayerSetID aSetID, double aCoverThickness) = 0;

      /// @brief Gets the Number of Layers of the multi layer set
      /// @param aSetID
      /// @return uint64_t
      virtual uint64_t getLayerCount(multiLayerSetID aSetID) = 0;

      /// @brief Adds a new layer to the multi layer set
      /// @param aSetID
      /// @param aType
      /// @param aName
      /// @param aMaterialID
      /// @param aThickness
      virtual void addLayer(multiLayerSetID aSetID, multiLayerType aType, const character* aName, materialID aMaterialID, double aThickness) = 0;

      /// @brief Gets the name of a layer of the multi layer set
      /// @param aSetID
      /// @param aLayerIndex
      /// @return string
      virtual ICwAPI3DString* getLayerName(multiLayerSetID aSetID, uint64_t aLayerIndex) = 0;

      /// @brief Sets the name of a layer of the multi layer set
      /// @param aSetID
      /// @param aLayerIndex
      /// @param aName
      virtual void setLayerName(multiLayerSetID aSetID, uint64_t aLayerIndex, const character* aName) = 0;

      /// @brief Gets the material of a layer of the multi layer set
      /// @param aSetID
      /// @param aLayerIndex
      /// @return string
      virtual materialID getLayerMaterial(multiLayerSetID aSetID, uint64_t aLayerIndex) = 0;

      /// @brief Sets the material of a layer of the multi layer set
      /// @param aSetID
      /// @param aLayerIndex
      /// @param aMaterialID
      virtual void setLayerMaterial(multiLayerSetID aSetID, uint64_t aLayerIndex, materialID aMaterialID) = 0;

      /// @brief Gets the thickness of a layer of the multi layer set
      /// @param aSetID
      /// @param aLayerIndex
      /// @return double
      virtual double getLayerThickness(multiLayerSetID aSetID, uint64_t aLayerIndex) = 0;

      /// @brief Sets the thickness of a layer of the multi layer set
      /// @param aSetID
      /// @param aLayerIndex
      /// @param aThickness
      virtual void setLayerThickness(multiLayerSetID aSetID, uint64_t aLayerIndex, double aThickness) = 0;

      /// @brief Gets the type of a layer of the multi layer set
      /// @param aSetID
      /// @param aLayerIndex
      /// @return multiLayerType
      virtual multiLayerType getLayerType(multiLayerSetID aSetID, uint64_t aLayerIndex) = 0;

      /// @brief Sets the type of a layer of the multi layer set
      /// @param aSetID
      /// @param aLayerIndex
      /// @param aType
      virtual void setLayerType(multiLayerSetID aSetID, uint64_t aLayerIndex, multiLayerType aType) = 0;

      /// @brief Gets the cover color defined in the multi layer set
      /// @param aSetID
      /// @return colorID
      virtual CwAPI3D::colorID getCoverColor(CwAPI3D::multiLayerSetID aSetID) = 0;

      /// @brief Sets the cover color of the multi layer set
      /// @param aSetID
      /// @param aCoverColor
      virtual void setCoverColor(CwAPI3D::multiLayerSetID aSetID, CwAPI3D::colorID aCoverColor) = 0;
    };
  }
}
