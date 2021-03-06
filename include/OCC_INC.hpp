#ifndef OCC_INC_HPP
#define OCC_INC_HPP

#include <Standard.hxx>
#include <XSControl_Reader.hxx>
#include <IGESControl_Reader.hxx>
#include <STEPControl_Reader.hxx>
#include <Interface_Static.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopExp_Explorer.hxx>
#include <gp.hxx>
#include <gp_Circ.hxx>
#include <Geom_Line.hxx>
#include <Geom_Circle.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomConvert.hxx>
#include <GeomProjLib.hxx>
#include <GeomLib_Tool.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <Geom_BoundedSurface.hxx>
#include <GeomConvert.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <GeomAPI_IntCS.hxx>
#include <ProjLib_CompProjectedCurve.hxx>
#include <ProjLib_ProjectOnSurface.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRep_Tool.hxx>
#include <BRepTools.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepBuilderAPI_NurbsConvert.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepMesh.hxx>
#include <BRepMesh_GeomTool.hxx>
#include <BRepMesh_IncrementalMesh.hxx>
#include <BRepClass_FaceClassifier.hxx>
#include <BRepBndLib.hxx>
#include <BndLib_AddSurface.hxx>
#include <ShapeAnalysis_Curve.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <GCPnts_AbscissaPoint.hxx>
#include <GCPnts_UniformDeflection.hxx>
#include <GCPnts_QuasiUniformDeflection.hxx>
#include <GeomConvert_CompCurveToBSplineCurve.hxx>
#include <IntCurvesFace_Intersector.hxx>
#include <IntCurveSurface_Intersection.hxx>
#include <Extrema_ExtPC.hxx>
#include <Extrema_ExtPS.hxx>


//! Identifies the type of a curve.
//! Not necessary to redefine as they are defined in OCC
//!
//enum GeomAbs_CurveType {
//    GeomAbs_Line,
//    GeomAbs_Circle,
//    GeomAbs_Ellipse,
//    GeomAbs_Hyperbola,
//    GeomAbs_Parabola,
//    GeomAbs_BezierCurve,
//    GeomAbs_BSplineCurve,
//    GeomAbs_OtherCurve
//};

//! Identifies the type of a curve.
//! Not necessary to redefine as they are defined in OCC
//!
//enum GeomAbs_SurfaceType {
//    GeomAbs_Plane,
//    GeomAbs_Cylinder,
//    GeomAbs_Cone,
//    GeomAbs_Sphere,
//    GeomAbs_Torus,
//    GeomAbs_BezierSurface,
//    GeomAbs_BSplineSurface,
//    GeomAbs_SurfaceOfRevolution,
//    GeomAbs_SurfaceOfExtrusion,
//    GeomAbs_OffsetSurface,
//    GeomAbs_OtherSurface
//}

#endif // OCC_INC_HPP

