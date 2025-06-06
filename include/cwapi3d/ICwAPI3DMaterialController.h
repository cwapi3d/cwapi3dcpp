/// @file
/// Copyright (C) 2017 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         24.0
/// @author        Paquet
/// @date          2017-06-22

#pragma once

#include "ICwAPI3DMaterialIDList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DMaterialController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Creates new material
      /// @param aName material name
      /// @return material ID
      virtual materialID createMaterial(const character* aName) = 0;

      /// @brief Gets the material name
      /// @param aMaterialID material ID
      /// @return material name
      virtual ICwAPI3DString* getName(materialID aMaterialID) = 0;

      /// @brief Sets the material name
      /// @param aMaterialID material ID
      /// @param aName material name
      virtual void setName(materialID aMaterialID, const character* aName) = 0;

      /// @brief Gets the material group
      /// @param aMaterialID material ID
      /// @return material group
      virtual ICwAPI3DString* getGroup(materialID aMaterialID) = 0;

      /// @brief Sets the material group
      /// @param aMaterialID material ID
      /// @param aGroup material group
      virtual void setGroup(materialID aMaterialID, const character* aGroup) = 0;

      /// @brief Gets the material code
      /// @param aMaterialID material ID
      /// @return material code
      virtual ICwAPI3DString* getCode(materialID aMaterialID) = 0;

      /// @brief Sets the material code
      /// @param aMaterialID material ID
      /// @param aCode material code
      virtual void setCode(materialID aMaterialID, const character* aCode) = 0;

      /// @brief Gets the material modulus of elasticity 1
      /// @param aMaterialID material ID
      /// @return material modulus of elasticity 1
      virtual double getModulusElasticity1(materialID aMaterialID) = 0;

      /// @brief Sets the material modulus of elasticity 1
      /// @param aMaterialID material ID
      /// @param aModulusElasticity1 material modulus of elasticity 1
      virtual void setModulusElasticity1(materialID aMaterialID, double aModulusElasticity1) = 0;

      /// @brief Gets the material modulus of elasticity 2
      /// @param aMaterialID material ID
      /// @return material modulus of elasticity 2
      virtual double getModulusElasticity2(materialID aMaterialID) = 0;

      /// @brief Sets the material modulus of elasticity 2
      /// @param aMaterialID material ID
      /// @param aModulusElasticity2 material modulus of elasticity 2
      virtual void setModulusElasticity2(materialID aMaterialID, double aModulusElasticity2) = 0;

      /// @brief Gets the material modulus of elasticity 3
      /// @param aMaterialID material ID
      /// @return material modulus of elasticity 3
      virtual double getModulusElasticity3(materialID aMaterialID) = 0;

      /// @brief Sets the material modulus of elasticity 3
      /// @param aMaterialID material ID
      /// @param aModulusElasticity3 material modulus of elasticity 3
      virtual void setModulusElasticity3(materialID aMaterialID, double aModulusElasticity3) = 0;

      /// @brief Gets the material shear modulus 1
      /// @param aMaterialID material ID
      /// @return material shear modulus 1
      virtual double getShearModulus1(materialID aMaterialID) = 0;

      /// @brief Sets the material shear modulus 1
      /// @param aMaterialID material ID
      /// @param aShearModulus1 material shear modulus 1
      virtual void setShearModulus1(materialID aMaterialID, double aShearModulus1) = 0;

      /// @brief Gets the material shear modulus 2
      /// @param aMaterialID material ID
      /// @return material shear modulus 2
      virtual double getShearModulus2(materialID aMaterialID) = 0;

      /// @brief Sets the material shear modulus 2
      /// @param aMaterialID material ID
      /// @param aShearModulus2 material shear modulus 2
      virtual void setShearModulus2(materialID aMaterialID, double aShearModulus2) = 0;

      /// @brief Gets the material price
      /// @param aMaterialID material ID
      /// @return material price
      virtual double getPrice(materialID aMaterialID) = 0;

      /// @brief Sets the material price
      /// @param aMaterialID material ID
      /// @param aPrice material price
      virtual void setPrice(materialID aMaterialID, double aPrice) = 0;

      /// @brief Sets the material price type
      /// @param aMaterialID material ID
      /// @return material price type
      virtual ICwAPI3DString* getPriceType(materialID aMaterialID) = 0;

      /// @brief Sets the material price type
      /// @param aMaterialID material ID
      /// @param aPriceType material price type
      virtual void setPriceType(materialID aMaterialID, const character* aPriceType) = 0;

      /// @brief Gets the material thermal conductivity
      /// @param aMaterialID material ID
      /// @return material thermal conductivity
      virtual double getThermalConductivity(materialID aMaterialID) = 0;

      /// @brief Sets the material thermal conductivity
      /// @param aMaterialID material ID
      /// @param aThermalConductivity material thermal conductivity
      virtual void setThermalConductivity(materialID aMaterialID, double aThermalConductivity) = 0;

      /// @brief Gets the material heat capacity
      /// @param aMaterialID material ID
      /// @return material heat capacity
      virtual double getHeatCapacity(materialID aMaterialID) = 0;

      /// @brief Sets the material heat capacity
      /// @param aMaterialID material ID
      /// @param aHeatCapacity material heat capacity
      virtual void setHeatCapacity(materialID aMaterialID, double aHeatCapacity) = 0;

      /// @brief Gets the material U min
      /// @param aMaterialID material ID
      /// @return material U min
      virtual double getUMin(materialID aMaterialID) = 0;

      /// @brief Sets the material U min
      /// @param aMaterialID material ID
      /// @param aUMin material U min
      virtual void setUMin(materialID aMaterialID, double aUMin) = 0;

      /// @brief Gets the material U max
      /// @param aMaterialID material ID
      /// @return material U max
      virtual double getUMax(materialID aMaterialID) = 0;

      /// @brief Sets the material U max
      /// @param aMaterialID material ID
      /// @param aUMax material U max
      virtual void setUMax(materialID aMaterialID, double aUMax) = 0;

      /// @brief Gets the material fire resistance class
      /// @param aMaterialID material ID
      /// @return material fire resistance class
      virtual ICwAPI3DString* getFireResistanceClass(materialID aMaterialID) = 0;

      /// @brief Sets the material fire resistance class
      /// @param aMaterialID material ID
      /// @param aFireResistanceClass material fire resistance class
      virtual void setFireResistanceClass(materialID aMaterialID, const character* aFireResistanceClass) = 0;

      /// @brief Gets the material smoke class
      /// @param aMaterialID material ID
      /// @return material smoke class
      virtual ICwAPI3DString* getSmokeClass(materialID aMaterialID) = 0;

      /// @brief Sets the material smoke class
      /// @param aMaterialID material ID
      /// @param aSmokeClass material smoke class
      virtual void setSmokeClass(materialID aMaterialID, const character* aSmokeClass) = 0;

      /// @brief Gets the material drop forming class
      /// @param aMaterialID material ID
      /// @return material drop forming class
      virtual ICwAPI3DString* getDropFormingClass(materialID aMaterialID) = 0;

      /// @brief Sets the material drop forming class
      /// @param aMaterialID material ID
      /// @param aDropFormingClass material drop forming class
      virtual void setDropFormingClass(materialID aMaterialID, const character* aDropFormingClass) = 0;

      /// @brief Gets the material burn-off rate
      /// @param aMaterialID material ID
      /// @return material burn off rate
      virtual double getBurnOffRate(materialID aMaterialID) = 0;

      /// @brief Sets the material burn-off rate
      /// @param aMaterialID material ID
      /// @param aBurnOffRate material burn off rate
      virtual void setBurnOffRate(materialID aMaterialID, double aBurnOffRate) = 0;

      /// @brief Gets the material weight
      /// @param aMaterialID material ID
      /// @return material weight
      virtual double getWeight(materialID aMaterialID) = 0;

      /// @brief Sets the material weight
      /// @param aMaterialID material ID
      /// @param aWeight material weight
      virtual void setWeight(materialID aMaterialID, double aWeight) = 0;

      /// @brief Gets the material weight type
      /// @param aMaterialID material ID
      /// @return material weight type
      virtual ICwAPI3DString* getWeightType(materialID aMaterialID) = 0;

      /// @brief Sets the material weight type
      /// @param aMaterialID material ID
      /// @param aWeightType material weight type
      virtual void setWeightType(materialID aMaterialID, const character* aWeightType) = 0;

      /// @brief Gets the material with a given name
      /// @param aMaterialName material name
      /// @return material ID
      virtual materialID getMaterialID(const character* aMaterialName) = 0;

      /// @brief Retrieves a list of all materials.
      /// @return A list of all material IDs.
      virtual ICwAPI3DMaterialIDList* getAllMaterials() = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Gets the grade of a material.
      /// @param aMaterialID The ID of the material.
      /// @return The grade of the material.
      virtual ICwAPI3DString* getGrade(materialID aMaterialID) = 0;

      /// @brief Sets the grade of a material.
      /// @param aMaterialID The ID of the material.
      /// @param aGrade The grade to set.
      virtual void setGrade(materialID aMaterialID, const character* aGrade) = 0;

      /// @brief Gets the quality of a material.
      /// @param aMaterialID The ID of the material.
      /// @return The quality of the material.
      virtual ICwAPI3DString* getQuality(materialID aMaterialID) = 0;

      /// @brief Sets the quality of a material.
      /// @param aMaterialID The ID of the material.
      /// @param aQuality The quality to set.
      virtual void setQuality(materialID aMaterialID, const character* aQuality) = 0;

      /// @brief Gets the composition of a material.
      /// @param aMaterialID The ID of the material.
      /// @return The composition of the material.
      virtual ICwAPI3DString* getComposition(materialID aMaterialID) = 0;

      /// @brief Sets the composition of a material.
      /// @param aMaterialID The ID of the material.
      /// @param aComposition The composition to set.
      virtual void setComposition(materialID aMaterialID, const character* aComposition) = 0;

      /// @brief Gets the short name of a material.
      /// @param aMaterialID The ID of the material.
      /// @return The short name of the material.
      virtual ICwAPI3DString* getShortName(materialID aMaterialID) = 0;

      /// @brief Retrieves a list of all material groups.
      /// @return A list of all material group names.
      virtual ICwAPI3DStringList* getAllMaterialGroups() = 0;

      /// @brief Gets the parent group of a given group.
      /// @param aGroup The name of the group.
      /// @return The name of the parent group.
      virtual ICwAPI3DString* getParentGroup(const character* aGroup) = 0;

      /// @brief Gets the material color assignment for nodes.
      /// @param aColorNumber The color number.
      /// @return The material ID assigned to the color number for nodes.
      virtual materialID getMaterialColorAssignmentForNodes(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for nodes.
      /// @param aColorNumber The color number.
      /// @param aMaterial The material ID to assign to the color number for nodes.
      virtual void setMaterialColorAssignmentForNodes(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for standard axes.
      /// @param aColorNumber The color number.
      /// @return The material ID assigned to the color number for standard axes.
      virtual materialID getMaterialColorAssignmentForStandardAxes(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for standard axes.
      /// @param aColorNumber The color number.
      /// @param aMaterial The material ID to assign to the color number for standard axes.
      virtual void setMaterialColorAssignmentForStandardAxes(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for drillings.
      /// @param aColorNumber The color number.
      /// @return The material ID assigned to the color number for drillings.
      virtual materialID getMaterialColorAssignmentForDrillings(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for drillings.
      /// @param aColorNumber The color number.
      /// @param aMaterial The material ID to assign to the color number for drillings.
      virtual void setMaterialColorAssignmentForDrillings(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for MEP axes.
      /// @param aColorNumber The color number.
      /// @return The material ID assigned to the color number for MEP axes.
      virtual materialID getMaterialColorAssignmentForMEPAxes(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for MEP axes.
      /// @param aColorNumber The color number.
      /// @param aMaterial The material ID to assign to the color number for MEP axes.
      virtual void setMaterialColorAssignmentForMEPAxes(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for beams.
      /// @param aColorNumber The color number.
      /// @return The material ID assigned to the color number for beams.
      virtual materialID getMaterialColorAssignmentForBeams(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for beams.
      /// @param aColorNumber The color number.
      /// @param aMaterial The material ID to assign to the color number for beams.
      virtual void setMaterialColorAssignmentForBeams(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for panels.
      /// @param aColorNumber The color number.
      /// @return The material ID assigned to the color number for panels.
      virtual materialID getMaterialColorAssignmentForPanels(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for panels.
      /// @param aColorNumber The color number.
      /// @param aMaterial The material ID to assign to the color number for panels.
      virtual void setMaterialColorAssignmentForPanels(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for auxiliary elements.
      /// @param aColorNumber The color number.
      /// @return The material ID assigned to the color number for auxiliary elements.
      virtual materialID getMaterialColorAssignmentForAuxiliaryElements(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for auxiliary elements.
      /// @param aColorNumber The color number.
      /// @param aMaterial The material ID to assign to the color number for auxiliary elements.
      virtual void setMaterialColorAssignmentForAuxiliaryElements(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for surfaces.
      /// @param aColorNumber The color number.
      /// @return The material ID assigned to the color number for surfaces.
      virtual materialID getMaterialColorAssignmentForSurfaces(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for surfaces.
      /// @param aColorNumber The color number.
      /// @param aMaterial The material ID to assign to the color number for surfaces.
      virtual void setMaterialColorAssignmentForSurfaces(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the texture color for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @return The color of the texture.
      virtual int32_t getTextureColor(materialID aMaterialID) = 0;

      /// @brief Sets the texture color for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @param aColor The color to set for the texture.
      virtual void setTextureColor(materialID aMaterialID, int32_t aColor) = 0;

      /// @brief Gets the texture transparency for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @return The transparency of the texture.
      virtual int32_t getTextureTransparency(materialID aMaterialID) = 0;

      /// @brief Sets the texture transparency for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @param aTransparency The transparency to set for the texture.
      virtual void setTextureTransparency(materialID aMaterialID, int32_t aTransparency) = 0;

      /// @brief Gets the texture rotation angle for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @return The rotation angle of the texture.
      virtual double getTextureRotationAngle(materialID aMaterialID) = 0;

      /// @brief Sets the texture rotation angle for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @param aAngle The rotation angle to set for the texture.
      virtual void setTextureRotationAngle(materialID aMaterialID, double aAngle) = 0;

      /// @brief Gets the texture length alignment for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @return The length alignment of the texture.
      virtual bool getTextureLengthAlignment(materialID aMaterialID) = 0;

      /// @brief Sets the texture length alignment for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @param aLengthAlignment The length alignment to set for the texture.
      virtual void setTextureLengthAlignment(materialID aMaterialID, bool aLengthAlignment) = 0;

      /// @brief Gets the texture zoom factor in the X direction for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @return The zoom factor of the texture in the X direction.
      virtual double getTextureZoomX(materialID aMaterialID) = 0;

      /// @brief Sets the texture zoom factor in the X direction for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @param aValue The zoom factor to set in the X direction.
      virtual void setTextureZoomX(materialID aMaterialID, double aValue) = 0;

      /// @brief Gets the texture zoom factor in the Y direction for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @return The zoom factor of the texture in the Y direction.
      virtual double getTextureZoomY(materialID aMaterialID) = 0;

      /// @brief Sets the texture zoom factor in the Y direction for a given material ID.
      /// @param aMaterialID The ID of the material.
      /// @param aValue The zoom factor to set.
      virtual void setTextureZoomY(materialID aMaterialID, double aValue) = 0;
    };
  }
}
