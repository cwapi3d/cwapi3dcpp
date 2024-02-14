/** @file
* Copyright (C) 2019 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         26.0
* @author        Paquet
* @date          2019-02-06
*/

#pragma once

#include "CwAPI3DTypes.h"
#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DRoofController
    * \brief
    */
    class ICwAPI3DRoofController
    {
    public:
      /**
       * \brief Gets the profile length
       * \param aID element ID
       * \return profile length
       */
      virtual double getProfileLength(elementID aID) = 0;
      /**
       * \brief Gets the edge length
       * \param aID element ID
       * \param aEdgeType edge type
       * \return edge length
       */
      virtual double getEdgeLength(elementID aID, const character* aEdgeType) = 0;
      /**
       * \brief Gets all caddy elements
       * \return element ID list
       */
      virtual ICwAPI3DElementIDList* getAllCaddyElementIDs() = 0;
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      virtual void clearErrors() = 0;
    };
  }
}
