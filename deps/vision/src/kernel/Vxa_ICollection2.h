#ifndef Vxa_ICollection2_Interface
#define Vxa_ICollection2_Interface

#ifndef Vxa_ICollection2
#define Vxa_ICollection2 extern
#endif

/************************
 *****  Components  *****
 ************************/

#include "Vxa_ICollection.h"

/**************************
 *****  Declarations  *****
 **************************/

DECLARE_VxaINTERFACE (ICaller)

VINTERFACE_TEMPLATE_INSTANTIATIONS_AT_LEVEL (Vxa,ICollection2,2)

/*************************
 *****  Definitions  *****
 *************************/

namespace Vxa {
    VINTERFACE_ROLE (ICollection2, ICollection)
//	VINTERFACE_ROLE_4 (Bind  , ICaller*, VString const&, cardinality_t, cardinality_t);
//	VINTERFACE_ROLE_4 (Invoke, ICaller*, VString const&, cardinality_t, cardinality_t);
//	VINTERFACE_ROLE_1 (QueryCardinality, IVReceiver<cardinality_t>*);
    VINTERFACE_ROLE_END

    VxaINTERFACE (ICollection2, ICollection);
//	VINTERFACE_METHOD_4 (Bind  , ICaller*, VString const&, cardinality_t, cardinality_t);
//	VINTERFACE_METHOD_4 (Invoke, ICaller*, VString const&, cardinality_t, cardinality_t);
//	VINTERFACE_METHOD_1 (QueryCardinality, IVReceiver<cardinality_t>*);
    VINTERFACE_END
}


#endif
