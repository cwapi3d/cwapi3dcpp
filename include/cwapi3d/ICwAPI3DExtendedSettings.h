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
    * @interface ICwAPI3DExtendedSettings
    * \brief
    */
    class ICwAPI3DExtendedSettings
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Sets the piece by piece export with dimensions flag
       * \param aValue value of flag
       */
      virtual void setPieceByPieceExportWithDimensions(bool aValue) = 0;
      /**
       * \brief Gets the piece by piece export with dimensions flag
       * \return value of flag
       */
      virtual bool getPieceByPieceExportWithDimensions() = 0;
      /**
       * \brief Sets the piece by piece export without dimensions flag
       * \param aValue value of flag
       */
      virtual void setPieceByPieceExportWithoutDimensions(bool aValue) = 0;
      /**
       * \brief Gets the piece by piece export without dimensions flag
       * \return value of flag
       */
      virtual bool getPieceByPieceExportWithoutDimensions() = 0;
      /**
       * \brief Sets the wall export flag
       * \param aValue value of flag
       */
      virtual void setWallExport(bool aValue) = 0;
      /**
       * \brief Gets the wall export flag
       * \return value of flag
       */
      virtual bool getWallExport() = 0;
      /**
       * \brief Sets the group export flag
       * \param aValue value of flag
       */
      virtual void setGroupExport(bool aValue) = 0;
      /**
       * \brief Gets the group export flag
       * \return value of flag
       */
      virtual bool getGroupExport() = 0;
      /**
       * \brief Sets the chief element flag
       * \param aValue value of flag
       */
      virtual void setChiefElement(bool aValue) = 0;
      /**
       * \brief Gets the chief element flag
       * \return value of flag
       */
      virtual bool getChiefElement() = 0;
      /**
       * \brief Sets the MFB export flag
       * \param aValue value of flag
       */
      virtual void setMFBExport(bool aValue) = 0;
      /**
       * \brief Gets the MFB export flag
       * \return value of flag
       */
      virtual bool getMFBExport() = 0;
      /**
       * \brief Sets the log home export flag
       * \param aValue value of flag
       */
      virtual void setLogHomeExport(bool aValue) = 0;
      /**
       * \brief Gets the log home export flag
       * \return value of flag
       */
      virtual bool getLogHomeExport() = 0;
      /**
       * \brief Sets the BTL wall export flag
       * \param aValue value of flag
       */
      virtual void setBTLWallExport(bool aValue) = 0;
      /**
       * \brief Gets the BTL wall export flag
       * \return value of flag
       */
      virtual bool getBTLWallExport() = 0;
      /**
       * \brief Sets the log macro export flag
       * \param aValue value of flag
       */
      virtual void setLogMacroExport(bool aValue) = 0;
      /**
       * \brief Gets the log macro export flag
       * \return value of flag
       */
      virtual bool getLogMacroExport() = 0;
      /**
       * \brief Sets the outline flag
       * \param aValue value of flag
       */
      virtual void setOutline(bool aValue) = 0;
      /**
       * \brief Gets the outline flag
       * \return value of flag
       */
      virtual bool getOutline() = 0;
      /**
       * \brief Sets the ignore for connector axis flag
       * \param aValue value of flag
       */
      virtual void setIgnoreForConnectorAxis(bool aValue) = 0;
      /**
       * \brief Gets the ignore for connector axis flag
       * \return value of flag
       */
      virtual bool getIgnoreForConnectorAxis() = 0;
    };
  }
}
