/******************************************************************************/
/* File   : IpduM.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "IpduM.hpp"
#include "infIpduM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define IPDUM_AR_RELEASE_VERSION_MAJOR                                         4
#define IPDUM_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(IPDUM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible IPDUM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(IPDUM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible IPDUM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, IPDUM_VAR, IPDUM_CONST) gptrinfEcuMClient_IpduM = &IpduM;
CONSTP2VAR(infDcmClient,  IPDUM_VAR, IPDUM_CONST) gptrinfDcmClient_IpduM  = &IpduM;
CONSTP2VAR(infSchMClient, IPDUM_VAR, IPDUM_CONST) gptrinfSchMClient_IpduM = &IpduM;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_IpduM, IPDUM_VAR) IpduM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, IPDUM_CODE) module_IpduM::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, IPDUM_CONFIG_DATA, IPDUM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == IpduM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
      }
      else{
#if(STD_ON == IpduM_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == IpduM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == IpduM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  IPDUM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, IPDUM_CODE) module_IpduM::DeInitFunction(
   void
){
#if(STD_ON == IpduM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == IpduM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == IpduM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  IPDUM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, IPDUM_CODE) module_IpduM::MainFunction(
   void
){
#if(STD_ON == IpduM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == IpduM_InitCheck)
   }
   else{
#if(STD_ON == IpduM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  IPDUM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, IPDUM_CODE) module_IpduM::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

