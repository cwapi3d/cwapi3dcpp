/** @file
* Copyright (C) 2017 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2017-08-09
*/

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DElementType
    * \brief
    */
    class ICwAPI3DElementType
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Tests if the element type is none
       * \return is the element type none
       */
      virtual bool isNone() = 0;
      /**
       * \brief Tests if the element type is normal node
       * \return is the element type normal node
       */
      virtual bool isNormalNode() = 0;
      /**
       * \brief Tests if the element type is connector node
       * \return is the element type normal node
       */
      virtual bool isConnectorNode() = 0;
      /**
       * \brief Tests if the element type is wire axis
       * \return is the element type wire axis
       */
      virtual bool isWireAxis() = 0; // ??
      /**
       * \brief Tests if the element type is eave axis
       * \return is the element type eave axis
       */
      virtual bool isEaveAxis() = 0;
      /**
       * \brief Tests if the element type is rectangular axis
       * \return is the element type rectangular axis
       */
      virtual bool isRectangularAxis() = 0;
      /**
       * \brief Tests if the element type is circular axis
       * \return is the element type circular axis
       */
      virtual bool isCircularAxis() = 0;
      /**
       * \brief Tests if the element type is drilling axis
       * \return is the element type drilling axis
       */
      virtual bool isDrillingAxis() = 0;
      /**
       * \brief Tests if the element type is connector axis
       * \return is the element type connector axis
       */
      virtual bool isConnectorAxis() = 0;
      /**
       * \brief Tests if the element type is line
       * \return is the element type line
       */
      virtual bool isLine() = 0;
      /**
       * \brief Tests if the element type is surface
       * \return is the element type surface
       */
      virtual bool isSurface() = 0;
      /**
       * \brief Tests if the element type is Cadwork
       * \return is the element type Cadwork
       */
      virtual bool isCadwork() = 0;
      /**
       * \brief Tests if the element type is global cut
       * \return is the element type global cut
       */
      virtual bool isGlobalCut() = 0;
      /**
       * \brief Tests if the element type is wall
       * \return is the element type wall
       */
      virtual bool isWall() = 0;
      /**
       * \brief Tests if the element type opening
       * \return is the element type opening
       */
      virtual bool isOpening() = 0;
      /**
       * \brief Tests if the element type is floor
       * \return is the element type floor
       */
      virtual bool isFloor() = 0;
      /**
       * \brief Tests if the element type is roof
       * \return is the element type roof
       */
      virtual bool isRoof() = 0;
      /**
       * \brief Tests if the element type is container
       * \return is the element type container
       */
      virtual bool isContainer() = 0;
      /**
       * \brief Tests if the element type is export solid
       * \return is the element type export solid
       */
      virtual bool isExportSolid() = 0;
      /**
       * \brief Tests if the element type is auxiliary
       * \return is the element type auxiliary
       */
      virtual bool isAuxiliary() = 0; // ??
      /**
       * \brief Tests if the element type is nesting parent
       * \return is the element type nesting parent
       */
      virtual bool isNestingParent() = 0;
      /**
       * \brief Tests if the element type is rectangular beam
       * \return is the element type rectangular beam
       */
      virtual bool isRectangularBeam() = 0;
      /**
       * \brief Tests if the element type is circular beam
       * \return is the element type circular beam
       */
      virtual bool isCircularBeam() = 0;
      /**
       * \brief Tests if the element type is steel shape
       * \return is the element type steel shape
       */
      virtual bool isSteelShape() = 0;
      /**
       * \brief Tests if the element type is panel
       * \return is the element type panel
       */
      virtual bool isPanel() = 0;
      /**
       * \brief Tests if the element type is rotation element
       * \return is the element type rotation element
       */
      virtual bool isRotationElement() = 0;
      /**
       * \brief Tests if the element type is additional element
       * \return is the element type additional element
       */
      virtual bool isAdditionalElement() = 0; // ??
      /**
       * \brief Tests if the element type is none
       * \return is the element type none
       */
      virtual bool isRoom() = 0;
      /**
       * \brief Tests if the element type is graphical object
       * \return is the element type graphical object
       */
      virtual bool isGraphicalObject() = 0;
      /**
       * \brief Tests if the element type is dimension
       * \return is the element type dimension
       */
      virtual bool isDimension() = 0; // ??
      /**
       * \brief Tests if the element type is text document
       * \return is the element type text document
       */
      virtual bool isTextDocument() = 0; // ??
      /**
       * \brief Tests if the element type is export solid scene
       * \return is the element type export solid scene
       */
      virtual bool isExportSolidScene() = 0; // ??
      /**
       * \brief Tests if the element type is section trace
       * \return is the element type section trace
       */
      virtual bool isSectionTrace() = 0; // ??
      /**
       * \brief Tests if the element type is framed wall
       * \return is the element type framed wall
       */
      virtual bool isFramedWall() = 0;
      /**
       * \brief Tests if the element type is solid wall
       * \return is the element type solid wall
       */
      virtual bool isSolidWoodWall() = 0;
      /**
       * \brief Tests if the element type is log wall
       * \return is the element type log wall
       */
      virtual bool isLogWall() = 0;
      /**
       * \brief Tests if the element type is framed floor
       * \return is the element type framed floor
       */
      virtual bool isFramedFloor() = 0;
      /**
       * \brief Tests if the element type is solid floor
       * \return is the element type solid floor
       */
      virtual bool isSolidWoodFloor() = 0;
      /**
       * \brief Tests if the element type is framed roof
       * \return is the element type framed roof
       */
      virtual bool isFramedRoof() = 0;
      /**
       * \brief Tests if the element type is solid roof
       * \return is the element type solid roof
       */
      virtual bool isSolidWoodRoof() = 0;
      /**
       * \brief Tests if the element type is circular MEP
       * \return is the element type circular MEP
       */
      virtual bool isCircularMEP() = 0;
      /**
       * \brief Tests if the element type is rectangular MEP
       * \return is the element type rectangular MEP
       */
      virtual bool isRectangularMEP() = 0;

      /**
       * \brief Sets the element type to none
       */
      virtual void setNone() = 0;
      /**
       * \brief Sets the element type to normal node
       */
      virtual void setNormalNode() = 0;
      /**
       * \brief Sets the element type to connector node
       */
      virtual void setConnectorNode() = 0;
      /**
       * \brief Sets the element type to wire axis
       */
      virtual void setWireAxis() = 0; // ??
      /**
       * \brief Sets the element type to eave axis
       */
      virtual void setEaveAxis() = 0;
      /**
       * \brief Sets the element type to rectangular axis
       */
      virtual void setRectangularAxis() = 0;
      /**
       * \brief Sets the element type to circular axis
       */
      virtual void setCircularAxis() = 0;
      /**
       * \brief Sets the element type to drilling axis
       */
      virtual void setDrillingAxis() = 0;
      /**
       * \brief Sets the element type to connector axis
       */
      virtual void setConnectorAxis() = 0;
      /**
       * \brief Sets the element type to line
       */
      virtual void setLine() = 0;
      /**
       * \brief Sets the element type to surface
       */
      virtual void setSurface() = 0;
      /**
       * \brief Sets the element type to Cadwork
       */
      virtual void setCadwork() = 0;
      /**
       * \brief Sets the element type to global cut
       */
      virtual void setGlobalCut() = 0;
      /**
       * \brief Sets if the element type opening
       */
      virtual void setOpening() = 0;
      /**
       * \brief Sets the element type to container
       */
      virtual void setContainer() = 0;
      /**
       * \brief Sets the element type to export solid
       */
      virtual void setExportSolid() = 0;
      /**
       * \brief Sets the element type to auxiliary
       */
      virtual void setAuxiliary() = 0;
      /**
       * \brief Sets the element type to nesting parent
       */
      virtual void setNestingParent() = 0;
      /**
       * \brief Sets the element type to rectangular beam
       */
      virtual void setRectangularBeam() = 0;
      /**
       * \brief Sets the element type to circular beam
       */
      virtual void setCircularBeam() = 0;
      /**
       * \brief Sets the element type to steel shape
       */
      virtual void setSteelShape() = 0;
      /**
       * \brief Sets the element type to panel
       */
      virtual void setPanel() = 0;
      /**
       * \brief Sets the element type to rotation element
       */
      virtual void setRotationElement() = 0;
      /**
       * \brief Sets the element type to additional element
       */
      virtual void setAdditionalElement() = 0;
      /**
       * \brief Sets the element type to none
       */
      virtual void setRoom() = 0;
      /**
       * \brief Sets the element type to graphical object
       */
      virtual void setGraphicalObject() = 0;
      /**
       * \brief Sets the element type to dimension
       */
      virtual void setDimension() = 0; // ??
      /**
       * \brief Sets the element type to text document
       */
      virtual void setTextDocument() = 0; // ??
      /**
       * \brief Sets the element type to export solid scene
       */
      virtual void setExportSolidScene() = 0; // ??
      /**
       * \brief Sets the element type to section trace
       */
      virtual void setSectionTrace() = 0; // ??
      /**
       * \brief Sets the element type to framed wall
       */
      virtual void setFramedWall() = 0;
      /**
       * \brief Sets the element type to solid wall
       */
      virtual void setSolidWoodWall() = 0;
      /**
       * \brief Sets the element type to log wall
       */
      virtual void setLogWall() = 0;
      /**
       * \brief Sets the element type to framed floor
       */
      virtual void setFramedFloor() = 0;
      /**
       * \brief Sets the element type to solid floor
       */
      virtual void setSolidWoodFloor() = 0;
      /**
       * \brief Sets the element type to framed roof
       */
      virtual void setFramedRoof() = 0;
      /**
       * \brief Sets the element type to solid roof
       */
      virtual void setSolidWoodRoof() = 0;
      /**
       * \brief Sets the element type to circular MEP
       */
      virtual void setCircularMEP() = 0;
      /**
       * \brief Sets the element type to rectangula MEP
       */
      virtual void setRectangularMEP() = 0;
    };
  }
}
