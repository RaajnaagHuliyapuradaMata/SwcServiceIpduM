#pragma once
/******************************************************************************/
/* File   : ServiceIpduM.hpp                                                  */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceIpduM_ServiceNvM_Types.hpp"
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
      INTERFACES_EXPORTED_SERVICEIPDUM
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
      FUNC(void, SERVICEIPDUM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEIPDUM_CONST,       SERVICEIPDUM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEIPDUM_CONFIG_DATA, SERVICEIPDUM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEIPDUM_CODE) DeInitFunction (void);
      FUNC(void, SERVICEIPDUM_CODE) MainFunction   (void);
      SERVICEIPDUM_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceIpduM, SERVICEIPDUM_VAR) ServiceIpduM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

