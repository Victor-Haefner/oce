// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapIteratorOfDataMapOfIntegerOwner_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfIntegerOwner_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_SelectMgr_EntityOwner.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerOwner.hxx>
class Standard_NoSuchObject;
class SelectMgr_EntityOwner;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerOwner;
class MeshVS_DataMapNodeOfDataMapOfIntegerOwner;



class MeshVS_DataMapIteratorOfDataMapOfIntegerOwner  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfIntegerOwner();
  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfIntegerOwner(const MeshVS_DataMapOfIntegerOwner& aMap);
  
  Standard_EXPORT   void Initialize (const MeshVS_DataMapOfIntegerOwner& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Handle(SelectMgr_EntityOwner)& Value()  const;




protected:





private:





};







#endif // _MeshVS_DataMapIteratorOfDataMapOfIntegerOwner_HeaderFile
