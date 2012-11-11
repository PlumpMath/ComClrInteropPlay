

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sun Nov 11 13:18:02 2012
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

#ifndef __ICalculatorApplication_FWD_DEFINED__
#define __ICalculatorApplication_FWD_DEFINED__
typedef interface ICalculatorApplication ICalculatorApplication;

#endif 	/* __ICalculatorApplication_FWD_DEFINED__ */


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


#ifndef __CalculatorApplication_FWD_DEFINED__
#define __CalculatorApplication_FWD_DEFINED__

#ifdef __cplusplus
typedef class CalculatorApplication CalculatorApplication;
#else
typedef struct CalculatorApplication CalculatorApplication;
#endif /* __cplusplus */

#endif 	/* __CalculatorApplication_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ComCalculator_0000_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_ComCalculator_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ComCalculator_0000_0000_v0_0_s_ifspec;

#ifndef __ICalculatorApplication_INTERFACE_DEFINED__
#define __ICalculatorApplication_INTERFACE_DEFINED__

/* interface ICalculatorApplication */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICalculatorApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8388A2A1-AEFF-4F07-97B3-4F67A4E3F450")
    ICalculatorApplication : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetPlugin( 
            /* [in] */ BSTR progId,
            /* [retval][out] */ ITheCalculator **result) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICalculatorApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICalculatorApplication * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICalculatorApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICalculatorApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICalculatorApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICalculatorApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICalculatorApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICalculatorApplication * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPlugin )( 
            ICalculatorApplication * This,
            /* [in] */ BSTR progId,
            /* [retval][out] */ ITheCalculator **result);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICalculatorApplication * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ICalculatorApplicationVtbl;

    interface ICalculatorApplication
    {
        CONST_VTBL struct ICalculatorApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICalculatorApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICalculatorApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICalculatorApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICalculatorApplication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICalculatorApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICalculatorApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICalculatorApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICalculatorApplication_GetPlugin(This,progId,result)	\
    ( (This)->lpVtbl -> GetPlugin(This,progId,result) ) 

#define ICalculatorApplication_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICalculatorApplication_INTERFACE_DEFINED__ */


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
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ ICalculatorApplication *application) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ int left,
            /* [in] */ int right,
            /* [retval][out] */ int *result) = 0;
        
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ITheCalculator * This,
            /* [in] */ ICalculatorApplication *application);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ITheCalculator * This,
            /* [in] */ int left,
            /* [in] */ int right,
            /* [retval][out] */ int *result);
        
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


#define ITheCalculator_Initialize(This,application)	\
    ( (This)->lpVtbl -> Initialize(This,application) ) 

#define ITheCalculator_Add(This,left,right,result)	\
    ( (This)->lpVtbl -> Add(This,left,right,result) ) 

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

EXTERN_C const CLSID CLSID_CalculatorApplication;

#ifdef __cplusplus

class DECLSPEC_UUID("66AEC723-FC7D-4C9A-BD8C-1AA7F7568AB9")
CalculatorApplication;
#endif
#endif /* __ComCalculatorLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


