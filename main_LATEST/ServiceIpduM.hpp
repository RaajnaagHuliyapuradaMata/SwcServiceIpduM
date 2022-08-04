#pragma once
/******************************************************************************/
/* File   : ServiceIpduM.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceIpduM.hpp"
#include "CfgServiceIpduM.hpp"
#include "ServiceIpduM_core.hpp"
#include "infServiceIpduM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceIpduM:
      INTERFACES_EXPORTED_IPDUM
      public abstract_module
   ,  public class_ServiceIpduM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceIpduM_Type* lptrConst = (ConstServiceIpduM_Type*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceIpduM_Up;
      infServicePduRClient_Lo infServicePduRClient_ServiceIpduM_Lo;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, IPDUM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, IPDUM_CONST,       IPDUM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   IPDUM_CONFIG_DATA, IPDUM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, IPDUM_CODE) DeInitFunction (void);
      FUNC(void, IPDUM_CODE) MainFunction   (void);
      IPDUM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceIpduM, IPDUM_VAR) ServiceIpduM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

