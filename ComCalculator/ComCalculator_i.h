

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Fri Nov 09 21:29:52 2012
 */
/* Compiler settings for ComCalculator.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ComCalculator_i_h__
#define __ComCalculator_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITheCalculator_FWD_DEFINED__
#define __ITheCalculator_FWD_DEFINED__
typedef interface ITheCalculator ITheCalculator;

#endif 	/* __ITheCalculator_FWD_DEFINED__ */


#ifndef __TheCalculator_FWD_DEFINED__
#define __TheCalculator_FWD_DEFINED__

#ifdef __cplusplus
typedef class TheCalculator TheCalculator;
#else
typedef struct TheCalculator TheCalculator;
#endif /* __cplusplus */

#endif 	/* __TheCalculator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITheCalculator_INTERFACE_DEFINED__
#define __ITheCalculator_INTERFACE_DEFINED__

/* interface ITheCalculator */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITheCalculator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48A0E2FF-D8C8-4F4E-8389-0FD54E3BDC9A")
    ITheCalculator : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ITheCalculatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITheCalculator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITheCalculator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITheCalculator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITheCalculator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITheCalculator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITheCalculator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITheCalculator * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } ITheCalculatorVtbl;

    interface ITheCalculator
    {
        CONST_VTBL struct ITheCalculatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITheCalculator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITheCalculator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITheCalculator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITheCalculator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITheCalculator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITheCalculator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITheCalculator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITheCalculator_INTERFACE_DEFINED__ */



#ifndef __ComCalculatorLib_LIBRARY_DEFINED__
#define __ComCalculatorLib_LIBRARY_DEFINED__

/* library ComCalculatorLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ComCalculatorLib;

EXTERN_C const CLSID CLSID_TheCalculator;

#ifdef __cplusplus

class DECLSPEC_UUID("31A18EE5-90F8-4C35-8861-67A2A2419036")
TheCalculator;
#endif
#endif /* __ComCalculatorLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


