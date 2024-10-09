// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DStringList.h"
#include "ICwAPI3DVertexList.h"

#ifdef _WIN32
#include <windows.h>
#else
typedef HANDLE HWND;
typedef PVOID HANDLE;
typedef void* PVOID;
#endif

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DUtilityController
    {
    public:
      /// @brief Gets the last error
      /// @param aErrorCode error code
      /// @return error string
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the 3D version
      /// @return 3D version
      virtual uint32_t get3DVersion() = 0;

      /// @brief Gets the 3D build
      /// @return 3D build
      virtual uint32_t get3DBuild() = 0;

      /// @brief Gets the 3D HWND
      /// @return 3D HWND
      virtual HWND get3DHWND() = 0;

      /// @brief Gets the 3D file name
      /// @return 3D file name
      virtual ICwAPI3DString* get3DFileName() = 0;

      /// @brief Gets the 3D file path
      /// @return 3D file path
      virtual ICwAPI3DString* get3DFilePath() = 0;

      /// @brief Sets the project data
      /// @param aID project data ID
      /// @param aData project data
      virtual void setProjectData(const character* aID, const character* aData) = 0;

      /// @brief Gets the project data
      /// @param aID project data ID
      /// @return project data
      virtual ICwAPI3DString* getProjectData(const character* aID) = 0;

      /// @brief Prints an error
      /// @param aMessage error message
      virtual void printError(const character* aMessage) = 0;

      /// @brief Gets the 3D language
      /// @return 3D language
      virtual ICwAPI3DString* getLanguage() = 0;

      /// @brief Prints a message
      /// @param aMessage message
      /// @param aRow row
      /// @param aColumn column
      virtual void printMessage(const character* aMessage, uint32_t aRow = 1, uint32_t aColumn = 1) = 0;

      /// @brief Prompts the user for an integer
      /// @param aMessage message
      /// @return user integer
      virtual int32_t getUserInt(const character* aMessage) = 0;

      /// @brief Prompts the user for a double
      /// @param aMessage message
      /// @return user double
      virtual double getUserDouble(const character* aMessage) = 0;

      /// @brief Prompts the user for a boolean
      /// @param aMessage message
      /// @param aDefaultYes default value
      /// @return user boolean
      virtual bool getUserBool(const character* aMessage, bool aDefaultYes = true) = 0;

      /// @brief Prompts the user for a string
      /// @param aMessage message
      /// @return user string
      virtual ICwAPI3DString* getUserString(const character* aMessage) = 0;

      /// @brief Gets the project name
      /// @return project name
      virtual ICwAPI3DString* getProjectName() = 0;

      /// @brief Sets the project name
      /// @param aProjectName project name
      virtual void setProjectName(const character* aProjectName) = 0;

      /// @brief Gets the project number
      /// @return project number
      virtual ICwAPI3DString* getProjectNumber() = 0;

      /// @brief Sets the project number
      /// @param aProjectNumber project number
      virtual void setProjectNumber(const character* aProjectNumber) = 0;

      /// @brief Sets the project part
      /// @return project part
      virtual ICwAPI3DString* getProjectPart() = 0;

      /// @brief Sets the project part
      /// @param aProjectPart project part
      virtual void setProjectPart(const character* aProjectPart) = 0;

      /// @brief Gets the project architect
      /// @return project architect
      virtual ICwAPI3DString* getProjectArchitect() = 0;

      /// @brief Sets the project architect
      /// @param aProjectArchitect project architect
      virtual void setProjectArchitect(const character* aProjectArchitect) = 0;

      /// @brief Gets the project customer
      /// @return project customer
      virtual ICwAPI3DString* getProjectCustomer() = 0;

      /// @brief Sets the project customer
      /// @param aProjectCustomer project customer
      virtual void setProjectCustomer(const character* aProjectCustomer) = 0;

      /// @brief Gets the project designer
      /// @return project designer
      virtual ICwAPI3DString* getProjectDesigner() = 0;

      /// @brief Sets the project designer
      /// @param aProjectDesigner project designer
      virtual void setProjectDesigner(const character* aProjectDesigner) = 0;

      /// @brief Gets the project deadline
      /// @return project deadline
      virtual ICwAPI3DString* getProjectDeadline() = 0;

      /// @brief Sets the project deadline
      /// @param aProjectDeadline project deadline
      virtual void setProjectDeadline(const character* aProjectDeadline) = 0;

      /// @brief Gets the project user attribute
      /// @param aNumber project user attribute number
      /// @return project user attribute
      virtual ICwAPI3DString* getProjectUserAttribute(uint32_t aNumber) = 0;

      /// @brief Sets the project user attribute
      /// @param aNumber project user attribute number
      /// @param aUserAttribute project user attribute
      virtual void setProjectUserAttribute(uint32_t aNumber, const character* aUserAttribute) = 0;

      /// @brief Gets the project user attribute name
      /// @param aNumber project user attribute number
      /// @return project user attribute name
      virtual ICwAPI3DString* getProjectUserAttributeName(uint32_t aNumber) = 0;

      /// @brief Sets the project user attribute name
      /// @param aNumber project user attribute number
      /// @param aUserAttributeName project user attribute name
      virtual void setProjectUserAttributeName(uint32_t aNumber, const character* aUserAttributeName) = 0;

      /// @brief Gets the project latitude
      /// @return project latitude
      virtual double getProjectLatitude() = 0;

      /// @brief Gets the project longitude
      /// @return project longitude
      virtual double getProjectLongitude() = 0;

      /// @brief Sets the project latitude
      /// @param aLatitude project latitude
      virtual void setProjectLatitude(double aLatitude) = 0;

      /// @brief Sets the project longitude
      /// @param aLongitude project longitude
      virtual void setProjectLongitude(double aLongitude) = 0;

      /// @brief Gets the project address
      /// @return project address
      virtual ICwAPI3DString* getProjectAddress() = 0;

      /// @brief Sets the project address
      /// @param aAddress project address
      virtual void setProjectAddress(const character* aAddress) = 0;

      /// @brief Gets the project postal code
      /// @return project postal code
      virtual ICwAPI3DString* getProjectPostalCode() = 0;

      /// @brief Sets the project postal code
      /// @param aPostalCode project postal code
      virtual void setProjectPostalCode(const character* aPostalCode) = 0;

      /// @brief Gets the project city
      /// @return project city
      virtual ICwAPI3DString* getProjectCity() = 0;

      /// @brief Sets the project city
      /// @param aCity project city
      virtual void setProjectCity(const character* aCity) = 0;

      /// @brief Gets the project country
      /// @return project country
      virtual ICwAPI3DString* getProjectCountry() = 0;

      /// @brief Sets the project country
      /// @param aCountry project country
      virtual void setProjectCountry(const character* aCountry) = 0;

      /// @brief Gets the 3D userprofil path
      /// @return the 3D userprofil path
      virtual ICwAPI3DString* get3DUserprofilPath() = 0;

      /// @brief Gets a file with a dialog
      /// @param aFilter dialog file filter
      /// @return file path
      virtual ICwAPI3DString* getUserFileFromDialog(const character* aFilter) = 0;

      /// @brief Gets the client number
      /// @return client number
      virtual ICwAPI3DString* getClientNumber() = 0;

      /// @brief Gets a point from the user
      /// @return user point
      virtual vector3D getUserPoint() = 0;

      /// @brief Disables automatic display refresh
      virtual void disableAutoDisplayRefresh() = 0;

      /// @brief Enables automatic display refresh
      virtual void enableAutoDisplayRefresh() = 0;

      /// @brief Creates a new GUID
      /// @return GUID
      virtual ICwAPI3DString* createNewGUID() = 0;

      /// @brief Prints a message to the console
      /// @param aMessage message
      virtual void printToConsole(const character* aMessage) = 0;

      /// @brief Exports the screen to an image
      /// @param aFilePath file path
      /// @param aFactor image factor
      virtual void exportScreenToImage(const character* aFilePath, uint32_t aFactor = 1) = 0;

      /// @brief Gets a new file with a dialog
      /// @param aFilter dialog file filter
      /// @return file path
      virtual ICwAPI3DString* getNewUserFileFromDialog(const character* aFilter) = 0;

      /// @brief Sets an API autostart option.
      /// @param aAPIName The name of the API to start.
      /// @param aOption The autostart option to use.
      /// @return The status of the operation.
      virtual uint32_t apiAutostart(const character* aAPIName, uint32_t aOption) = 0;

      /// @brief Enables autostart for a given API.
      /// @param aAPIName The name of the API for which to enable autostart.
      virtual void enableAutostart(const character* aAPIName) = 0;

      /// @brief Disables autostart for a given API.
      /// @param aAPIName The name of the API for which to disable autostart.
      virtual void disableAutostart(const character* aAPIName) = 0;

      /// @brief Checks if autostart is enabled for a given API.
      /// @param aAPIName The name of the API to check.
      /// @return A boolean value indicating whether autostart is enabled (true) or not (false).
      virtual bool checkAutostart(const character* aAPIName) = 0;

      /// @brief Deletes the project data
      /// @param aID project data ID
      virtual void deleteProjectData(const character* aID) = 0;

      /// @brief Runs a 3D external program
      /// @param aName external program name
      /// @return external program return
      virtual bool runExternalProgram(const character* aName) = 0;

      /// @brief Saves the 3D file silently
      virtual void save3DFileSilently() = 0;

      /// @brief Gets the project GUID
      /// @return project GUID
      virtual ICwAPI3DString* getProjectGUID() = 0;

      /// @brief Gets the first part of the licence
      /// @return first part of licence
      virtual ICwAPI3DString* getLicenceFirstPart() = 0;

      /// @brief Gets the second part of the licence
      /// @return second part of licence
      virtual ICwAPI3DString* getLicenceSecondPart() = 0;

      /// @brief Shows a ProgressBar in the CommandBar
      virtual void showProgressBar() = 0;

      /// @brief Updates the ProgressBar with a value
      /// @param aValue between 0 and 100
      virtual void updateProgressBar(int32_t aValue) = 0;

      /// @brief Hides the ProgressBar
      virtual void hideProgressBar() = 0;

      /// @brief Gets a color choosen by the user
      /// @param aInitialColor
      /// @return the colornumber
      virtual uint32_t getUserColor(uint32_t aInitialColor) = 0;

      /// @brief Gets the current linear units
      /// @return
      virtual ICwAPI3DString* get3DLinearUnits() = 0;

      /// @brief Gets the current display units
      /// @return
      virtual ICwAPI3DString* get3DLinearDisplayUnits() = 0;

      /// @brief Gets the current angular units
      /// @return
      virtual ICwAPI3DString* get3DAngularUnits() = 0;

      /// @brief Gets the current angular display units
      /// @return
      virtual ICwAPI3DString* get3DAngularDisplayUnits() = 0;

      /// @brief Gets the current build date
      /// @return
      virtual ICwAPI3DString* get3DBuildDate() = 0;

      /// @brief Gets the project elevation
      /// @return project elevation
      virtual double getProjectElevation() = 0;

      /// @brief Sets the project elevation
      /// @param aElevation project elevation
      virtual void setProjectElevation(double aElevation) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Pushes the current state of check and query data onto a stack.
      virtual void pushCheckAndQueryData() = 0;

      /// @brief Pops the most recent state of check and query data from the stack.
      virtual void popCheckAndQueryData() = 0;

      /// @brief Changes the current state of check and query data to no queries.
      virtual void changeCheckAndQueryDataToNoQueries() = 0;

      /// @brief Changes the current state of check and query data to allow queries.
      virtual void changeCheckAndQueryDataToQueries() = 0;

      /// @brief Checks if Direct Info is enabled.
      /// @return A boolean value indicating whether Direct Info is enabled (true) or not (false).
      virtual bool isDirectInfoEnabled() = 0;

      /// @brief Enables Direct Info.
      virtual void enableDirectInfo() = 0;

      /// @brief Disables Direct Info.
      virtual void disableDirectInfo() = 0;

      /// @brief Loads attribute display settings from a file.
      /// @param aFilePath The path to the file containing the settings.
      virtual void loadAttributeDisplaySettings(const character* aFilePath) = 0;

      /// @brief Gets the project description.
      /// @return A string containing the project description.
      virtual ICwAPI3DString* getProjectDescription() = 0;

      /// @brief Sets the project description.
      /// @param aDescription The new description for the project.
      virtual void setProjectDescription(const character* aDescription) = 0;

      /// @brief Starts the project data dialog.
      virtual void startProjectDataDialog() = 0;

      /// @brief Initializes the LxSDK.
      virtual void initLxSDK() = 0;

      /// @brief Loads element attribute display settings from a file.
      /// @param aFilePath The path to the file containing the settings.
      /// @param aElements The elements for which to load the settings.
      virtual void loadElementAttributeDisplaySettings(const character* aFilePath, ICwAPI3DElementIDList* aElements) = 0;

      /// @brief Gets the global X offset.
      /// @return The global X offset.
      virtual double getGlobalXOffset() = 0;

      /// @brief Sets the global X offset.
      /// @param aOffset The new global X offset.
      virtual void setGlobalXOffset(double aOffset) = 0;

      /// @brief Gets the global Y offset.
      /// @return The global Y offset.
      virtual double getGlobalYOffset() = 0;

      /// @brief Sets the global Y offset.
      /// @param aOffset The new global Y offset.
      virtual void setGlobalYOffset(double aOffset) = 0;

      /// @brief Gets the global Z offset.
      /// @return The global Z offset.
      virtual double getGlobalZOffset() = 0;

      /// @brief Sets the global Z offset.
      /// @param aOffset The new global Z offset.
      virtual void setGlobalZOffset(double aOffset) = 0;

      /// @brief Shows the north arrow on the 3D view.
      virtual void showNorthArrow() = 0;

      /// @brief Hides the north arrow on the 3D view.
      virtual void hideNorthArrow() = 0;

      /// @brief Checks if the north arrow is visible on the 3D view.
      /// @return A boolean value indicating whether the north arrow is visible (true) or not (false).
      virtual bool isNorthArrowVisible() = 0;

      /// @brief Gets the angle of the north direction.
      /// @return The angle of the north direction in degrees.
      virtual double getNorthAngle() = 0;

      /// @brief Sets the angle of the north direction.
      /// @param aNorthAngle The angle of the north direction in degrees.
      virtual void setNorthAngle(double aNorthAngle) = 0;

      /// @brief Gets a user file from a dialog in a specified path.
      /// @param aFilter The filter for the dialog.
      /// @param aPath The path in which to get the user file.
      /// @return A string containing the user file.
      virtual ICwAPI3DString* getUserFileFromDialogInPath(const character* aFilter, const character* aPath) = 0;

      /// @brief Gets a new user file from a dialog in a specified path.
      /// @param aFilter The filter for the dialog.
      /// @param aPath The path in which to get the new user file.
      /// @return A string containing the new user file.
      virtual ICwAPI3DString* getNewUserFileFromDialogInPath(const character* aFilter, const character* aPath) = 0;

      /// @brief Converts an imperial string to millimetres.
      /// @param aValue The imperial string to convert.
      /// @return The value in millimetres.
      virtual double getMillimetreFromImperialString(const character* aValue) = 0;

      /// @brief Converts a value in millimetres to an imperial string.
      /// @param aValue The value in millimetres to convert.
      /// @return The value as an imperial string.
      virtual ICwAPI3DString* getImperialStringFromMillimetre(double aValue) = 0;

      /// @brief Enables the update variant.
      virtual void enableUpdateVariant() = 0;

      /// @brief Disables the update variant.
      virtual void disableUpdateVariant() = 0;

      /// @brief Gets the plugin path.
      /// @return A string containing the plugin path.
      virtual ICwAPI3DString* getPluginPath() = 0;

      /// @brief Gets user points.
      /// @return A list of user points.
      virtual ICwAPI3DVertexList* getUserPoints() = 0;

      /// @brief Gets user points with a specified count.
      /// @param aCount The number of user points to get.
      /// @return A list of user points.
      virtual ICwAPI3DVertexList* getUserPointsWithCount(uint64_t aCount) = 0;

      /// @brief Gets the user catalog path.
      /// @return A string containing the user catalog path.
      virtual ICwAPI3DString* getUserCatalogPath() = 0;

      /// @brief Gets the user path from a dialog.
      /// @return A string containing the user path.
      virtual ICwAPI3DString* getUserPathFromDialog() = 0;

      /// @brief Gets the user path from a dialog in a specified path.
      /// @param aPath The path in which to get the user path.
      /// @return A string containing the user path.
      virtual ICwAPI3DString* getUserPathFromDialogInPath(const character* aPath) = 0;

      /// @brief Executes a shortcut.
      /// @param aShortcutKeyModifier The modifier key for the shortcut.
      /// @param aShortcutKey The key for the shortcut.
      virtual void executeShortcut(shortcutKeyModifier aShortcutKeyModifier, shortcutKey aShortcutKey) = 0;

      /// @brief close cadwork saved
      /// @return
      virtual void closeCadworkDocumentSaved() = 0;

      /// @brief close cadwork unsaved
      /// @return
      virtual void closeCadworkDocumentUnsaved() = 0;

      /// @brief Gets the use of global coordinates
      /// @return use of global coordinates
      virtual bool getUseOfGlobalCoordinates() = 0;

      /// @brief Sets the use of global coordinates
      /// @param aUseOfGlobalCoordinates use of global coordinates
      virtual void setUseOfGlobalCoordinates(bool aUseOfGlobalCoordinates) = 0;

      /// @brief Gets the global origin
      /// @return global origin
      virtual vector3D getGlobalOrigin() = 0;

      /// @brief Sets the global origin
      /// @param aGlobalOrigin global origin
      virtual void setGlobalOrigin(CwAPI3D::vector3D aGlobalOrigin) = 0;

      //      /// @brief get snapshot from screen
      //      /// @param aFormat file format png or jpeg
      //      /// @param aQuality quality factor must be in the range 0 to 100 or -1
      //      /// @param aWhiteBackground set background color either to white or black
      //      /// @return snapshot
      virtual ICwAPI3DString* createSnapshot(const character* aFormat = L"PNG", int aQuality = -1, bool aWhiteBackground = true) = 0;

      /// @brief Runs a 3D external program from a custom file path
      /// @param aFilePath external program file path
      /// @return external program return
      virtual bool runExternalProgramFromCustomDirectory(const character* aFilePath) = 0;

      /// @brief Get the geometry of 3d main window
      /// @return windowGeometry
      virtual windowGeometry get3dMainWindowGeometry() = 0;

      /// @brief Gets all keys for project data
      /// @return list of keys
      virtual ICwAPI3DStringList* getProjectDataKeys() = 0;

      /// @brief Prompts the user for an integer with a default value
      /// @param aMessage message
      /// @param aDefaultValue default value
      /// @return user integer
      virtual int32_t getUserIntWithDefaultValue(const character* aMessage, int32_t aDefaultValue) = 0;

      /// @brief Prompts the user for a double with a default value
      /// @param aMessage message
      /// @param aDefaultValue default value
      /// @return user double
      virtual double getUserDoubleWithDefaultValue(const character* aMessage, double aDefaultValue) = 0;

      /// @brief Prompts the user for a string with a default value
      /// @param aMessage message
      /// @param aDefaultValue default value
      /// @return user string
      virtual ICwAPI3DString* getUserStringWithDefaultValue(const character* aMessage, const character* aDefaultValue) = 0;
    };
  }
}
