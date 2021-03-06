// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepDimTol_RWSymmetryTolerance_HeaderFile
#define _RWStepDimTol_RWSymmetryTolerance_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepDimTol_SymmetryTolerance.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepDimTol_SymmetryTolerance;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for SymmetryTolerance
class RWStepDimTol_RWSymmetryTolerance 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepDimTol_RWSymmetryTolerance();
  
  //! Reads SymmetryTolerance
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepDimTol_SymmetryTolerance)& ent)  const;
  
  //! Writes SymmetryTolerance
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepDimTol_SymmetryTolerance)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepDimTol_SymmetryTolerance)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepDimTol_RWSymmetryTolerance_HeaderFile
