#ifndef __IOUTPUTMANAGER_HPP__
#define __IOUTPUTMANAGER_HPP__

#include "Channel.hpp"
#include "APIdefs_Elements.h"
#include "APIdefs_Properties.h"
#include "APIdefs_Goodies.h"
#include "GSAPIWrappers.hpp"

#define APIOUTPUT(type) 																								\
virtual GS::OChannel& GetOChannel (const type& forType, const API_DatabaseInfo& dbInfo) = 0;

#define APIOUTPUTOTYPE(type) 																							\
virtual GS::OChannel& GetOChannel (const type& forType, const API_DatabaseInfo& dbInfo,									\
								   GSAPI::OutputUsedAttributesType attributeOutputType = GSAPI::DoNotOutput) = 0;

#define APIOUTPUTGUID(type) 																							\
virtual GS::OChannel& GetOChannel (const type& forType, API_ElemTypeID elemTypeID,										\
								   const API_Guid& guid, const API_DatabaseInfo& dbInfo) = 0;

class Dump2XMLSettings;

namespace GSAPI {

/** @interface */
class IAPIOutputManager {
public:
	const Dump2XMLSettings* settings;

	virtual ~IAPIOutputManager ();

	// API Element Types
	APIOUTPUTGUID (API_Element)
	APIOUTPUT (API_Elem_Head)
	APIOUTPUT (API_ElemTypeID)
	APIOUTPUT (API_ElemVariationID)
	APIOUTPUT (API_RenovationStatusType)
	APIOUTPUT (API_ModelElemStructureType)
	APIOUTPUT (API_PenOverrideType)
	APIOUTPUT (API_OverriddenAttribute)
	APIOUTPUT (API_ExtendedPenType)
	APIOUTPUT (API_WallType)
	APIOUTPUT (API_WallTypeID)
	APIOUTPUT (API_WallReferenceLineLocationID)
	APIOUTPUT (API_ZoneRelID)
	APIOUTPUT (API_StoryVisibility)
	APIOUTPUT (API_LinkToSettings)
	APIOUTPUT (API_Coord)
	APIOUTPUT (API_Polygon)
	APIOUTPUT (API_ElemDisplayOptionsID)
	APIOUTPUT (API_ElemProjectionModesID)
	APIOUTPUT (API_ElemViewDepthLimitationsID)
	APIOUTPUT (API_ColumnType)
	APIOUTPUT (API_BeamType)
	APIOUTPUT (API_BHoleTypeID)
	APIOUTPUT (API_WindowType)
	APIOUTPUT (API_SkylightType)
	APIOUTPUT (API_OpeningBaseType)
	APIOUTPUT (API_VerticalLink)
	APIOUTPUT (API_VerticalLinkID)
	APIOUTPUT (API_WindowDoorRevealDepthLocationID)
	APIOUTPUT (API_WindowDoorDirectionTypes)
	APIOUTPUT (API_SkylightFixModeID)
	APIOUTPUT (API_SkylightAnchorID)
	APIOUTPUT (API_ObjectType)
	APIOUTPUT (API_RGBColor)
	APIOUTPUT (API_RGBAColor)
	APIOUTPUT (API_SlabType)
	APIOUTPUT (API_HatchOrientation)
	APIOUTPUT (API_HatchOrientationTypeID)
	APIOUTPUT (API_RoofType)
	APIOUTPUT (API_PlaneRoofData)
	APIOUTPUT (API_PolyRoofData)
	APIOUTPUT (API_ShellType)
	APIOUTPUT (API_ShellBaseType)
	APIOUTPUT (API_ExtrudedShellData)
	APIOUTPUT (API_RevolvedShellData)
	APIOUTPUT (API_RuledShellData)
	APIOUTPUT (API_RoofClassID)
	APIOUTPUT (API_RoofLevelData)
	APIOUTPUT (API_RoofOverHangTypeID)
	APIOUTPUT (API_PolyRoofSegmentAngleTypeID)
	APIOUTPUT (API_RoofSegmentData)
	APIOUTPUT (API_ShellBaseContourEdgeTypeID)
	APIOUTPUT (API_ShellBaseCutBodyTypeID)
	APIOUTPUT (API_ShellBaseSegmentTypeID)
	APIOUTPUT (API_ShellContourData)
	APIOUTPUT (API_ShellClassID)
	APIOUTPUT (API_LocalCoordsData)
	APIOUTPUT (API_LocalCoordsType)
	APIOUTPUT (API_Wrapping)
	APIOUTPUT (API_ContourEdgeData)
	APIOUTPUT (API_MorphingRuleID)
	APIOUTPUT (API_PivotPolyEdgeData)
	APIOUTPUT (API_ShellShapeData)
	APIOUTPUT (API_TextureProjectionTypeID)
	APIOUTPUT (API_MorphType)
	APIOUTPUT (API_MorphBodyTypeID)
	APIOUTPUT (API_MorphEdgeTypeID)
	APIOUTPUT (API_EdgeTrimID)
	APIOUTPUT (API_RoofEdgeTypeID)
	APIOUTPUT (API_Sector)
	APIOUTPUT (API_MeshType)
	APIOUTPUT (API_MeshLevel)
	APIOUTPUT (API_DimensionType)
	APIOUTPUT (API_TextPosID)
	APIOUTPUT (API_DirID)
	APIOUTPUT (API_AppearID)
	APIOUTPUT (API_WitnessID)
	APIOUTPUT (API_NoteType)
	APIOUTPUT (API_NoteContentType)
	APIOUTPUT (API_MarkerData)
	APIOUTPUT (API_MarkerID)
	APIOUTPUT (API_DimLayoutID)
	APIOUTPUT (API_DimOriginID)
	APIOUTPUT (API_CircleLevelDimensionFillID)
	APIOUTPUT (API_DimBase)
	APIOUTPUT (API_Base)
	APIOUTPUT (API_RadialDimensionType)
	APIOUTPUT (API_LevelDimensionType)
	APIOUTPUT (API_AngleDimensionType)
	APIOUTPUT (API_TextType)
	APIOUTPUT (API_AnchorID)
	APIOUTPUT (API_JustID)
	APIOUTPUT (API_LabelType)
	APIOUTPUT (API_LblClassID)
	APIOUTPUT (API_LeaderLineShapeID)
	APIOUTPUT (API_ArrowData)
	APIOUTPUT (API_ArrowID)
	APIOUTPUT (API_LblAnchorID)
	APIOUTPUT (API_ZoneType)
	APIOUTPUT (API_VeneerTypeID)
	APIOUTPUT (API_HatchSubType)
	APIOUTPUT (API_HatchType)
	APIOUTPUT (API_LineType)
	APIOUTPUT (API_PolyLineType)
	APIOUTPUT (API_ArcType)
	APIOUTPUT (API_SplineType)
	APIOUTPUT (API_HotspotType)
	APIOUTPUT (API_PictureType)
	APIOUTPUT (API_Box)
	APIOUTPUT (API_ColorDepthID)
	APIOUTPUT (API_PictureFormat)
	APIOUTPUT (API_SegmentHorizontalRange)
	APIOUTPUT (API_SegmentVerticalRange)
	APIOUTPUT (API_BoundaryDisplay)
	APIOUTPUT (API_SectionSegment)
	APIOUTPUT (API_CutPlaneType)
	APIOUTPUT (API_InteriorElevationType)
	APIOUTPUT (API_CutPlaneShowType)
	APIOUTPUT (API_CutPlaneUncutSurfaceFillID)
	APIOUTPUT (API_DatabaseUnId)
	APIOUTPUT (API_CutPlanePlanConn)
	APIOUTPUT (API_StoryHandleAppearance)
	APIOUTPUT (API_MarkerLinkDataType)
	APIOUTPUT (API_ReferringLevel)
	APIOUTPUT (API_CameraType)
	APIOUTPUT (API_PerspCamPars)
	APIOUTPUT (API_PerspPars)
	APIOUTPUT (API_CamSetType)
	APIOUTPUT (API_PersCamSetPars)
	APIOUTPUT (API_DrawingType)
	APIOUTPUT (API_NameTypeValues)
	APIOUTPUT (API_NumberingTypeValues)
	APIOUTPUT (API_ColorModeValues)
	APIOUTPUT (API_PenTableUsageModeValues)
	APIOUTPUT (API_DrawingTitle)
	APIOUTPUT (API_TitlePreviewModes)
	APIOUTPUT (API_SectElemType)
	APIOUTPUT (API_DetailType)
	APIOUTPUT (API_ChangeMarkerType)
	APIOUTPUT (API_ChangeMarkerLinkType)
	APIOUTPUT (API_ChangeMarkerComponentType)
	// APIOUTPUT (API_WorksheetType) // API_WorksheetType == API_DetailType
	APIOUTPUT (API_HotlinkType)
	APIOUTPUT (API_HotlinkTypeID)
	APIOUTPUT (API_CurtainWallType)
	APIOUTPUT (API_CWSegmentType)
	APIOUTPUT (API_CWFrameType)
	APIOUTPUT (API_CWPanelType)
	APIOUTPUT (API_CWJunctionType)
	APIOUTPUT (API_CWAccessoryType)
	APIOUTPUT (API_LinePositionID)
	APIOUTPUT (API_StairDisplayTypeID)
	APIOUTPUT (API_StairGridTypeID)
	APIOUTPUT (API_BreakLineAngleTypeID)
	APIOUTPUT (API_BreakLinePositionTypeID)
	APIOUTPUT (API_RiserPositionID)
	APIOUTPUT (API_RiserCrossSectID)
	APIOUTPUT (API_StairStructBottomTypeID)
	APIOUTPUT (API_StairPolyTypeID)
	APIOUTPUT (API_StairPolyGeometryTypeID)
	APIOUTPUT (API_StairNumberingID)
	APIOUTPUT (API_StairDirectionID)
	APIOUTPUT (API_StairSegmentTypeID)
	APIOUTPUT (API_StairDLWinderNumTypeID)
	APIOUTPUT (API_StairTurnTypeID)
	APIOUTPUT (API_StairInnerWidthOffsetTypeID)
	APIOUTPUT (API_StairWinderNumTypeID)
	APIOUTPUT (API_StairPartRoleID)
	APIOUTPUT (API_StairTreadNosingTypeID)
	APIOUTPUT (API_StairStructHeightMeasureID)
	APIOUTPUT (API_StairStructureTypeID)
	APIOUTPUT (API_StairStructureSideID)
	APIOUTPUT (API_StairWalkLineSymbPosID)
	APIOUTPUT (API_StairDrainSurfaceTypeID)
	APIOUTPUT (API_StairDrainSideID)
	APIOUTPUT (API_StairWinderID)
	APIOUTPUT (API_StairStructSymbTypeID)
	APIOUTPUT (API_StairStructSymbViewID)
	APIOUTPUT (API_StairStructSymbVisibilityID)
	APIOUTPUT (API_StairStructSymbPartID)
	APIOUTPUT (API_StairPolylineEdgeData)
	APIOUTPUT (API_StairPolylineVertexData)
	APIOUTPUT (API_StairPolylineData)
	APIOUTPUT (API_StairBoundaryVertexData)
	APIOUTPUT (API_StairBoundaryEdgeData)
	APIOUTPUT (API_StairBoundaryData)
	APIOUTPUT (API_StairLayoutData)
	APIOUTPUT (API_StairRulesData)
	APIOUTPUT (API_StairHeadroomData)
	APIOUTPUT (API_HeadroomGenerationModeID)
	APIOUTPUT (API_StairStructureDrainingData)
	APIOUTPUT (API_SideStairStructData)
	APIOUTPUT (API_MonolithStairStructData)
	APIOUTPUT (API_StairStructureSymbolData)
	APIOUTPUT (API_StairMonolithStructureSymbolData)
	APIOUTPUT (API_MonolithPartsVisibilityData)
	APIOUTPUT (API_StairStructureComponentSettingsVisibilityOnStory)
	APIOUTPUT (API_StairStructureComponentSettingsVisibility)
	APIOUTPUT (API_StairStructSymbRelevantStoriesID)
	APIOUTPUT (API_StairType)
	APIOUTPUT (API_StairRiserType)
	APIOUTPUT (API_StairTreadType)
	APIOUTPUT (API_StairStructureType)
	APIOUTPUT (API_RailingFrameData)
	APIOUTPUT (API_RailingDistributionData)
	APIOUTPUT (API_DistribTypeID)
	APIOUTPUT (API_PatternAlignID)
	APIOUTPUT (API_RailingHorizontalPosData)
	APIOUTPUT (API_RailingVerticalPosData)
	APIOUTPUT (API_RailingType)
	APIOUTPUT (API_RailingSegmentType)
	APIOUTPUT (API_RailingRailEndType)
	APIOUTPUT (API_RailingRailConnectionType)
	APIOUTPUT (API_RailingPatternType)
	APIOUTPUT (API_RailingNodeType)
	APIOUTPUT (API_RailingToprailType)
	APIOUTPUT (API_RailingHandrailType)
	APIOUTPUT (API_RailingRailType)
	APIOUTPUT (API_RailingFinishType)
	APIOUTPUT (API_RailEndTypeID)
	APIOUTPUT (API_RailEndBaseConnectionID)
	APIOUTPUT (API_RailBaseBaseConnectionID)
	APIOUTPUT (API_RailEndFixtureConnectionID)
	APIOUTPUT (API_RailEndArcAngleModeID)
	APIOUTPUT (API_RailEndExtrusionModeID)
	APIOUTPUT (API_RailConnectionTypeID)
	APIOUTPUT (API_RailingRefLineLocationID)
	APIOUTPUT (API_StairStoryVisibilityID)
	APIOUTPUT (API_RailingPostType)
	APIOUTPUT (API_RailingInnerPostType)
	APIOUTPUT (API_RailingBalusterType)
	APIOUTPUT (API_RailingBalusterSetType)
	APIOUTPUT (API_RailingPanelType)
	APIOUTPUT (API_SunAngleSettings)
	APIOUTPUT (API_SunAngleSettings_SunPositionOption)
	APIOUTPUT (API_AxonoPars)
	APIOUTPUT (API_Tranmat)
	APIOUTPUT (API_CutPlaneMarkerShowType)
	APIOUTPUT (API_CWAccessoryCategoryID)
	APIOUTPUT (API_CWFrameObjectTypeID)
	APIOUTPUT (API_CWJunctionCategoryID)
	APIOUTPUT (API_CWPanelObjectTypeID)
	APIOUTPUT (API_CWSegmentCategoryID)
	APIOUTPUT (API_CWSegmentGridOrigPosTypeID)
	APIOUTPUT (API_CWSegmentPatternLogicID)
	APIOUTPUT (API_CWSegmentTypeID)
	APIOUTPUT (API_CWSpreadTypeID)
	APIOUTPUT (API_CWBoundaryFramePosID)
	APIOUTPUT (API_CWPlacementID)
	APIOUTPUT (API_GridMeshHead)
	APIOUTPUT (API_GridMeshVertex)
	APIOUTPUT (API_GridMeshEdge)
	APIOUTPUT (API_GridEdgeInfo)
	APIOUTPUT (API_GridMeshLine)
	APIOUTPUT (API_GridMeshPolygon)
	APIOUTPUT (API_Interval)
	APIOUTPUT (API_SubElemMemoMaskType)
	APIOUTPUT (API_SubElemFlagType)
	APIOUTPUT (API_Plane3D)
	APIOUTPUT (API_Surface3D)
	APIOUTPUT (API_SlabReferencePlaneLocationID)
	APIOUTPUT (API_ActTranPars)
	APIOUTPUT (API_BeamPart)
	APIOUTPUT (API_ComponentRefType)
	APIOUTPUT (API_ConnectionGuidItem)
	APIOUTPUT (API_DescriptorRefType)
	APIOUTPUT (API_EditCmdID)
	APIOUTPUT (API_ElemInfo3D)
	APIOUTPUT (API_ElemPartId)
	APIOUTPUT (API_HatchFlags)
	APIOUTPUT (API_Neig)
	APIOUTPUT (API_NeigElemPartID)
	APIOUTPUT (API_NeigID)
	APIOUTPUT (API_Niche)
	APIOUTPUT (API_PropertyObjectRefType)
	APIOUTPUT (API_SelectionInfo)
	APIOUTPUT (API_SelRelativePosID)
	APIOUTPUT (API_SelTypeID)
	APIOUTPUT (API_ShapePrimsParams)
	APIOUTPUT (API_SolidOperationID)
	APIOUTPUT (API_SyTran)
	APIOUTPUT (API_ToolCmdID)
	APIOUTPUT (API_TrimTypeID)
	APIOUTPUT (API_UserData)
	APIOUTPUT (API_WallPart)
	APIOUTPUT (API_Box3D)
	APIOUTPUT (API_Point)
	APIOUTPUT (API_Rect)
	APIOUTPUT (API_Region)
	APIOUTPUT (API_UVCoord)

