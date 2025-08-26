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
    /// @interface ICwAPI3DMaterialController
    class ICwAPI3DMaterialController
    {
    public:
      /// @brief Gets the last error message.
      /// @param[out] aErrorCode [int32_t*] A pointer to an integer where the error code will be stored.
      /// @return [@ref ICwAPI3DString*] A string containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Creates new material.
      /// @param[in] aName [const @ref character*] The material name.
      /// @return [@ref materialID] The material id.
      virtual materialID createMaterial(const character* aName) = 0;

      /// @brief Gets the material name.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The material name.
      virtual ICwAPI3DString* getName(materialID aMaterialId) = 0;

      /// @brief Sets the material name.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aName [const @ref character*] The material name.
      virtual void setName(materialID aMaterialId, const character* aName) = 0;

      /// @brief Gets the material group.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The material group.
      virtual ICwAPI3DString* getGroup(materialID aMaterialId) = 0;

      /// @brief Sets the material group.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aGroup [const @ref character*] The material group.
      virtual void setGroup(materialID aMaterialId, const character* aGroup) = 0;

      /// @brief Gets the material code.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The material code.
      virtual ICwAPI3DString* getCode(materialID aMaterialId) = 0;

      /// @brief Sets the material code.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aCode [const @ref character*] The material code.
      virtual void setCode(materialID aMaterialId, const character* aCode) = 0;

      /// @brief Gets the material modulus of elasticity 1.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return  [double] The material modulus of elasticity 1.
      virtual double getModulusElasticity1(materialID aMaterialId) = 0;

      /// @brief Sets the material modulus of elasticity 1.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aModulusElasticity1 [double] The material modulus of elasticity 1.
      virtual void setModulusElasticity1(materialID aMaterialId, double aModulusElasticity1) = 0;

      /// @brief Gets the material modulus of elasticity 2.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material modulus of elasticity 2.
      virtual double getModulusElasticity2(materialID aMaterialId) = 0;

      /// @brief Sets the material modulus of elasticity 2.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aModulusElasticity2 [double] The material modulus of elasticity 2.
      virtual void setModulusElasticity2(materialID aMaterialId, double aModulusElasticity2) = 0;

      /// @brief Gets the material modulus of elasticity 3.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material modulus of elasticity 3.
      virtual double getModulusElasticity3(materialID aMaterialId) = 0;

      /// @brief Sets the material modulus of elasticity 3.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aModulusElasticity3 [double] The material modulus of elasticity 3.
      virtual void setModulusElasticity3(materialID aMaterialId, double aModulusElasticity3) = 0;

      /// @brief Gets the material shear modulus 1.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material shear modulus 1.
      virtual double getShearModulus1(materialID aMaterialId) = 0;

      /// @brief Sets the material shear modulus 1.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aShearModulus1 [double] The material shear modulus 1.
      virtual void setShearModulus1(materialID aMaterialId, double aShearModulus1) = 0;

      /// @brief Gets the material shear modulus 2.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material shear modulus 2.
      virtual double getShearModulus2(materialID aMaterialId) = 0;

      /// @brief Sets the material shear modulus 2.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aShearModulus2 [double] The material shear modulus 2.
      virtual void setShearModulus2(materialID aMaterialId, double aShearModulus2) = 0;

      /// @brief Gets the material price.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material price.
      virtual double getPrice(materialID aMaterialId) = 0;

      /// @brief Sets the material price.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aPrice [double] The material price.
      virtual void setPrice(materialID aMaterialId, double aPrice) = 0;

      /// @brief Gets the material price type.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The material price type.
      virtual ICwAPI3DString* getPriceType(materialID aMaterialId) = 0;

      /// @brief Sets the material price type.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aPriceType [const @ref character*] The material price type.
      virtual void setPriceType(materialID aMaterialId, const character* aPriceType) = 0;

      /// @brief Gets the material thermal conductivity.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material thermal conductivity.
      virtual double getThermalConductivity(materialID aMaterialId) = 0;

      /// @brief Sets the material thermal conductivity.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aThermalConductivity [double] The material thermal conductivity.
      virtual void setThermalConductivity(materialID aMaterialId, double aThermalConductivity) = 0;

      /// @brief Gets the material heat capacity.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material heat capacity.
      virtual double getHeatCapacity(materialID aMaterialId) = 0;

      /// @brief Sets the material heat capacity.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aHeatCapacity [double] The material heat capacity.
      virtual void setHeatCapacity(materialID aMaterialId, double aHeatCapacity) = 0;

      /// @brief Gets the material U min.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material U min.
      virtual double getUMin(materialID aMaterialId) = 0;

      /// @brief Sets the material U min.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aUMin [double] The material U min.
      virtual void setUMin(materialID aMaterialId, double aUMin) = 0;

      /// @brief Gets the material U max.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material U max.
      virtual double getUMax(materialID aMaterialId) = 0;

      /// @brief Sets the material U max.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aUMax [double] The material U max.
      virtual void setUMax(materialID aMaterialId, double aUMax) = 0;

      /// @brief Gets the material fire resistance class.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The material fire resistance class.
      virtual ICwAPI3DString* getFireResistanceClass(materialID aMaterialId) = 0;

      /// @brief Sets the material fire resistance class.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aFireResistanceClass [const @ref character*] The material fire resistance class.
      virtual void setFireResistanceClass(materialID aMaterialId, const character* aFireResistanceClass) = 0;

      /// @brief Gets the material smoke class.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The material smoke class.
      virtual ICwAPI3DString* getSmokeClass(materialID aMaterialId) = 0;

      /// @brief Sets the material smoke class.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aSmokeClass [const @ref character*] The material smoke class.
      virtual void setSmokeClass(materialID aMaterialId, const character* aSmokeClass) = 0;

      /// @brief Gets the material drop forming class.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The material drop forming class.
      virtual ICwAPI3DString* getDropFormingClass(materialID aMaterialId) = 0;

      /// @brief Sets the material drop forming class.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aDropFormingClass [const @ref character*] The material drop forming class.
      virtual void setDropFormingClass(materialID aMaterialId, const character* aDropFormingClass) = 0;

      /// @brief Gets the material burn-off rate.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material burn off rate.
      virtual double getBurnOffRate(materialID aMaterialId) = 0;

      /// @brief Sets the material burn-off rate.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aBurnOffRate [double] The material burn off rate.
      virtual void setBurnOffRate(materialID aMaterialId, double aBurnOffRate) = 0;

      /// @brief Gets the material weight.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The material weight.
      virtual double getWeight(materialID aMaterialId) = 0;

      /// @brief Sets the material weight.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aWeight [double] The material weight.
      virtual void setWeight(materialID aMaterialId, double aWeight) = 0;

      /// @brief Gets the material weight type.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The material weight type.
      virtual ICwAPI3DString* getWeightType(materialID aMaterialId) = 0;

      /// @brief Sets the material weight type.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aWeightType [const @ref character*] The material weight type.
      virtual void setWeightType(materialID aMaterialId, const character* aWeightType) = 0;

      /// @brief Gets the material with a given name.
      /// @param[in] aMaterialName [const @ref character*] The material name.
      /// @return [@ref materialID] The material id.
      virtual materialID getMaterialID(const character* aMaterialName) = 0;

      /// @brief Retrieves a list of all materials.
      /// @return [@ref ICwAPI3DMaterialIDList*]  A list of all material id.
      virtual ICwAPI3DMaterialIDList* getAllMaterials() = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Gets the grade of a material.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The grade of the material.
      virtual ICwAPI3DString* getGrade(materialID aMaterialId) = 0;

      /// @brief Sets the grade of a material.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aGrade [const @ref character*] The grade to set.
      virtual void setGrade(materialID aMaterialId, const character* aGrade) = 0;

      /// @brief Gets the quality of a material.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The quality of the material.
      virtual ICwAPI3DString* getQuality(materialID aMaterialId) = 0;

      /// @brief Sets the quality of a material.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aQuality [const @ref character*] The quality to set.
      virtual void setQuality(materialID aMaterialId, const character* aQuality) = 0;

      /// @brief Gets the composition of a material.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The composition of the material.
      virtual ICwAPI3DString* getComposition(materialID aMaterialId) = 0;

      /// @brief Sets the composition of a material.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aComposition [const @ref character*] The composition to set.
      virtual void setComposition(materialID aMaterialId, const character* aComposition) = 0;

      /// @brief Gets the short name of a material.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [@ref ICwAPI3DString*] The short name of the material.
      virtual ICwAPI3DString* getShortName(materialID aMaterialId) = 0;

      /// @brief Retrieves a list of all material groups.
      /// @return [@ref ICwAPI3DStringList*] A list of all material group names.
      virtual ICwAPI3DStringList* getAllMaterialGroups() = 0;

      /// @brief Gets the parent group of a given group.
      /// @param[in] aGroup [const @ref character*] The name of the group.
      /// @return [@ref ICwAPI3DString*] The name of the parent group.
      virtual ICwAPI3DString* getParentGroup(const character* aGroup) = 0;

      /// @brief Gets the material color assignment for nodes.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @return [@ref materialID] The material id assigned to the color number for nodes.
      virtual materialID getMaterialColorAssignmentForNodes(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for nodes.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @param[in] aMaterial [@ref materialID] The material ID to assign to the color number for nodes.
      virtual void setMaterialColorAssignmentForNodes(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for standard axes.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @return [@ref materialID] The material id assigned to the color number for standard axes.
      virtual materialID getMaterialColorAssignmentForStandardAxes(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for standard axes.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @param[in] aMaterial [@ref materialID] The material ID to assign to the color number for standard axes.
      virtual void setMaterialColorAssignmentForStandardAxes(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for drillings.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @return [@ref materialID] The material id assigned to the color number for drillings.
      virtual materialID getMaterialColorAssignmentForDrillings(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for drillings.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @param[in] aMaterial [@ref materialID] The material ID to assign to the color number for drillings.
      virtual void setMaterialColorAssignmentForDrillings(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for MEP axes.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @return [@ref materialID] The material id assigned to the color number for MEP axes.
      virtual materialID getMaterialColorAssignmentForMEPAxes(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for MEP axes.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @param[in] aMaterial [@ref materialID] The material ID to assign to the color number for MEP axes.
      virtual void setMaterialColorAssignmentForMEPAxes(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for beams.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @return [@ref materialID] The material id assigned to the color number for beams.
      virtual materialID getMaterialColorAssignmentForBeams(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for beams.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @param[in] aMaterial [@ref materialID] The material ID to assign to the color number for beams.
      virtual void setMaterialColorAssignmentForBeams(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for panels.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @return [@ref materialID] The material id assigned to the color number for panels.
      virtual materialID getMaterialColorAssignmentForPanels(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for panels.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @param[in] aMaterial [@ref materialID] The material ID to assign to the color number for panels.
      virtual void setMaterialColorAssignmentForPanels(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for auxiliary elements.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @return [@ref materialID] The material id assigned to the color number for auxiliary elements.
      virtual materialID getMaterialColorAssignmentForAuxiliaryElements(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for auxiliary elements.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @param[in] aMaterial [@ref materialID] The material ID to assign to the color number for auxiliary elements.
      virtual void setMaterialColorAssignmentForAuxiliaryElements(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the material color assignment for surfaces.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @return [@ref materialID] The material id assigned to the color number for surfaces.
      virtual materialID getMaterialColorAssignmentForSurfaces(uint32_t aColorNumber) = 0;

      /// @brief Sets the material color assignment for surfaces.
      /// @param[in] aColorNumber [uint32_t] The color number. [1-255]
      /// @param[in] aMaterial [@ref materialID] The material ID to assign to the color number for surfaces.
      virtual void setMaterialColorAssignmentForSurfaces(uint32_t aColorNumber, materialID aMaterial) = 0;

      /// @brief Gets the texture color for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [int32_t] The color of the texture. [1-255]
      virtual int32_t getTextureColor(materialID aMaterialId) = 0;

      /// @brief Sets the texture color for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aColor [int32_t] The color to set for the texture. [1-255]
      virtual void setTextureColor(materialID aMaterialId, int32_t aColor) = 0;

      /// @brief Gets the texture transparency for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [int32_t] The transparency of the texture.
      virtual int32_t getTextureTransparency(materialID aMaterialId) = 0;

      /// @brief Sets the texture transparency for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aTransparency [int32_t] The transparency to set for the texture.
      virtual void setTextureTransparency(materialID aMaterialId, int32_t aTransparency) = 0;

      /// @brief Gets the texture rotation angle for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The rotation angle of the texture.
      virtual double getTextureRotationAngle(materialID aMaterialId) = 0;

      /// @brief Sets the texture rotation angle for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aAngle [double] The rotation angle to set for the texture.
      virtual void setTextureRotationAngle(materialID aMaterialId, double aAngle) = 0;

      /// @brief Gets the texture length alignment for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [bool] True if Texture Random Placement is enabled, false otherwise.
      virtual bool getTextureLengthAlignment(materialID aMaterialId) = 0;

      /// @brief Sets the texture length alignment for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aLengthAlignment [bool] True if Texture Random Placement is enabled, false otherwise.
      virtual void setTextureLengthAlignment(materialID aMaterialId, bool aLengthAlignment) = 0;

      /// @brief Gets the texture zoom factor in the X direction for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The zoom factor of the texture in the X direction.
      virtual double getTextureZoomX(materialID aMaterialId) = 0;

      /// @brief Sets the texture zoom factor in the X direction for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aValue [double] The zoom factor to set in the X direction.
      virtual void setTextureZoomX(materialID aMaterialId, double aValue) = 0;

      /// @brief Gets the texture zoom factor in the Y direction for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @return [double] The zoom factor of the texture in the Y direction.
      virtual double getTextureZoomY(materialID aMaterialId) = 0;

      /// @brief Sets the texture zoom factor in the Y direction for a given material ID.
      /// @param[in] aMaterialId [@ref materialID] The material id.
      /// @param[in] aValue [double] The zoom factor to set.
      virtual void setTextureZoomY(materialID aMaterialId, double aValue) = 0;
    };
  }
}
