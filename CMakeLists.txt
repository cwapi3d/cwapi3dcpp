# Copyright (C) 2024 Cadwork
# All rights reserved.

CMAKE_MINIMUM_REQUIRED(VERSION 3.21.1)

# ------------------------------------------------------------------------------
# Start CwAPI3D Project
# ------------------------------------------------------------------------------
PROJECT(CwAPI3D VERSION 30.10.1 LANGUAGES CXX C)

SET(MAIN_PROJECT OFF)
IF(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
  SET(MAIN_PROJECT ON)
ENDIF()

INCLUDE(GNUInstallDirs)

SET(CWAPI3D_INCLUDE_BUILD_DIR "${PROJECT_SOURCE_DIR}/include/")

# ------------------------------------------------------------------------------
# Create Interface Library
# ------------------------------------------------------------------------------
ADD_LIBRARY(${PROJECT_NAME} INTERFACE)
ADD_LIBRARY(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

# ------------------------------------------------------------------------------
# Specify Include Directories
# ------------------------------------------------------------------------------
TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} INTERFACE
                           $<BUILD_INTERFACE:${CWAPI3D_INCLUDE_BUILD_DIR}>
                           $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

INCLUDE(CMakePackageConfigHelpers)

CONFIGURE_FILE("cmake/${PROJECT_NAME}ConfigVersion.cmake.in"
               "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
               @ONLY)

CONFIGURE_FILE("cmake/config.cmake.in"
               "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
               @ONLY)

INSTALL(DIRECTORY "${PROJECT_SOURCE_DIR}/include/"
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

INSTALL(FILES
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
        DESTINATION "${CMAKE_INSTALL_DATADIR}/cmake/${PROJECT_NAME}")

EXPORT(TARGETS ${PROJECT_NAME}
       NAMESPACE ${PROJECT_NAME}::
       FILE "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Targets.cmake")

INSTALL(TARGETS ${PROJECT_NAME}
        EXPORT "${PROJECT_NAME}Targets"
        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

INSTALL(EXPORT "${PROJECT_NAME}Targets"
        NAMESPACE ${PROJECT_NAME}::
        DESTINATION "${CMAKE_INSTALL_DATADIR}/cmake/${PROJECT_NAME}")
