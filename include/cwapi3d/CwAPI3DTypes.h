// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include <cstdint>
#include <string>

namespace CwAPI3D
{
  using elementID = uint64_t;
  using materialID = uint64_t;
  using colorID = uint32_t;
  using endtypeID = uint64_t;
  using axisID = uint64_t;
  using menuIndex = int32_t;
  using referenceSide = uint32_t;
  using multiLayerSetID = uint64_t;
  /**
   * \brief 3D Vector
   */
  struct vector3D
  {
    /**
     * \brief X Coordinate
     */
    double mX;
    /**
     * \brief Y Coordinate
     */
    double mY;
    /**
     * \brief Z Coordinate
     */
    double mZ;
  };
  /**
   * \brief RGB Color
   */
  struct colorRGB
  {
    /**
     * \brief Red Value
     */
    uint32_t mR;
    /**
     * \brief Green Value
     */
    uint32_t mG;
    /**
     * \brief Blue Value
     */
    uint32_t mB;
  };

  /// @brief Holds the geometry of the 3d main window
  struct windowGeometry
  {
    /// @brief A point is specified by a x coordinate and an y coordinate
    struct point
    {
      /// @brief x coordinate of this point
      int mX{0};
      /// @brief y coordinate of this point
      int mY{0};
    };
    /// @brief position of the rectangle's bottom-left corner
    point mBottomLeft;
    /// @brief position of the rectangle's bottom-right corner
    point mBottomRight;
    /// @brief position of the rectangle's top-left corner
    point mTopLeft;
    /// @brief position of the rectangle's top-right corner
    point mTopRight;
  };

  using character = wchar_t;
  using narrowCharacter = char;
  using wideCharacter = wchar_t;
  using string = std::wstring;
  using narrowString = std::string;
  using wideString = std::wstring;

  enum divisionZoneDirection
  {
    positive = 1,
    negative = -1,
    none = 0
  };

  enum nodeSymbol
  {
    SmallSquare,
    Square,
    Cross,
    Circle,
    FilledCircle,
    ChessSquare,
    HalfFilledSquare,
    CrossSquare,
    FilledSquare
  };

  enum elementModuleDetail
  {
    NoDetail,
    AngleDetail,
    AreaDetail,
    CrossDetail,
    EdgeDetail,
    EndDetail,
    LineDetail,
    OpenDetail,
    TDetail,
    FloorAreaDetail,
    FloorEndDetail,
    FloorLineDetail,
    FloorOpenDetail
  };

  enum shortcutKey
  {
    F1 = 1,
    F2 = 2,
    F3 = 3,
    F4 = 4,
    F5 = 5,
    F6 = 6,
    F7 = 7,
    F8 = 8,
    F9 = 9,
    F10 = 10,
    F11 = 11,
    F12 = 12,
  };

  enum shortcutKeyModifier
  {
    None = 0,
    Shift = 1,
    Control = 2,
    Alt = 3,
  };

  enum btlVersion
  {
    btl_1_0 = 110,
    btl_1_1 = 111,
    btl_1_2 = 112,
    btl_1_3 = 113,
    btl_1_4 = 114,
    btl_1_5 = 115,
    btl_1_6 = 116,

    btl_10_0 = 100,
    btl_10_1 = 101,
    btl_10_2 = 102,
    btl_10_3 = 103,
    btl_10_4 = 104,
    btl_10_5 = 105,
    btl_10_6 = 106,
    btlx_1_0 = 110,
    btlx_1_1 = 111,
    btlx_2_0 = 120,
    btlx_2_1 = 121,
    btlx_2_2 = 122
  };

  enum hundeggerMachineType
  {
    p8_10 = 1,
    k1 = 2,
    k2 = 3,
    k2_cambium = 4,
    k2_uf_5 = 5,
    k2_uf_5_cambium = 6,
    speedcut = 7,
    pba = 8,
    pba_bvx = 9,
    pba_bvx_cambium = 10,
    spm = 12,
    spm_cambium = 13,
    robot_drive = 14,
    turbo_drive = 15
  };

  enum weinmannMfbVersion
  {
    wup_2_0 = 20,
    wup_3_1 = 31,
    wup_3_2 = 32,
    wup_3_3 = 33,
    wup_3_4 = 34
  };

  enum elementGroupingType
  {
    group = 1,
    subgroup = 2,
    _none = 3
  };

  enum ifcElementCombineBehaviour
  {
    element_module = 0,
    element_assembly = 1,
  };

  enum textElementType
  {
    line = 0,
    surface = 1,
    volume = 2,
    raster = 3,
  };

  enum multiLayerType
  {
    Undefined = 0,
    Structure = 1,
    Panel = 2,
    Lathing = 3,
    Air = 4,
    Covering = 5,
  };

  enum standardElementType
  {
    beam = 0,
    panel,
    vba,
    exportSolid,
    container,
    metal
  };

  /// @brief Result code of a BIMteam upload operation
  enum bimTeamUploadResultCode
  {
    Ok = 0,
    ErrorGeneralError,
    ErrorTooManyModels,
    ErrorInsufficientStorage,
    ErrorInvalidProjectId,
    ErrorAuthenticationFailed,
  };

  /// @brief Result object of a BIMteam upload operation
  struct bimTeamUploadResult
  {
    /// @brief Result code from a BIMteam upload operation
    bimTeamUploadResultCode mUploadResultCode;
    /// @brief Link to the uploaded file. Is empty when mUploadResultCode is not Ok.
    narrowString mShareLink;
  };
}