	// API Element Memo Types
	APIOUTPUT (API_ElementMemo)
	APIOUTPUT (API_PolyArc)
	APIOUTPUT (API_AddParType)
	APIOUTPUT (API_AddParID)
	APIOUTPUT (API_Gable)
	APIOUTPUT (API_EdgeTrim)
	APIOUTPUT (API_MeshLevelCoord)
	APIOUTPUT (API_Coord3D)
	APIOUTPUT (API_DimElem)
	APIOUTPUT (API_SplineDir)
	APIOUTPUT (API_Beam_Hole)
	APIOUTPUT (API_LinkType)
	APIOUTPUT (API_ParagraphType)
	APIOUTPUT (API_TabType)
	APIOUTPUT (API_TabID)
	APIOUTPUT (API_RunType)
	APIOUTPUT (API_GridMesh)
	APIOUTPUT (API_CWContourData)
	APIOUTPUT (API_CWSegmentPatternCellData)
	APIOUTPUT (API_CWCellCrossingFrameTypeID)
	APIOUTPUT (API_CWSegmentPatternData)

	// API Attribute Types
	APIOUTPUTOTYPE (API_Attribute)
	APIOUTPUTOTYPE (API_Attr_Head)
	APIOUTPUTOTYPE (API_AttrTypeID)
	APIOUTPUTOTYPE (API_PenType)
	APIOUTPUTOTYPE (API_LayerType)
	APIOUTPUTOTYPE (API_LinetypeType)
	APIOUTPUTOTYPE (API_LtypTypeID)
	APIOUTPUTOTYPE (API_FilltypeType)
	APIOUTPUTOTYPE (API_FillSubtype)
	APIOUTPUTOTYPE (API_CompWallType)
	APIOUTPUTOTYPE (API_MaterialType)
	APIOUTPUTOTYPE (API_MaterTypeID)
	APIOUTPUTOTYPE (API_Texture)
	APIOUTPUTOTYPE (API_CityType)
	APIOUTPUTOTYPE (API_LayerCombType)
	APIOUTPUTOTYPE (API_ZoneCatType)
	APIOUTPUTOTYPE (API_FontType)
	APIOUTPUTOTYPE (API_ProfileAttrType)
	APIOUTPUTOTYPE (API_PenTableType)
	APIOUTPUTOTYPE (API_LengthTypeID)
	APIOUTPUTOTYPE (API_AreaTypeID)
	APIOUTPUTOTYPE (API_VolumeTypeID)
	APIOUTPUTOTYPE (API_AngleTypeID)
	APIOUTPUTOTYPE (API_DimensionAttrType)
	APIOUTPUTOTYPE (API_DimensionPrefs)
	APIOUTPUTOTYPE (API_LengthDimFormat)
	APIOUTPUTOTYPE (API_ExtraAccuracyID)
	APIOUTPUTOTYPE (API_AngleDimFormat)
	APIOUTPUTOTYPE (API_AreaDimFormat)
	APIOUTPUTOTYPE (API_ModelViewOptionsType)
	APIOUTPUTOTYPE (API_ModelViewOptions)
	APIOUTPUTOTYPE (API_GDLModelViewOptions)
	APIOUTPUTOTYPE (API_CurtainWallModelViewOptions)
	APIOUTPUTOTYPE (API_StairModelViewOptions)
	APIOUTPUTOTYPE (API_RailingModelViewOptions)
	APIOUTPUTOTYPE (API_MEPSystemType)
	APIOUTPUTOTYPE (API_OperationProfileType)
	APIOUTPUTOTYPE (API_BuildingMaterialType)
	APIOUTPUTOTYPE (API_MarkUpStyleType)
	APIOUTPUTOTYPE (API_FillOrientationID)
	APIOUTPUTOTYPE (API_OccupancyTypeID)

