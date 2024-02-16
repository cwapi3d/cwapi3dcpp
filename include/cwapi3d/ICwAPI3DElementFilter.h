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

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DElementFilter
    * \brief
    */
    class ICwAPI3DElementFilter
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Sets the filter by name
       * \param aName name
       */
      virtual void setName(const character* aName) = 0;
      /**
       * \brief Sets the filter by group
       * \param aGroup group
       */
      virtual void setGroup(const character* aGroup) = 0;
      /**
       * \brief Sets the filter by subgroup
       * \param aSubgroup subgroup
       */
      virtual void setSubgroup(const character* aSubgroup) = 0;
      /**
       * \brief Sets the filter by comment
       * \param aComment comment
       */
      virtual void setComment(const character* aComment) = 0;
      /**
       * \brief Sets the filter by attribute number
       * \param aNumber user attribute number
       * \param aUserAttribute user attribute
       */
      virtual void setUserAttribute(uint32_t aNumber, const character* aUserAttribute) = 0;
      /**
       * \brief Sets the filter by SKU
       * \param aSKU SKU
       */
      virtual void setSKU(const character* aSKU) = 0;
      /**
       * \brief Sets the filter by production number
       * \param aProductionNumber production number
       */
      virtual void setProductionNumber(uint32_t aProductionNumber) = 0;
      /**
       * \brief Sets the filter by part number
       * \param aPartNumber part number
       */
      virtual void setPartNumber(uint32_t aPartNumber) = 0;
    };
  }
}
