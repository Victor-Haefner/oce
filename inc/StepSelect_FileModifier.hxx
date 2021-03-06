// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepSelect_FileModifier_HeaderFile
#define _StepSelect_FileModifier_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepSelect_FileModifier.hxx>

#include <IFSelect_GeneralModifier.hxx>
class StepData_StepWriter;
class IFSelect_ContextWrite;



class StepSelect_FileModifier : public IFSelect_GeneralModifier
{

public:

  
  Standard_EXPORT virtual   void Perform (IFSelect_ContextWrite& ctx, StepData_StepWriter& writer)  const = 0;




  DEFINE_STANDARD_RTTI(StepSelect_FileModifier)

protected:

  
  Standard_EXPORT StepSelect_FileModifier();



private: 




};







#endif // _StepSelect_FileModifier_HeaderFile
