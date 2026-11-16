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

  /// @struct vector2D
  /// @brief 2D vector in section (local plane) coordinates
  struct vector2D
  {
    /// @brief U Coordinate (first in-plane axis)
    double mU;

    /// @brief V Coordinate (second in-plane axis)
    double mV;
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

  /// @struct activePointResult
  /// @brief Result of an active point query
  struct activePointResult
  {
    bool mHasPoint;
    vector3D mPoint;
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

  /// @enum elementCollisionType
  /// @brief How two elements' geometry relates, as classified by @ref ICwAPI3DGeometryController::getElementCollisionType.
  enum class elementCollisionType
  {
    unknown,
    none,
    unclassified,
    contained,
    containedAndTouching,
    touching,
    coincident,
    interlocking
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
      LoadBearingFrameStructure = 1,
      SolidStructure = 2,
      StraightEdge = 3,
      BiasEdge = 4,
      Vertical = 5,
      Horizontal = 6,
      Air = 7,
      NonLoadBearingFrameStructure = 8,
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

  namespace multiLayer
  {
    enum class multiLayerCoverType : uint8_t
    {
      FramedWall = 0,
      SolidWall = 1,
      LogWall = 2,

      FramedRoof = 3,
      SolidRoof = 4,

      FramedFloor = 5,
      SolidFloor = 6,
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
    Bisector = 0,                   ///< Bisector
    Birdsmouth = 2,                 ///< PerpBirdmouth
    PerpendicularToStrut = 3,       ///< PerpShoulder
    PerpendicularToCounterPart = 4, ///< PerpChord
  };

  /// @enum HeelShoulderBeamGeometry
  /// @brief Heel shoulder beam geometry
  enum HeelShoulderBeamGeometry
  {
    Normal = 0,   ///< NormalHeel
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

  /// @enum panelPrefabElementType
  /// @brief Exclusive machine panel prefabrication element type of an element.
  enum class panelPrefabElementType : int32_t
  {
    none = 0,         ///< No prefab element type
    frame = 1,        ///< Frame
    panel = 2,        ///< Panel
    batten = 3,       ///< Batten
    cladding = 4,     ///< Cladding
    insulation = 5,   ///< Insulation
    built_in_part = 6 ///< Built-in part
  };

  /// @enum language
  /// @brief Available cadwork UI languages for setLanguage(). Values match the ISO codes returned by getLanguage().
  enum class language : uint32_t
  {
    english = 0, ///< en
    german,      ///< de
    french,      ///< fr
    italian,     ///< it
    spanish,     ///< es
    czech,       ///< cs
    finnish,     ///< fi
    russian,     ///< ru
    polish,      ///< pl
    romanian,    ///< ro
    norwegian,   ///< no
    chinese,     ///< zh
    portuguese,  ///< pt
    estonian,    ///< et
    japanese,    ///< ja
    dutch,       ///< nl
    swedish,     ///< sv
  };

  /// @enum workingPlaneExitView
  /// @brief The 3d view restored when leaving the 2d working plane.
  enum class workingPlaneExitView : uint32_t
  {
    previous_view = 0,   ///< Restores the view and controller active before entering.
    standard_axonometry, ///< Standard axonometry.
    view_positive_x,     ///< Same view as showViewPositiveX(). GUI label "X".
    view_positive_y,     ///< Same view as showViewPositiveY(). GUI label "-Y".
    view_positive_z,     ///< Same view as showViewPositiveZ(). GUI label "Z".
    keep_current_camera, ///< Keeps the current camera, in 3d. GUI label "Axo same view".
  };

  /// @enum endType
  /// @brief End type of an element.
  enum class endType : int32_t
  {
    Unknown,                ///< Unknown
    Tenon = 1,              ///< Tenon
    Lengthening = 2,        ///< Lengthening
    DovetailTenon = 3,      ///< Dovetail Tenon
    GMIWithCounterpart = 4, ///< GMI With Counterpart
    DovetailMortise = 5,    ///< Dovetail Mortise
    FrontSlot = 6,          ///< Front Slot
    JapaneseTenon = 7       ///< Japanese Tenon
  };

  /// @enum elementSegmentType
  /// @brief The kind of geometry one elementSegment describes, relative to the running point.
  enum class elementSegmentType : int32_t
  {
    Straight = 1, ///< straight line from the running point to mPosition
    Arc = 2,      ///< circular arc from the running point through mSupportPosition to mPosition
    Spline = 3,   ///< a point on a natural-cubic-spline run; consecutive Spline entries are fit through ONE curve
  };

  /// @struct elementSegment
  /// @brief One segment of a mixed straight/arc/spline line path.
  struct elementSegment
  {
    /// @brief The kind of segment this entry describes.
    elementSegmentType mType;

    /// @brief End point of this segment. The first entry in a segment list carries the line's start point.
    vector3D mPosition;

    /// @brief Via point of a circular arc. Meaningful only when mType == elementSegmentType::Arc.
    vector3D mSupportPosition;
  };

  /// @enum splineSurfaceOrder
  /// @brief How the section surfaces of a spline volume are ordered before they are skinned.
  enum class splineSurfaceOrder : int32_t
  {
    Linear = 1,   ///< sections follow each other along a roughly straight run, sorted by their centres of gravity
    Circular = 2, ///< sections are arranged around a common centre, sorted by angle around it
  };

  /// @enum prefabLayerSide
  /// @brief Which side of the reference element a prefab layer sits on, as shown in the Layer Detection dialog.
  enum class prefabLayerSide : int32_t
  {
    referenceElement = 0, ///< The reference element's own layer ("Riegelwerk") — the centre column of the dialog.
    referenceSide = 1,    ///< A layer on the reference face of the element ("Bund Schicht").
    oppositeSide = 2      ///< A layer on the side facing away from the reference face ("Gegen Schicht").
  };

  /// @struct prefabLayerInfo
  /// @brief One prefab layer assignment of an element: how far it sits from the reference element, and on which side.
  /// @details Replaces the signed-integer encoding of the deprecated getPrefabLayer* methods, where the sign
  /// carried the side implicitly. The (mLayerNumber, mSide) pair states both explicitly.
  struct prefabLayerInfo
  {
    /// @brief Distance from the reference element, counted in layers. Always non-negative, and 0 exactly
    /// when mSide is prefabLayerSide::referenceElement. The first layer next to the element is 1.
    int32_t mLayerNumber{0};

    /// @brief The side of the element this layer sits on.
    prefabLayerSide mSide{prefabLayerSide::referenceElement};
  };

  /// @enum wallSectionType
  /// @brief Which local axis of a wall, floor or roof a wall section is perpendicular to.
  enum class wallSectionType : int32_t
  {
    horizontal = 1, ///< perpendicular to the element's yl axis (across its width)
    vertical = 2    ///< perpendicular to the element's xl axis (along its length)
  };

  /// @struct wallSection
  /// @brief One wall section plane of a wall, floor or roof, in global coordinates.
  struct wallSection
  {
    /// @brief Whether the section is horizontal or vertical.
    wallSectionType mType{wallSectionType::horizontal};

    /// @brief A point on the section plane, in global coordinates (mm). It is the point the section is stored at.
    vector3D mPoint{};

    /// @brief The unit normal of the section plane, in global coordinates: the element's yl axis for a horizontal
    /// section, its xl axis for a vertical one.
    vector3D mNormal{};
  };

  /// @struct exportSolidCut
  /// @brief One cut plane of an export solid or container, in global coordinates.
  struct exportSolidCut
  {
    /// @brief The cut's name, as shown in the export solid's cut list.
    string mName;

    /// @brief The point of the cut plane nearest the global origin, in global coordinates (mm).
    /// @details A cut stores only its plane, so this is generally not the point the cut was created through.
    vector3D mPoint{};

    /// @brief The unit normal of the cut plane, in global coordinates. The cut view looks along -mNormal.
    vector3D mNormal{};

    /// @brief The unit up direction of the cut view, in global coordinates.
    vector3D mUpVector{};
  };

  /// @enum navigationWidgetSubwindowPosition
  /// @brief The navigation widget's corner
  enum class navigationWidgetSubwindowPosition
  {
    None = 0,
    TopRight = 1,
    TopLeft = 2,
    BottomLeft = 3,
    BottomRight = 4,
  };

  /// @enum renderViewType
  /// @brief The render view of the 3d window. Each render view keeps its own background setting,
  /// as shown per render mode in the graphics options dialog.
  enum class renderViewType : int32_t
  {
    wireframe = 0,        ///< Wireframe view.
    shading1 = 1,         ///< Shaded view 1.
    shading2 = 2,         ///< Shaded view 2.
    hiddenLine = 3,       ///< Hidden line view.
    hiddenLineDashed = 4, ///< Hidden line view with dashed hidden edges.
    drawing2d = 5         ///< 2d drawing view.
  };

  /// @enum backgroundType
  /// @brief How the background of a render view is filled.
  enum class backgroundType : int32_t
  {
    black = 0, ///< Plain black.
    white = 1, ///< Plain white.
    user = 2,  ///< Plain user-defined color.
    image = 3  ///< Background image chosen in the graphics options dialog.
  };
}
