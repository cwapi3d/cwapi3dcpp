/// @file
/// Copyright (C) 2016 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         25.0
/// @author        Nodurft
/// @date          2018-02-19

#pragma once

#include "ICwAPI3DString.h"
#include "ICwAPI3DEndtypeIDList.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DEndtypeController
    class ICwAPI3DEndtypeController
    {
    public:
      /// @brief Gets the last error message.
      /// @param[out] aErrorCode [int32_t*] A pointer to an integer where the error code will be stored.
      /// @return [@ref ICwAPI3DString*] A string containing the last error message.
      virtual ICwAPI3DString* getLastError(int32_t* aErrorCode) = 0;

      /// @brief Gets the endtype name by endtype id.
      /// @param[in] aEndtypeId [@ref endtypeID] The endtype id.
      /// @return [@ref ICwAPI3DString*] The endtype name.
      /// @par Example:
      /// @code{.cpp}
      /// // Define the endtype ID
      /// const endtypeID endtypeID = 12345;
      ///
      /// // Get the name of the endtype
      /// const character* endtypeName = aFactory.getEndtypeController()->getEndtypeName(endtypeID);
      ///
      /// // Output the result
      /// printf("Endtype name: %s\n", endtypeName);
      /// @endcode
      virtual ICwAPI3DString* getEndtypeName(endtypeID aEndtypeId) = 0;

      /// @brief Gets the endtype id by endtype name.
      /// @param[in] aName [const @ref character*] The endtype name.
      /// @return [@ref endtypeID] The wanted endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// // Retrieve the ID of an existing endtype by its name
      /// const character* endtypeName = L"Tenon_100x50";
      /// const endtypeID endtypeIDValue = aFactory.getEndtypeController()->getEndtypeID(endtypeName);
      ///
      /// // Output the retrieved ID
      /// printf("Endtype ID: %llu\n", endtypeIDValue);
      /// @endcode
      virtual endtypeID getEndtypeID(const character* aName) = 0;

      /// @brief Gets the endtype id of the start face.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref endtypeID] The wanted endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// // Get all identifiable elements
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// // Take the first element
      /// const elementID element = selectedElements->at(0);
      ///
      /// // Get the start endtype ID
      /// const endtypeID startEndtypeID = aFactory.getEndtypeController()->getEndtypeIdStart(element);
      ///
      /// // Output the result
      /// printf("Start endtype ID: %llu\n", startEndtypeID);
      /// @endcode
      virtual endtypeID getEndtypeIdStart(elementID aElementId) = 0;

      /// @brief Gets the endtype id of the end face.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref endtypeID] The wanted endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// // Get all identifiable elements
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// // Take the first element
      /// const elementID element = selectedElements->at(0);
      ///
      /// // Get the end endtype ID for the element
      /// const endtypeID endEndtypeID = aFactory.getEndtypeController()->getEndtypeIdEnd(element);
      ///
      /// // Output the result
      /// printf("End endtype ID: %llu\n", endEndtypeID);
      /// @endcode
      virtual endtypeID getEndtypeIdEnd(elementID aElementId) = 0;

      /// @brief Gets the endtype id of a face with the face number.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aFaceNumber [uint32_t] The face number. 0 <= aFaceNumber < element face count.
      /// @return [@ref endtypeID] The wanted endtype id.
      /// @note Endtypes can only be set on faces that are placed at start or end points. Endtypes cannot be placed on arbitrary faces.
      /// @par Example:
      /// @code{.cpp}
      /// // Get all identifiable elements
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// // Take the first element
      /// const elementID element = selectedElements->at(0);
      ///
      /// // Define the face number
      /// const int faceNumber = 1;
      ///
      /// // Get the facet endtype ID for the specified face
      /// const endtypeID facetEndtypeID = aFactory.getEndtypeController()->getEndtypeIDFac(element, faceNumber);
      ///
      /// // Output the result
      /// printf("Facet endtype ID: %llu\n", facetEndtypeID);
      /// @endcode
      virtual endtypeID getEndtypeIdFac(elementID aElementId, uint32_t aFaceNumber) = 0;

      /// @brief Gets the endtype name of the start face.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The endtype name of the start face.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// const elementID element = selectedElements->at(0);
      /// const character* startName = aFactory.getEndtypeController()->getEndtypeNameStart(element);
      /// printf("Start endtype name: %s\n", startName);
      /// @endcode
      virtual ICwAPI3DString* getEndtypeNameStart(elementID aElementId) = 0;

      /// @brief Gets the endtype name of the end face.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @return [@ref ICwAPI3DString*] The endtype name of the end face.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// const elementID element = selectedElements->at(0);
      /// const character* endName = aFactory.getEndtypeController()->getEndtypeNameEnd(element);
      /// printf("End endtype name: %s\n", endName);
      /// @endcode
      virtual ICwAPI3DString* getEndtypeNameEnd(elementID aElementId) = 0;

      /// @brief Gets the endtype name of the face with a number.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aFaceNumber [uint32_t] The face number. 0 <= aFaceNumber < element face count.
      /// @return [@ref ICwAPI3DString*] The endtype name of the face.
      /// @note Endtypes can only be set on faces that are placed at start or end points. Endtypes cannot be placed on arbitrary faces.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// const elementID element = selectedElements->at(0);
      /// const int faceNumber = 2;
      /// const character* facetName = aFactory.getEndtypeController()->getEndtypeNameFac(element, faceNumber);
      /// printf("Facet endtype name: %s\n", facetName);
      /// @endcode
      virtual ICwAPI3DString* getEndtypeNameFac(elementID aElementId, uint32_t aFaceNumber) = 0;

      /// @brief Sets the endtype to start face by endtype name.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aName [const @ref character*] The endtype name.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// const elementID element = selectedElements->at(0);
      /// const character* endtypeName = L"Tenon_100x50";
      /// aFactory.getEndtypeController()->setEndtypeNameStart(element, endtypeName);
      /// @endcode
      virtual void setEndtypeNameStart(elementID aElementId, const character* aName) = 0;

      /// @brief Sets the endtype to end face by endtype name.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aName [const @ref character*] The endtype name.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// const elementID element = selectedElements->at(0);
      /// const character* endtypeName = L"Mortise_100x50";
      /// aFactory.getEndtypeController()->setEndtypeNameEnd(element, endtypeName);
      /// @endcode
      virtual void setEndtypeNameEnd(elementID aElementId, const character* aName) = 0;

      /// @brief Sets the endtype to a face by endtype name.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aName [const @ref character*] The endtype name.
      /// @param[in] aFaceNumber [uint32_t] The face number. 0 <= aFaceNumber < element face count.
      /// @note Endtypes can only be set on faces that are placed at start or end points. Endtypes cannot be placed on arbitrary faces.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// const elementID element = selectedElements->at(0);
      /// const character* endtypeName = L"Dovetail_60x30";
      /// const int faceNumber = 2;
      /// aFactory.getEndtypeController()->setEndtypeNameFacet(element, endtypeName, faceNumber);
      /// @endcode
      virtual void setEndtypeNameFac(elementID aElementId, const character* aName, uint32_t aFaceNumber) = 0;

      /// @brief Sets the endtype to start face by endtype id.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aEndtypeId [@ref endtypeID] The endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DEndtypeIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// ICwAPI3DEndtypeIDList* element = selectedElements->at(0);
      /// const endtypeID endtypeId = 12345;
      /// aFactory.getEndtypeController()->setEndtypeIdStart(element, endtypeId);
      /// @endcode
      virtual void setEndtypeIdStart(elementID aElementId, endtypeID aEndtypeId) = 0;

      /// @brief Sets the endtype to end face by endtype id.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aEndtypeId [@ref endtypeID] The endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// ICwAPI3DElementID element = selectedElements->at(0);
      /// const endtypeID endtypeId = 54321;
      /// aFactory.getEndtypeController()->setEndtypeIdEnd(element, endtypeId);
      /// @endcode
      virtual void setEndtypeIdEnd(elementID aElementId, endtypeID aEndtypeId) = 0;

      /// @brief Sets the endtype to a face by endtype id.
      /// @param[in] aElementId [@ref elementID] The element id.
      /// @param[in] aEndtypeId [@ref endtypeID] The endtype id.
      /// @param[in] aFaceNumber [uint32_t] The face number. 0 <= aFaceNumber < element face count.
      /// @note Endtypes can only be set on faces that are placed at start or end points. Endtypes cannot be placed on arbitrary faces.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DElementIDList* selectedElements = aFactory.getElementController()->getAllIdentifiableElementIDs();
      /// if (selectedElements->count()) == 0) return;
      ///
      /// ICwAPI3DElementID element = selectedElements->at(0);
      /// const endtypeID endtypeId = 67890;
      /// const int faceNumber = 3;
      /// aFactory.getEndtypeController()->setEndtypeIdFacet(element, endtypeId, faceNumber);
      /// @endcode
      virtual void setEndtypeIdFac(elementID aElementId, endtypeID aEndtypeId, uint32_t aFaceNumber) = 0;

      /// @brief Creates a new Endtype.
      /// @param[in] aEndtypeName [const @ref character*] The new endtype name.
      /// @param[in] aEndtypeId [uint32_t] The new endtype id.
      /// @param[in] aFolderName [const @ref character*] The new endtype folder.
      /// @par Example:
      /// @code{.cpp}
      /// // Create a new endtype with a custom name, ID, and folder
      /// const character* endtypeName = L"Custom_Joint_80x40";
      /// const endtypeID endtypeIDValue = 99999;
      /// const character* folderName = L"Custom_Joints";
      ///
      /// // Register the new endtype
      /// const endtypeID newID = aFactory.getEndtypeController()->createNewEndtype(
      ///     endtypeName,
      ///     endtypeIDValue,
      ///     folderName
      /// );
      ///
      /// // Output the newly created ID
      /// printf("Created endtype with ID: %llu\n", newID);
      /// @endcode
      virtual endtypeID createNewEndtype(const character* aEndtypeName, uint32_t aEndtypeId, const character* aFolderName) = 0;

      /// @brief Clears all errors.
      virtual void clearErrors() = 0;

      /// @brief Get the existing tenon endtype id list.
      /// @return [@ref ICwAPI3DEndtypeIDList*] List of existing tenon endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DEndtypeIDList* tenonIds = aFactory.getEndtypeController()->getExistingTenonIds();
      /// printf("Available tenon endtype IDs: %s", tenonIds);
      /// @endcode
      virtual ICwAPI3DEndtypeIDList* getExistingTenonIds() = 0;

      /// @brief Get the existing lengthening endtype id list.
      /// @return [@ref ICwAPI3DEndtypeIDList*] List of existing lengthening endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DEndtypeIDList* lengtheningIds = aFactory.getEndtypeController()->getExistingLengtheningIds();
      /// printf("Available lengthening endtype IDs: %s", lengtheningIds);
      /// @endcode
      virtual ICwAPI3DEndtypeIDList* getExistingLengtheningIds() = 0;

      /// @brief Get the existing dovetail endtype id list.
      /// @return [@ref ICwAPI3DEndtypeIDList*] List of existing dovetail endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DEndtypeIDList* dovetailIds = aFactory.getEndtypeController()->getExistingDovetailIds();
      /// printf("Available dovetail endtype IDs: %s", dovetailIds);
      /// @endcode
      virtual ICwAPI3DEndtypeIDList* getExistingDovetailIds() = 0;

      /// @brief Get the existing dado endtype id list.
      /// @return [@ref ICwAPI3DEndtypeIDList*] List of existing dado endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DEndtypeIDList* dadoIds = aFactory.getEndtypeController()->getExistingDovetailDadoIds();
      /// printf("Available dado endtype IDs: ");
      /// for (int i = 0; i < dadoIds->count(); ++i) {
      ///     printf("%d ", dadoIds->at(i));
      /// }
      /// printf("\n");
      /// @endcode
      virtual ICwAPI3DEndtypeIDList* getExistingDovetailDadoIds() = 0;

      /// @brief Get the existing japanese-tenon endtype id list.
      /// @return [@ref ICwAPI3DEndtypeIDList*] List of existing japanese-tenon endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// ICwAPI3DEndtypeIDList* japaneseTenonIds = aFactory.getEndtypeController()->getExistingJapaneseTenonIds();
      /// printf("Available japanese-tenon endtype IDs: %s", japaneseTenonIds);
      /// @endcode
      virtual ICwAPI3DEndtypeIDList* getExistingJapaneseTenonIds() = 0;

      /// @brief Start endtype dialog.
      /// @return [@ref endtypeID] Selected endtype id.
      /// @par Example:
      /// @code{.cpp}
      /// const endtypeID selectedEndtypeId = aFactory.getEndtypeController()->startEndtypeDialog();
      /// printf("User selected endtype ID: %d\n", selectedEndtypeId);
      /// @endcode
      virtual endtypeID startEndtypeDialog() = 0;
    };
  }
}
