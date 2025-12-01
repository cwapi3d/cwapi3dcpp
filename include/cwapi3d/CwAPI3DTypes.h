#pragma once

#include <stdint.h>
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

  /// @struct vector3D
  /// @brief 3D vector
  struct vector3D
  {
    /// @brief X Coordinate
    double mX;
    
    /// @brief Y Coordinate
    double mY;
    
    /// @brief Z Coordinate
    double mZ;
  };

  /// @struct colorRGB
  /// @brief RGB Color
  struct colorRGB
  {
    
    /// @brief Red Value
    uint32_t mR;
    
    /// @brief Green Value
    uint32_t mG;
    
    /// @brief Blue Value
    uint32_t mB;
  };

  /// @struct windowGeometry
  /// @brief Holds the geometry of the 3d main window
  struct windowGeometry
  {
    /// @struct
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

  /// @enum divisionZoneDirection
  /// @brief Direction of a division zone
  enum divisionZoneDirection
  {
    positive = 1,
    negative = -1,
    none = 0
  };

  /// @enum nodeSymbol
  /// @brief Hoops node symbol
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

  /// @enum elementModuleDetail
  /// @brief Element modul detail
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
 
  /// @enum shortcutKey
  /// @brief Shortcut key
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

  /// @enum shortcutKeyModifier
  /// @brief Shortcut key modifier
  enum shortcutKeyModifier
  {
    None = 0,
    Shift = 1,
    Control = 2,
    Alt = 3,
  };

  /// @enum btlVersion
  /// @brief BTL file version
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

  /// @enum hundeggerMachineType
  /// @brief Hundegger machine type
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

  /// @enum weinmannMfbVersion
  /// @brief Weinmann MFB version
  enum weinmannMfbVersion
  {
    wup_2_0 = 20,
    wup_3_1 = 31,
    wup_3_2 = 32,
    wup_3_3 = 33,
    wup_3_4 = 34
  };

  /// @enum elementGroupingType
  /// @brief Element grouping type
  enum elementGroupingType
  {
    group = 1,
    subgroup = 2,
    _none = 3
  };

  /// @enum ifcElementCombineBehaviour
  /// @brief IFC element combine behaviour
  enum ifcElementCombineBehaviour
  {
    element_module = 0,
    element_assembly = 1,
  };

  /// @enum ifcMaterialDefinition
  /// @brief IFC material definition
  enum ifcMaterialDefinition
  {
    material_layer_set,
    material_constituent_set,
    ignore
  };

  /// @enum textElementType
  /// @brief Text element type
  enum textElementType
  {
    line = 0,
    surface = 1,
    volume = 2,
    raster = 3,
  };

  /// @enum multiLayerType
  /// @brief Multilayer type
  enum multiLayerType
  {
    Undefined = 0,
    Structure = 1,
    Panel = 2,
    Lathing = 3,
    Air = 4,
    Covering = 5,
  };

  namespace multiLayerSubType
  {
    /// @enum multiLayerSubType
    /// @brief Multilayer subtype
    enum multiLayerSubType
    {
      Undefined = 0,
      FrameStructure = 1,
      SolidStructure = 2,
      StraightEdge = 3,
      BiasEdge = 4,
      Vertical = 5,
      Horizontal = 6,
      Air = 7,
    };
  }

  namespace multiLayerComponentType
  {
    /// @enum multiLayerComponentType
    /// @brief Multilayer component type
    enum multiLayerComponentType
    {
      Undefined = 0,
      Material = 1,
      StandardElement = 2,
    };
  }

  /// @enum standardElementType
  /// @brief Standard element type
  enum standardElementType
  {
    beam = 0,
    panel,
    vba,
    exportSolid,
    container,
    metal
  };

  /// @enum bimTeamUploadResultCode
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

  /// @struct bimTeamUploadResult
  /// @brief Result object of a BIMteam upload operation
  struct bimTeamUploadResult
  {
    /// @brief Result code from a BIMteam upload operation
    bimTeamUploadResultCode mUploadResultCode;
    /// @brief Link to the uploaded file. Is empty when mUploadResultCode is not Ok.
    narrowString mShareLink;
  };

  /// @enum ShoulderDrillingOrientation
  /// @brief Shoulder drilling orientation
  enum ShoulderDrillingOrientation
  {
    DrillingPerpendicularToBisector = 0,
    DrillingPerpendicularToCounterPart = 1,
    DrillingPerpendicularToStrut = 2,
    DrillingPerpendicularToContactSurface = 3,
  };

  /// @enum ShoulderBeamGeometry
  /// @brief Shoulder beam geometry
  enum ShoulderBeamGeometry
  {
    Bisector = 0, ///< Bisector
    Birdsmouth = 2, ///< PerpBirdmouth
    PerpendicularToStrut = 3, ///< PerpShoulder
    PerpendicularToCounterPart = 4, ///< PerpChord
  };

  /// @enum HeelShoulderBeamGeometry
  /// @brief Heel shoulder beam geometry
  enum HeelShoulderBeamGeometry
  {
    Normal = 0, ///< NormalHeel
    Straight = 3, ///< StraightHeel
  };

  /// @enum DimensionBaseFormat
  /// @brief Format of how values are displayed for Dimensions
  enum class DimensionBaseFormat : int32_t
  {
    None = 0,       ///< Invalid Dimension Format.
    DistanceOnly,   ///< Displays only the distance.
    SumOnly,        ///< Displays only the summed distances.
    DistanceAndSum, ///< Displays both the distance and the sums.
    SumMoved,       ///< Displays the sums with a moved position to prevent overlaps.
  };

  /// @enum DxfLayerFormatType
  /// @brief The Formats of how to organize layers
  enum class DxfLayerFormatType : int32_t
  {
    AllInNo1 = 0, ///< Put everything in LAYER_NO1
    Color,        ///< Organize layers by color.
    Material,     ///< Organize layers by material.
    Name,         ///< Organize layers by name.
    Group,        ///< Organize layers by group.
    Subgroup,     ///< Organize layers by subgroup.
  };

  /// @enum DxfExportVersion
  /// @brief The DXF versions supported by the export
  enum class DxfExportVersion : int32_t
  {
    AutoCadR10 = 0,
    AutoCadR27
  };

  /// @enum vbaCatalogItemType
  /// @brief Types of the elements in the VBA Catalog
  enum class vbaCatalogItemType : uint64_t
  {
    Null = 0,
    Nut = 1,                       ///< Nuts
    Washer = 2,                    ///< Washers
    SpecialRing = 3,               ///< Special type dowels: Bulldog, Rigling
    SquareWasher = 4,              ///< Rectangular washers
    WoodenPlug = 5,                ///< Wood plugs
    BoltWithHead = 10001,          ///< Bolts: basic element with head (like construction screws, etc.)
    BoltWithoutHead = 10002,       ///< Bolts: basic element without head (like threaded rods, etc.)
    LagBolt = 10003,               ///< Non-through bolts: like coach screws, etc.
    BoltPeg = 10004,               ///< Bolts: dowel rods (length must be calculated differently for these — always about 2 mm shorter than the clamping length!) → different length automation
    NormalScrew = 10005,           ///< Standard screw
    WoodenDowl = 10006,            ///< Wood dowel
    BoltAnchor = 10007,            ///< Bolt anchor (chemical anchor)
    BoltWithMushroomHead = 10008,  ///< Carriage bolt / mushroom head
    BoltWithConicalHead = 10009,   ///< Countersunk screw / conical head
    BoltWithHeadAndWasher = 10010, ///< Bolt with head and washer
    HangerBolt = 10011,            ///< Hanger bolt (double-ended screw)
    ConnectionScrew = 10012        ///< Connection screw
  };
}