	// API AttributeDefExt Types
	APIOUTPUTOTYPE (API_AttributeDefExt)
	APIOUTPUTOTYPE (API_DashItems)
	APIOUTPUTOTYPE (API_LineItems)
	APIOUTPUTOTYPE (API_LtypItemID)
	APIOUTPUTOTYPE (API_FillLine)
	APIOUTPUTOTYPE (API_SymbolHatchDef)
	APIOUTPUTOTYPE (API_SFill_Line)
	APIOUTPUTOTYPE (API_SFill_Arc)
	APIOUTPUTOTYPE (API_CWallComponent)
	APIOUTPUTOTYPE (API_CWallLineComponent)
	APIOUTPUTOTYPE (API_LayerStat)
	APIOUTPUTOTYPE (API_DailyProfile)
	APIOUTPUTOTYPE (API_DailyProfileUsage)
	APIOUTPUTOTYPE (API_HourlyProfile)

	// Primitive Element Types
	APIOUTPUTGUID (GSAPI::PrimElement)
	APIOUTPUT (API_Prim_Head)
	APIOUTPUT (API_PrimTypeID)
	APIOUTPUT (API_PrimPoint)
	APIOUTPUT (API_PrimLine)
	APIOUTPUT (API_PrimArc)
	APIOUTPUT (API_PrimText)
	APIOUTPUT (API_PrimPLine)
	APIOUTPUT (API_PrimTri)
	APIOUTPUT (API_PrimPoly)
	APIOUTPUT (API_PrimPict)
	APIOUTPUT (API_CWallPanel)
	APIOUTPUT (API_PrimElemRef)
	APIOUTPUT (API_PrimHatchBorder)
	APIOUTPUT (API_PrimHotspot)

