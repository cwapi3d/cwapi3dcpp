/** @file
* Copyright (C) 2017 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2017-06-22
*/

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DMaterialIDList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DMaterialController
    * \brief
    */
    class ICwAPI3DMaterialController
    {
    public:
      /**
       * \brief Gets the last error
       * \param aErrorCode error code
       * \return error string
       */
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      /**
       * \brief Creates new material
       * \param aName material name
       * \return material ID
       */
      virtual materialID createMaterial(const character* aName) = 0;
      /**
       * \brief Gets the material name
       * \param aMaterialID material ID
       * \return material name
       */
      virtual ICwAPI3DString* getName(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material name
       * \param aMaterialID material ID
       * \param aName material name
       */
      virtual void setName(materialID aMaterialID, const character* aName) = 0;
      /**
       * \brief Gets the material group
       * \param aMaterialID material ID
       * \return material group
       */
      virtual ICwAPI3DString* getGroup(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material group
       * \param aMaterialID material ID
       * \param aGroup material group
       */
      virtual void setGroup(materialID aMaterialID, const character* aGroup) = 0;
      /**
       * \brief Gets the material code
       * \param aMaterialID material ID
       * \return material code
       */
      virtual ICwAPI3DString* getCode(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material code
       * \param aMaterialID material ID
       * \param aCode material code
       */
      virtual void setCode(materialID aMaterialID, const character* aCode) = 0;
      /**
       * \brief Gets the material modulus of elasticity 1
       * \param aMaterialID material ID
       * \return material modulus of elasticity 1
       */
      virtual double getModulusElasticity1(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material modulus of elasticity 1
       * \param aMaterialID material ID
       * \param aModulusElasticity1 material modulus of elasticity 1
       */
      virtual void setModulusElasticity1(materialID aMaterialID, double aModulusElasticity1) = 0;
      /**
       * \brief Gets the material modulus of elasticity 2
       * \param aMaterialID material ID
       * \return material modulus of elasticity 2
       */
      virtual double getModulusElasticity2(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material modulus of elasticity 2
       * \param aMaterialID material ID
       * \param aModulusElasticity2 material modulus of elasticity 2
       */
      virtual void setModulusElasticity2(materialID aMaterialID, double aModulusElasticity2) = 0;
      /**
       * \brief Gets the material modulus of elasticity 3
       * \param aMaterialID material ID
       * \return material modulus of elasticity 3
       */
      virtual double getModulusElasticity3(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material modulus of elasticity 3
       * \param aMaterialID material ID
       * \param aModulusElasticity3 material modulus of elasticity 3
       */
      virtual void setModulusElasticity3(materialID aMaterialID, double aModulusElasticity3) = 0;
      /**
       * \brief Gets the material shear modulus 1
       * \param aMaterialID material ID
       * \return material shear modulus 1
       */
      virtual double getShearModulus1(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material shear modulus 1
       * \param aMaterialID material ID
       * \param aShearModulus1 material shear modulus 1
       */
      virtual void setShearModulus1(materialID aMaterialID, double aShearModulus1) = 0;
      /**
       * \brief Gets the material shear modulus 2
       * \param aMaterialID material ID
       * \return material shear modulus 2
       */
      virtual double getShearModulus2(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material shear modulus 2
       * \param aMaterialID material ID
       * \param aShearModulus2 material shear modulus 2
       */
      virtual void setShearModulus2(materialID aMaterialID, double aShearModulus2) = 0;
      /**
       * \brief Gets the material price
       * \param aMaterialID material ID
       * \return material price
       */
      virtual double getPrice(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material price
       * \param aMaterialID material ID
       * \param aPrice material price
       */
      virtual void setPrice(materialID aMaterialID, double aPrice) = 0;
      /**
       * \brief Sets the material price type
       * \param aMaterialID material ID
       * \return material price type
       */
      virtual ICwAPI3DString* getPriceType(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material price type
       * \param aMaterialID material ID
       * \param aPriceType material price type
       */
      virtual void setPriceType(materialID aMaterialID, const character* aPriceType) = 0;
      /**
       * \brief Gets the material thermal conductivity
       * \param aMaterialID material ID
       * \return material thermal conductivity
       */
      virtual double getThermalConductivity(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material thermal conductivity
       * \param aMaterialID material ID
       * \param aThermalConductivity material thermal conductivity
       */
      virtual void setThermalConductivity(materialID aMaterialID, double aThermalConductivity) = 0;
      /**
       * \brief Gets the material heat capacity
       * \param aMaterialID material ID
       * \return material heat capacity
       */
      virtual double getHeatCapacity(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material heat capacity
       * \param aMaterialID material ID
       * \param aHeatCapacity material heat capacity
       */
      virtual void setHeatCapacity(materialID aMaterialID, double aHeatCapacity) = 0;
      /**
       * \brief Gets the material U min
       * \param aMaterialID material ID
       * \return material U min
       */
      virtual double getUMin(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material U min
       * \param aMaterialID material ID
       * \param aUMin material U min
       */
      virtual void setUMin(materialID aMaterialID, double aUMin) = 0;
      /**
       * \brief Gets the material U max
       * \param aMaterialID material ID
       * \return material U max
       */
      virtual double getUMax(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material U max
       * \param aMaterialID material ID
       * \param aUMax material U max
       */
      virtual void setUMax(materialID aMaterialID, double aUMax) = 0;
      /**
       * \brief Gets the material fire resistance class
       * \param aMaterialID material ID
       * \return material fire resistance class
       */
      virtual ICwAPI3DString* getFireResistanceClass(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material fire resistance class
       * \param aMaterialID material ID
       * \param aFireResistanceClass material fire resistance class
       */
      virtual void setFireResistanceClass(materialID aMaterialID, const character* aFireResistanceClass) = 0;
      /**
       * \brief Gets the material smoke class
       * \param aMaterialID material ID
       * \return material smoke class
       */
      virtual ICwAPI3DString* getSmokeClass(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material smoke class
       * \param aMaterialID material ID
       * \param aSmokeClass material smoke class
       */
      virtual void setSmokeClass(materialID aMaterialID, const character* aSmokeClass) = 0;
      /**
       * \brief Gets the material drop forming class
       * \param aMaterialID material ID
       * \return material drop forming class
       */
      virtual ICwAPI3DString* getDropFormingClass(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material drop forming class
       * \param aMaterialID material ID
       * \param aDropFormingClass material drop forming class
       */
      virtual void setDropFormingClass(materialID aMaterialID, const character* aDropFormingClass) = 0;
      /**
       * \brief Gets the material burn-off rate
       * \param aMaterialID material ID
       * \return material burn off rate
       */
      virtual double getBurnOffRate(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material burn-off rate
       * \param aMaterialID material ID
       * \param aBurnOffRate material burn off rate
       */
      virtual void setBurnOffRate(materialID aMaterialID, double aBurnOffRate) = 0;
      /**
       * \brief Gets the material weight
       * \param aMaterialID material ID
       * \return material weight
       */
      virtual double getWeight(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material weight
       * \param aMaterialID material ID
       * \param aWeight material weight
       */
      virtual void setWeight(materialID aMaterialID, double aWeight) = 0;
      /**
       * \brief Gets the material weight type
       * \param aMaterialID material ID
       * \return material weight type
       */
      virtual ICwAPI3DString* getWeightType(materialID aMaterialID) = 0;
      /**
       * \brief Sets the material weight type
       * \param aMaterialID material ID
       * \param aWeightType material weight type
       */
      virtual void setWeightType(materialID aMaterialID, const character* aWeightType) = 0;
      /**
       * \brief Gets the material with a given name
       * \param aMaterialName material name
       * \return material ID
       */
      virtual materialID getMaterialID(const character* aMaterialName) = 0;
      /**
       * \brief Gets all the materials
       * \return material ID list
       */
      virtual ICwAPI3DMaterialIDList* getAllMaterials() = 0;
      virtual void clearErrors() = 0;
      virtual ICwAPI3DString* getGrade(materialID aMaterialID) = 0;
      virtual void setGrade(materialID aMaterialID, const character* aGrade) = 0;
      virtual ICwAPI3DString* getQuality(materialID aMaterialID) = 0;
      virtual void setQuality(materialID aMaterialID, const character* aQuality) = 0;
      virtual ICwAPI3DString* getComposition(materialID aMaterialID) = 0;
      virtual void setComposition(materialID aMaterialID, const character* aComposition) = 0;
      virtual ICwAPI3DString* getShortName(materialID aMaterialID) = 0;
    };
  }
}
