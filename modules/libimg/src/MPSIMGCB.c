/* -*- Mode: C; tab-width: 4; -*- */
/*******************************************************************************
 * Source date: 14 Jul 1998 19:28:58 GMT
 * netscape/libimg/PSIMGCB module C stub file
 * Generated by jmc version 1.8 -- DO NOT EDIT
 ******************************************************************************/

#include <stdlib.h>
#include <string.h>
#include "prmem.h"

/* Include the implementation-specific header: */
#include "PPSIMGCB.h"

/* Include other interface headers: */

/*******************************************************************************
 * PSIMGCB Methods
 ******************************************************************************/

#ifndef OVERRIDE_PSIMGCB_getInterface
JMC_PUBLIC_API(void*)
_PSIMGCB_getInterface(struct PSIMGCB* self, jint op, const JMCInterfaceID* iid, JMCException* *exc)
{
	if (memcmp(iid, &PSIMGCB_ID, sizeof(JMCInterfaceID)) == 0)
		return PSIMGCBImpl2PSIMGCB(PSIMGCB2PSIMGCBImpl(self));
	return _PSIMGCB_getBackwardCompatibleInterface(self, iid, exc);
}
#endif

#ifndef OVERRIDE_PSIMGCB_addRef
JMC_PUBLIC_API(void)
_PSIMGCB_addRef(struct PSIMGCB* self, jint op, JMCException* *exc)
{
	PSIMGCBImplHeader* impl = (PSIMGCBImplHeader*)PSIMGCB2PSIMGCBImpl(self);
	impl->refcount++;
}
#endif

#ifndef OVERRIDE_PSIMGCB_release
JMC_PUBLIC_API(void)
_PSIMGCB_release(struct PSIMGCB* self, jint op, JMCException* *exc)
{
	PSIMGCBImplHeader* impl = (PSIMGCBImplHeader*)PSIMGCB2PSIMGCBImpl(self);
	if (--impl->refcount == 0) {
		PSIMGCB_finalize(self, exc);
	}
}
#endif

#ifndef OVERRIDE_PSIMGCB_hashCode
JMC_PUBLIC_API(jint)
_PSIMGCB_hashCode(struct PSIMGCB* self, jint op, JMCException* *exc)
{
	return (jint)self;
}
#endif

#ifndef OVERRIDE_PSIMGCB_equals
JMC_PUBLIC_API(jbool)
_PSIMGCB_equals(struct PSIMGCB* self, jint op, void* obj, JMCException* *exc)
{
	return self == obj;
}
#endif

#ifndef OVERRIDE_PSIMGCB_clone
JMC_PUBLIC_API(void*)
_PSIMGCB_clone(struct PSIMGCB* self, jint op, JMCException* *exc)
{
	PSIMGCBImpl* impl = PSIMGCB2PSIMGCBImpl(self);
	PSIMGCBImpl* newImpl = (PSIMGCBImpl*)malloc(sizeof(PSIMGCBImpl));
	if (newImpl == NULL) return NULL;
	memcpy(newImpl, impl, sizeof(PSIMGCBImpl));
	((PSIMGCBImplHeader*)newImpl)->refcount = 1;
	return newImpl;
}
#endif

#ifndef OVERRIDE_PSIMGCB_toString
JMC_PUBLIC_API(const char*)
_PSIMGCB_toString(struct PSIMGCB* self, jint op, JMCException* *exc)
{
	return NULL;
}
#endif

#ifndef OVERRIDE_PSIMGCB_finalize
JMC_PUBLIC_API(void)
_PSIMGCB_finalize(struct PSIMGCB* self, jint op, JMCException* *exc)
{
	/* Override this method and add your own finalization here. */
	PR_FREEIF(self);
}
#endif

/*******************************************************************************
 * Jump Tables
 ******************************************************************************/

const struct PSIMGCBInterface PSIMGCBVtable = {
	_PSIMGCB_getInterface,
	_PSIMGCB_addRef,
	_PSIMGCB_release,
	_PSIMGCB_hashCode,
	_PSIMGCB_equals,
	_PSIMGCB_clone,
	_PSIMGCB_toString,
	_PSIMGCB_finalize,
	_PSIMGCB_NewPixmap,
	_PSIMGCB_UpdatePixmap,
	_PSIMGCB_ControlPixmapBits,
	_PSIMGCB_DestroyPixmap,
	_PSIMGCB_DisplayPixmap,
	_PSIMGCB_DisplayIcon,
	_PSIMGCB_GetIconDimensions
};

/*******************************************************************************
 * Factory Operations
 ******************************************************************************/

JMC_PUBLIC_API(PSIMGCB*)
PSIMGCBFactory_Create(JMCException* *exception)
{
	PSIMGCBImplHeader* impl = (PSIMGCBImplHeader*)PR_NEWZAP(PSIMGCBImpl);
	PSIMGCB* self;
	if (impl == NULL) {
		JMC_EXCEPTION(exception, JMCEXCEPTION_OUT_OF_MEMORY);
		return NULL;
	}
	self = PSIMGCBImpl2PSIMGCB(impl);
	impl->vtablePSIMGCB = &PSIMGCBVtable;
	impl->refcount = 1;
	_PSIMGCB_init(self, exception);
	if (JMC_EXCEPTION_RETURNED(exception)) {
		PR_FREEIF(impl);
		return NULL;
	}
	return self;
}