	// API Layout Info
	APIOUTPUT (API_LayoutInfo)

	// Categories
	APIOUTPUT (API_ElemCategoryID)
	APIOUTPUT (API_ElemCategory)
	APIOUTPUT (API_ElemCategoryValue)

	// Classificaiton
	APIOUTPUT (API_ClassificationAvailability)
	APIOUTPUT (API_ClassificationItem)
	APIOUTPUT (API_ClassificationSystem)

	// Properties
	APIOUTPUT (API_ListVariant)
	APIOUTPUT (API_MultipleEnumerationVariant)
	APIOUTPUT (API_Property)
	APIOUTPUT (API_PropertyCollectionType)
	APIOUTPUT (API_PropertyDefaultValue)
	APIOUTPUT (API_PropertyMeasureType)
	APIOUTPUT (API_PropertyDefinition)
	APIOUTPUT (API_PropertyDefinitionType)
	APIOUTPUT (API_PropertyGroup)
	APIOUTPUT (API_PropertyGroupType)
	APIOUTPUT (API_PropertyValue)
	APIOUTPUT (API_SingleEnumerationVariant)
	APIOUTPUT (API_SingleVariant)
	APIOUTPUT (API_Variant)
	APIOUTPUT (API_VariantStatus)
	APIOUTPUT (API_VariantType)

	// Override
	APIOUTPUT (API_OverrideRule)
	APIOUTPUT (API_OverrideRuleStyle)
	APIOUTPUT (API_OverriddenFillType)
	APIOUTPUT (API_OverrideCombination)
	APIOUTPUT (API_OverrideStyle)
	APIOUTPUT (API_OverriddenSurfaceType)
};

}
#undef APIOUTPUT
#undef APIOUTPUTOTYPE
#undef APIOUTPUTGUID
#endif //__IOUTPUTMANAGER_HPP__