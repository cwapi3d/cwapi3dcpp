// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * \brief
    */
    class ICwAPI3DElementMapQuery
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Sets the query by name
       */
      virtual void setByName() = 0;
      /**
       * \brief Sets the query by group
       */
      virtual void setByGroup() = 0;
      /**
       * \brief Sets the query by subgroup
       */
      virtual void setBySubgroup() = 0;
      /**
       * \brief Sets the query by comment
       */
      virtual void setByComment() = 0;
      /**
       * \brief Sets the query by user attribute
       * \param aNumber user attribute number
       */
      virtual void setByUserAttribute(uint32_t aNumber) = 0;
      /**
       * \brief Sets the query by SKU
       */
      virtual void setBySKU() = 0;
      /**
       * \brief Sets the query by production number
       */
      virtual void setByProductionNumber() = 0;
      /**
       * \brief Sets the query by part number
       */
      virtual void setByPartNumber() = 0;
      /**
      * \brief Sets the query by building
      */
      virtual void setByBuilding() = 0;
      /**
      * \brief Sets the query by storey
      */
      virtual void setByStorey() = 0;
    };
  }
}
