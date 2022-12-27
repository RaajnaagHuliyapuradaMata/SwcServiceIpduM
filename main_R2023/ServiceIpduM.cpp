/******************************************************************************/
/* File   : ServiceIpduM.cpp                                                  */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceIpduM.hpp"
#include "infServiceIpduM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEIPDUM_AR_RELEASE_VERSION_MAJOR                                  4
#define SERVICEIPDUM_AR_RELEASE_VERSION_MINOR                                  3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICEIPDUM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICEIPDUM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICEIPDUM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICEIPDUM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceIpduM, SERVICEIPDUM_VAR) ServiceIpduM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICEIPDUM_CODE) module_ServiceIpduM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICEIPDUM_CONST,       SERVICEIPDUM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEIPDUM_CONFIG_DATA, SERVICEIPDUM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceIpduM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceIpduM_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceIpduM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceIpduM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceIpduM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEIPDUM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEIPDUM_CODE) module_ServiceIpduM::DeInitFunction(
   void
){
#if(STD_ON == ServiceIpduM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceIpduM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceIpduM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEIPDUM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEIPDUM_CODE) module_ServiceIpduM::MainFunction(
   void
){
#if(STD_ON == ServiceIpduM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceIpduM_InitCheck)
   }
   else{
#if(STD_ON == ServiceIpduM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEIPDUM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEIPDUM_CODE) module_ServiceIpduM::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

