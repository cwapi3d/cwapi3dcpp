/** @file
* Copyright (C) 2017 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2017-05-25
*/

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DConnectorAxisController
    * \brief
    */
    class ICwAPI3DConnectorAxisController
    {
    public:
      /**
     * \brief
     * \param aErrorCode
     * \return
     */
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      /**
      * \brief Creates a standard connector axis between two points.
      * \param aAxisName Name of the standard axis
      * \param aPoint1
      * \param aPoint2
      */
      virtual elementID createStandardConnector(const character* aAxisName, CwAPI3D::vector3D aPoint1, CwAPI3D::vector3D aPoint2) = 0;
      /**
      * \brief
      * \param aName
      * \param aItemType
      * \return
      */
      virtual ICwAPI3DString* getItemGuidByName(const character* aName, uint64_t aItemType) = 0;
      /**
      * \brief Gets the Bolt Length
      * \param aAxisID
      * \return
      */
      virtual double getBoltLength(elementID aAxisID) = 0;
      /**
      * \brief Sets the Bolt Length
      * \param aAxisID
      * \param aLength
      */
      virtual void setBoltLength(elementID aAxisID, double aLength) = 0;
      /**
      * \brief Gets the Bolt OverLength
      * \param aAxisID
      * \return
      */
      virtual double getBoltOverLength(elementID aAxisID) = 0;
      /**
      * \brief Sets the Bolt OverLength
      * \param aAxisID
      * \param aOverLength
      */
      virtual void setBoltOverLength(elementID aAxisID, double aOverLength) = 0;
      /**
      * \brief Returns if Bolt Length Automatic is set
      * \param aAxisID
      * \return
      */
      virtual bool getBoltLengthAutomatic(elementID aAxisID) = 0;
      /**
      * \brief Sets the Bolt Length Automatic
      * \param aAxisID
      * \param aLengthAutomatic
      */
      virtual void setBoltLengthAutomatic(elementID aAxisID, bool aLengthAutomatic) = 0;
      /**
      * \brief Gets the Guid of the Bolt Item
      * \param aAxisID
      * \return
      */
      virtual ICwAPI3DString* getBoltItemGuid(elementID aAxisID) = 0;
      /**
      * \brief Sets the Bolt Item
      * \param aAxisID
      * \param aItemGuid
      */
      virtual void setBoltItem(elementID aAxisID, const character* aItemGuid) = 0;
      /**
      * \brief Sets the Drilling Diameter for all Sections
      * \param aAxisID
      * \param aDiameter
      */
      virtual void setDiameter(elementID aAxisID, double aDiameter) = 0;
      /**
      * \brief Sets the Drilling Diameter for a specific Sections
      * \param aAxisID
      * \param aSectionNr
      * \param aDiameter
      */
      virtual void setSectionDiameter(elementID aAxisID, uint32_t aSectionNr, double aDiameter) = 0;
      /**
      * \brief Gets the Drilling Diameter of a specific Sections
      * \param aAxisID
      * \param aSectionNr
      */
      virtual double getSectionDiameter(elementID aAxisID, uint32_t aSectionNr) = 0;
      /**
      * \brief Returns a list of GUIDs of all axis items.
      * \param aAxisId
      * \return
      */
      virtual ICwAPI3DStringList* getAxisItemsGUIDs(elementID aAxisId) = 0;
      /**
      * \brief Returns the name of an axis item.
      * \param aGUID
      * \return
      */
      virtual ICwAPI3DString* getAxisItemName(const character* aGUID) = 0;
      /**
      * \brief Returns the material of an axis item.
      * \param aGUID
      * \return
      */
      virtual ICwAPI3DString* getAxisItemMaterial(const character* aGUID) = 0;
      /**
      * \brief Returns the norm of an axis item.
      * \param aGUID
      * \return
      */
      virtual ICwAPI3DString* getAxisItemNorm(const character* aGUID) = 0;
      /**
      * \brief Returns the strength category of an axis item.
      * \param aGUID
      * \return
      */
      virtual ICwAPI3DString* getAxisItemStrengthCategory(const character* aGUID) = 0;
      /**
      * \brief Returns an userfield value of an axis item.
      * \param aGuid
      * \param aUserItemNr
      * \return
      */
      virtual ICwAPI3DString* getAxisItemUserField(const character* aGuid, int32_t aUserItemNr) = 0;
      /**
      * \brief Returns the strength category of an axis item.
      * \param aGuid
      * \return
      */
      virtual ICwAPI3DString* getAxisItemOrderNumber(const character* aGuid) = 0;
      /**
      * \brief Returns the ordernumber of a bolt item.
      * \param aAxisID
      * \return
      */
      virtual ICwAPI3DString* getBoltOrderNumber(elementID aAxisID) = 0;
      /**
      * \brief Returns if the axis is valid.
      * \param aAxisID
      * \return
      */
      virtual bool checkAxis(elementID aAxisID) = 0;
      virtual void clearErrors() = 0;
      /**
      * \brief updates the Connection Config (CuttingAbility) of Axis/VBAs
      * \param aAxisIDs
      */
      virtual void updateAxisCuttingAbility(ICwAPI3DElementIDList* aAxisIDs) = 0;
      /**
      * \brief Returns the number of sections.
      * \param aAxisID
      * \return
      */
      virtual int getSectionCount(elementID aAxisID) = 0;
      /**
      * \brief Returns material of a section contact element.
      * \param aAxisID
      * \param aSectionNr
      * \return
      */
      virtual ICwAPI3DString* getSectionMaterialName(elementID aAxisID, uint32_t aSectionNr) = 0;
      /**
      * \brief Returns a list of all standard connectors.
      * \return
      */
      virtual ICwAPI3DStringList* getStandardConnectorList() = 0;
      /**
      * \brief Starts the ConnectorAxis configuration dialog.
      * \return
      */
      virtual void startConfigurationDialog() = 0;
      virtual elementID createBlankConnector(double aDiameter, CwAPI3D::vector3D aPoint1, CwAPI3D::vector3D aPoint2) = 0;
      virtual elementID getSectionContactElement(elementID aAxisID, uint32_t aSectionNr) = 0;
      virtual double getBoltDiameter(CwAPI3D::elementID aAxisID) = 0;
      virtual void importFromFile(const character* aFilePath) = 0;
    };
  }
}
