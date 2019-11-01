#ifndef Vxa_ICaller2_Interface
#define Vxa_ICaller2_Interface

#ifndef Vxa_ICaller2
#define Vxa_ICaller2 extern
#endif

/************************
 *****  Components  *****
 ************************/

#include "Vxa_ICaller.h"

/**************************
 *****  Declarations  *****
 **************************/

VINTERFACE_TEMPLATE_INSTANTIATIONS (Vxa,ICaller2)
DECLARE_VxaINTERFACE (ICollection)
#include "VkDynamicArrayOf.h"

/*************************
 *****  Definitions  *****
 *************************/

namespace Vxa {
    VINTERFACE_ROLE (ICaller2, ICaller)
//	VINTERFACE_ROLE_1 (GetSelfReference, IVReceiver<object_reference_t>*);
//	VINTERFACE_ROLE_1 (GetSelfReferences, IVReceiver<object_reference_array_t const&>*);

//	VINTERFACE_ROLE_3 (ReturnObjectReference, ICollection*, object_reference_t, object_reference_t);
//	VINTERFACE_ROLE_3 (ReturnObjectReferences, ICollection*, object_reference_t, object_reference_array_t const&);

//	VINTERFACE_ROLE_1 (ReturnS08Array, VkDynamicArrayOf<Vca::S08> const&);
//	VINTERFACE_ROLE_1 (ReturnU08Array, VkDynamicArrayOf<Vca::U08> const&);

//	VINTERFACE_ROLE_1 (ReturnS16Array, VkDynamicArrayOf<Vca::S16> const&);
//	VINTERFACE_ROLE_1 (ReturnU16Array, VkDynamicArrayOf<Vca::U16> const&);

//	VINTERFACE_ROLE_1 (ReturnS32Array, VkDynamicArrayOf<Vca::S32> const&);
//	VINTERFACE_ROLE_1 (ReturnU32Array, VkDynamicArrayOf<Vca::U32> const&);

//	VINTERFACE_ROLE_1 (ReturnS64Array, VkDynamicArrayOf<Vca::S64> const&);
//	VINTERFACE_ROLE_1 (ReturnU64Array, VkDynamicArrayOf<Vca::U64> const&);

//	VINTERFACE_ROLE_0 (ReturnNA);
//	VINTERFACE_ROLE_1 (ReturnNASegment, object_reference_array_t const&);

//	VINTERFACE_ROLE_2 (ReturnBooleanSegment, object_reference_array_t const&, VkDynamicArrayOf<bool> const&);

//	VINTERFACE_ROLE_2 (ReturnS08Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::S08> const&);
//	VINTERFACE_ROLE_2 (ReturnU08Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::U08> const&);

//	VINTERFACE_ROLE_2 (ReturnS16Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::S16> const&);
//	VINTERFACE_ROLE_2 (ReturnU16Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::U16> const&);

//	VINTERFACE_ROLE_2 (ReturnS32Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::S32> const&);
//	VINTERFACE_ROLE_2 (ReturnU32Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::U32> const&);

//	VINTERFACE_ROLE_2 (ReturnS64Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::S64> const&);
//	VINTERFACE_ROLE_2 (ReturnU64Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::U64> const&);

//	VINTERFACE_ROLE_2 (ReturnF32Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::F32> const&);
//	VINTERFACE_ROLE_2 (ReturnF64Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::F64> const&);

//	VINTERFACE_ROLE_2 (ReturnStringSegment, object_reference_array_t const&, VkDynamicArrayOf<VString> const&);
//	VINTERFACE_ROLE_4 (ReturnObjectSegment, object_reference_array_t const&, ICollection*, object_reference_t, object_reference_array_t const&);

//	VINTERFACE_ROLE_1 (ReturnSegmentCount, cardinality_t);

    VINTERFACE_ROLE_END

    VxaINTERFACE (ICaller2, ICaller);
//	VINTERFACE_METHOD_1 (GetSelfReference, IVReceiver<object_reference_t>*);
//	VINTERFACE_METHOD_1 (GetSelfReferences, IVReceiver<object_reference_array_t const&>*);

//	VINTERFACE_METHOD_3 (ReturnObjectReference, ICollection*, object_reference_t, object_reference_t);
//	VINTERFACE_METHOD_3 (ReturnObjectReferences, ICollection*, object_reference_t, object_reference_array_t const&);

//	VINTERFACE_METHOD_1 (ReturnS08Array, VkDynamicArrayOf<Vca::S08> const&);
//	VINTERFACE_METHOD_1 (ReturnU08Array, VkDynamicArrayOf<Vca::U08> const&);

//	VINTERFACE_METHOD_1 (ReturnS16Array, VkDynamicArrayOf<Vca::S16> const&);
//	VINTERFACE_METHOD_1 (ReturnU16Array, VkDynamicArrayOf<Vca::U16> const&);

//	VINTERFACE_METHOD_1 (ReturnS32Array, VkDynamicArrayOf<Vca::S32> const&);
//	VINTERFACE_METHOD_1 (ReturnU32Array, VkDynamicArrayOf<Vca::U32> const&);

//	VINTERFACE_METHOD_1 (ReturnS64Array, VkDynamicArrayOf<Vca::S64> const&);
//	VINTERFACE_METHOD_1 (ReturnU64Array, VkDynamicArrayOf<Vca::U64> const&);

//	VINTERFACE_METHOD_0 (ReturnNA);
//	VINTERFACE_METHOD_1 (ReturnNASegment, object_reference_array_t const&);

//	VINTERFACE_METHOD_2 (ReturnBooleanSegment, object_reference_array_t const&, VkDynamicArrayOf<bool> const&);

//	VINTERFACE_METHOD_2 (ReturnS08Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::S08> const&);
//	VINTERFACE_METHOD_2 (ReturnU08Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::U08> const&);

//	VINTERFACE_METHOD_2 (ReturnS16Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::S16> const&);
//	VINTERFACE_METHOD_2 (ReturnU16Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::U16> const&);

//	VINTERFACE_METHOD_2 (ReturnS32Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::S32> const&);
//	VINTERFACE_METHOD_2 (ReturnU32Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::U32> const&);

//	VINTERFACE_METHOD_2 (ReturnS64Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::S64> const&);
//	VINTERFACE_METHOD_2 (ReturnU64Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::U64> const&);

//	VINTERFACE_METHOD_2 (ReturnF32Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::F32> const&);
//	VINTERFACE_METHOD_2 (ReturnF64Segment, object_reference_array_t const&, VkDynamicArrayOf<Vca::F64> const&);

//	VINTERFACE_METHOD_2 (ReturnStringSegment, object_reference_array_t const&, VkDynamicArrayOf<VString> const&);

//	VINTERFACE_METHOD_4 (ReturnObjectSegment, object_reference_array_t const&, ICollection*, object_reference_t, object_reference_array_t const&);

//	VINTERFACE_METHOD_1 (ReturnSegmentCount, cardinality_t);

    VINTERFACE_END
}


#endif
