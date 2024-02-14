/** @file
* Copyright (C) 2016 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2016-12-15
*/

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DElementIDList.h"

#ifdef _WIN32
#include <windows.h>
#else
typedef void* PVOID;
typedef PVOID HANDLE;
typedef HANDLE HWND;
#endif
#include "ICwAPI3DVertexList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DUtilityController
    * \brief
    */
    class ICwAPI3DUtilityController
    {
    public:
      /**
       * \brief Gets the last error
       * \param aErrorCode error code
       * \return error string
       */
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;
      /**
       * \brief Gets the 3D version
       * \return 3D version
       */
      virtual uint32_t get3DVersion() = 0;
      /**
       * \brief Gets the 3D build
       * \return 3D build
       */
      virtual uint32_t get3DBuild() = 0;
      /**
       * \brief Gets the 3D HWND
       * \return 3D HWND
       */
      virtual HWND get3DHWND() = 0;
      /**
       * \brief Gets the 3D file name
       * \return 3D file name
       */
      virtual ICwAPI3DString* get3DFileName() = 0;
      /**
       * \brief Gets the 3D file path
       * \return 3D file path
       */
      virtual ICwAPI3DString* get3DFilePath() = 0;
      /**
       * \brief Sets the project data
       * \param aID project data ID
       * \param aData project data
       */
      virtual void setProjectData(const character* aID, const character* aData) = 0;
      /**
       * \brief Gets the project data
       * \param aID project data ID
       * \return project data
       */
      virtual ICwAPI3DString* getProjectData(const character* aID) = 0;
      /**
       * \brief Prints an error
       * \param aMessage error message
       */
      virtual void printError(const character* aMessage) = 0;
      /**
       * \brief Gets the 3D language
       * \return 3D language
       */
      virtual ICwAPI3DString* getLanguage() = 0;
      /**
       * \brief Prints a message
       * \param aMessage message
       * \param aRow row
       * \param aColumn column
       */
      virtual void printMessage(const character* aMessage, uint32_t aRow = 1, uint32_t aColumn = 1) = 0;
      /**
       * \brief Prompts the user for an integer
       * \param aMessage message
       * \return user integer
       */
      virtual int32_t getUserInt(const character* aMessage) = 0;
      /**
       * \brief Prompts the user for a double
       * \param aMessage message
       * \return user double
       */
      virtual double getUserDouble(const character* aMessage) = 0;
      /**
       * \brief Prompts the user for a boolean
       * \param aMessage message
       * \param aDefaultYes default value
       * \return user boolean
       */
      virtual bool getUserBool(const character* aMessage, bool aDefaultYes = true) = 0;
      /**
       * \brief Prompts the user for a string
       * \param aMessage message
       * \return user string
       */
      virtual ICwAPI3DString* getUserString(const character* aMessage) = 0;
      /**
       * \brief Gets the project name
       * \return project name
       */
      virtual ICwAPI3DString* getProjectName() = 0;
      /**
       * \brief Sets the project name
       * \param aProjectName project name
       */
      virtual void setProjectName(const character* aProjectName) = 0;
      /**
       * \brief Gets the project number
       * \return project number
       */
      virtual ICwAPI3DString* getProjectNumber() = 0;
      /**
       * \brief Sets the project number
       * \param aProjectNumber project number
       */
      virtual void setProjectNumber(const character* aProjectNumber) = 0;
      /**
       * \brief Sets the project part
       * \return project part
       */
      virtual ICwAPI3DString* getProjectPart() = 0;
      /**
       * \brief Sets the project part
       * \param aProjectPart project part
       */
      virtual void setProjectPart(const character* aProjectPart) = 0;
      /**
       * \brief Gets the project architect
       * \return project architect
       */
      virtual ICwAPI3DString* getProjectArchitect() = 0;
      /**
       * \brief Sets the project architect
       * \param aProjectArchitect project architect
       */
      virtual void setProjectArchitect(const character* aProjectArchitect) = 0;
      /**
       * \brief Gets the project customer
       * \return project customer
       */
      virtual ICwAPI3DString* getProjectCustomer() = 0;
      /**
       * \brief Sets the project customer
       * \param aProjectCustomer project customer
       */
      virtual void setProjectCustomer(const character* aProjectCustomer) = 0;
      /**
       * \brief Gets the project designer
       * \return project designer
       */
      virtual ICwAPI3DString* getProjectDesigner() = 0;
      /**
       * \brief Sets the project designer
       * \param aProjectDesigner project designer
       */
      virtual void setProjectDesigner(const character* aProjectDesigner) = 0;
      /**
       * \brief Gets the project deadline
       * \return project deadline
       */
      virtual ICwAPI3DString* getProjectDeadline() = 0;
      /**
       * \brief Sets the project deadline
       * \param aProjectDeadline project deadline
       */
      virtual void setProjectDeadline(const character* aProjectDeadline) = 0;
      /**
       * \brief Gets the project user attribute
       * \param aNumber project user attribute number
       * \return project user attribute
       */
      virtual ICwAPI3DString* getProjectUserAttribute(uint32_t aNumber) = 0;
      /**
       * \brief Sets the project user attribute
       * \param aNumber project user attribute number
       * \param aUserAttribute project user attribute
       */
      virtual void setProjectUserAttribute(uint32_t aNumber, const character* aUserAttribute) = 0;
      /**
       * \brief Gets the project user attribute name
       * \param aNumber project user attribute number
       * \return project user attribute name
       */
      virtual ICwAPI3DString* getProjectUserAttributeName(uint32_t aNumber) = 0;
      /**
       * \brief Sets the project user attribute name
       * \param aNumber project user attribute number
       * \param aUserAttributeName project user attribute name
       */
      virtual void setProjectUserAttributeName(uint32_t aNumber, const character* aUserAttributeName) = 0;
      /**
       * \brief Gets the project latitude
       * \return project latitude
       */
      virtual double getProjectLatitude() = 0;
      /**
       * \brief Gets the project longitude
       * \return project longitude
       */
      virtual double getProjectLongitude() = 0;
      /**
       * \brief Sets the project latitude
       * \param aLatitude project latitude
       */
      virtual void setProjectLatitude(double aLatitude) = 0;
      /**
       * \brief Sets the project longitude
       * \param aLongitude project longitude
       */
      virtual void setProjectLongitude(double aLongitude) = 0;
      /**
       * \brief Gets the project address
       * \return project address
       */
      virtual ICwAPI3DString* getProjectAddress() = 0;
      /**
       * \brief Sets the project address
       * \param aAddress project address
       */
      virtual void setProjectAddress(const character* aAddress) = 0;
      /**
       * \brief Gets the project postal code
       * \return project postal code
       */
      virtual ICwAPI3DString* getProjectPostalCode() = 0;
      /**
       * \brief Sets the project postal code
       * \param aPostalCode project postal code
       */
      virtual void setProjectPostalCode(const character* aPostalCode) = 0;
      /**
       * \brief Gets the project city
       * \return project city
       */
      virtual ICwAPI3DString* getProjectCity() = 0;
      /**
       * \brief Sets the project city
       * \param aCity project city
       */
      virtual void setProjectCity(const character* aCity) = 0;
      /**
       * \brief Gets the project country
       * \return project country
       */
      virtual ICwAPI3DString* getProjectCountry() = 0;
      /**
       * \brief Sets the project country
       * \param aCountry project country
       */
      virtual void setProjectCountry(const character* aCountry) = 0;
      /**
       * \brief Gets the 3D userprofil path
       * \return the 3D userprofil path
       */
      virtual ICwAPI3DString* get3DUserprofilPath() = 0;
      /**
       * \brief Gets a file with a dialog
       * \param aFilter dialog file filter
       * \return file path
       */
      virtual ICwAPI3DString* getUserFileFromDialog(const character* aFilter) = 0;
      /**
       * \brief Gets the client number
       * \return client number
       */
      virtual ICwAPI3DString* getClientNumber() = 0;
      /**
       * \brief Gets a point from the user
       * \return user point
       */
      virtual vector3D getUserPoint() = 0;
      /**
       * \brief Disables automatic display refresh
       */
      virtual void disableAutoDisplayRefresh() = 0;
      /**
       * \brief Enables automatic display refresh
       */
      virtual void enableAutoDisplayRefresh() = 0;
      /**
       * \brief Creates a new GUID
       * \return GUID
       */
      virtual ICwAPI3DString* createNewGUID() = 0;
      /**
       * \brief Prints a message to the console
       * \param aMessage message
       */
      virtual void printToConsole(const character* aMessage) = 0;
      /**
       * \brief Exports the screen to an image
       * \param aFilePath file path
       * \param aFactor image factor
       */
      virtual void exportScreenToImage(const character* aFilePath, uint32_t aFactor = 1) = 0;
      /**
       * \brief Gets a new file with a dialog
       * \param aFilter dialog file filter
       * \return file path
       */
      virtual ICwAPI3DString* getNewUserFileFromDialog(const character* aFilter) = 0;
      /**
       * \brief
       * \param aAPIName
       * \param aOption
       * \return
       */
      virtual uint32_t apiAutostart(const character* aAPIName, uint32_t aOption) = 0;
      /**
       * \brief
       * \param aAPIName
       */
      virtual void enableAutostart(const character* aAPIName) = 0;
      /**
       * \brief
       * \param aAPIName
       */
      virtual void disableAutostart(const character* aAPIName) = 0;
      /**
       * \brief
       * \param aAPIName
       * \return
       */
      virtual bool checkAutostart(const character* aAPIName) = 0;
      /**
       * \brief Deletes the project data
       * \param aID project data ID
       */
      virtual void deleteProjectData(const character* aID) = 0;
      /**
       * \brief Runs a 3D external program
       * \param aName external program name
       * \return external program return
       */
      virtual bool runExternalProgram(const character* aName) = 0;
      /**
       * \brief Saves the 3D file silently
       */
      virtual void save3DFileSilently() = 0;
      /**
       * \brief Gets the project GUID
       * \return project GUID
       */
      virtual ICwAPI3DString* getProjectGUID() = 0;
      /**
       * \brief Gets the first part of the licence
       * \return first part of licence
       */
      virtual ICwAPI3DString* getLicenceFirstPart() = 0;
      /**
       * \brief Gets the second part of the licence
       * \return second part of licence
       */
      virtual ICwAPI3DString* getLicenceSecondPart() = 0;
      /**
       * \brief Shows a ProgressBar in the CommandBar
       */
      virtual void showProgressBar() = 0;
      /**
       * \brief Updates the ProgressBar with a value
       * \param aValue between 0 and 100
       */
      virtual void updateProgressBar(int32_t aValue) = 0;
      /**
       * \brief Hides the ProgressBar
       */
      virtual void hideProgressBar() = 0;
      /**
      * \brief Gets a color choosen by the user
      * \param aInitialColor
      * \return the colornumber
      */
      virtual uint32_t getUserColor(uint32_t aInitialColor) = 0;
      /**
      * \brief Gets the current linear units
      * \return
      */
      virtual ICwAPI3DString* get3DLinearUnits() = 0;
      /**
      * \brief Gets the current display units
      * \return
      */
      virtual ICwAPI3DString* get3DLinearDisplayUnits() = 0;
      /**
      * \brief Gets the current angular units
      * \return
      */
      virtual ICwAPI3DString* get3DAngularUnits() = 0;
      /**
      * \brief Gets the current angular display units
      * \return
      */
      virtual ICwAPI3DString* get3DAngularDisplayUnits() = 0;
      /**
      * \brief Gets the current build date
      * \return
      */
      virtual ICwAPI3DString* get3DBuildDate() = 0;
      /**
       * \brief Gets the project elevation
       * \return project elevation
       */
      virtual double getProjectElevation() = 0;
      /**
       * \brief Sets the project elevation
       * \param aElevation project elevation
       */
      virtual void setProjectElevation(double aElevation) = 0;
      virtual void clearErrors() = 0;
      /**
      * \brief
      */
      virtual void pushCheckAndQueryData() = 0;
      /**
      * \brief
      */
      virtual void popCheckAndQueryData() = 0;
      /**
      * \brief
      */
      virtual void changeCheckAndQueryDataToNoQueries() = 0;
      /**
      * \brief
      */
      virtual void changeCheckAndQueryDataToQueries() = 0;
      /**
      * \brief
      * \return
      */
      virtual bool isDirectInfoEnabled() = 0;
      /**
      * \brief
      */
      virtual void enableDirectInfo() = 0;
      /**
      * \brief
      */
      virtual void disableDirectInfo() = 0;
      /**
      * \brief
      * \param aFilePath
      */
      virtual void loadAttributeDisplaySettings(const character* aFilePath) = 0;
      /**
      * \brief
      * \return
      */
      virtual ICwAPI3DString* getProjectDescription() = 0;
      /**
      * \brief
      * \param aDescription
      */
      virtual void setProjectDescription(const character* aDescription) = 0;
      /**
      * \brief
      */
      virtual void startProjectDataDialog() = 0;
      /**
      * \brief
      */
      virtual void initLxSDK() = 0;
      /**
      * \brief
      * \param aFilePath
      * \param aElements
      */
      virtual void loadElementAttributeDisplaySettings(const character* aFilePath, ICwAPI3DElementIDList* aElements) = 0;
      /**
      * \brief
      * \return
      */
      virtual double getGlobalXOffset() = 0;
      /**
      * \brief
      * \param aOffset
      */
      virtual void setGlobalXOffset(double aOffset) = 0;
      /**
      * \brief
      * \return
      */
      virtual double getGlobalYOffset() = 0;
      /**
      * \brief
      * \param aOffset
      */
      virtual void setGlobalYOffset(double aOffset) = 0;
      /**
      * \brief
      * \return
      */
      virtual double getGlobalZOffset() = 0;
      /**
      * \brief
      * \param aOffset
      */
      virtual void setGlobalZOffset(double aOffset) = 0;
      /**
      * \brief
      */
      virtual void showNorthArrow() = 0;
      /**
      * \brief
      */
      virtual void hideNorthArrow() = 0;
      /**
      * \brief
      * \return
      */
      virtual bool isNorthArrowVisible() = 0;
      /**
      * \brief
      * \return
      */
      virtual double getNorthAngle() = 0;
      /**
      * \brief
      * \param aNorthAngle
      */
      virtual void setNorthAngle(double aNorthAngle) = 0;
      /**
      * \brief
      * \param aFilter
      * \param aPath
      * \return
      */
      virtual ICwAPI3DString* getUserFileFromDialogInPath(const character* aFilter, const character* aPath) = 0;
      /**
      * \brief
      * \param aFilter
      * \param aPath
      * \return
      */
      virtual ICwAPI3DString* getNewUserFileFromDialogInPath(const character* aFilter, const character* aPath) = 0;
      /**
      * \brief
      * \param aValue
      * \return
      */
      virtual double getMillimetreFromImperialString(const character* aValue) = 0;
      /**
      * \brief
      * \param aValue
      * \return
      */
      virtual ICwAPI3DString* getImperialStringFromMillimetre(double aValue) = 0;
      /**
      * \brief
      */
      virtual void enableUpdateVariant() = 0;
      /**
      * \brief
      */
      virtual void disableUpdateVariant() = 0;
      /**
      * \brief
      * \return
      */
      virtual ICwAPI3DString* getPluginPath() = 0;

      virtual ICwAPI3DVertexList* getUserPoints() = 0;
      virtual ICwAPI3DVertexList* getUserPointsWithCount(uint64_t aCount) = 0;

      virtual ICwAPI3DString* getUserCatalogPath() = 0;

      virtual ICwAPI3DString* getUserPathFromDialog() = 0;
      virtual ICwAPI3DString* getUserPathFromDialogInPath(const character* aPath) = 0;
      virtual void executeShortcut(shortcutKeyModifier aShortcutKeyModifier, shortcutKey aShortcutKey) = 0;

      /**
       * \brief close cadwork saved
       * \return 
       */
      virtual void closeCadworkDocumentSaved() const = 0;

      /**
       * \brief close cadwork unsaved
       * \return 
       */
      virtual void closeCadworkDocumentUnsaved() const = 0;

      /**
       * \brief Gets the use of global coordinates
       * \return use of global coordinates
       */
      virtual bool getUseOfGlobalCoordinates() = 0;

      /**
       * \brief Sets the use of global coordinates
       * \param aUseOfGlobalCoordinates use of global coordinates
       */
      virtual void setUseOfGlobalCoordinates(bool aUseOfGlobalCoordinates) = 0;

      /**
       * \brief Gets the global origin
       * \return global origin
       */
      virtual CwAPI3D::vector3D getGlobalOrigin() = 0;

      /**
       * \brief Sets the global origin
       * \param aGlobalOrigin global origin
       */
      virtual void setGlobalOrigin(const CwAPI3D::vector3D aGlobalOrigin) = 0;

      /**
       * \brief get snapshot from screen
       * \param aFormat File format PNG, JPEG
       * \param aQuality The quality factor must be in the range 0 to 100 or -1.
       * Specify 0 to obtain small compressed files, 100 for large uncompressed files, and -1 (the default) to use the default settings
       * \param aWhiteBackground set background color either to white or black
       * \return snapshot 
       */
      virtual ICwAPI3DString* createSnapshot(const character* aFormat = L"PNG", int aQuality = -1, bool const aWhiteBackground = true) = 0;
      /**
       * \brief Runs a 3D external program from a custom file path
       * \param aFilePath external program file path
       * \return external program return
       */
      virtual bool runExternalProgramFromCustomDirectory(const character* aFilePath) = 0;
      /**
       * \brief Gets the Point that represents the upper-left corner of the Form in screen coordinates.
       * \return The Point that represents the upper-left corner of the Form in screen coordinates.
       */
      virtual std::tuple<double, double> get3dGuiUpperLeftScreenCoordinates() const = 0;
    };
  }
}
