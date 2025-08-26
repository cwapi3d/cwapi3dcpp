/// @file
/// Copyright (C) 2016 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         24.0
/// @author        Paquet
/// @date          2016-12-15

#pragma once

#include "ICwAPI3DElementIDList.h"
#include "ICwAPI3DString.h"
#include "ICwAPI3DVertexList.h"
#include "ICwAPI3DStringList.h"

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
    /// @interface ICwAPI3DUtilityController
    class ICwAPI3DUtilityController
    {
    public:
      /// Gets the last error.
      /// @param[out] aErrorCode [int32_t*] The error code.
      /// @return [@ref ICwAPI3DString*] The error string.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the 3D version.
      /// @return [uint32_t] The 3D version.
      virtual uint32_t get3DVersion() = 0;

      /// @brief Gets the 3D build.
      /// @return [uint32_t] The 3D build.
      virtual uint32_t get3DBuild() = 0;

      /// @brief Gets the 3D HWND.
      /// @return [@ref HWND] The 3D HWND.
      virtual HWND get3DHWND() = 0;

      /// @brief Gets the 3D file name.
      /// @return [@ref ICwAPI3DString*] The 3D file name.
      virtual ICwAPI3DString* get3DFileName() = 0;

      /// @brief Gets the 3D file path.
      /// @return [@ref ICwAPI3DString*] The 3D file path.
      virtual ICwAPI3DString* get3DFilePath() = 0;

      /// @brief Sets the project data.
      /// @param[in] aProjectDataId [const @ref character*] The project data id.
      /// @param[in] aData [const @ref character*] The data to set.
      virtual void setProjectData(const character* aProjectDataId, const character* aData) = 0;

      /// @brief Gets the project data.
      /// @param[in] aProjectDataId [const @ref character*] The project data id.
      /// @return [@ref ICwAPI3DString*] The project data.
      virtual ICwAPI3DString* getProjectData(const character* aProjectDataId) = 0;

      /// @brief Prints an error.
      /// @param[in] aMessage [const @ref character*] The error message.
      virtual void printError(const character* aMessage) = 0;

      /// @brief Gets the 3D language.
      /// @return [@ref ICwAPI3DString*] The language.
      virtual ICwAPI3DString* getLanguage() = 0;

      /// @brief Prints a message.
      /// @param[in] aMessage [const @ref character*] The message to print.
      /// @param[in] aRow [uint32_t] The row to print the message in.
      /// @param[in] aColumn [uint32_t] The column to print the message in.
      virtual void printMessage(const character* aMessage, uint32_t aRow = 1, uint32_t aColumn = 1) = 0;

      /// @brief Prompts the user for an integer.
      /// @param[in] aMessage [const @ref character*] The message to display.
      /// @return [int32_t] The user input integer.
      virtual int32_t getUserInt(const character* aMessage) = 0;

      /// @brief Prompts the user for a double.
      /// @param[in] aMessage [const @ref character*] The message to display.
      /// @return [double] The user input double.
      virtual double getUserDouble(const character* aMessage) = 0;

      /// @brief Prompts the user for a boolean.
      /// @param[in] aMessage [const @ref character*] The message to display.
      /// @param[in] aDefaultYes [bool] The default value, True by default.
      /// @return [bool] The user input boolean.
      virtual bool getUserBool(const character* aMessage, bool aDefaultYes = true) = 0;

      /// @brief Prompts the user for a string.
      /// @param[in] aMessage [const @ref character*] The message to display.
      /// @return [@ref ICwAPI3DString*] The user input string.
      virtual ICwAPI3DString* getUserString(const character* aMessage) = 0;

      /// @brief Gets the project name.
      /// @return [@ref ICwAPI3DString*] The project name.
      virtual ICwAPI3DString* getProjectName() = 0;

      /// @brief Sets the project name.
      /// @param[in] aProjectName [const @ref character*] The project name.
      virtual void setProjectName(const character* aProjectName) = 0;

      /// @brief Gets the project number.
      /// @return [@ref ICwAPI3DString*] The project number.
      virtual ICwAPI3DString* getProjectNumber() = 0;

      /// @brief Sets the project number.
      /// @param[in] aProjectNumber [const @ref character*] The project number.
      virtual void setProjectNumber(const character* aProjectNumber) = 0;

      /// @brief Sets the project part.
      /// @return [@ref ICwAPI3DString*] The project part.
      virtual ICwAPI3DString* getProjectPart() = 0;

      /// @brief Sets the project part.
      /// @param[in] aProjectPart [const @ref character*] The project part.
      virtual void setProjectPart(const character* aProjectPart) = 0;

      /// @brief Gets the project architect.
      /// @return [@ref ICwAPI3DString*] The project architect.
      virtual ICwAPI3DString* getProjectArchitect() = 0;

      /// @brief Sets the project architect.
      /// @param[in] aProjectArchitect [const @ref character*] The project architect.
      virtual void setProjectArchitect(const character* aProjectArchitect) = 0;

      /// @brief Gets the project customer.
      /// @return [@ref ICwAPI3DString*] The project customer.
      virtual ICwAPI3DString* getProjectCustomer() = 0;

      /// @brief Sets the project customer.
      /// @param[in] aProjectCustomer [const @ref character*] The project customer.
      virtual void setProjectCustomer(const character* aProjectCustomer) = 0;

      /// @brief Gets the project designer.
      /// @return [@ref ICwAPI3DString*] The project designer.
      virtual ICwAPI3DString* getProjectDesigner() = 0;

      /// @brief Sets the project designer.
      /// @param[in] aProjectDesigner [const @ref character*] The project designer.
      virtual void setProjectDesigner(const character* aProjectDesigner) = 0;

      /// @brief Gets the project deadline.
      /// @return [@ref ICwAPI3DString*] The project deadline.
      virtual ICwAPI3DString* getProjectDeadline() = 0;

      /// @brief Sets the project deadline.
      /// @param[in] aProjectDeadline [const @ref character*] The project deadline.
      virtual void setProjectDeadline(const character* aProjectDeadline) = 0;

      /// @brief Gets the project user attribute.
      /// @param[in] aNumber [uint32_t] The project user attribute number.
      /// @return [@ref ICwAPI3DString*] The project user attribute.
      virtual ICwAPI3DString* getProjectUserAttribute(uint32_t aNumber) = 0;

      /// @brief Sets the project user attribute.
      /// @param[in] aNumber [uint32_t] The project user attribute number.
      /// @param[in] aUserAttribute [const @ref character*] The project user attribute.
      virtual void setProjectUserAttribute(uint32_t aNumber, const character* aUserAttribute) = 0;

      /// @brief Gets the project user attribute name.
      /// @param[in] aNumber [uint32_t] The project user attribute number.
      /// @return [@ref ICwAPI3DString*] The project user attribute name.
      virtual ICwAPI3DString* getProjectUserAttributeName(uint32_t aNumber) = 0;

      /// @brief Sets the project user attribute name.
      /// @param[in] aNumber [uint32_t] The project user attribute number.
      /// @param[in] aUserAttributeName [const @ref character*] The project user attribute name.
      virtual void setProjectUserAttributeName(uint32_t aNumber, const character* aUserAttributeName) = 0;

      /// @brief Gets the project latitude.
      /// @return [double] The project latitude.
      virtual double getProjectLatitude() = 0;

      /// @brief Gets the project longitude.
      /// @return [double] The project longitude.
      virtual double getProjectLongitude() = 0;

      /// @brief Sets the project latitude.
      /// @param[in] aLatitude [double] The project latitude.
      virtual void setProjectLatitude(double aLatitude) = 0;

      /// @brief Sets the project longitude.
      /// @param[in] aLongitude [double] The project longitude.
      virtual void setProjectLongitude(double aLongitude) = 0;

      /// @brief Gets the project address.
      /// @return [@ref ICwAPI3DString*] The project address.
      virtual ICwAPI3DString* getProjectAddress() = 0;

      /// @brief Sets the project address.
      /// @param[in] aAddress [const @ref character*] The project address.
      virtual void setProjectAddress(const character* aAddress) = 0;

      /// @brief Gets the project postal code.
      /// @return [@ref ICwAPI3DString*] The project postal code.
      virtual ICwAPI3DString* getProjectPostalCode() = 0;

      /// @brief Sets the project postal code.
      /// @param[in] aPostalCode [const @ref character*] The project postal code.
      virtual void setProjectPostalCode(const character* aPostalCode) = 0;

      /// @brief Gets the project city.
      /// @return [@ref ICwAPI3DString*] The project city.
      virtual ICwAPI3DString* getProjectCity() = 0;

      /// @brief Sets the project city.
      /// @param[in] aCity [const @ref character*] The project city.
      virtual void setProjectCity(const character* aCity) = 0;

      /// @brief Gets the project country.
      /// @return [@ref ICwAPI3DString*] The project country.
      virtual ICwAPI3DString* getProjectCountry() = 0;

      /// @brief Sets the project country.
      /// @param[in] aCountry [const @ref character*] The project country.
      virtual void setProjectCountry(const character* aCountry) = 0;

      /// @brief Gets the 3D userprofil path.
      /// @return [@ref ICwAPI3DString*] The 3D userprofil path.
      virtual ICwAPI3DString* get3DUserprofilPath() = 0;

      /// @brief Gets a file with a dialog.
      /// @param[in] aFilter [const @ref character*] The dialog file filter.
      /// @return [@ref ICwAPI3DString*] The file path.
      virtual ICwAPI3DString* getUserFileFromDialog(const character* aFilter) = 0;

      /// @brief Gets the client number.
      /// @return [@ref ICwAPI3DString*] The client number.
      virtual ICwAPI3DString* getClientNumber() = 0;

      /// @brief Gets a point from the user.
      /// @return [@ref vector3D] The user point.
      virtual vector3D getUserPoint() = 0;

      /// @brief Disables automatic display refresh.
      /// This function prevents the display from updating automatically,
      /// which can significantly improve performance during operations that involve multiple changes or computations.
      /// The display will remain static until explicitly refreshed by the user.
      virtual void disableAutoDisplayRefresh() = 0;

      /// @brief Enables automatic display refresh.
      /// This function restores the default behavior where the display updates automatically after each operation. 
      /// Use this function to resume normal display updates after previously disabling them with disable_auto_display_refresh().
      /// It's recommended to call this function after completing operations that required disabled display refreshing.
      /// @note If elements were created while display refresh was disabled, it's important to recreate these elements after enabling the display refresh to ensure they are properly visualized in cadwork.
      /// @par Example:
      /// @code{.cpp}
      ///     aFactory->getUtilityController()->disableAutoDisplayRefresh();  // Disable automatic display refresh
      ///
      ///     // Perform operations that require the display refresh to be off
      ///
      ///     ICwAPI3DElementIDList* yourListOfElements = aFactory->createElementIDList();  // Empty element list
      ///
      ///     aFactory->getUtilityController()->enableAutoDisplayRefresh();   // Re-enable automatic display refresh
      ///     aFactory->getElementController()->recreateElements(yourListOfElements);  // Recreate the elements
      /// @endcode
      virtual void enableAutoDisplayRefresh() = 0;

      /// @brief Creates a new GUID.
      /// @return [@ref ICwAPI3DString*] The new GUID.
      virtual ICwAPI3DString* createNewGUID() = 0;

      /// @brief Prints a message to the console.
      /// @param[in] aMessage [const @ref character*] The message.
      virtual void printToConsole(const character* aMessage) = 0;

      /// @brief Exports the screen to an image.
      /// @param[in] aFilePath [const @ref character*] The file path.
      /// @param[in] aFactor [uint32_t] The image factor.
      virtual void exportScreenToImage(const character* aFilePath, uint32_t aFactor = 1) = 0;

      /// @brief Gets a new file with a dialog.
      /// @param[in] aFilter [const @ref character*] The dialog file filter.
      /// @return [@ref ICwAPI3DString*] The file path.
      virtual ICwAPI3DString* getNewUserFileFromDialog(const character* aFilter) = 0;

      /// @brief Sets an API autostart option.
      /// @param[in] aAPIName [const @ref character*] The name of the API to start.
      /// @param[in] aOption [uint32_t] The autostart option to use.
      ///                               - -1: Checks if API is configured for autostart without making changes. Returns 1 if API is found, 0 if not, or -1 in case of errors.
      ///                               - 1: Enables autostart for the specified API.
      ///                               - 0: Disables autostart for the specified API.
      ///                               // TODO check for the uint value
      /// @return [uint32_t] The status of the operation.
      /// @par Example:
      /// @code{.cpp}
      ///    aFactory->getUtilityController()->apiAutostart(L"my_api", 1);   // Activer l'autostart
      ///    aFactory->getUtilityController()->apiAutostart(L"my_api", 0);  // Désactiver l'autostart
      ///    uint32_t isEnabled = aFactory->getUtilityController()->apiAutostart(L"my_api", static_cast<uint32_t>(-1));  // Lire l'état actuel
      /// @endcode
      virtual uint32_t apiAutostart(const character* aAPIName, uint32_t aOption) = 0;

      /// @brief Enables autostart for a given API.
      /// @param[in] aAPIName [const @ref character*] The name of the API for which to enable autostart.
      virtual void enableAutostart(const character* aAPIName) = 0;

      /// @brief Disables autostart for a given API.
      /// @param[in] aAPIName [const @ref character*] The name of the API for which to disable autostart.
      virtual void disableAutostart(const character* aAPIName) = 0;

      /// @brief Checks if autostart is enabled for a given API.
      /// @param[in] aAPIName [const @ref character*] The name of the API to check.
      /// @return [bool] True if autostart is enabled, false otherwise.
      virtual bool checkAutostart(const character* aAPIName) = 0;

      /// @brief Deletes the project data.
      /// @param[in] aProjectDataId [const @ref character*] The project data id.
      virtual void deleteProjectData(const character* aProjectDataId) = 0;

      /// @brief Runs a 3D external program.
      /// @param[in] aName [const @ref character*] The external program name.
      /// @return [bool] False if the program could not be run, true otherwise.
      virtual bool runExternalProgram(const character* aName) = 0;

      /// @brief Saves the 3D file silently.
      virtual void save3DFileSilently() = 0;

      /// @brief Gets the project GUID.
      /// @return [@ref ICwAPI3DString*] The project GUID.
      virtual ICwAPI3DString* getProjectGUID() = 0;

      /// @brief Gets the first part of the licence.
      /// @return [@ref ICwAPI3DString*] The first part of the licence.
      virtual ICwAPI3DString* getLicenceFirstPart() = 0;

      /// @brief Gets the second part of the licence.
      /// @return [@ref ICwAPI3DString*] The second part of the licence.
      virtual ICwAPI3DString* getLicenceSecondPart() = 0;

      /// @brief Shows a ProgressBar in the CommandBar.
      virtual void showProgressBar() = 0;

      /// @brief Updates the ProgressBar with a value.
      /// @param[in] aValue [int32_t] A value between 0 and 100.
      virtual void updateProgressBar(int32_t aValue) = 0;

      /// @brief Hides the ProgressBar.
      virtual void hideProgressBar() = 0;

      /// @brief Gets a color choosen by the user.
      /// @param[in] aInitialColor [uint32_t] The initial color.
      /// @return [uint32_t] The color number.
      virtual uint32_t getUserColor(uint32_t aInitialColor) = 0;

      /// @brief Gets the current linear units.
      /// @return [@ref ICwAPI3DString*] The current linear units.
      virtual ICwAPI3DString* get3DLinearUnits() = 0;

      /// @brief Gets the current display units.
      /// @return [@ref ICwAPI3DString*] The current display units.
      virtual ICwAPI3DString* get3DLinearDisplayUnits() = 0;

      /// @brief Gets the current angular units.
      /// @return [@ref ICwAPI3DString*] The current angular units.
      virtual ICwAPI3DString* get3DAngularUnits() = 0;

      /// @brief Gets the current angular display units.
      /// @return [@ref ICwAPI3DString*] The current angular display units.
      virtual ICwAPI3DString* get3DAngularDisplayUnits() = 0;

      /// @brief Gets the current build date.
      /// @return [@ref ICwAPI3DString*] The current build date.
      virtual ICwAPI3DString* get3DBuildDate() = 0;

      /// @brief Gets the project elevation.
      /// @return [double] The project elevation.
      virtual double getProjectElevation() = 0;

      /// @brief Sets the project elevation.
      /// @param[in] aElevation [double] The project elevation.
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
      /// @return [bool] True if Direct Info is enabled, false otherwise.
      virtual bool isDirectInfoEnabled() = 0;

      /// @brief Enables Direct Info.
      virtual void enableDirectInfo() = 0;

      /// @brief Disables Direct Info.
      virtual void disableDirectInfo() = 0;

      /// @brief Loads attribute display settings from a file.
      /// @param[in] aFilePath [const @ref character*] The path to the file containing the settings.
      virtual void loadAttributeDisplaySettings(const character* aFilePath) = 0;

      /// @brief Gets the project description.
      /// @return [@ref ICwAPI3DString*] A string containing the project description.
      virtual ICwAPI3DString* getProjectDescription() = 0;

      /// @brief Sets the project description.
      /// @param[in] aDescription [const @ref character*] The new description for the project.
      virtual void setProjectDescription(const character* aDescription) = 0;

      /// @brief Starts the project data dialog.
      virtual void startProjectDataDialog() = 0;

      /// @brief Initializes the LxSDK.
      virtual void initLxSDK() = 0;

      /// @brief Loads element attribute display settings from a file.
      /// @param[in] aFilePath [const @ref character*] The path to the file containing the settings.
      /// @param[in] aElementIdList [@ref ICwAPI3DElementIDList*] The element list for which to load the settings.
      virtual void loadElementAttributeDisplaySettings(const character* aFilePath, ICwAPI3DElementIDList* aElementIdList) = 0;

      /// @brief Gets the global X offset.
      /// @return [double] The global X offset.
      virtual double getGlobalXOffset() = 0;

      /// @brief Sets the global X offset.
      /// @param[in] aOffset [double] The new global X offset.
      virtual void setGlobalXOffset(double aOffset) = 0;

      /// @brief Gets the global Y offset.
      /// @return [double] The global Y offset.
      virtual double getGlobalYOffset() = 0;

      /// @brief Sets the global Y offset.
      /// @param[in] aOffset [double] The new global Y offset.
      virtual void setGlobalYOffset(double aOffset) = 0;

      /// @brief Gets the global Z offset.
      /// @return [double] The global Z offset.
      virtual double getGlobalZOffset() = 0;

      /// @brief Sets the global Z offset.
      /// @param[in] aOffset [double] The new global Z offset.
      virtual void setGlobalZOffset(double aOffset) = 0;

      /// @brief Shows the north arrow on the 3D view.
      virtual void showNorthArrow() = 0;

      /// @brief Hides the north arrow on the 3D view.
      virtual void hideNorthArrow() = 0;

      /// @brief Checks if the north arrow is visible on the 3D view.
      /// @return [bool] True if the north arrow is visible, false otherwise.
      virtual bool isNorthArrowVisible() = 0;

      /// @brief Gets the angle of the north direction.
      /// @return [double] The angle of the north direction in degrees.
      virtual double getNorthAngle() = 0;

      /// @brief Sets the angle of the north direction.
      /// @param[in] aNorthAngle [double] The angle of the north direction in degrees.
      virtual void setNorthAngle(double aNorthAngle) = 0;

      /// @brief Gets a user file from a dialog in a specified path.
      /// @param[in] aFilter [const @ref character*] The filter for the dialog.
      /// @param[in] aPath [const @ref character*] The path in which to get the user file.
      /// @return [@ref ICwAPI3DString*] A string containing the user file.
      virtual ICwAPI3DString* getUserFileFromDialogInPath(const character* aFilter, const character* aPath) = 0;

      /// @brief Gets a new user file from a dialog in a specified path.
      /// @param[in] aFilter [const @ref character*] The filter for the dialog.
      /// @param[in] aPath [const @ref character*] The path in which to get the new user file.
      /// @return [@ref ICwAPI3DString*] A string containing the new user file.
      virtual ICwAPI3DString* getNewUserFileFromDialogInPath(const character* aFilter, const character* aPath) = 0;

      /// @brief Converts an imperial string to millimetres.
      /// @param[in] aValue [const @ref character*] The imperial string to convert.
      /// @return [double] The value in millimetres.
      virtual double getMillimetreFromImperialString(const character* aValue) = 0;

      /// @brief Converts a value in millimetres to an imperial string.
      /// @param[in] aValue [double] The value in millimetres to convert.
      /// @return [@ref ICwAPI3DString*] The value as an imperial string.
      virtual ICwAPI3DString* getImperialStringFromMillimetre(double aValue) = 0;

      /// @brief Enables the update variant.
      virtual void enableUpdateVariant() = 0;

      /// @brief Disables the update variant.
      virtual void disableUpdateVariant() = 0;

      /// @brief Gets the plugin path.
      /// @return [@ref ICwAPI3DString*] A string containing the plugin path.
      virtual ICwAPI3DString* getPluginPath() = 0;

      /// @brief Gets user points.
      /// @return [@ref ICwAPI3DVertexList*] A list of user points.
      virtual ICwAPI3DVertexList* getUserPoints() = 0;

      /// @brief Gets user points with a specified count.
      /// @param[in] aCount [uint64_t] The number of user points to get.
      /// @return [@ref ICwAPI3DVertexList*] A list of user points.
      virtual ICwAPI3DVertexList* getUserPointsWithCount(uint64_t aCount) = 0;

      /// @brief Gets the user catalog path.
      /// @return [@ref ICwAPI3DString*] A string containing the user catalog path.
      virtual ICwAPI3DString* getUserCatalogPath() = 0;

      /// @brief Gets the user path from a dialog.
      /// @return [@ref ICwAPI3DString*] A string containing the user path.
      virtual ICwAPI3DString* getUserPathFromDialog() = 0;

      /// @brief Gets the user path from a dialog in a specified path.
      /// @param[in] aPath [const @ref character*] The path in which to get the user path.
      /// @return [@ref ICwAPI3DString*] A string containing the user path.
      virtual ICwAPI3DString* getUserPathFromDialogInPath(const character* aPath) = 0;

      /// @brief Executes a shortcut.
      /// @param[in] aShortcutKeyModifier [@ref shortcutKeyModifier] The modifier key for the shortcut.
      /// @param[in] aShortcutKey [@ref shortcutKey] The key for the shortcut.
      virtual void executeShortcut(shortcutKeyModifier aShortcutKeyModifier, shortcutKey aShortcutKey) = 0;

      /// @brief close cadwork saved.
      virtual void closeCadworkDocumentSaved() = 0;

      /// @brief close cadwork unsaved.
      virtual void closeCadworkDocumentUnsaved() = 0;

      /// @brief Gets the use of global coordinates.
      /// @return [bool] True if global coordinates are used, false otherwise.
      virtual bool getUseOfGlobalCoordinates() = 0;

      /// @brief Sets the use of global coordinates.
      /// @param[in] aUseOfGlobalCoordinates [bool] True to use global coordinates, false otherwise.
      virtual void setUseOfGlobalCoordinates(bool aUseOfGlobalCoordinates) = 0;

      /// @brief Gets the global origin.
      /// @return [@ref vector3D] The global origin.
      virtual vector3D getGlobalOrigin() = 0;

      /// @brief Sets the global origin.
      /// @param[in] aGlobalOrigin [@ref vector3D] The global origin.
      virtual void setGlobalOrigin(CwAPI3D::vector3D aGlobalOrigin) = 0;

      /// @brief Get snapshot from screen.
      /// @param[in] aFormat [const @ref character*] File format PNG, JPEG.
      /// @param[in] aQuality [int] The quality factor must be in the range 0 to 100 or -1.
      ///                            - 0 to obtain small compressed files.
      ///                            - 100 for large uncompressed files.
      ///                            - -1 (the default) to use the default settings.
      /// @param[in] aWhiteBackground [bool] True to use a white background, false for a transparent background.
      /// @return [@ref ICwAPI3DString*] The snapshot as a string.
      virtual ICwAPI3DString* createSnapshot(const character* aFormat = L"PNG", int aQuality = -1, bool aWhiteBackground = true) = 0;

      /// @brief Runs a 3D external program from a custom directory.
      /// @param[in] aFilePath [const @ref character*] The external program file path.
      /// @return [bool] False if error, true otherwise.
      virtual bool runExternalProgramFromCustomDirectory(const character* aFilePath) = 0;

      /// @brief Get the geometry of 3d main window.
      /// @return [@ref windowGeometry] The geometry of the 3D main window.
      virtual windowGeometry get3dMainWindowGeometry() = 0;

      /// @brief Gets all keys for project data.
      /// @return [@ref ICwAPI3DStringList*] The list of project data keys.
      virtual ICwAPI3DStringList* getProjectDataKeys() = 0;

      /// @brief Prompts the user for an integer with a default value.
      /// @param[in] aMessage [const @ref character*] The message to display.
      /// @param[in] aDefaultValue [int32_t] The default value.
      /// @return [int32_t] The user integer.
      virtual int32_t getUserIntWithDefaultValue(const character* aMessage, int32_t aDefaultValue) = 0;

      /// @brief Prompts the user for a double with a default value.
      /// @param[in] aMessage [const @ref character*] The message to display.
      /// @param[in] aDefaultValue [double] The default value.
      /// @return [double] The user double.
      virtual double getUserDoubleWithDefaultValue(const character* aMessage, double aDefaultValue) = 0;

      /// @brief Prompts the user for a string with a default value.
      /// @param[in] aMessage [const @ref character*] The message to display.
      /// @param[in] aDefaultValue [const @ref character*] The default value.
      /// @return [@ref ICwAPI3DString*] The user string.
      virtual ICwAPI3DString* getUserStringWithDefaultValue(const character* aMessage, const character* aDefaultValue) = 0;

      /// @brief Gets the 3D version name.
      /// @return [@ref ICwAPI3DString*] The 3D version name.
      virtual ICwAPI3DString* get3DVersionName() = 0;

      /// @brief Redirects output from Python's print function to the cadwork logger.
      /// This function is used to redirect the output of the Python interpreter to the logger. This is useful for debugging and logging purposes.
      virtual void redirectPythonOutputToLogger() = 0;
    };
  }
}
