// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ActionRequestAssignment_HeaderFile
#define _StepBasic_ActionRequestAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ActionRequestAssignment.hxx>

#include <Handle_StepBasic_VersionedActionRequest.hxx>
#include <MMgt_TShared.hxx>
class StepBasic_VersionedActionRequest;


//! Representation of STEP entity ActionRequestAssignment
class StepBasic_ActionRequestAssignment : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_ActionRequestAssignment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_VersionedActionRequest)& aAssignedActionRequest) ;
  
  //! Returns field AssignedActionRequest
  Standard_EXPORT   Handle(StepBasic_VersionedActionRequest) AssignedActionRequest()  const;
  
  //! Set field AssignedActionRequest
  Standard_EXPORT   void SetAssignedActionRequest (const Handle(StepBasic_VersionedActionRequest)& AssignedActionRequest) ;




  DEFINE_STANDARD_RTTI(StepBasic_ActionRequestAssignment)

protected:




private: 


  Handle(StepBasic_VersionedActionRequest) theAssignedActionRequest;


};







#endif // _StepBasic_ActionRequestAssignment_HeaderFile
