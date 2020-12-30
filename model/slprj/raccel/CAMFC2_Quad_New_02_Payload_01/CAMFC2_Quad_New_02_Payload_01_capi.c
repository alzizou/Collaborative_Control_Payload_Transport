#include "__cf_CAMFC2_Quad_New_02_Payload_01.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "CAMFC2_Quad_New_02_Payload_01_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "CAMFC2_Quad_New_02_Payload_01.h"
#include "CAMFC2_Quad_New_02_Payload_01_capi.h"
#include "CAMFC2_Quad_New_02_Payload_01_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Controller Interpreter #1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 1 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Controller Interpreter #1"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 2 , 2 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Controller to Motors #1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 3 , 22 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Plant #1/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Plant #1/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 5 , 23 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Controller Interpreter #2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 23 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Controller Interpreter #2"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 7 , 24 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Controller To Motors #2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 8 , 44 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Plant #2/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Plant #2/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 10 , 45 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Controller Interpreter #3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 11 , 45 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Controller Interpreter #3"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 12 , 46 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Controller to Motors #3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 13 , 66 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Plant #3/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Plant #3/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 15 , 67 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Controller Interpreter #4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 67 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Controller Interpreter #4"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 17 , 68 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Controller to Motors #4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 18 , 88 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Plant #4/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Plant #4/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 20 , 99 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Abs" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Abs1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Switch2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Switch3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 117 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Payload/Controller /Control law" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Payload/Controller /Derivative" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Payload/Controller /Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 28 , 118 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Payload/Plant/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Payload/Plant/Integrator" ) , TARGET_STRING (
"" ) , 0 , 0 , 5 , 0 , 0 } , { 30 , 5 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Observer T#1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 31 , 5 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Observer T#1"
) , TARGET_STRING ( "" ) , 1 , 0 , 4 , 0 , 0 } , { 32 , 6 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Observer q#1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 33 , 6 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Observer q#1"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 34 , 7 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Observer x0_hat#1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 35 , 7 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Observer x0_hat#1"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Integrator6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Memory"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Memory5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 40 , 8 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/CARE" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 41 , 11 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/g-Estimator"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 42 , 12 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/g-Estimator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 43 , 13 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/main" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 44 , 14 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/variable change"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 45 , 14 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/variable change"
) , TARGET_STRING ( "" ) , 1 , 0 , 5 , 0 , 0 } , { 46 , 14 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/variable change"
) , TARGET_STRING ( "" ) , 2 , 0 , 5 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Memory" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 50 , 15 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Adaptive Law A_T #1"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 51 , 16 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Adaptive Law g_T #1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 52 , 17 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/DRE_T"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 53 , 20 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Main Controller_T #1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 54 , 21 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Module to compute Consensus Error_T #1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Memory2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 57 , 27 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Observer T#2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 58 , 27 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Observer T#2"
) , TARGET_STRING ( "" ) , 1 , 0 , 4 , 0 , 0 } , { 59 , 28 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Observer q#2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 60 , 28 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Observer q#2"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 61 , 29 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Observer x0_hat#2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 62 , 29 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Observer x0_hat#2"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Integrator6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Memory"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 66 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Memory5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 67 , 30 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/CARE" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 68 , 33 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/g-Estimator"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 69 , 34 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/g-Estimator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 70 , 35 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/main" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 71 , 36 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/variable change"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 72 , 36 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/variable change"
) , TARGET_STRING ( "" ) , 1 , 0 , 5 , 0 , 0 } , { 73 , 36 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/variable change"
) , TARGET_STRING ( "" ) , 2 , 0 , 5 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Memory" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 76 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 77 , 37 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Adaptive Law A_T #2"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 78 , 38 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Adaptive Law g_T #2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 79 , 39 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/DRE_T"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 80 , 42 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Main Controller_T #2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 81 , 43 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Module to compute Consensus Error_T #2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Memory2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 84 , 49 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Observer T#3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 85 , 49 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Observer T#3"
) , TARGET_STRING ( "" ) , 1 , 0 , 4 , 0 , 0 } , { 86 , 50 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Observer q#3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 87 , 50 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Observer q#3"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 88 , 51 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Observer x0_hat#3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 89 , 51 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Observer x0_hat#3"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Integrator6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Memory"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Memory5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 94 , 52 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/CARE" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 95 , 55 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/g-Estimator"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 96 , 56 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/g-Estimator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 97 , 57 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/main" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 98 , 58 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/variable change"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 99 , 58 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/variable change"
) , TARGET_STRING ( "" ) , 1 , 0 , 5 , 0 , 0 } , { 100 , 58 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/variable change"
) , TARGET_STRING ( "" ) , 2 , 0 , 5 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Memory" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 103 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 104 , 59 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Adaptive Law A_T #3"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 105 , 60 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Adaptive Law g_T #3"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 106 , 61 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/DRE_T"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 107 , 64 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Main Controller_T #3"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 108 , 65 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Module to compute Consensus Error_T #3"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Memory2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 111 , 71 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Observer T#4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 112 , 71 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Observer T#4"
) , TARGET_STRING ( "" ) , 1 , 0 , 4 , 0 , 0 } , { 113 , 72 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Observer q#4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 114 , 72 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Observer q#4"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 115 , 73 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Observer x0_hat#4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 116 , 73 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Observer x0_hat#4"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Integrator5"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Integrator6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Memory"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 121 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Memory5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 122 , 74 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/CARE" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 123 , 77 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/g-Estimator"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 124 , 78 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/g-Estimator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 125 , 79 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/main" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 126 , 80 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/variable change"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 127 , 80 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/variable change"
) , TARGET_STRING ( "" ) , 1 , 0 , 5 , 0 , 0 } , { 128 , 80 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/variable change"
) , TARGET_STRING ( "" ) , 2 , 0 , 5 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 130 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Memory" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 131 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 132 , 81 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Adaptive Law A_T #4"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 133 , 82 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Adaptive Law g_T #4"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 134 , 83 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/DRE_T"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 135 , 86 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Main Controller_T #4"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 136 , 87 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Module to compute Consensus Error_T #4"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 137 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 138 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Memory2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 139 , 89 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot10/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 140 , 90 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot11/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 141 , 91 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot12/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 1 } , { 142 , 92 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot13/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 1 } , { 143 , 93 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot14/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 1 } , { 144 , 94 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot15/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 1 } , { 145 , 95 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot8/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 146 , 96 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot9/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 147 , 97 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Differentiator0/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 148 , 98 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Differentiator0/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 149 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Clock1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 150 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 151 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 152 , 100 , TARGET_STRING
(
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 153 , 0 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 154 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 155 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 156 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 157 , 101 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 158 , 102 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot1/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 159 , 103 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot2/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 160 , 104 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot3/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 161 , 105 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot4/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 162 , 106 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot5/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 163 , 107 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot6/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 164 , 108 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot7/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 165 , 109 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 166 , 110 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot1/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 167 , 111 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot2/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 168 , 112 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot3/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 169 , 113 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot4/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 170 , 114 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot5/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 171 , 115 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot6/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 172 , 116 , TARGET_STRING
(
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot7/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 173 , 3 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Differentiator2/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 174 , 4 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Differentiator2/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 175 , 9 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Differentiator/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 176 , 10 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Differentiator/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 177 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Differentiator/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 178 , 18 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Differentiator1/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 179 , 19 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Differentiator1/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 180 , 25 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Differentiator2/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 181 , 26 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Differentiator2/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 182 , 31 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Differentiator/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 183 , 32 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Differentiator/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 184 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Differentiator/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 185 , 40 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Differentiator1/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 186 , 41 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Differentiator1/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 187 , 47 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Differentiator2/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 188 , 48 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Differentiator2/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 189 , 53 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Differentiator/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 190 , 54 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Differentiator/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 191 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Differentiator/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 192 , 62 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Differentiator1/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 193 , 63 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Differentiator1/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 194 , 69 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Differentiator2/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 195 , 70 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Differentiator2/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 196 , 75 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Differentiator/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 197 , 76 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Differentiator/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 198 , 0 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Differentiator/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 199 , 84 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Differentiator1/Sliding differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 200 , 85 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Differentiator1/Sliding differentiator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 201 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Agent #" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Agent #" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 203 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Agent #" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Agent #" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 205 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /formation of the leader" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 206 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Plant #1/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 207 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Plant #2/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 208 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Plant #3/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 209 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Plant #4/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 210 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 211 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Constant5" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 212 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Desired Position4"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 213 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Switch2" ) ,
TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 214 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Switch3" ) ,
TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 215 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn1"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 216 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn1"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 217 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn2"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 218 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn2"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 219 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn3"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 220 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn3"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 221 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn4"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 222 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn4"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 223 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn5"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 224 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn5"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 225 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Payload/Controller /Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 226 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Payload/Controller /Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 227 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Payload/Plant/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 5 , 0 } , { 228 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 229 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Integrator5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 230 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Integrator6"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 231 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 232 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Memory3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 233 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Memory5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 234 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 235 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 236 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 237 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 238 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 239 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 240 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 241 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 242 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Integrator4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 243 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Memory2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 244 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 245 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Integrator5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 246 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Integrator6"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 247 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 248 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Memory3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 249 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Memory5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 250 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 251 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 252 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 253 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 254 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 255 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 256 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 257 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 258 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Integrator4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 259 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Memory2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 260 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 261 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Integrator5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 262 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Integrator6"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 263 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 264 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Memory3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 265 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Memory5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 266 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 267 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 268 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 269 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 270 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 271 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 272 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 273 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 274 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Integrator4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 275 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Memory2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 276 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 277 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Integrator5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 278 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Integrator6"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 279 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 280 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Memory3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 281 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Memory5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 282 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 283 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 284 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 285 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 286 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 287 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 288 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 289 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 290 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Integrator4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 291 ,
TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Memory2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 292 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Differentiator0/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 293 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Differentiator0/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 294 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Desired Position4"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 295 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/From Workspace3"
) , TARGET_STRING ( "Time0" ) , 0 , 9 , 0 } , { 296 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/From Workspace3"
) , TARGET_STRING ( "Data0" ) , 0 , 9 , 0 } , { 297 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 298 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 299 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 300 , TARGET_STRING (
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 301 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn1"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 302 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn1"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 303 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn2"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 304 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn2"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 305 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn3"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 306 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn3"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 307 , TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Differentiator2/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 308 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative  Observers #1/Differentiator2/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 309 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Differentiator/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 310 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Differentiator/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 311 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Differentiator1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 312 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Differentiator1/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 313 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Differentiator2/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 314 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative  Observers #2/Differentiator2/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 315 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Differentiator/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 316 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Differentiator/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 317 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Differentiator1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 318 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Differentiator1/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 319 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Differentiator2/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 320 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative  Observers #3/Differentiator2/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 321 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Differentiator/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 322 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Differentiator/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 323 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Differentiator1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 324 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Differentiator1/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 325 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Differentiator2/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 326 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative  Observers #1/Differentiator2/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 327 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Differentiator/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 328 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Differentiator/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 329 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Differentiator1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 330 ,
TARGET_STRING (
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Differentiator1/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 331 , TARGET_STRING ( "AN" ) , 0 , 10 , 0 } , {
332 , TARGET_STRING ( "B" ) , 0 , 6 , 0 } , { 333 , TARGET_STRING ( "BBT_inv"
) , 0 , 6 , 0 } , { 334 , TARGET_STRING ( "BN" ) , 0 , 10 , 0 } , { 335 ,
TARGET_STRING ( "H" ) , 0 , 10 , 0 } , { 336 , TARGET_STRING ( "J" ) , 0 , 11
, 0 } , { 337 , TARGET_STRING ( "K" ) , 0 , 6 , 0 } , { 338 , TARGET_STRING (
"Ka" ) , 0 , 0 , 0 } , { 339 , TARGET_STRING ( "Kd" ) , 0 , 0 , 0 } , { 340 ,
TARGET_STRING ( "Kf" ) , 0 , 0 , 0 } , { 341 , TARGET_STRING ( "Kt" ) , 0 , 0
, 0 } , { 342 , TARGET_STRING ( "Lq" ) , 0 , 0 , 0 } , { 343 , TARGET_STRING
( "M" ) , 0 , 0 , 0 } , { 344 , TARGET_STRING ( "Observer_Gain" ) , 0 , 0 , 0
} , { 345 , TARGET_STRING ( "Observer_Gain1" ) , 0 , 0 , 0 } , { 346 ,
TARGET_STRING ( "Q" ) , 0 , 6 , 0 } , { 347 , TARGET_STRING ( "QR" ) , 0 , 6
, 0 } , { 348 , TARGET_STRING ( "R" ) , 0 , 6 , 0 } , { 349 , TARGET_STRING (
"RM_1" ) , 0 , 10 , 0 } , { 350 , TARGET_STRING ( "U_dot0_M" ) , 0 , 1 , 0 }
, { 351 , TARGET_STRING ( "Upsilon_M" ) , 0 , 1 , 0 } , { 352 , TARGET_STRING
( "X_M" ) , 0 , 1 , 0 } , { 353 , TARGET_STRING ( "alpha" ) , 0 , 0 , 0 } , {
354 , TARGET_STRING ( "gamma_0" ) , 0 , 6 , 0 } , { 355 , TARGET_STRING (
"gamma_1" ) , 0 , 6 , 0 } , { 356 , TARGET_STRING ( "ge" ) , 0 , 0 , 0 } , {
357 , TARGET_STRING ( "k1" ) , 0 , 0 , 0 } , { 358 , TARGET_STRING ( "k2" ) ,
0 , 0 , 0 } , { 359 , TARGET_STRING ( "r_formX" ) , 0 , 0 , 0 } , { 360 ,
TARGET_STRING ( "r_formY" ) , 0 , 0 , 0 } , { 361 , TARGET_STRING ( "r_formZ"
) , 0 , 0 , 0 } , { 362 , TARGET_STRING ( "rho_0" ) , 0 , 0 , 0 } , { 363 ,
TARGET_STRING ( "rho_1" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . kqhftxu5gq . psgobcrgrf , & rtB .
kqhftxu5gq . kh3hogern0 [ 0 ] , & rtB . ndp0ayzs4j . nnix5btgdj [ 0 ] , & rtB
. oa3j2mackf . lfrnaagn2k [ 0 ] , & rtB . lbn4luqpfw [ 0 ] , & rtB .
bbinms31xh . psgobcrgrf , & rtB . bbinms31xh . kh3hogern0 [ 0 ] , & rtB .
l2ylxix2y4 . nnix5btgdj [ 0 ] , & rtB . mtut1sc5t2 . lfrnaagn2k [ 0 ] , & rtB
. fdipzybztz [ 0 ] , & rtB . li222mg0tu . psgobcrgrf , & rtB . li222mg0tu .
kh3hogern0 [ 0 ] , & rtB . n2gxek1ysk . nnix5btgdj [ 0 ] , & rtB . jwexpeel5j
. lfrnaagn2k [ 0 ] , & rtB . gi1v4dqyzv [ 0 ] , & rtB . idhvdfhluc .
psgobcrgrf , & rtB . idhvdfhluc . kh3hogern0 [ 0 ] , & rtB . h5potfgoew .
nnix5btgdj [ 0 ] , & rtB . okynqnkfux . lfrnaagn2k [ 0 ] , & rtB . nbziqu4k4i
[ 0 ] , & rtB . pqzidfucir [ 0 ] , & rtB . fswysouih3 , & rtB . b5uou53b4t ,
& rtB . d4hj01c1vg , & rtB . jeeth114rb , & rtB . lk5bwa3fu5 [ 0 ] , & rtB .
hngud44kjo [ 0 ] , & rtB . lf5t1r3q3k [ 0 ] , & rtB . kg1nnjy4y0 [ 0 ] , &
rtB . o5fje2j3te [ 0 ] , & rtB . by50irynec . h5nzmu35n2 [ 0 ] , & rtB .
by50irynec . h4qfg23klo [ 0 ] , & rtB . m3bgszen3q [ 0 ] , & rtB . mwunt1htil
[ 0 ] , & rtB . jgni5sqhom [ 0 ] , & rtB . kjivth4tcr [ 0 ] , & rtB .
ittv15bcsa [ 0 ] , & rtB . pdfkmj3akd [ 0 ] , & rtB . asu0f2ijbr [ 0 ] , &
rtB . ow20kwohpt [ 0 ] , & rtB . a2ww44jm1e . oizdxburtj [ 0 ] , & rtB .
czp4tvzurt . awuha2csho [ 0 ] , & rtB . br1bl3k0ub . lgflny3vaf [ 0 ] , & rtB
. aoni3btcrm . ceslw2bcsd [ 0 ] , & rtB . ejm1xz1i3s . p0sifpbcra [ 0 ] , &
rtB . ejm1xz1i3s . okla4d4php [ 0 ] , & rtB . ejm1xz1i3s . koxsf3yz0i [ 0 ] ,
& rtB . gqx5b5eit1 [ 0 ] , & rtB . mixz2kbbzd [ 0 ] , & rtB . lpfnz5a2xn [ 0
] , & rtB . gnq3tqucqn . dokc3h5z1d [ 0 ] , & rtB . oqlntds35a . ovkgcdutyp [
0 ] , & rtB . kv2bmipsop . ertj4nm0qu [ 0 ] , & rtB . or1qu0lbxa . iqrledjweq
[ 0 ] , & rtB . koohydnldu . j50ump3tqb [ 0 ] , & rtB . itgoh1hxqp [ 0 ] , &
rtB . o1w4cyxkr0 [ 0 ] , & rtB . frmzupx0zv . h5nzmu35n2 [ 0 ] , & rtB .
frmzupx0zv . h4qfg23klo [ 0 ] , & rtB . dmj2b1er01 [ 0 ] , & rtB . eko0owjdui
[ 0 ] , & rtB . d234fos3qo [ 0 ] , & rtB . onz3z4vedl [ 0 ] , & rtB .
ktynx515e0 [ 0 ] , & rtB . myxakcrmqb [ 0 ] , & rtB . j2pscqeale [ 0 ] , &
rtB . htdjvfkvx0 [ 0 ] , & rtB . odecv1tkpq . oizdxburtj [ 0 ] , & rtB .
f251a30bl5 . awuha2csho [ 0 ] , & rtB . htfczxwbqt . lgflny3vaf [ 0 ] , & rtB
. dhlomykkky . ceslw2bcsd [ 0 ] , & rtB . jbgetkuxaj . p0sifpbcra [ 0 ] , &
rtB . jbgetkuxaj . okla4d4php [ 0 ] , & rtB . jbgetkuxaj . koxsf3yz0i [ 0 ] ,
& rtB . kzomkkaldu [ 0 ] , & rtB . afgqiftecc [ 0 ] , & rtB . mcgappzh0a [ 0
] , & rtB . d2q5qnt0b3 . dokc3h5z1d [ 0 ] , & rtB . du2lrvbx5h . ovkgcdutyp [
0 ] , & rtB . avlxughyns . ertj4nm0qu [ 0 ] , & rtB . psbegwgczo . iqrledjweq
[ 0 ] , & rtB . oeqeegnqph . j50ump3tqb [ 0 ] , & rtB . incdyqesqd [ 0 ] , &
rtB . g5dxvtvvft [ 0 ] , & rtB . dm0iynorl1 . h5nzmu35n2 [ 0 ] , & rtB .
dm0iynorl1 . h4qfg23klo [ 0 ] , & rtB . odtp4k5ik4 [ 0 ] , & rtB . oxqbz15e3l
[ 0 ] , & rtB . fxo2ztmqiq [ 0 ] , & rtB . nc5l5ompcr [ 0 ] , & rtB .
gcxmhwbhns [ 0 ] , & rtB . ozfculoppj [ 0 ] , & rtB . nfvj4bpva5 [ 0 ] , &
rtB . okuh0wfpjd [ 0 ] , & rtB . jjieidn0fp . oizdxburtj [ 0 ] , & rtB .
fay2vqnghf . awuha2csho [ 0 ] , & rtB . fbh4dqoyov . lgflny3vaf [ 0 ] , & rtB
. cxm1w1zufa . ceslw2bcsd [ 0 ] , & rtB . c1eq5vcpx4 . p0sifpbcra [ 0 ] , &
rtB . c1eq5vcpx4 . okla4d4php [ 0 ] , & rtB . c1eq5vcpx4 . koxsf3yz0i [ 0 ] ,
& rtB . ajig4v24ce [ 0 ] , & rtB . l4y53aslys [ 0 ] , & rtB . oca1yeauge [ 0
] , & rtB . b44jbvl1vq . dokc3h5z1d [ 0 ] , & rtB . b20p2q3lgq . ovkgcdutyp [
0 ] , & rtB . ex1zkqtfgv . ertj4nm0qu [ 0 ] , & rtB . m3u1mc53xu . iqrledjweq
[ 0 ] , & rtB . iief32edxg . j50ump3tqb [ 0 ] , & rtB . gmpoamd1yl [ 0 ] , &
rtB . ptdcd1mp3v [ 0 ] , & rtB . m2rbsbdny1 . h5nzmu35n2 [ 0 ] , & rtB .
m2rbsbdny1 . h4qfg23klo [ 0 ] , & rtB . axhl1ytdq1 [ 0 ] , & rtB . b0oya0sorf
[ 0 ] , & rtB . g3205b3ehz [ 0 ] , & rtB . ctx14gz0mc [ 0 ] , & rtB .
e2i3atu3ac [ 0 ] , & rtB . pxebxuyzlv [ 0 ] , & rtB . btqsez3icc [ 0 ] , &
rtB . cvpsjp1xqu [ 0 ] , & rtB . mythggah1g [ 0 ] , & rtB . gb4iihhqdp .
oizdxburtj [ 0 ] , & rtB . ouqutwqspm . awuha2csho [ 0 ] , & rtB . pffczfadw0
. lgflny3vaf [ 0 ] , & rtB . cdm1uy5lwx . ceslw2bcsd [ 0 ] , & rtB .
bf440oddgu . p0sifpbcra [ 0 ] , & rtB . bf440oddgu . okla4d4php [ 0 ] , & rtB
. bf440oddgu . koxsf3yz0i [ 0 ] , & rtB . ievgosfumo [ 0 ] , & rtB .
jsxfpjxi0q [ 0 ] , & rtB . ki3bbacr2g [ 0 ] , & rtB . nbfgabjloh . dokc3h5z1d
[ 0 ] , & rtB . hiuzcdovtx . ovkgcdutyp [ 0 ] , & rtB . dtqe2jyuyw .
ertj4nm0qu [ 0 ] , & rtB . adhekhczer . iqrledjweq [ 0 ] , & rtB . jvph4vnkr4
. j50ump3tqb [ 0 ] , & rtB . fdryynjim2 [ 0 ] , & rtB . hokah0t1ey [ 0 ] , &
rtB . oor4lambv3 . lsl2hmd5f3 [ 0 ] , & rtB . e3fsepjhu3 . lsl2hmd5f3 [ 0 ] ,
& rtB . eu5twy3xqi . lsl2hmd5f3 [ 0 ] , & rtB . hewtmlrb4i . lsl2hmd5f3 [ 0 ]
, & rtB . cqfsohgyr0 . lsl2hmd5f3 [ 0 ] , & rtB . phayf32gqx . lsl2hmd5f3 [ 0
] , & rtB . c0oxtpeizm . lsl2hmd5f3 [ 0 ] , & rtB . fdngayugtw . lsl2hmd5f3 [
0 ] , & rtB . hcmtphgh1v [ 0 ] , & rtB . nk3dg1co2i . iu3foypmzb [ 0 ] , &
rtB . fjuaz0z3oj , & rtB . oycm4jbgim , & rtB . pzwszwmdnd , & rtB .
o2hi21fjpg , & rtB . hozlr0pwk1 , & rtB . gikzhfrh2r , & rtB . o5hqdwcanp , &
rtB . jbtx2pjet0 , & rtB . dwv0b3nbpt . mwv442a0wi [ 0 ] , & rtB . kxpjd1a3pi
. mwv442a0wi [ 0 ] , & rtB . b2dgeus3id . mwv442a0wi [ 0 ] , & rtB .
bmskov3xln . mwv442a0wi [ 0 ] , & rtB . nvxpjyra3b . mwv442a0wi [ 0 ] , & rtB
. e5ut0spxgg . mwv442a0wi [ 0 ] , & rtB . kku1cld2tf . mwv442a0wi [ 0 ] , &
rtB . idrbq1s50x . mwv442a0wi [ 0 ] , & rtB . bra5bscetp . mwv442a0wi [ 0 ] ,
& rtB . axfkml5ixh . mwv442a0wi [ 0 ] , & rtB . ltofzehbyr . mwv442a0wi [ 0 ]
, & rtB . hzg1zx3v41 . mwv442a0wi [ 0 ] , & rtB . bcakaosdk3 . mwv442a0wi [ 0
] , & rtB . eume1su52i . mwv442a0wi [ 0 ] , & rtB . newkwtnnyb . mwv442a0wi [
0 ] , & rtB . oxm0qdhvd1 . mwv442a0wi [ 0 ] , & rtB . ounrqp0kqp . dwzefkbt4i
[ 0 ] , & rtB . khvlym1mbm . do3vqytzlr [ 0 ] , & rtB . etbc3ao3mx .
lsn2ixkb43 [ 0 ] , & rtB . bx3nl12y2l . jomd12grfe [ 0 ] , & rtB . h01ja14scr
[ 0 ] , & rtB . geh5ssntfp . g0oikhinbf [ 0 ] , & rtB . d0b2e2tbom .
iu3foypmzb [ 0 ] , & rtB . d3xq0g2bn4 . dwzefkbt4i [ 0 ] , & rtB . f20gcf5hzy
. do3vqytzlr [ 0 ] , & rtB . evhpd5pqdh . lsn2ixkb43 [ 0 ] , & rtB .
hdtx0qvcg5 . jomd12grfe [ 0 ] , & rtB . pm3zcgsze2 [ 0 ] , & rtB . aeorekhod3
. g0oikhinbf [ 0 ] , & rtB . ftxqlzmaxy . iu3foypmzb [ 0 ] , & rtB .
k1qsnregiz . dwzefkbt4i [ 0 ] , & rtB . bg42xqoh1c . do3vqytzlr [ 0 ] , & rtB
. co5vre2gwb . lsn2ixkb43 [ 0 ] , & rtB . ofvqlpwckb . jomd12grfe [ 0 ] , &
rtB . duuk0gubye [ 0 ] , & rtB . lssgckg42l . g0oikhinbf [ 0 ] , & rtB .
i2taelcq5m . iu3foypmzb [ 0 ] , & rtB . aue1vbpmvj . dwzefkbt4i [ 0 ] , & rtB
. eda2vxrff0 . do3vqytzlr [ 0 ] , & rtB . majmcadfuu . lsn2ixkb43 [ 0 ] , &
rtB . dnfgeeso11 . jomd12grfe [ 0 ] , & rtB . nd5m5e34h4 [ 0 ] , & rtB .
kc2ijyeu0y . g0oikhinbf [ 0 ] , & rtB . aruhpddimh . iu3foypmzb [ 0 ] , & rtP
. Agent_Value , & rtP . Agent_Value_ixja5dv44z , & rtP .
Agent_Value_axqasj4p0a , & rtP . Agent_Value_osrr3ginzy , & rtP .
formationoftheleader_Value [ 0 ] , & rtP . Integrator_IC [ 0 ] , & rtP .
Integrator_IC_ll5yvtvr3k [ 0 ] , & rtP . Integrator_IC_j4cpqfdea5 [ 0 ] , &
rtP . Integrator_IC_bhnfxbuaak [ 0 ] , & rtP . Constant1_Value , & rtP .
Constant5_Value , & rtP . DesiredPosition4_Value , & rtP . Switch2_Threshold
, & rtP . Switch3_Threshold , & rtP . TransferFcn1_A_nujdlcbjyt , & rtP .
TransferFcn1_C_cmxvg3m0j5 , & rtP . TransferFcn2_A_begbkhkapk , & rtP .
TransferFcn2_C_nzmool04r2 , & rtP . TransferFcn3_A_ijhjp45drc , & rtP .
TransferFcn3_C_g24adbbwia , & rtP . TransferFcn4_A , & rtP . TransferFcn4_C ,
& rtP . TransferFcn5_A , & rtP . TransferFcn5_C , & rtP . Gain_Gain , & rtP .
Integrator_IC_eqgi5u5j2i , & rtP . Integrator_IC_br54vzkuoj [ 0 ] , & rtP .
Integrator_IC_hkn1g5z50u [ 0 ] , & rtP . Integrator5_IC [ 0 ] , & rtP .
Integrator6_IC [ 0 ] , & rtP . Memory_InitialCondition_kfc1wjzym5 [ 0 ] , &
rtP . Memory3_InitialCondition [ 0 ] , & rtP . Memory5_InitialCondition [ 0 ]
, & rtP . Integrator_IC_m2wkiw3enz [ 0 ] , & rtP . Integrator1_IC_kch0jyq4l1
[ 0 ] , & rtP . Integrator2_IC_gzbylzelej [ 0 ] , & rtP .
Integrator3_IC_cqn1tixb11 [ 0 ] , & rtP . Memory_InitialCondition [ 0 ] , &
rtP . Integrator1_IC [ 0 ] , & rtP . Integrator2_IC [ 0 ] , & rtP .
Integrator3_IC [ 0 ] , & rtP . Integrator4_IC [ 0 ] , & rtP .
Memory2_InitialCondition [ 0 ] , & rtP . Integrator_IC_dv2mdr05ix [ 0 ] , &
rtP . Integrator5_IC_hdhhn35ras [ 0 ] , & rtP . Integrator6_IC_pn0cggvpg5 [ 0
] , & rtP . Memory_InitialCondition_a15umzwd5d [ 0 ] , & rtP .
Memory3_InitialCondition_odrfcddzo2 [ 0 ] , & rtP .
Memory5_InitialCondition_omczlhgywm [ 0 ] , & rtP . Integrator_IC_asfyyakemt
[ 0 ] , & rtP . Integrator1_IC_ovoo50kpue [ 0 ] , & rtP .
Integrator2_IC_cpeckpugec [ 0 ] , & rtP . Integrator3_IC_irlb5jed0u [ 0 ] , &
rtP . Memory_InitialCondition_a1f4f1efjn [ 0 ] , & rtP .
Integrator1_IC_ix2kdurm0a [ 0 ] , & rtP . Integrator2_IC_dlogixgno1 [ 0 ] , &
rtP . Integrator3_IC_pl55dsru54 [ 0 ] , & rtP . Integrator4_IC_bqwjoax0yj [ 0
] , & rtP . Memory2_InitialCondition_ixkbydzld5 [ 0 ] , & rtP .
Integrator_IC_lea510ieom [ 0 ] , & rtP . Integrator5_IC_nwcrjrmntz [ 0 ] , &
rtP . Integrator6_IC_oyuxsjsyrt [ 0 ] , & rtP .
Memory_InitialCondition_fdpfscth32 [ 0 ] , & rtP .
Memory3_InitialCondition_a0irr1iih0 [ 0 ] , & rtP .
Memory5_InitialCondition_krghwgtwzz [ 0 ] , & rtP . Integrator_IC_kpzn5be1yb
[ 0 ] , & rtP . Integrator1_IC_mdknrruii3 [ 0 ] , & rtP .
Integrator2_IC_l5f4ire3yt [ 0 ] , & rtP . Integrator3_IC_jiozsrcxii [ 0 ] , &
rtP . Memory_InitialCondition_az54btma51 [ 0 ] , & rtP .
Integrator1_IC_fmopbs2ypa [ 0 ] , & rtP . Integrator2_IC_k5gg2bqqkf [ 0 ] , &
rtP . Integrator3_IC_fagx4trrvf [ 0 ] , & rtP . Integrator4_IC_hsxa2r15rn [ 0
] , & rtP . Memory2_InitialCondition_opuvtlyd5u [ 0 ] , & rtP .
Integrator_IC_b2z2fy5xzx [ 0 ] , & rtP . Integrator5_IC_bdphhlsjj4 [ 0 ] , &
rtP . Integrator6_IC_llwvnjivrz [ 0 ] , & rtP .
Memory_InitialCondition_pnqhyj4v2u [ 0 ] , & rtP .
Memory3_InitialCondition_e4520jnbi2 [ 0 ] , & rtP .
Memory5_InitialCondition_hwmjgecp2p [ 0 ] , & rtP . Integrator_IC_jhbgz2gwkd
[ 0 ] , & rtP . Integrator1_IC_jokakqqnqr [ 0 ] , & rtP .
Integrator2_IC_dgk30gjhwf [ 0 ] , & rtP . Integrator3_IC_pzwcjpn3kt [ 0 ] , &
rtP . Memory_InitialCondition_iflgyxbk0d [ 0 ] , & rtP .
Integrator1_IC_fvtztp1tml [ 0 ] , & rtP . Integrator2_IC_k5nghiidw3 [ 0 ] , &
rtP . Integrator3_IC_okmfayw4p2 [ 0 ] , & rtP . Integrator4_IC_llpsksryx3 [ 0
] , & rtP . Memory2_InitialCondition_ozc5y51w41 [ 0 ] , & rtP .
Integrator_IC_fvooay02cq [ 0 ] , & rtP . Integrator1_IC_gvc4lbz4zt [ 0 ] , &
rtP . DesiredPosition4_Value_pidnqqr40v , & rtP . FromWorkspace3_Time0 [ 0 ]
, & rtP . FromWorkspace3_Data0 [ 0 ] , & rtP . Gain_Gain_a5iekrgwtt , & rtP .
Gain1_Gain , & rtP . Gain2_Gain , & rtP . Switch_Threshold , & rtP .
TransferFcn1_A , & rtP . TransferFcn1_C , & rtP . TransferFcn2_A , & rtP .
TransferFcn2_C , & rtP . TransferFcn3_A , & rtP . TransferFcn3_C , & rtP .
Integrator_IC_dxdefvbqqz [ 0 ] , & rtP . Integrator1_IC_dhvfmby03k [ 0 ] , &
rtP . Integrator_IC_ak45y034mz [ 0 ] , & rtP . Integrator1_IC_lwsrxvv1dn [ 0
] , & rtP . Integrator_IC_m5trwyg02m [ 0 ] , & rtP .
Integrator1_IC_o1x1rfxplt [ 0 ] , & rtP . Integrator_IC_alj3l4jksp [ 0 ] , &
rtP . Integrator1_IC_e434obmerv [ 0 ] , & rtP . Integrator_IC_f4jweekbgj [ 0
] , & rtP . Integrator1_IC_dggkktknfv [ 0 ] , & rtP .
Integrator_IC_aqhpgobmia [ 0 ] , & rtP . Integrator1_IC_d2gz3itgvv [ 0 ] , &
rtP . Integrator_IC_ontqyxzrde [ 0 ] , & rtP . Integrator1_IC_hl1b0vrylw [ 0
] , & rtP . Integrator_IC_ghhpktks14 [ 0 ] , & rtP .
Integrator1_IC_fyphguyldl [ 0 ] , & rtP . Integrator_IC_ayfhthp0v4 [ 0 ] , &
rtP . Integrator1_IC_koasodr4as [ 0 ] , & rtP . Integrator_IC_cyubkmsog4 [ 0
] , & rtP . Integrator1_IC_kh4niuf2a4 [ 0 ] , & rtP .
Integrator_IC_c1yketrjdu [ 0 ] , & rtP . Integrator1_IC_gjuqacamsk [ 0 ] , &
rtP . Integrator_IC_cfnxz4nui1 [ 0 ] , & rtP . Integrator1_IC_dtwgjipyua [ 0
] , & rtP . AN [ 0 ] , & rtP . B [ 0 ] , & rtP . BBT_inv [ 0 ] , & rtP . BN [
0 ] , & rtP . H [ 0 ] , & rtP . J [ 0 ] , & rtP . K [ 0 ] , & rtP . Ka , &
rtP . Kd , & rtP . Kf , & rtP . Kt , & rtP . Lq , & rtP . M , & rtP .
Observer_Gain , & rtP . Observer_Gain1 , & rtP . Q [ 0 ] , & rtP . QR [ 0 ] ,
& rtP . R [ 0 ] , & rtP . RM_1 [ 0 ] , & rtP . U_dot0_M [ 0 ] , & rtP .
Upsilon_M [ 0 ] , & rtP . X_M [ 0 ] , & rtP . alpha , & rtP . gamma_0 [ 0 ] ,
& rtP . gamma_1 [ 0 ] , & rtP . ge , & rtP . k1 , & rtP . k2 , & rtP .
r_formX , & rtP . r_formY , & rtP . r_formZ , & rtP . rho_0 , & rtP . rho_1 ,
} ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 20 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 22 , 2
, 0 } } ; static const uint_T rtDimensionArray [ ] = { 1 , 1 , 3 , 1 , 4 , 1
, 12 , 1 , 5 , 3 , 6 , 1 , 6 , 6 , 15 , 1 , 36 , 1 , 601 , 1 , 4 , 4 , 3 , 3
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 201 , ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 130 , rtModelParameters , 33 }
, { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 4104019630U
, 3045784979U , 3358501291U , 2260817830U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo *
CAMFC2_Quad_New_02_Payload_01_GetCAPIStaticMap ( void ) { return & mmiStatic
; }
#ifndef HOST_CAPI_BUILD
void CAMFC2_Quad_New_02_Payload_01_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void CAMFC2_Quad_New_02_Payload_01_host_InitializeDataMapInfo (
CAMFC2_Quad_New_02_Payload_01_host_DataMapInfo_T * dataMap , const char *
path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
NULL ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , NULL ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
