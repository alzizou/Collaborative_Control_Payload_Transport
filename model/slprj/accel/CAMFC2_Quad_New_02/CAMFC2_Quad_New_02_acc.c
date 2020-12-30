#include "__cf_CAMFC2_Quad_New_02.h"
#include <math.h>
#include "CAMFC2_Quad_New_02_acc.h"
#include "CAMFC2_Quad_New_02_acc_private.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_lookup_functions.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
#include "simtarget/slAccSfcnBridge.h"
void rt_ssGetBlockPath ( SimStruct * S , int_T sysIdx , int_T blkIdx , char_T
* * path ) { _ssGetBlockPath ( S , sysIdx , blkIdx , path ) ; } void
rt_ssSet_slErrMsg ( SimStruct * S , void * diag ) { if ( !
_ssIsErrorStatusAslErrMsg ( S ) ) { _ssSet_slErrMsg ( S , diag ) ; } else {
_ssDiscardDiagnostic ( S , diag ) ; } } void rt_ssReportDiagnosticAsWarning (
SimStruct * S , void * diag ) { _ssReportDiagnosticAsWarning ( S , diag ) ; }
static void mdlOutputs ( SimStruct * S , int_T tid ) { int32_T i ; int32_T
isHit ; B_CAMFC2_Quad_New_02_T * _rtB ; P_CAMFC2_Quad_New_02_T * _rtP ;
X_CAMFC2_Quad_New_02_T * _rtX ; DW_CAMFC2_Quad_New_02_T * _rtDW ; _rtDW = ( (
DW_CAMFC2_Quad_New_02_T * ) ssGetRootDWork ( S ) ) ; _rtX = ( (
X_CAMFC2_Quad_New_02_T * ) ssGetContStates ( S ) ) ; _rtP = ( (
P_CAMFC2_Quad_New_02_T * ) ssGetModelRtp ( S ) ) ; _rtB = ( (
B_CAMFC2_Quad_New_02_T * ) _ssGetModelBlockIO ( S ) ) ; memcpy ( & _rtB ->
B_116_1_0 [ 0 ] , & _rtX -> Integrator4_CSTATE [ 0 ] , 36U * sizeof ( real_T
) ) ; memcpy ( & _rtB -> B_116_2_0 [ 0 ] , & _rtX -> Integrator5_CSTATE [ 0 ]
, 15U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_3_0 [ 0 ] , & _rtX ->
Integrator_CSTATE [ 0 ] , 12U * sizeof ( real_T ) ) ; memcpy ( & _rtB ->
B_116_4_0 [ 0 ] , & _rtX -> Integrator_CSTATE_b [ 0 ] , 12U * sizeof ( real_T
) ) ; memcpy ( & _rtB -> B_116_5_0 [ 0 ] , & _rtX -> Integrator_CSTATE_e [ 0
] , 12U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_6_0 [ 0 ] , & _rtX
-> Integrator_CSTATE_k [ 0 ] , 12U * sizeof ( real_T ) ) ; _rtB -> B_116_7_0
= 0.0 ; _rtB -> B_116_7_0 += _rtP -> P_417 * _rtX -> TransferFcn3_CSTATE ;
_rtB -> B_116_8_0 = 0.0 ; _rtB -> B_116_8_0 += _rtP -> P_419 * _rtX ->
TransferFcn2_CSTATE ; _rtB -> B_116_9_0 = 0.0 ; _rtB -> B_116_9_0 += _rtP ->
P_421 * _rtX -> TransferFcn1_CSTATE ; isHit = ssIsSampleHit ( S , 1 , 0 ) ;
if ( isHit != 0 ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_116_10_0 [ i ] =
_rtDW -> Memory2_PreviousInput [ i ] ; } } for ( i = 0 ; i < 12 ; i ++ ) {
_rtB -> B_20_0_0 [ i ] = _rtB -> B_116_3_0 [ i ] ; _rtB -> B_20_0_0 [ i + 12
] = _rtB -> B_116_4_0 [ i ] ; _rtB -> B_20_0_0 [ i + 24 ] = _rtB -> B_116_5_0
[ i ] ; _rtB -> B_20_0_0 [ i + 36 ] = _rtB -> B_116_6_0 [ i ] ; } _rtB ->
B_20_1_0 [ 0 ] = _rtB -> B_116_7_0 ; _rtB -> B_20_1_0 [ 1 ] = _rtB ->
B_116_8_0 ; _rtB -> B_20_1_0 [ 2 ] = _rtB -> B_116_9_0 ; ssCallAccelRunBlock
( S , 20 , 2 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_116_12_0 [ i ] = _rtX -> Integrator1_CSTATE [ i ] ; } memcpy ( & _rtB ->
B_116_13_0 [ 0 ] , & _rtX -> Integrator3_CSTATE [ 0 ] , 36U * sizeof ( real_T
) ) ; _rtB -> B_116_14_0 [ 0 ] = _rtX -> Integrator_CSTATE_bj [ 0 ] ; _rtB ->
B_116_14_0 [ 1 ] = _rtX -> Integrator_CSTATE_bj [ 1 ] ; _rtB -> B_116_14_0 [
2 ] = _rtX -> Integrator_CSTATE_bj [ 2 ] ; _rtB -> B_116_16_0 [ 0 ] = _rtX ->
Integrator1_CSTATE_b [ 0 ] - _rtB -> B_116_7_0 ; _rtB -> B_116_16_0 [ 1 ] =
_rtX -> Integrator1_CSTATE_b [ 1 ] - _rtB -> B_116_8_0 ; _rtB -> B_116_16_0 [
2 ] = _rtX -> Integrator1_CSTATE_b [ 2 ] - _rtB -> B_116_9_0 ;
ssCallAccelRunBlock ( S , 96 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_116_19_0
[ 0 ] = _rtB -> B_116_18_0 [ 0 ] - _rtB -> B_116_7_0 ; _rtB -> B_116_19_0 [ 1
] = _rtB -> B_116_18_0 [ 1 ] - _rtB -> B_116_8_0 ; _rtB -> B_116_19_0 [ 2 ] =
_rtB -> B_116_18_0 [ 2 ] - _rtB -> B_116_9_0 ; for ( i = 0 ; i < 15 ; i ++ )
{ _rtB -> B_116_20_0 [ i ] = _rtX -> Integrator_CSTATE_ko [ i ] ; _rtB ->
B_116_22_0 [ i ] = _rtX -> Integrator1_CSTATE_a [ i ] - _rtB -> B_116_2_0 [ i
] ; } ssCallAccelRunBlock ( S , 2 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_116_24_0 [ 0 ] = _rtX -> Integrator_CSTATE_o [ 0 ] ; _rtB -> B_116_25_0 [ 0
] = _rtX -> Integrator6_CSTATE [ 0 ] ; _rtB -> B_116_24_0 [ 1 ] = _rtX ->
Integrator_CSTATE_o [ 1 ] ; _rtB -> B_116_25_0 [ 1 ] = _rtX ->
Integrator6_CSTATE [ 1 ] ; _rtB -> B_116_24_0 [ 2 ] = _rtX ->
Integrator_CSTATE_o [ 2 ] ; _rtB -> B_116_25_0 [ 2 ] = _rtX ->
Integrator6_CSTATE [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_116_26_0
[ i ] = _rtX -> Integrator2_CSTATE [ i ] ; } _rtB -> B_116_27_0 [ 0 ] = _rtX
-> Integrator_CSTATE_d [ 0 ] ; _rtB -> B_116_29_0 [ 0 ] = _rtX ->
Integrator1_CSTATE_bg [ 0 ] - _rtB -> B_116_10_0 [ 0 ] ; _rtB -> B_116_27_0 [
1 ] = _rtX -> Integrator_CSTATE_d [ 1 ] ; _rtB -> B_116_29_0 [ 1 ] = _rtX ->
Integrator1_CSTATE_bg [ 1 ] - _rtB -> B_116_10_0 [ 1 ] ; _rtB -> B_116_27_0 [
2 ] = _rtX -> Integrator_CSTATE_d [ 2 ] ; _rtB -> B_116_29_0 [ 2 ] = _rtX ->
Integrator1_CSTATE_bg [ 2 ] - _rtB -> B_116_10_0 [ 2 ] ; ssCallAccelRunBlock
( S , 17 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 19 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 0 , 0 , SS_CALL_MDL_OUTPUTS
) ; ssCallAccelRunBlock ( S , 116 , 33 , SS_CALL_MDL_OUTPUTS ) ; isHit =
ssIsSampleHit ( S , 1 , 0 ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_116_34_0 [ i ] = _rtX -> Integrator3_CSTATE_k [ i ] ; if ( isHit != 0 ) {
_rtB -> B_116_35_0 [ i ] = _rtDW -> Memory_PreviousInput [ i ] ; } }
ssCallAccelRunBlock ( S , 13 , 0 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_116_37_0 [ i ] = _rtB -> B_116_34_0 [ i ] + _rtB ->
B_13_0_3 [ i ] ; _rtB -> B_116_38_0 [ i ] = _rtX -> Integrator_CSTATE_d0 [ i
] ; _rtB -> B_116_40_0 [ i ] = _rtX -> Integrator1_CSTATE_g [ i ] - _rtB ->
B_13_0_2 [ i ] ; } ssCallAccelRunBlock ( S , 8 , 0 , SS_CALL_MDL_OUTPUTS ) ;
memcpy ( & _rtB -> B_116_42_0 [ 0 ] , & _rtX -> Integrator1_CSTATE_k [ 0 ] ,
36U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_43_0 [ 0 ] , & _rtX ->
Integrator_CSTATE_c [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ;
i ++ ) { _rtB -> B_116_44_0 [ i ] = _rtX -> Integrator2_CSTATE_g [ i ] ; }
ssCallAccelRunBlock ( S , 12 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 0 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i <
15 ; i ++ ) { _rtB -> B_116_47_0 [ i ] = _rtX -> Integrator5_CSTATE_b [ i ] ;
_rtB -> B_116_48_0 [ i ] = _rtX -> Integrator5_CSTATE_l [ i ] ; _rtB ->
B_116_49_0 [ i ] = _rtX -> Integrator5_CSTATE_n [ i ] ; _rtB -> B_116_50_0 .
t1 [ i ] = _rtB -> B_116_2_0 [ i ] ; _rtB -> B_116_50_0 . t2 [ i ] = _rtB ->
B_116_47_0 [ i ] ; _rtB -> B_116_50_0 . t3 [ i ] = _rtB -> B_116_48_0 [ i ] ;
_rtB -> B_116_50_0 . t4 [ i ] = _rtB -> B_116_49_0 [ i ] ; } isHit =
ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) { for ( i = 0 ; i < 15 ; i ++
) { _rtB -> B_116_51_0 [ i ] = _rtDW -> Memory3_PreviousInput [ i ] ; _rtB ->
B_116_52_0 [ i ] = _rtDW -> Memory3_PreviousInput_j [ i ] ; _rtB ->
B_116_53_0 [ i ] = _rtDW -> Memory3_PreviousInput_b [ i ] ; _rtB ->
B_116_54_0 [ i ] = _rtDW -> Memory3_PreviousInput_jb [ i ] ; _rtB ->
B_116_55_0 . eps1 [ i ] = _rtB -> B_116_51_0 [ i ] ; _rtB -> B_116_55_0 .
eps2 [ i ] = _rtB -> B_116_52_0 [ i ] ; _rtB -> B_116_55_0 . eps3 [ i ] =
_rtB -> B_116_53_0 [ i ] ; _rtB -> B_116_55_0 . eps4 [ i ] = _rtB ->
B_116_54_0 [ i ] ; } } ssCallAccelRunBlock ( S , 3 , 0 , SS_CALL_MDL_OUTPUTS
) ; isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) { _rtB ->
B_116_57_0 [ 0 ] = _rtDW -> Memory_PreviousInput_j [ 0 ] ; _rtB -> B_116_58_0
[ 0 ] = _rtDW -> Memory5_PreviousInput [ 0 ] ; _rtB -> B_116_57_0 [ 1 ] =
_rtDW -> Memory_PreviousInput_j [ 1 ] ; _rtB -> B_116_58_0 [ 1 ] = _rtDW ->
Memory5_PreviousInput [ 1 ] ; _rtB -> B_116_57_0 [ 2 ] = _rtDW ->
Memory_PreviousInput_j [ 2 ] ; _rtB -> B_116_58_0 [ 2 ] = _rtDW ->
Memory5_PreviousInput [ 2 ] ; } _rtB -> B_116_59_0 = 0.0 ; _rtB -> B_116_59_0
+= _rtP -> P_452 * _rtX -> TransferFcn1_CSTATE_k ; _rtB -> B_116_60_0 = 0.0 ;
_rtB -> B_116_60_0 += _rtP -> P_454 * _rtX -> TransferFcn2_CSTATE_a ; _rtB ->
B_116_61_0 = 0.0 ; _rtB -> B_116_61_0 += _rtP -> P_456 * _rtX ->
TransferFcn5_CSTATE ; ssCallAccelRunBlock ( S , 98 , 0 , SS_CALL_MDL_OUTPUTS
) ; ssCallAccelRunBlock ( S , 4 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_116_64_0 [ 0 ] = _rtX -> Integrator_CSTATE_p [ 0 ] ; _rtB -> B_116_65_0 [ 0
] = _rtX -> Integrator_CSTATE_c2 [ 0 ] ; _rtB -> B_116_66_0 [ 0 ] = _rtX ->
Integrator_CSTATE_o3 [ 0 ] ; _rtB -> B_116_64_0 [ 1 ] = _rtX ->
Integrator_CSTATE_p [ 1 ] ; _rtB -> B_116_65_0 [ 1 ] = _rtX ->
Integrator_CSTATE_c2 [ 1 ] ; _rtB -> B_116_66_0 [ 1 ] = _rtX ->
Integrator_CSTATE_o3 [ 1 ] ; _rtB -> B_116_64_0 [ 2 ] = _rtX ->
Integrator_CSTATE_p [ 2 ] ; _rtB -> B_116_65_0 [ 2 ] = _rtX ->
Integrator_CSTATE_c2 [ 2 ] ; _rtB -> B_116_66_0 [ 2 ] = _rtX ->
Integrator_CSTATE_o3 [ 2 ] ; isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit
!= 0 ) { _rtB -> B_116_67_0 [ 0 ] = _rtDW -> Memory_PreviousInput_o [ 0 ] ;
_rtB -> B_116_68_0 [ 0 ] = _rtDW -> Memory_PreviousInput_a [ 0 ] ; _rtB ->
B_116_69_0 [ 0 ] = _rtDW -> Memory_PreviousInput_h [ 0 ] ; _rtB -> B_116_67_0
[ 1 ] = _rtDW -> Memory_PreviousInput_o [ 1 ] ; _rtB -> B_116_68_0 [ 1 ] =
_rtDW -> Memory_PreviousInput_a [ 1 ] ; _rtB -> B_116_69_0 [ 1 ] = _rtDW ->
Memory_PreviousInput_h [ 1 ] ; _rtB -> B_116_67_0 [ 2 ] = _rtDW ->
Memory_PreviousInput_o [ 2 ] ; _rtB -> B_116_68_0 [ 2 ] = _rtDW ->
Memory_PreviousInput_a [ 2 ] ; _rtB -> B_116_69_0 [ 2 ] = _rtDW ->
Memory_PreviousInput_h [ 2 ] ; } _rtB -> B_5_0_0 [ 0 ] = _rtB -> B_116_24_0 [
0 ] ; _rtB -> B_5_0_0 [ 3 ] = _rtB -> B_116_64_0 [ 0 ] ; _rtB -> B_5_0_0 [ 6
] = _rtB -> B_116_65_0 [ 0 ] ; _rtB -> B_5_0_0 [ 9 ] = _rtB -> B_116_66_0 [ 0
] ; _rtB -> B_5_1_0 [ 0 ] = _rtB -> B_116_57_0 [ 0 ] ; _rtB -> B_5_1_0 [ 3 ]
= _rtB -> B_116_67_0 [ 0 ] ; _rtB -> B_5_1_0 [ 6 ] = _rtB -> B_116_68_0 [ 0 ]
; _rtB -> B_5_1_0 [ 9 ] = _rtB -> B_116_69_0 [ 0 ] ; _rtB -> B_5_0_0 [ 1 ] =
_rtB -> B_116_24_0 [ 1 ] ; _rtB -> B_5_0_0 [ 4 ] = _rtB -> B_116_64_0 [ 1 ] ;
_rtB -> B_5_0_0 [ 7 ] = _rtB -> B_116_65_0 [ 1 ] ; _rtB -> B_5_0_0 [ 10 ] =
_rtB -> B_116_66_0 [ 1 ] ; _rtB -> B_5_1_0 [ 1 ] = _rtB -> B_116_57_0 [ 1 ] ;
_rtB -> B_5_1_0 [ 4 ] = _rtB -> B_116_67_0 [ 1 ] ; _rtB -> B_5_1_0 [ 7 ] =
_rtB -> B_116_68_0 [ 1 ] ; _rtB -> B_5_1_0 [ 10 ] = _rtB -> B_116_69_0 [ 1 ]
; _rtB -> B_5_0_0 [ 2 ] = _rtB -> B_116_24_0 [ 2 ] ; _rtB -> B_5_0_0 [ 5 ] =
_rtB -> B_116_64_0 [ 2 ] ; _rtB -> B_5_0_0 [ 8 ] = _rtB -> B_116_65_0 [ 2 ] ;
_rtB -> B_5_0_0 [ 11 ] = _rtB -> B_116_66_0 [ 2 ] ; _rtB -> B_5_1_0 [ 2 ] =
_rtB -> B_116_57_0 [ 2 ] ; _rtB -> B_5_1_0 [ 5 ] = _rtB -> B_116_67_0 [ 2 ] ;
_rtB -> B_5_1_0 [ 8 ] = _rtB -> B_116_68_0 [ 2 ] ; _rtB -> B_5_1_0 [ 11 ] =
_rtB -> B_116_69_0 [ 2 ] ; ssCallAccelRunBlock ( S , 5 , 2 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_116_71_0 [ 0 ] = _rtX ->
Integrator6_CSTATE_j [ 0 ] ; _rtB -> B_116_72_0 [ 0 ] = _rtX ->
Integrator6_CSTATE_n [ 0 ] ; _rtB -> B_116_73_0 [ 0 ] = _rtX ->
Integrator6_CSTATE_i [ 0 ] ; _rtB -> B_116_71_0 [ 1 ] = _rtX ->
Integrator6_CSTATE_j [ 1 ] ; _rtB -> B_116_72_0 [ 1 ] = _rtX ->
Integrator6_CSTATE_n [ 1 ] ; _rtB -> B_116_73_0 [ 1 ] = _rtX ->
Integrator6_CSTATE_i [ 1 ] ; _rtB -> B_116_71_0 [ 2 ] = _rtX ->
Integrator6_CSTATE_j [ 2 ] ; _rtB -> B_116_72_0 [ 2 ] = _rtX ->
Integrator6_CSTATE_n [ 2 ] ; _rtB -> B_116_73_0 [ 2 ] = _rtX ->
Integrator6_CSTATE_i [ 2 ] ; isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit
!= 0 ) { _rtB -> B_116_74_0 [ 0 ] = _rtDW -> Memory5_PreviousInput_k [ 0 ] ;
_rtB -> B_116_75_0 [ 0 ] = _rtDW -> Memory5_PreviousInput_n [ 0 ] ; _rtB ->
B_116_76_0 [ 0 ] = _rtDW -> Memory5_PreviousInput_p [ 0 ] ; _rtB ->
B_116_74_0 [ 1 ] = _rtDW -> Memory5_PreviousInput_k [ 1 ] ; _rtB ->
B_116_75_0 [ 1 ] = _rtDW -> Memory5_PreviousInput_n [ 1 ] ; _rtB ->
B_116_76_0 [ 1 ] = _rtDW -> Memory5_PreviousInput_p [ 1 ] ; _rtB ->
B_116_74_0 [ 2 ] = _rtDW -> Memory5_PreviousInput_k [ 2 ] ; _rtB ->
B_116_75_0 [ 2 ] = _rtDW -> Memory5_PreviousInput_n [ 2 ] ; _rtB ->
B_116_76_0 [ 2 ] = _rtDW -> Memory5_PreviousInput_p [ 2 ] ; } _rtB -> B_6_0_0
[ 0 ] = _rtB -> B_116_25_0 [ 0 ] ; _rtB -> B_6_0_0 [ 3 ] = _rtB -> B_116_71_0
[ 0 ] ; _rtB -> B_6_0_0 [ 6 ] = _rtB -> B_116_72_0 [ 0 ] ; _rtB -> B_6_0_0 [
9 ] = _rtB -> B_116_73_0 [ 0 ] ; _rtB -> B_6_1_0 [ 0 ] = _rtB -> B_116_58_0 [
0 ] ; _rtB -> B_6_1_0 [ 3 ] = _rtB -> B_116_74_0 [ 0 ] ; _rtB -> B_6_1_0 [ 6
] = _rtB -> B_116_75_0 [ 0 ] ; _rtB -> B_6_1_0 [ 9 ] = _rtB -> B_116_76_0 [ 0
] ; _rtB -> B_6_0_0 [ 1 ] = _rtB -> B_116_25_0 [ 1 ] ; _rtB -> B_6_0_0 [ 4 ]
= _rtB -> B_116_71_0 [ 1 ] ; _rtB -> B_6_0_0 [ 7 ] = _rtB -> B_116_72_0 [ 1 ]
; _rtB -> B_6_0_0 [ 10 ] = _rtB -> B_116_73_0 [ 1 ] ; _rtB -> B_6_1_0 [ 1 ] =
_rtB -> B_116_58_0 [ 1 ] ; _rtB -> B_6_1_0 [ 4 ] = _rtB -> B_116_74_0 [ 1 ] ;
_rtB -> B_6_1_0 [ 7 ] = _rtB -> B_116_75_0 [ 1 ] ; _rtB -> B_6_1_0 [ 10 ] =
_rtB -> B_116_76_0 [ 1 ] ; _rtB -> B_6_0_0 [ 2 ] = _rtB -> B_116_25_0 [ 2 ] ;
_rtB -> B_6_0_0 [ 5 ] = _rtB -> B_116_71_0 [ 2 ] ; _rtB -> B_6_0_0 [ 8 ] =
_rtB -> B_116_72_0 [ 2 ] ; _rtB -> B_6_0_0 [ 11 ] = _rtB -> B_116_73_0 [ 2 ]
; _rtB -> B_6_1_0 [ 2 ] = _rtB -> B_116_58_0 [ 2 ] ; _rtB -> B_6_1_0 [ 5 ] =
_rtB -> B_116_74_0 [ 2 ] ; _rtB -> B_6_1_0 [ 8 ] = _rtB -> B_116_75_0 [ 2 ] ;
_rtB -> B_6_1_0 [ 11 ] = _rtB -> B_116_76_0 [ 2 ] ; _rtB -> B_6_2_0 [ 0 ] =
_rtB -> B_116_7_0 ; _rtB -> B_6_2_0 [ 1 ] = _rtB -> B_116_8_0 ; _rtB ->
B_6_2_0 [ 2 ] = _rtB -> B_116_9_0 ; ssCallAccelRunBlock ( S , 6 , 3 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 78 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 7 , 0 , SS_CALL_MDL_OUTPUTS
) ; ssCallAccelRunBlock ( S , 116 , 80 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 81 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 9 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock
( S , 10 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 11 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 14 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i < 36 ; i ++ ) { _rtB -> B_116_86_0 [
i ] = _rtX -> Integrator4_CSTATE_o [ i ] ; _rtB -> B_116_87_0 [ i ] = _rtX ->
Integrator4_CSTATE_l [ i ] ; _rtB -> B_116_88_0 [ i ] = _rtX ->
Integrator4_CSTATE_a [ i ] ; _rtB -> B_116_89_0 . p1 [ i ] = _rtB ->
B_116_1_0 [ i ] ; _rtB -> B_116_89_0 . p2 [ i ] = _rtB -> B_116_86_0 [ i ] ;
_rtB -> B_116_89_0 . p3 [ i ] = _rtB -> B_116_87_0 [ i ] ; _rtB -> B_116_89_0
. p4 [ i ] = _rtB -> B_116_88_0 [ i ] ; } isHit = ssIsSampleHit ( S , 1 , 0 )
; if ( isHit != 0 ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_116_91_0 [ i ]
= _rtDW -> Memory2_PreviousInput_f [ i ] ; } } for ( i = 0 ; i < 12 ; i ++ )
{ _rtB -> B_42_0_0 [ i ] = _rtB -> B_116_3_0 [ i ] ; _rtB -> B_42_0_0 [ i +
12 ] = _rtB -> B_116_4_0 [ i ] ; _rtB -> B_42_0_0 [ i + 24 ] = _rtB ->
B_116_5_0 [ i ] ; _rtB -> B_42_0_0 [ i + 36 ] = _rtB -> B_116_6_0 [ i ] ; }
_rtB -> B_42_1_0 [ 0 ] = _rtB -> B_116_7_0 ; _rtB -> B_42_1_0 [ 1 ] = _rtB ->
B_116_8_0 ; _rtB -> B_42_1_0 [ 2 ] = _rtB -> B_116_9_0 ; ssCallAccelRunBlock
( S , 42 , 2 , SS_CALL_MDL_OUTPUTS ) ; isHit = ssIsSampleHit ( S , 1 , 0 ) ;
if ( isHit != 0 ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_116_94_0 [ i ] =
_rtDW -> Memory2_PreviousInput_p [ i ] ; } } for ( i = 0 ; i < 12 ; i ++ ) {
_rtB -> B_64_0_0 [ i ] = _rtB -> B_116_3_0 [ i ] ; _rtB -> B_64_0_0 [ i + 12
] = _rtB -> B_116_4_0 [ i ] ; _rtB -> B_64_0_0 [ i + 24 ] = _rtB -> B_116_5_0
[ i ] ; _rtB -> B_64_0_0 [ i + 36 ] = _rtB -> B_116_6_0 [ i ] ; } _rtB ->
B_64_1_0 [ 0 ] = _rtB -> B_116_7_0 ; _rtB -> B_64_1_0 [ 1 ] = _rtB ->
B_116_8_0 ; _rtB -> B_64_1_0 [ 2 ] = _rtB -> B_116_9_0 ; ssCallAccelRunBlock
( S , 64 , 2 , SS_CALL_MDL_OUTPUTS ) ; isHit = ssIsSampleHit ( S , 1 , 0 ) ;
if ( isHit != 0 ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_116_97_0 [ i ] =
_rtDW -> Memory2_PreviousInput_d [ i ] ; } } for ( i = 0 ; i < 12 ; i ++ ) {
_rtB -> B_86_0_0 [ i ] = _rtB -> B_116_3_0 [ i ] ; _rtB -> B_86_0_0 [ i + 12
] = _rtB -> B_116_4_0 [ i ] ; _rtB -> B_86_0_0 [ i + 24 ] = _rtB -> B_116_5_0
[ i ] ; _rtB -> B_86_0_0 [ i + 36 ] = _rtB -> B_116_6_0 [ i ] ; } _rtB ->
B_86_1_0 [ 0 ] = _rtB -> B_116_7_0 ; _rtB -> B_86_1_0 [ 1 ] = _rtB ->
B_116_8_0 ; _rtB -> B_86_1_0 [ 2 ] = _rtB -> B_116_9_0 ; ssCallAccelRunBlock
( S , 86 , 2 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_15_0_0 [ i ] = _rtB -> B_20_2_1 [ i ] ; _rtB -> B_15_0_0 [ i + 6 ] = _rtB
-> B_42_2_1 [ i ] ; _rtB -> B_15_0_0 [ i + 12 ] = _rtB -> B_64_2_1 [ i ] ;
_rtB -> B_15_0_0 [ i + 18 ] = _rtB -> B_86_2_1 [ i ] ; } ssCallAccelRunBlock
( S , 15 , 1 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 16 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 18 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_116_102_0 = ssGetT ( S ) ;
ssCallAccelRunBlock ( S , 21 , 0 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_116_104_0 [ i ] = _rtX -> Integrator1_CSTATE_i [ i ] ;
} memcpy ( & _rtB -> B_116_105_0 [ 0 ] , & _rtX -> Integrator3_CSTATE_g [ 0 ]
, 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 15 ; i ++ ) { _rtB ->
B_116_106_0 [ i ] = _rtX -> Integrator_CSTATE_et [ i ] ; _rtB -> B_116_108_0
[ i ] = _rtX -> Integrator1_CSTATE_a2 [ i ] - _rtB -> B_116_47_0 [ i ] ; }
ssCallAccelRunBlock ( S , 24 , 0 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_116_110_0 [ i ] = _rtX -> Integrator2_CSTATE_i [ i ] ;
} _rtB -> B_116_111_0 [ 0 ] = _rtX -> Integrator_CSTATE_g [ 0 ] ; _rtB ->
B_116_113_0 [ 0 ] = _rtX -> Integrator1_CSTATE_kk [ 0 ] - _rtB -> B_116_91_0
[ 0 ] ; _rtB -> B_116_111_0 [ 1 ] = _rtX -> Integrator_CSTATE_g [ 1 ] ; _rtB
-> B_116_113_0 [ 1 ] = _rtX -> Integrator1_CSTATE_kk [ 1 ] - _rtB ->
B_116_91_0 [ 1 ] ; _rtB -> B_116_111_0 [ 2 ] = _rtX -> Integrator_CSTATE_g [
2 ] ; _rtB -> B_116_113_0 [ 2 ] = _rtX -> Integrator1_CSTATE_kk [ 2 ] - _rtB
-> B_116_91_0 [ 2 ] ; ssCallAccelRunBlock ( S , 39 , 0 , SS_CALL_MDL_OUTPUTS
) ; ssCallAccelRunBlock ( S , 41 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 22 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 117 , SS_CALL_MDL_OUTPUTS ) ; isHit =
ssIsSampleHit ( S , 1 , 0 ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_116_118_0 [ i ] = _rtX -> Integrator3_CSTATE_m [ i ] ; if ( isHit != 0 ) {
_rtB -> B_116_119_0 [ i ] = _rtDW -> Memory_PreviousInput_j4 [ i ] ; } }
ssCallAccelRunBlock ( S , 35 , 0 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_116_121_0 [ i ] = _rtB -> B_116_118_0 [ i ] + _rtB ->
B_35_0_3 [ i ] ; _rtB -> B_116_122_0 [ i ] = _rtX -> Integrator_CSTATE_kp [ i
] ; _rtB -> B_116_124_0 [ i ] = _rtX -> Integrator1_CSTATE_g3 [ i ] - _rtB ->
B_35_0_2 [ i ] ; } ssCallAccelRunBlock ( S , 30 , 0 , SS_CALL_MDL_OUTPUTS ) ;
memcpy ( & _rtB -> B_116_126_0 [ 0 ] , & _rtX -> Integrator1_CSTATE_ap [ 0 ]
, 36U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_127_0 [ 0 ] , & _rtX
-> Integrator_CSTATE_n [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_116_128_0 [ i ] = _rtX -> Integrator2_CSTATE_h [ i ] ;
} ssCallAccelRunBlock ( S , 34 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 23 , 0 , SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtB ->
B_116_131_0 . t1 [ 0 ] , & _rtB -> B_116_2_0 [ 0 ] , 15U * sizeof ( real_T )
) ; memcpy ( & _rtB -> B_116_131_0 . t2 [ 0 ] , & _rtB -> B_116_47_0 [ 0 ] ,
15U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_131_0 . t3 [ 0 ] , &
_rtB -> B_116_48_0 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtB ->
B_116_131_0 . t4 [ 0 ] , & _rtB -> B_116_49_0 [ 0 ] , 15U * sizeof ( real_T )
) ; isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) { memcpy ( & _rtB
-> B_116_132_0 . eps1 [ 0 ] , & _rtB -> B_116_51_0 [ 0 ] , 15U * sizeof (
real_T ) ) ; memcpy ( & _rtB -> B_116_132_0 . eps2 [ 0 ] , & _rtB ->
B_116_52_0 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_132_0
. eps3 [ 0 ] , & _rtB -> B_116_53_0 [ 0 ] , 15U * sizeof ( real_T ) ) ;
memcpy ( & _rtB -> B_116_132_0 . eps4 [ 0 ] , & _rtB -> B_116_54_0 [ 0 ] ,
15U * sizeof ( real_T ) ) ; } ssCallAccelRunBlock ( S , 25 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 26 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_27_0_0 [ 0 ] = _rtB -> B_116_24_0 [ 0 ] ;
_rtB -> B_27_0_0 [ 3 ] = _rtB -> B_116_64_0 [ 0 ] ; _rtB -> B_27_0_0 [ 6 ] =
_rtB -> B_116_65_0 [ 0 ] ; _rtB -> B_27_0_0 [ 9 ] = _rtB -> B_116_66_0 [ 0 ]
; _rtB -> B_27_1_0 [ 0 ] = _rtB -> B_116_57_0 [ 0 ] ; _rtB -> B_27_1_0 [ 3 ]
= _rtB -> B_116_67_0 [ 0 ] ; _rtB -> B_27_1_0 [ 6 ] = _rtB -> B_116_68_0 [ 0
] ; _rtB -> B_27_1_0 [ 9 ] = _rtB -> B_116_69_0 [ 0 ] ; _rtB -> B_27_0_0 [ 1
] = _rtB -> B_116_24_0 [ 1 ] ; _rtB -> B_27_0_0 [ 4 ] = _rtB -> B_116_64_0 [
1 ] ; _rtB -> B_27_0_0 [ 7 ] = _rtB -> B_116_65_0 [ 1 ] ; _rtB -> B_27_0_0 [
10 ] = _rtB -> B_116_66_0 [ 1 ] ; _rtB -> B_27_1_0 [ 1 ] = _rtB -> B_116_57_0
[ 1 ] ; _rtB -> B_27_1_0 [ 4 ] = _rtB -> B_116_67_0 [ 1 ] ; _rtB -> B_27_1_0
[ 7 ] = _rtB -> B_116_68_0 [ 1 ] ; _rtB -> B_27_1_0 [ 10 ] = _rtB ->
B_116_69_0 [ 1 ] ; _rtB -> B_27_0_0 [ 2 ] = _rtB -> B_116_24_0 [ 2 ] ; _rtB
-> B_27_0_0 [ 5 ] = _rtB -> B_116_64_0 [ 2 ] ; _rtB -> B_27_0_0 [ 8 ] = _rtB
-> B_116_65_0 [ 2 ] ; _rtB -> B_27_0_0 [ 11 ] = _rtB -> B_116_66_0 [ 2 ] ;
_rtB -> B_27_1_0 [ 2 ] = _rtB -> B_116_57_0 [ 2 ] ; _rtB -> B_27_1_0 [ 5 ] =
_rtB -> B_116_67_0 [ 2 ] ; _rtB -> B_27_1_0 [ 8 ] = _rtB -> B_116_68_0 [ 2 ]
; _rtB -> B_27_1_0 [ 11 ] = _rtB -> B_116_69_0 [ 2 ] ; ssCallAccelRunBlock (
S , 27 , 2 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_28_0_0 [ 0 ] = _rtB ->
B_116_25_0 [ 0 ] ; _rtB -> B_28_0_0 [ 3 ] = _rtB -> B_116_71_0 [ 0 ] ; _rtB
-> B_28_0_0 [ 6 ] = _rtB -> B_116_72_0 [ 0 ] ; _rtB -> B_28_0_0 [ 9 ] = _rtB
-> B_116_73_0 [ 0 ] ; _rtB -> B_28_1_0 [ 0 ] = _rtB -> B_116_58_0 [ 0 ] ;
_rtB -> B_28_1_0 [ 3 ] = _rtB -> B_116_74_0 [ 0 ] ; _rtB -> B_28_1_0 [ 6 ] =
_rtB -> B_116_75_0 [ 0 ] ; _rtB -> B_28_1_0 [ 9 ] = _rtB -> B_116_76_0 [ 0 ]
; _rtB -> B_28_0_0 [ 1 ] = _rtB -> B_116_25_0 [ 1 ] ; _rtB -> B_28_0_0 [ 4 ]
= _rtB -> B_116_71_0 [ 1 ] ; _rtB -> B_28_0_0 [ 7 ] = _rtB -> B_116_72_0 [ 1
] ; _rtB -> B_28_0_0 [ 10 ] = _rtB -> B_116_73_0 [ 1 ] ; _rtB -> B_28_1_0 [ 1
] = _rtB -> B_116_58_0 [ 1 ] ; _rtB -> B_28_1_0 [ 4 ] = _rtB -> B_116_74_0 [
1 ] ; _rtB -> B_28_1_0 [ 7 ] = _rtB -> B_116_75_0 [ 1 ] ; _rtB -> B_28_1_0 [
10 ] = _rtB -> B_116_76_0 [ 1 ] ; _rtB -> B_28_0_0 [ 2 ] = _rtB -> B_116_25_0
[ 2 ] ; _rtB -> B_28_0_0 [ 5 ] = _rtB -> B_116_71_0 [ 2 ] ; _rtB -> B_28_0_0
[ 8 ] = _rtB -> B_116_72_0 [ 2 ] ; _rtB -> B_28_0_0 [ 11 ] = _rtB ->
B_116_73_0 [ 2 ] ; _rtB -> B_28_1_0 [ 2 ] = _rtB -> B_116_58_0 [ 2 ] ; _rtB
-> B_28_1_0 [ 5 ] = _rtB -> B_116_74_0 [ 2 ] ; _rtB -> B_28_1_0 [ 8 ] = _rtB
-> B_116_75_0 [ 2 ] ; _rtB -> B_28_1_0 [ 11 ] = _rtB -> B_116_76_0 [ 2 ] ;
_rtB -> B_28_2_0 [ 0 ] = _rtB -> B_116_7_0 ; _rtB -> B_28_2_0 [ 1 ] = _rtB ->
B_116_8_0 ; _rtB -> B_28_2_0 [ 2 ] = _rtB -> B_116_9_0 ; ssCallAccelRunBlock
( S , 28 , 3 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 137 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 29 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 139 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 140 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 31 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 32 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 33 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 36 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtB -> B_116_145_0 . p1 [ 0 ] , & _rtB ->
B_116_1_0 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_145_0
. p2 [ 0 ] , & _rtB -> B_116_86_0 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy
( & _rtB -> B_116_145_0 . p3 [ 0 ] , & _rtB -> B_116_87_0 [ 0 ] , 36U *
sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_145_0 . p4 [ 0 ] , & _rtB ->
B_116_88_0 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtB -> B_37_0_0 [ i ] = _rtB -> B_20_2_1 [ i ] ; _rtB -> B_37_0_0 [ i + 6 ]
= _rtB -> B_42_2_1 [ i ] ; _rtB -> B_37_0_0 [ i + 12 ] = _rtB -> B_64_2_1 [ i
] ; _rtB -> B_37_0_0 [ i + 18 ] = _rtB -> B_86_2_1 [ i ] ; }
ssCallAccelRunBlock ( S , 37 , 1 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 38 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 40 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_116_149_0 = ssGetT ( S ) ; ssCallAccelRunBlock ( S , 43 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_116_151_0 [
i ] = _rtX -> Integrator1_CSTATE_l [ i ] ; } memcpy ( & _rtB -> B_116_152_0 [
0 ] , & _rtX -> Integrator3_CSTATE_n [ 0 ] , 36U * sizeof ( real_T ) ) ; for
( i = 0 ; i < 15 ; i ++ ) { _rtB -> B_116_153_0 [ i ] = _rtX ->
Integrator_CSTATE_h [ i ] ; _rtB -> B_116_155_0 [ i ] = _rtX ->
Integrator1_CSTATE_ld [ i ] - _rtB -> B_116_48_0 [ i ] ; }
ssCallAccelRunBlock ( S , 46 , 0 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_116_157_0 [ i ] = _rtX -> Integrator2_CSTATE_j [ i ] ;
} _rtB -> B_116_158_0 [ 0 ] = _rtX -> Integrator_CSTATE_na [ 0 ] ; _rtB ->
B_116_160_0 [ 0 ] = _rtX -> Integrator1_CSTATE_k3 [ 0 ] - _rtB -> B_116_94_0
[ 0 ] ; _rtB -> B_116_158_0 [ 1 ] = _rtX -> Integrator_CSTATE_na [ 1 ] ; _rtB
-> B_116_160_0 [ 1 ] = _rtX -> Integrator1_CSTATE_k3 [ 1 ] - _rtB ->
B_116_94_0 [ 1 ] ; _rtB -> B_116_158_0 [ 2 ] = _rtX -> Integrator_CSTATE_na [
2 ] ; _rtB -> B_116_160_0 [ 2 ] = _rtX -> Integrator1_CSTATE_k3 [ 2 ] - _rtB
-> B_116_94_0 [ 2 ] ; ssCallAccelRunBlock ( S , 61 , 0 , SS_CALL_MDL_OUTPUTS
) ; ssCallAccelRunBlock ( S , 63 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 44 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 164 , SS_CALL_MDL_OUTPUTS ) ; isHit =
ssIsSampleHit ( S , 1 , 0 ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_116_165_0 [ i ] = _rtX -> Integrator3_CSTATE_h [ i ] ; if ( isHit != 0 ) {
_rtB -> B_116_166_0 [ i ] = _rtDW -> Memory_PreviousInput_az [ i ] ; } }
ssCallAccelRunBlock ( S , 57 , 0 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_116_168_0 [ i ] = _rtB -> B_116_165_0 [ i ] + _rtB ->
B_57_0_3 [ i ] ; _rtB -> B_116_169_0 [ i ] = _rtX -> Integrator_CSTATE_dq [ i
] ; _rtB -> B_116_171_0 [ i ] = _rtX -> Integrator1_CSTATE_lf [ i ] - _rtB ->
B_57_0_2 [ i ] ; } ssCallAccelRunBlock ( S , 52 , 0 , SS_CALL_MDL_OUTPUTS ) ;
memcpy ( & _rtB -> B_116_173_0 [ 0 ] , & _rtX -> Integrator1_CSTATE_f [ 0 ] ,
36U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_174_0 [ 0 ] , & _rtX ->
Integrator_CSTATE_cz [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6
; i ++ ) { _rtB -> B_116_175_0 [ i ] = _rtX -> Integrator2_CSTATE_n [ i ] ; }
ssCallAccelRunBlock ( S , 56 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 45 , 0 , SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtB ->
B_116_178_0 . t1 [ 0 ] , & _rtB -> B_116_2_0 [ 0 ] , 15U * sizeof ( real_T )
) ; memcpy ( & _rtB -> B_116_178_0 . t2 [ 0 ] , & _rtB -> B_116_47_0 [ 0 ] ,
15U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_178_0 . t3 [ 0 ] , &
_rtB -> B_116_48_0 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtB ->
B_116_178_0 . t4 [ 0 ] , & _rtB -> B_116_49_0 [ 0 ] , 15U * sizeof ( real_T )
) ; isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) { memcpy ( & _rtB
-> B_116_179_0 . eps1 [ 0 ] , & _rtB -> B_116_51_0 [ 0 ] , 15U * sizeof (
real_T ) ) ; memcpy ( & _rtB -> B_116_179_0 . eps2 [ 0 ] , & _rtB ->
B_116_52_0 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_179_0
. eps3 [ 0 ] , & _rtB -> B_116_53_0 [ 0 ] , 15U * sizeof ( real_T ) ) ;
memcpy ( & _rtB -> B_116_179_0 . eps4 [ 0 ] , & _rtB -> B_116_54_0 [ 0 ] ,
15U * sizeof ( real_T ) ) ; } ssCallAccelRunBlock ( S , 47 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 48 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_49_0_0 [ 0 ] = _rtB -> B_116_24_0 [ 0 ] ;
_rtB -> B_49_0_0 [ 3 ] = _rtB -> B_116_64_0 [ 0 ] ; _rtB -> B_49_0_0 [ 6 ] =
_rtB -> B_116_65_0 [ 0 ] ; _rtB -> B_49_0_0 [ 9 ] = _rtB -> B_116_66_0 [ 0 ]
; _rtB -> B_49_1_0 [ 0 ] = _rtB -> B_116_57_0 [ 0 ] ; _rtB -> B_49_1_0 [ 3 ]
= _rtB -> B_116_67_0 [ 0 ] ; _rtB -> B_49_1_0 [ 6 ] = _rtB -> B_116_68_0 [ 0
] ; _rtB -> B_49_1_0 [ 9 ] = _rtB -> B_116_69_0 [ 0 ] ; _rtB -> B_49_0_0 [ 1
] = _rtB -> B_116_24_0 [ 1 ] ; _rtB -> B_49_0_0 [ 4 ] = _rtB -> B_116_64_0 [
1 ] ; _rtB -> B_49_0_0 [ 7 ] = _rtB -> B_116_65_0 [ 1 ] ; _rtB -> B_49_0_0 [
10 ] = _rtB -> B_116_66_0 [ 1 ] ; _rtB -> B_49_1_0 [ 1 ] = _rtB -> B_116_57_0
[ 1 ] ; _rtB -> B_49_1_0 [ 4 ] = _rtB -> B_116_67_0 [ 1 ] ; _rtB -> B_49_1_0
[ 7 ] = _rtB -> B_116_68_0 [ 1 ] ; _rtB -> B_49_1_0 [ 10 ] = _rtB ->
B_116_69_0 [ 1 ] ; _rtB -> B_49_0_0 [ 2 ] = _rtB -> B_116_24_0 [ 2 ] ; _rtB
-> B_49_0_0 [ 5 ] = _rtB -> B_116_64_0 [ 2 ] ; _rtB -> B_49_0_0 [ 8 ] = _rtB
-> B_116_65_0 [ 2 ] ; _rtB -> B_49_0_0 [ 11 ] = _rtB -> B_116_66_0 [ 2 ] ;
_rtB -> B_49_1_0 [ 2 ] = _rtB -> B_116_57_0 [ 2 ] ; _rtB -> B_49_1_0 [ 5 ] =
_rtB -> B_116_67_0 [ 2 ] ; _rtB -> B_49_1_0 [ 8 ] = _rtB -> B_116_68_0 [ 2 ]
; _rtB -> B_49_1_0 [ 11 ] = _rtB -> B_116_69_0 [ 2 ] ; ssCallAccelRunBlock (
S , 49 , 2 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_50_0_0 [ 0 ] = _rtB ->
B_116_25_0 [ 0 ] ; _rtB -> B_50_0_0 [ 3 ] = _rtB -> B_116_71_0 [ 0 ] ; _rtB
-> B_50_0_0 [ 6 ] = _rtB -> B_116_72_0 [ 0 ] ; _rtB -> B_50_0_0 [ 9 ] = _rtB
-> B_116_73_0 [ 0 ] ; _rtB -> B_50_1_0 [ 0 ] = _rtB -> B_116_58_0 [ 0 ] ;
_rtB -> B_50_1_0 [ 3 ] = _rtB -> B_116_74_0 [ 0 ] ; _rtB -> B_50_1_0 [ 6 ] =
_rtB -> B_116_75_0 [ 0 ] ; _rtB -> B_50_1_0 [ 9 ] = _rtB -> B_116_76_0 [ 0 ]
; _rtB -> B_50_0_0 [ 1 ] = _rtB -> B_116_25_0 [ 1 ] ; _rtB -> B_50_0_0 [ 4 ]
= _rtB -> B_116_71_0 [ 1 ] ; _rtB -> B_50_0_0 [ 7 ] = _rtB -> B_116_72_0 [ 1
] ; _rtB -> B_50_0_0 [ 10 ] = _rtB -> B_116_73_0 [ 1 ] ; _rtB -> B_50_1_0 [ 1
] = _rtB -> B_116_58_0 [ 1 ] ; _rtB -> B_50_1_0 [ 4 ] = _rtB -> B_116_74_0 [
1 ] ; _rtB -> B_50_1_0 [ 7 ] = _rtB -> B_116_75_0 [ 1 ] ; _rtB -> B_50_1_0 [
10 ] = _rtB -> B_116_76_0 [ 1 ] ; _rtB -> B_50_0_0 [ 2 ] = _rtB -> B_116_25_0
[ 2 ] ; _rtB -> B_50_0_0 [ 5 ] = _rtB -> B_116_71_0 [ 2 ] ; _rtB -> B_50_0_0
[ 8 ] = _rtB -> B_116_72_0 [ 2 ] ; _rtB -> B_50_0_0 [ 11 ] = _rtB ->
B_116_73_0 [ 2 ] ; _rtB -> B_50_1_0 [ 2 ] = _rtB -> B_116_58_0 [ 2 ] ; _rtB
-> B_50_1_0 [ 5 ] = _rtB -> B_116_74_0 [ 2 ] ; _rtB -> B_50_1_0 [ 8 ] = _rtB
-> B_116_75_0 [ 2 ] ; _rtB -> B_50_1_0 [ 11 ] = _rtB -> B_116_76_0 [ 2 ] ;
_rtB -> B_50_2_0 [ 0 ] = _rtB -> B_116_7_0 ; _rtB -> B_50_2_0 [ 1 ] = _rtB ->
B_116_8_0 ; _rtB -> B_50_2_0 [ 2 ] = _rtB -> B_116_9_0 ; ssCallAccelRunBlock
( S , 50 , 3 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 184 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 51 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 186 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 187 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 53 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 54 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 55 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 58 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtB -> B_116_192_0 . p1 [ 0 ] , & _rtB ->
B_116_1_0 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_192_0
. p2 [ 0 ] , & _rtB -> B_116_86_0 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy
( & _rtB -> B_116_192_0 . p3 [ 0 ] , & _rtB -> B_116_87_0 [ 0 ] , 36U *
sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_192_0 . p4 [ 0 ] , & _rtB ->
B_116_88_0 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtB -> B_59_0_0 [ i ] = _rtB -> B_20_2_1 [ i ] ; _rtB -> B_59_0_0 [ i + 6 ]
= _rtB -> B_42_2_1 [ i ] ; _rtB -> B_59_0_0 [ i + 12 ] = _rtB -> B_64_2_1 [ i
] ; _rtB -> B_59_0_0 [ i + 18 ] = _rtB -> B_86_2_1 [ i ] ; }
ssCallAccelRunBlock ( S , 59 , 1 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 60 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 62 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_116_196_0 = ssGetT ( S ) ; ssCallAccelRunBlock ( S , 65 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_116_198_0 [
i ] = _rtX -> Integrator1_CSTATE_kl [ i ] ; } memcpy ( & _rtB -> B_116_199_0
[ 0 ] , & _rtX -> Integrator3_CSTATE_p [ 0 ] , 36U * sizeof ( real_T ) ) ;
for ( i = 0 ; i < 15 ; i ++ ) { _rtB -> B_116_200_0 [ i ] = _rtX ->
Integrator_CSTATE_bs [ i ] ; _rtB -> B_116_202_0 [ i ] = _rtX ->
Integrator1_CSTATE_c [ i ] - _rtB -> B_116_49_0 [ i ] ; } ssCallAccelRunBlock
( S , 68 , 0 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_116_204_0 [ i ] = _rtX -> Integrator2_CSTATE_gf [ i ] ; } _rtB ->
B_116_205_0 [ 0 ] = _rtX -> Integrator_CSTATE_a [ 0 ] ; _rtB -> B_116_207_0 [
0 ] = _rtX -> Integrator1_CSTATE_c4 [ 0 ] - _rtB -> B_116_97_0 [ 0 ] ; _rtB
-> B_116_205_0 [ 1 ] = _rtX -> Integrator_CSTATE_a [ 1 ] ; _rtB ->
B_116_207_0 [ 1 ] = _rtX -> Integrator1_CSTATE_c4 [ 1 ] - _rtB -> B_116_97_0
[ 1 ] ; _rtB -> B_116_205_0 [ 2 ] = _rtX -> Integrator_CSTATE_a [ 2 ] ; _rtB
-> B_116_207_0 [ 2 ] = _rtX -> Integrator1_CSTATE_c4 [ 2 ] - _rtB ->
B_116_97_0 [ 2 ] ; ssCallAccelRunBlock ( S , 83 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 85 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 66 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 211 , SS_CALL_MDL_OUTPUTS ) ; isHit =
ssIsSampleHit ( S , 1 , 0 ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_116_212_0 [ i ] = _rtX -> Integrator3_CSTATE_d [ i ] ; if ( isHit != 0 ) {
_rtB -> B_116_213_0 [ i ] = _rtDW -> Memory_PreviousInput_jv [ i ] ; } }
ssCallAccelRunBlock ( S , 79 , 0 , SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_116_215_0 [ i ] = _rtB -> B_116_212_0 [ i ] + _rtB ->
B_79_0_3 [ i ] ; _rtB -> B_116_216_0 [ i ] = _rtX -> Integrator_CSTATE_dg [ i
] ; _rtB -> B_116_218_0 [ i ] = _rtX -> Integrator1_CSTATE_h [ i ] - _rtB ->
B_79_0_2 [ i ] ; } ssCallAccelRunBlock ( S , 74 , 0 , SS_CALL_MDL_OUTPUTS ) ;
memcpy ( & _rtB -> B_116_220_0 [ 0 ] , & _rtX -> Integrator1_CSTATE_lq [ 0 ]
, 36U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_221_0 [ 0 ] , & _rtX
-> Integrator_CSTATE_d1 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_116_222_0 [ i ] = _rtX -> Integrator2_CSTATE_n1 [ i ]
; } ssCallAccelRunBlock ( S , 78 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 67 , 0 , SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtB ->
B_116_225_0 . t1 [ 0 ] , & _rtB -> B_116_2_0 [ 0 ] , 15U * sizeof ( real_T )
) ; memcpy ( & _rtB -> B_116_225_0 . t2 [ 0 ] , & _rtB -> B_116_47_0 [ 0 ] ,
15U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_225_0 . t3 [ 0 ] , &
_rtB -> B_116_48_0 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtB ->
B_116_225_0 . t4 [ 0 ] , & _rtB -> B_116_49_0 [ 0 ] , 15U * sizeof ( real_T )
) ; isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) { memcpy ( & _rtB
-> B_116_226_0 . eps1 [ 0 ] , & _rtB -> B_116_51_0 [ 0 ] , 15U * sizeof (
real_T ) ) ; memcpy ( & _rtB -> B_116_226_0 . eps2 [ 0 ] , & _rtB ->
B_116_52_0 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_226_0
. eps3 [ 0 ] , & _rtB -> B_116_53_0 [ 0 ] , 15U * sizeof ( real_T ) ) ;
memcpy ( & _rtB -> B_116_226_0 . eps4 [ 0 ] , & _rtB -> B_116_54_0 [ 0 ] ,
15U * sizeof ( real_T ) ) ; } ssCallAccelRunBlock ( S , 69 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 70 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_71_0_0 [ 0 ] = _rtB -> B_116_24_0 [ 0 ] ;
_rtB -> B_71_0_0 [ 3 ] = _rtB -> B_116_64_0 [ 0 ] ; _rtB -> B_71_0_0 [ 6 ] =
_rtB -> B_116_65_0 [ 0 ] ; _rtB -> B_71_0_0 [ 9 ] = _rtB -> B_116_66_0 [ 0 ]
; _rtB -> B_71_1_0 [ 0 ] = _rtB -> B_116_57_0 [ 0 ] ; _rtB -> B_71_1_0 [ 3 ]
= _rtB -> B_116_67_0 [ 0 ] ; _rtB -> B_71_1_0 [ 6 ] = _rtB -> B_116_68_0 [ 0
] ; _rtB -> B_71_1_0 [ 9 ] = _rtB -> B_116_69_0 [ 0 ] ; _rtB -> B_71_0_0 [ 1
] = _rtB -> B_116_24_0 [ 1 ] ; _rtB -> B_71_0_0 [ 4 ] = _rtB -> B_116_64_0 [
1 ] ; _rtB -> B_71_0_0 [ 7 ] = _rtB -> B_116_65_0 [ 1 ] ; _rtB -> B_71_0_0 [
10 ] = _rtB -> B_116_66_0 [ 1 ] ; _rtB -> B_71_1_0 [ 1 ] = _rtB -> B_116_57_0
[ 1 ] ; _rtB -> B_71_1_0 [ 4 ] = _rtB -> B_116_67_0 [ 1 ] ; _rtB -> B_71_1_0
[ 7 ] = _rtB -> B_116_68_0 [ 1 ] ; _rtB -> B_71_1_0 [ 10 ] = _rtB ->
B_116_69_0 [ 1 ] ; _rtB -> B_71_0_0 [ 2 ] = _rtB -> B_116_24_0 [ 2 ] ; _rtB
-> B_71_0_0 [ 5 ] = _rtB -> B_116_64_0 [ 2 ] ; _rtB -> B_71_0_0 [ 8 ] = _rtB
-> B_116_65_0 [ 2 ] ; _rtB -> B_71_0_0 [ 11 ] = _rtB -> B_116_66_0 [ 2 ] ;
_rtB -> B_71_1_0 [ 2 ] = _rtB -> B_116_57_0 [ 2 ] ; _rtB -> B_71_1_0 [ 5 ] =
_rtB -> B_116_67_0 [ 2 ] ; _rtB -> B_71_1_0 [ 8 ] = _rtB -> B_116_68_0 [ 2 ]
; _rtB -> B_71_1_0 [ 11 ] = _rtB -> B_116_69_0 [ 2 ] ; ssCallAccelRunBlock (
S , 71 , 2 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_72_0_0 [ 0 ] = _rtB ->
B_116_25_0 [ 0 ] ; _rtB -> B_72_0_0 [ 3 ] = _rtB -> B_116_71_0 [ 0 ] ; _rtB
-> B_72_0_0 [ 6 ] = _rtB -> B_116_72_0 [ 0 ] ; _rtB -> B_72_0_0 [ 9 ] = _rtB
-> B_116_73_0 [ 0 ] ; _rtB -> B_72_1_0 [ 0 ] = _rtB -> B_116_58_0 [ 0 ] ;
_rtB -> B_72_1_0 [ 3 ] = _rtB -> B_116_74_0 [ 0 ] ; _rtB -> B_72_1_0 [ 6 ] =
_rtB -> B_116_75_0 [ 0 ] ; _rtB -> B_72_1_0 [ 9 ] = _rtB -> B_116_76_0 [ 0 ]
; _rtB -> B_72_0_0 [ 1 ] = _rtB -> B_116_25_0 [ 1 ] ; _rtB -> B_72_0_0 [ 4 ]
= _rtB -> B_116_71_0 [ 1 ] ; _rtB -> B_72_0_0 [ 7 ] = _rtB -> B_116_72_0 [ 1
] ; _rtB -> B_72_0_0 [ 10 ] = _rtB -> B_116_73_0 [ 1 ] ; _rtB -> B_72_1_0 [ 1
] = _rtB -> B_116_58_0 [ 1 ] ; _rtB -> B_72_1_0 [ 4 ] = _rtB -> B_116_74_0 [
1 ] ; _rtB -> B_72_1_0 [ 7 ] = _rtB -> B_116_75_0 [ 1 ] ; _rtB -> B_72_1_0 [
10 ] = _rtB -> B_116_76_0 [ 1 ] ; _rtB -> B_72_0_0 [ 2 ] = _rtB -> B_116_25_0
[ 2 ] ; _rtB -> B_72_0_0 [ 5 ] = _rtB -> B_116_71_0 [ 2 ] ; _rtB -> B_72_0_0
[ 8 ] = _rtB -> B_116_72_0 [ 2 ] ; _rtB -> B_72_0_0 [ 11 ] = _rtB ->
B_116_73_0 [ 2 ] ; _rtB -> B_72_1_0 [ 2 ] = _rtB -> B_116_58_0 [ 2 ] ; _rtB
-> B_72_1_0 [ 5 ] = _rtB -> B_116_74_0 [ 2 ] ; _rtB -> B_72_1_0 [ 8 ] = _rtB
-> B_116_75_0 [ 2 ] ; _rtB -> B_72_1_0 [ 11 ] = _rtB -> B_116_76_0 [ 2 ] ;
_rtB -> B_72_2_0 [ 0 ] = _rtB -> B_116_7_0 ; _rtB -> B_72_2_0 [ 1 ] = _rtB ->
B_116_8_0 ; _rtB -> B_72_2_0 [ 2 ] = _rtB -> B_116_9_0 ; ssCallAccelRunBlock
( S , 72 , 3 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 231 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 73 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 233 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 234 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 75 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 76 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 77 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 80 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtB -> B_116_239_0 . p1 [ 0 ] , & _rtB ->
B_116_1_0 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_239_0
. p2 [ 0 ] , & _rtB -> B_116_86_0 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy
( & _rtB -> B_116_239_0 . p3 [ 0 ] , & _rtB -> B_116_87_0 [ 0 ] , 36U *
sizeof ( real_T ) ) ; memcpy ( & _rtB -> B_116_239_0 . p4 [ 0 ] , & _rtB ->
B_116_88_0 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtB -> B_81_0_0 [ i ] = _rtB -> B_20_2_1 [ i ] ; _rtB -> B_81_0_0 [ i + 6 ]
= _rtB -> B_42_2_1 [ i ] ; _rtB -> B_81_0_0 [ i + 12 ] = _rtB -> B_64_2_1 [ i
] ; _rtB -> B_81_0_0 [ i + 18 ] = _rtB -> B_86_2_1 [ i ] ; }
ssCallAccelRunBlock ( S , 81 , 1 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 82 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 84 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_116_243_0 = ssGetT ( S ) ; ssCallAccelRunBlock ( S , 87 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 245 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 246 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 247 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 248 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 249 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 250 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 251 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 252 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsMajorTimeStep ( S ) != 0 ) { _rtDW ->
Abs_MODE = ( _rtB -> B_116_7_0 >= 0.0 ) ; _rtDW -> Abs1_MODE = ( _rtB ->
B_116_8_0 >= 0.0 ) ; } _rtB -> B_116_253_0 = _rtDW -> Abs_MODE > 0 ? _rtB ->
B_116_7_0 : - _rtB -> B_116_7_0 ; _rtB -> B_116_254_0 = _rtDW -> Abs1_MODE >
0 ? _rtB -> B_116_8_0 : - _rtB -> B_116_8_0 ; ssCallAccelRunBlock ( S , 97 ,
0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 260 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_116_261_0 = ssGetT ( S ) ;
ssCallAccelRunBlock ( S , 116 , 263 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 264 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 265 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_116_266_0 = _rtP -> P_525 * _rtB -> B_116_263_0 ; _rtB -> B_116_267_0 =
_rtP -> P_526 * _rtB -> B_116_264_0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> Switch_Mode = ( _rtB -> B_116_261_0 > _rtP -> P_527 ) ; _rtDW ->
Switch2_Mode = ( _rtB -> B_116_253_0 > _rtP -> P_528 ) ; } if ( _rtDW ->
Switch_Mode ) { _rtB -> B_99_0_0 = _rtP -> P_408 * _rtB -> B_116_265_0 ; _rtB
-> B_116_269_0 = _rtB -> B_99_0_0 ; } else { _rtB -> B_116_269_0 = _rtB ->
B_116_262_0 ; } if ( _rtDW -> Switch2_Mode ) { _rtB -> B_116_270_0 = _rtB ->
B_116_257_0 ; } else { _rtB -> B_116_270_0 = _rtB -> B_116_258_0 ; } if (
ssIsMajorTimeStep ( S ) != 0 ) { _rtDW -> Switch3_Mode = ( _rtB ->
B_116_254_0 > _rtP -> P_529 ) ; } if ( _rtDW -> Switch3_Mode ) { _rtB ->
B_116_271_0 = _rtB -> B_116_255_0 ; } else { _rtB -> B_116_271_0 = _rtB ->
B_116_258_0 ; } ssCallAccelRunBlock ( S , 88 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 277 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 89 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 279 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 94 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 281 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 95 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 283 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 284 , SS_CALL_MDL_OUTPUTS ) ; isHit =
ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) { ssCallAccelRunBlock ( S ,
90 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 286 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 91 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 288 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 92 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 290 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 93 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 292 ,
SS_CALL_MDL_OUTPUTS ) ; } ssCallAccelRunBlock ( S , 116 , 293 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 294 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 295 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 296 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 297 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 298 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 299 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 116 , 300 ,
SS_CALL_MDL_OUTPUTS ) ; isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0
) { ssCallAccelRunBlock ( S , 116 , 301 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 302 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 303 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 304 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 305 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 306 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 307 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 308 , SS_CALL_MDL_OUTPUTS ) ; }
ssCallAccelRunBlock ( S , 100 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 310 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 101 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 312 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 102 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 314 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 103 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 316 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 104 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 318 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 105 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 320 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 106 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 322 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 107 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 324 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 325 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 326 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 327 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 328 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 329 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 330 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 331 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 332 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 108 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 334 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 109 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 336 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 110 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 338 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 111 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 340 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 112 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 342 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 113 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 344 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 114 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 346 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 115 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 348 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 349 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 350 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 351 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 352 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 353 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 354 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 355 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 356 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 357 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 358 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 359 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 116 , 360 , SS_CALL_MDL_OUTPUTS ) ;
UNUSED_PARAMETER ( tid ) ; } static void mdlOutputsTID2 ( SimStruct * S ,
int_T tid ) { B_CAMFC2_Quad_New_02_T * _rtB ; P_CAMFC2_Quad_New_02_T * _rtP ;
_rtP = ( ( P_CAMFC2_Quad_New_02_T * ) ssGetModelRtp ( S ) ) ; _rtB = ( (
B_CAMFC2_Quad_New_02_T * ) _ssGetModelBlockIO ( S ) ) ; _rtB -> B_116_0_0 =
_rtP -> P_409 ; _rtB -> B_116_18_0 [ 0 ] = _rtP -> P_427 [ 0 ] ; _rtB ->
B_116_18_0 [ 1 ] = _rtP -> P_427 [ 1 ] ; _rtB -> B_116_18_0 [ 2 ] = _rtP ->
P_427 [ 2 ] ; _rtB -> B_116_90_0 = _rtP -> P_472 ; _rtB -> B_116_93_0 = _rtP
-> P_474 ; _rtB -> B_116_96_0 = _rtP -> P_476 ; _rtB -> B_116_255_0 = _rtP ->
P_520 ; _rtB -> B_116_256_0 = _rtP -> P_521 ; _rtB -> B_116_257_0 = _rtP ->
P_522 ; _rtB -> B_116_258_0 = _rtP -> P_523 ; _rtB -> B_116_262_0 = _rtP ->
P_524 ; _rtB -> B_116_272_0 = _rtP -> P_530 ; _rtB -> B_116_274_0 = _rtP ->
P_533 ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { int32_T i ;
B_CAMFC2_Quad_New_02_T * _rtB ; DW_CAMFC2_Quad_New_02_T * _rtDW ; _rtDW = ( (
DW_CAMFC2_Quad_New_02_T * ) ssGetRootDWork ( S ) ) ; _rtB = ( (
B_CAMFC2_Quad_New_02_T * ) _ssGetModelBlockIO ( S ) ) ; i = ssIsSampleHit ( S
, 1 , 0 ) ; if ( i != 0 ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtDW ->
Memory2_PreviousInput [ i ] = _rtB -> B_19_0_1 [ i ] ; _rtDW ->
Memory_PreviousInput [ i ] = _rtB -> B_12_0_1 [ i ] ; } memcpy ( & _rtDW ->
Memory3_PreviousInput [ 0 ] , & _rtB -> B_4_0_2 [ 0 ] , 15U * sizeof ( real_T
) ) ; memcpy ( & _rtDW -> Memory3_PreviousInput_j [ 0 ] , & _rtB -> B_26_0_2
[ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtDW ->
Memory3_PreviousInput_b [ 0 ] , & _rtB -> B_48_0_2 [ 0 ] , 15U * sizeof (
real_T ) ) ; memcpy ( & _rtDW -> Memory3_PreviousInput_jb [ 0 ] , & _rtB ->
B_70_0_2 [ 0 ] , 15U * sizeof ( real_T ) ) ; _rtDW -> Memory_PreviousInput_j
[ 0 ] = _rtB -> B_5_2_2 [ 0 ] ; _rtDW -> Memory5_PreviousInput [ 0 ] = _rtB
-> B_6_3_2 [ 0 ] ; _rtDW -> Memory_PreviousInput_o [ 0 ] = _rtB -> B_27_2_2 [
0 ] ; _rtDW -> Memory_PreviousInput_a [ 0 ] = _rtB -> B_49_2_2 [ 0 ] ; _rtDW
-> Memory_PreviousInput_h [ 0 ] = _rtB -> B_71_2_2 [ 0 ] ; _rtDW ->
Memory5_PreviousInput_k [ 0 ] = _rtB -> B_28_3_2 [ 0 ] ; _rtDW ->
Memory5_PreviousInput_n [ 0 ] = _rtB -> B_50_3_2 [ 0 ] ; _rtDW ->
Memory5_PreviousInput_p [ 0 ] = _rtB -> B_72_3_2 [ 0 ] ; _rtDW ->
Memory_PreviousInput_j [ 1 ] = _rtB -> B_5_2_2 [ 1 ] ; _rtDW ->
Memory5_PreviousInput [ 1 ] = _rtB -> B_6_3_2 [ 1 ] ; _rtDW ->
Memory_PreviousInput_o [ 1 ] = _rtB -> B_27_2_2 [ 1 ] ; _rtDW ->
Memory_PreviousInput_a [ 1 ] = _rtB -> B_49_2_2 [ 1 ] ; _rtDW ->
Memory_PreviousInput_h [ 1 ] = _rtB -> B_71_2_2 [ 1 ] ; _rtDW ->
Memory5_PreviousInput_k [ 1 ] = _rtB -> B_28_3_2 [ 1 ] ; _rtDW ->
Memory5_PreviousInput_n [ 1 ] = _rtB -> B_50_3_2 [ 1 ] ; _rtDW ->
Memory5_PreviousInput_p [ 1 ] = _rtB -> B_72_3_2 [ 1 ] ; _rtDW ->
Memory_PreviousInput_j [ 2 ] = _rtB -> B_5_2_2 [ 2 ] ; _rtDW ->
Memory5_PreviousInput [ 2 ] = _rtB -> B_6_3_2 [ 2 ] ; _rtDW ->
Memory_PreviousInput_o [ 2 ] = _rtB -> B_27_2_2 [ 2 ] ; _rtDW ->
Memory_PreviousInput_a [ 2 ] = _rtB -> B_49_2_2 [ 2 ] ; _rtDW ->
Memory_PreviousInput_h [ 2 ] = _rtB -> B_71_2_2 [ 2 ] ; _rtDW ->
Memory5_PreviousInput_k [ 2 ] = _rtB -> B_28_3_2 [ 2 ] ; _rtDW ->
Memory5_PreviousInput_n [ 2 ] = _rtB -> B_50_3_2 [ 2 ] ; _rtDW ->
Memory5_PreviousInput_p [ 2 ] = _rtB -> B_72_3_2 [ 2 ] ; for ( i = 0 ; i < 6
; i ++ ) { _rtDW -> Memory2_PreviousInput_f [ i ] = _rtB -> B_41_0_1 [ i ] ;
_rtDW -> Memory2_PreviousInput_p [ i ] = _rtB -> B_63_0_1 [ i ] ; _rtDW ->
Memory2_PreviousInput_d [ i ] = _rtB -> B_85_0_1 [ i ] ; _rtDW ->
Memory_PreviousInput_j4 [ i ] = _rtB -> B_34_0_1 [ i ] ; _rtDW ->
Memory_PreviousInput_az [ i ] = _rtB -> B_56_0_1 [ i ] ; _rtDW ->
Memory_PreviousInput_jv [ i ] = _rtB -> B_78_0_1 [ i ] ; } } UNUSED_PARAMETER
( tid ) ; }
#define MDL_UPDATE
static void mdlUpdateTID2 ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER (
tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { int32_T i ;
B_CAMFC2_Quad_New_02_T * _rtB ; P_CAMFC2_Quad_New_02_T * _rtP ;
X_CAMFC2_Quad_New_02_T * _rtX ; XDot_CAMFC2_Quad_New_02_T * _rtXdot ; _rtXdot
= ( ( XDot_CAMFC2_Quad_New_02_T * ) ssGetdX ( S ) ) ; _rtX = ( (
X_CAMFC2_Quad_New_02_T * ) ssGetContStates ( S ) ) ; _rtP = ( (
P_CAMFC2_Quad_New_02_T * ) ssGetModelRtp ( S ) ) ; _rtB = ( (
B_CAMFC2_Quad_New_02_T * ) _ssGetModelBlockIO ( S ) ) ; memcpy ( & _rtXdot ->
Integrator4_CSTATE [ 0 ] , & _rtB -> B_16_0_1 [ 0 ] , 36U * sizeof ( real_T )
) ; memcpy ( & _rtXdot -> Integrator5_CSTATE [ 0 ] , & _rtB -> B_4_0_1 [ 0 ]
, 15U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE [ 0 ] ,
& _rtB -> B_21_0_1 [ 0 ] , 12U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot ->
Integrator_CSTATE_b [ 0 ] , & _rtB -> B_43_0_1 [ 0 ] , 12U * sizeof ( real_T
) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE_e [ 0 ] , & _rtB -> B_65_0_1 [
0 ] , 12U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE_k [
0 ] , & _rtB -> B_87_0_1 [ 0 ] , 12U * sizeof ( real_T ) ) ; _rtXdot ->
TransferFcn3_CSTATE = 0.0 ; _rtXdot -> TransferFcn3_CSTATE += _rtP -> P_416 *
_rtX -> TransferFcn3_CSTATE ; _rtXdot -> TransferFcn3_CSTATE += _rtB ->
B_116_266_0 ; _rtXdot -> TransferFcn2_CSTATE = 0.0 ; _rtXdot ->
TransferFcn2_CSTATE += _rtP -> P_418 * _rtX -> TransferFcn2_CSTATE ; _rtXdot
-> TransferFcn2_CSTATE += _rtB -> B_116_267_0 ; _rtXdot ->
TransferFcn1_CSTATE = 0.0 ; _rtXdot -> TransferFcn1_CSTATE += _rtP -> P_420 *
_rtX -> TransferFcn1_CSTATE ; _rtXdot -> TransferFcn1_CSTATE += _rtB ->
B_116_269_0 ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot -> Integrator1_CSTATE [
i ] = _rtB -> B_20_2_1 [ i ] ; } memcpy ( & _rtXdot -> Integrator3_CSTATE [ 0
] , & _rtB -> B_14_0_1 [ 0 ] , 36U * sizeof ( real_T ) ) ; _rtXdot ->
Integrator_CSTATE_bj [ 0 ] = _rtB -> B_97_0_1 [ 0 ] ; _rtXdot ->
Integrator1_CSTATE_b [ 0 ] = _rtB -> B_96_0_1 [ 0 ] ; _rtXdot ->
Integrator_CSTATE_bj [ 1 ] = _rtB -> B_97_0_1 [ 1 ] ; _rtXdot ->
Integrator1_CSTATE_b [ 1 ] = _rtB -> B_96_0_1 [ 1 ] ; _rtXdot ->
Integrator_CSTATE_bj [ 2 ] = _rtB -> B_97_0_1 [ 2 ] ; _rtXdot ->
Integrator1_CSTATE_b [ 2 ] = _rtB -> B_96_0_1 [ 2 ] ; memcpy ( & _rtXdot ->
Integrator_CSTATE_ko [ 0 ] , & _rtB -> B_3_0_1 [ 0 ] , 15U * sizeof ( real_T
) ) ; memcpy ( & _rtXdot -> Integrator1_CSTATE_a [ 0 ] , & _rtB -> B_2_0_1 [
0 ] , 15U * sizeof ( real_T ) ) ; _rtXdot -> Integrator_CSTATE_o [ 0 ] = _rtB
-> B_5_2_1 [ 0 ] ; _rtXdot -> Integrator6_CSTATE [ 0 ] = _rtB -> B_6_3_1 [ 0
] ; _rtXdot -> Integrator_CSTATE_o [ 1 ] = _rtB -> B_5_2_1 [ 1 ] ; _rtXdot ->
Integrator6_CSTATE [ 1 ] = _rtB -> B_6_3_1 [ 1 ] ; _rtXdot ->
Integrator_CSTATE_o [ 2 ] = _rtB -> B_5_2_1 [ 2 ] ; _rtXdot ->
Integrator6_CSTATE [ 2 ] = _rtB -> B_6_3_1 [ 2 ] ; _rtXdot ->
Integrator_CSTATE_d [ 0 ] = _rtB -> B_18_0_1 [ 0 ] ; _rtXdot ->
Integrator1_CSTATE_bg [ 0 ] = _rtB -> B_17_0_1 [ 0 ] ; _rtXdot ->
Integrator_CSTATE_d [ 1 ] = _rtB -> B_18_0_1 [ 1 ] ; _rtXdot ->
Integrator1_CSTATE_bg [ 1 ] = _rtB -> B_17_0_1 [ 1 ] ; _rtXdot ->
Integrator_CSTATE_d [ 2 ] = _rtB -> B_18_0_1 [ 2 ] ; _rtXdot ->
Integrator1_CSTATE_bg [ 2 ] = _rtB -> B_17_0_1 [ 2 ] ; for ( i = 0 ; i < 6 ;
i ++ ) { _rtXdot -> Integrator2_CSTATE [ i ] = _rtB -> B_15_1_1 [ i ] ;
_rtXdot -> Integrator3_CSTATE_k [ i ] = _rtB -> B_13_0_3 [ i ] ; _rtXdot ->
Integrator_CSTATE_d0 [ i ] = _rtB -> B_9_0_1 [ i ] ; _rtXdot ->
Integrator1_CSTATE_g [ i ] = _rtB -> B_8_0_1 [ i ] ; } memcpy ( & _rtXdot ->
Integrator1_CSTATE_k [ 0 ] , & _rtB -> B_7_0_1 [ 0 ] , 36U * sizeof ( real_T
) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE_c [ 0 ] , & _rtB -> B_11_0_1 [
0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot ->
Integrator2_CSTATE_g [ i ] = _rtB -> B_10_0_1 [ i ] ; } memcpy ( & _rtXdot ->
Integrator5_CSTATE_b [ 0 ] , & _rtB -> B_26_0_1 [ 0 ] , 15U * sizeof ( real_T
) ) ; memcpy ( & _rtXdot -> Integrator5_CSTATE_l [ 0 ] , & _rtB -> B_48_0_1 [
0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> Integrator5_CSTATE_n
[ 0 ] , & _rtB -> B_70_0_1 [ 0 ] , 15U * sizeof ( real_T ) ) ; _rtXdot ->
TransferFcn1_CSTATE_k = 0.0 ; _rtXdot -> TransferFcn1_CSTATE_k += _rtP ->
P_451 * _rtX -> TransferFcn1_CSTATE_k ; _rtXdot -> TransferFcn1_CSTATE_k +=
_rtB -> B_116_256_0 ; _rtXdot -> TransferFcn2_CSTATE_a = 0.0 ; _rtXdot ->
TransferFcn2_CSTATE_a += _rtP -> P_453 * _rtX -> TransferFcn2_CSTATE_a ;
_rtXdot -> TransferFcn2_CSTATE_a += _rtB -> B_116_270_0 ; _rtXdot ->
TransferFcn5_CSTATE = 0.0 ; _rtXdot -> TransferFcn5_CSTATE += _rtP -> P_455 *
_rtX -> TransferFcn5_CSTATE ; _rtXdot -> TransferFcn5_CSTATE += _rtB ->
B_116_271_0 ; _rtXdot -> Integrator_CSTATE_p [ 0 ] = _rtB -> B_27_2_1 [ 0 ] ;
_rtXdot -> Integrator_CSTATE_c2 [ 0 ] = _rtB -> B_49_2_1 [ 0 ] ; _rtXdot ->
Integrator_CSTATE_o3 [ 0 ] = _rtB -> B_71_2_1 [ 0 ] ; _rtXdot ->
Integrator6_CSTATE_j [ 0 ] = _rtB -> B_28_3_1 [ 0 ] ; _rtXdot ->
Integrator6_CSTATE_n [ 0 ] = _rtB -> B_50_3_1 [ 0 ] ; _rtXdot ->
Integrator6_CSTATE_i [ 0 ] = _rtB -> B_72_3_1 [ 0 ] ; _rtXdot ->
Integrator_CSTATE_p [ 1 ] = _rtB -> B_27_2_1 [ 1 ] ; _rtXdot ->
Integrator_CSTATE_c2 [ 1 ] = _rtB -> B_49_2_1 [ 1 ] ; _rtXdot ->
Integrator_CSTATE_o3 [ 1 ] = _rtB -> B_71_2_1 [ 1 ] ; _rtXdot ->
Integrator6_CSTATE_j [ 1 ] = _rtB -> B_28_3_1 [ 1 ] ; _rtXdot ->
Integrator6_CSTATE_n [ 1 ] = _rtB -> B_50_3_1 [ 1 ] ; _rtXdot ->
Integrator6_CSTATE_i [ 1 ] = _rtB -> B_72_3_1 [ 1 ] ; _rtXdot ->
Integrator_CSTATE_p [ 2 ] = _rtB -> B_27_2_1 [ 2 ] ; _rtXdot ->
Integrator_CSTATE_c2 [ 2 ] = _rtB -> B_49_2_1 [ 2 ] ; _rtXdot ->
Integrator_CSTATE_o3 [ 2 ] = _rtB -> B_71_2_1 [ 2 ] ; _rtXdot ->
Integrator6_CSTATE_j [ 2 ] = _rtB -> B_28_3_1 [ 2 ] ; _rtXdot ->
Integrator6_CSTATE_n [ 2 ] = _rtB -> B_50_3_1 [ 2 ] ; _rtXdot ->
Integrator6_CSTATE_i [ 2 ] = _rtB -> B_72_3_1 [ 2 ] ; memcpy ( & _rtXdot ->
Integrator4_CSTATE_o [ 0 ] , & _rtB -> B_38_0_1 [ 0 ] , 36U * sizeof ( real_T
) ) ; memcpy ( & _rtXdot -> Integrator4_CSTATE_l [ 0 ] , & _rtB -> B_60_0_1 [
0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> Integrator4_CSTATE_a
[ 0 ] , & _rtB -> B_82_0_1 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ;
i < 6 ; i ++ ) { _rtXdot -> Integrator1_CSTATE_i [ i ] = _rtB -> B_42_2_1 [ i
] ; } memcpy ( & _rtXdot -> Integrator3_CSTATE_g [ 0 ] , & _rtB -> B_36_0_1 [
0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE_et
[ 0 ] , & _rtB -> B_25_0_1 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( &
_rtXdot -> Integrator1_CSTATE_a2 [ 0 ] , & _rtB -> B_24_0_1 [ 0 ] , 15U *
sizeof ( real_T ) ) ; _rtXdot -> Integrator_CSTATE_g [ 0 ] = _rtB -> B_40_0_1
[ 0 ] ; _rtXdot -> Integrator1_CSTATE_kk [ 0 ] = _rtB -> B_39_0_1 [ 0 ] ;
_rtXdot -> Integrator_CSTATE_g [ 1 ] = _rtB -> B_40_0_1 [ 1 ] ; _rtXdot ->
Integrator1_CSTATE_kk [ 1 ] = _rtB -> B_39_0_1 [ 1 ] ; _rtXdot ->
Integrator_CSTATE_g [ 2 ] = _rtB -> B_40_0_1 [ 2 ] ; _rtXdot ->
Integrator1_CSTATE_kk [ 2 ] = _rtB -> B_39_0_1 [ 2 ] ; for ( i = 0 ; i < 6 ;
i ++ ) { _rtXdot -> Integrator2_CSTATE_i [ i ] = _rtB -> B_37_1_1 [ i ] ;
_rtXdot -> Integrator3_CSTATE_m [ i ] = _rtB -> B_35_0_3 [ i ] ; _rtXdot ->
Integrator_CSTATE_kp [ i ] = _rtB -> B_31_0_1 [ i ] ; _rtXdot ->
Integrator1_CSTATE_g3 [ i ] = _rtB -> B_30_0_1 [ i ] ; } memcpy ( & _rtXdot
-> Integrator1_CSTATE_ap [ 0 ] , & _rtB -> B_29_0_1 [ 0 ] , 36U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE_n [ 0 ] , & _rtB ->
B_33_0_1 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtXdot -> Integrator2_CSTATE_h [ i ] = _rtB -> B_32_0_1 [ i ] ; _rtXdot ->
Integrator1_CSTATE_l [ i ] = _rtB -> B_64_2_1 [ i ] ; } memcpy ( & _rtXdot ->
Integrator3_CSTATE_n [ 0 ] , & _rtB -> B_58_0_1 [ 0 ] , 36U * sizeof ( real_T
) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE_h [ 0 ] , & _rtB -> B_47_0_1 [
0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> Integrator1_CSTATE_ld
[ 0 ] , & _rtB -> B_46_0_1 [ 0 ] , 15U * sizeof ( real_T ) ) ; _rtXdot ->
Integrator_CSTATE_na [ 0 ] = _rtB -> B_62_0_1 [ 0 ] ; _rtXdot ->
Integrator1_CSTATE_k3 [ 0 ] = _rtB -> B_61_0_1 [ 0 ] ; _rtXdot ->
Integrator_CSTATE_na [ 1 ] = _rtB -> B_62_0_1 [ 1 ] ; _rtXdot ->
Integrator1_CSTATE_k3 [ 1 ] = _rtB -> B_61_0_1 [ 1 ] ; _rtXdot ->
Integrator_CSTATE_na [ 2 ] = _rtB -> B_62_0_1 [ 2 ] ; _rtXdot ->
Integrator1_CSTATE_k3 [ 2 ] = _rtB -> B_61_0_1 [ 2 ] ; for ( i = 0 ; i < 6 ;
i ++ ) { _rtXdot -> Integrator2_CSTATE_j [ i ] = _rtB -> B_59_1_1 [ i ] ;
_rtXdot -> Integrator3_CSTATE_h [ i ] = _rtB -> B_57_0_3 [ i ] ; _rtXdot ->
Integrator_CSTATE_dq [ i ] = _rtB -> B_53_0_1 [ i ] ; _rtXdot ->
Integrator1_CSTATE_lf [ i ] = _rtB -> B_52_0_1 [ i ] ; } memcpy ( & _rtXdot
-> Integrator1_CSTATE_f [ 0 ] , & _rtB -> B_51_0_1 [ 0 ] , 36U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE_cz [ 0 ] , & _rtB ->
B_55_0_1 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtXdot -> Integrator2_CSTATE_n [ i ] = _rtB -> B_54_0_1 [ i ] ; _rtXdot ->
Integrator1_CSTATE_kl [ i ] = _rtB -> B_86_2_1 [ i ] ; } memcpy ( & _rtXdot
-> Integrator3_CSTATE_p [ 0 ] , & _rtB -> B_80_0_1 [ 0 ] , 36U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE_bs [ 0 ] , & _rtB ->
B_69_0_1 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot ->
Integrator1_CSTATE_c [ 0 ] , & _rtB -> B_68_0_1 [ 0 ] , 15U * sizeof ( real_T
) ) ; _rtXdot -> Integrator_CSTATE_a [ 0 ] = _rtB -> B_84_0_1 [ 0 ] ; _rtXdot
-> Integrator1_CSTATE_c4 [ 0 ] = _rtB -> B_83_0_1 [ 0 ] ; _rtXdot ->
Integrator_CSTATE_a [ 1 ] = _rtB -> B_84_0_1 [ 1 ] ; _rtXdot ->
Integrator1_CSTATE_c4 [ 1 ] = _rtB -> B_83_0_1 [ 1 ] ; _rtXdot ->
Integrator_CSTATE_a [ 2 ] = _rtB -> B_84_0_1 [ 2 ] ; _rtXdot ->
Integrator1_CSTATE_c4 [ 2 ] = _rtB -> B_83_0_1 [ 2 ] ; for ( i = 0 ; i < 6 ;
i ++ ) { _rtXdot -> Integrator2_CSTATE_gf [ i ] = _rtB -> B_81_1_1 [ i ] ;
_rtXdot -> Integrator3_CSTATE_d [ i ] = _rtB -> B_79_0_3 [ i ] ; _rtXdot ->
Integrator_CSTATE_dg [ i ] = _rtB -> B_75_0_1 [ i ] ; _rtXdot ->
Integrator1_CSTATE_h [ i ] = _rtB -> B_74_0_1 [ i ] ; } memcpy ( & _rtXdot ->
Integrator1_CSTATE_lq [ 0 ] , & _rtB -> B_73_0_1 [ 0 ] , 36U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> Integrator_CSTATE_d1 [ 0 ] , & _rtB ->
B_77_0_1 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtXdot -> Integrator2_CSTATE_n1 [ i ] = _rtB -> B_76_0_1 [ i ] ; } _rtXdot
-> TransferFcn4_CSTATE = 0.0 ; _rtXdot -> TransferFcn4_CSTATE += _rtP ->
P_531 * _rtX -> TransferFcn4_CSTATE ; _rtXdot -> TransferFcn4_CSTATE += _rtB
-> B_116_272_0 ; _rtXdot -> TransferFcn3_CSTATE_i = 0.0 ; _rtXdot ->
TransferFcn3_CSTATE_i += _rtP -> P_534 * _rtX -> TransferFcn3_CSTATE_i ;
_rtXdot -> TransferFcn3_CSTATE_i += _rtB -> B_116_274_0 ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { B_CAMFC2_Quad_New_02_T *
_rtB ; P_CAMFC2_Quad_New_02_T * _rtP ; ZCV_CAMFC2_Quad_New_02_T * _rtZCSV ;
_rtZCSV = ( ( ZCV_CAMFC2_Quad_New_02_T * ) ssGetSolverZcSignalVector ( S ) )
; _rtP = ( ( P_CAMFC2_Quad_New_02_T * ) ssGetModelRtp ( S ) ) ; _rtB = ( (
B_CAMFC2_Quad_New_02_T * ) _ssGetModelBlockIO ( S ) ) ; _rtZCSV ->
Abs_AbsZc_ZC = _rtB -> B_116_7_0 ; _rtZCSV -> Abs1_AbsZc_ZC = _rtB ->
B_116_8_0 ; _rtZCSV -> Switch_SwitchCond_ZC = _rtB -> B_116_261_0 - _rtP ->
P_527 ; _rtZCSV -> Switch2_SwitchCond_ZC = _rtB -> B_116_253_0 - _rtP ->
P_528 ; _rtZCSV -> Switch3_SwitchCond_ZC = _rtB -> B_116_254_0 - _rtP ->
P_529 ; } static void mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal
( S , 0 , 3883200612U ) ; ssSetChecksumVal ( S , 1 , 3609891854U ) ;
ssSetChecksumVal ( S , 2 , 306363182U ) ; ssSetChecksumVal ( S , 3 ,
3040293119U ) ; { mxArray * slVerStructMat = NULL ; mxArray * slStrMat =
mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status =
mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if ( status
== 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 , "Version" ) ;
if ( slVerMat == NULL ) { status = 1 ; } else { status = mxGetString (
slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "9.2" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
DW_CAMFC2_Quad_New_02_T ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( B_CAMFC2_Quad_New_02_T ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
P_CAMFC2_Quad_New_02_T ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetModelRtp ( S , ( real_T *
) & CAMFC2_Quad_New_02_rtDefaultP ) ; rt_InitInfAndNaN ( sizeof ( real_T ) )
; } static void mdlInitializeSampleTimes ( SimStruct * S ) { { SimStruct *
childS ; SysOutputFcn * callSysFcns ; childS = ssGetSFunction ( S , 0 ) ;
callSysFcns = ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ]
= ( SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 1 ) ; callSysFcns
= ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 2 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 3 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 4 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 5 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 6 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 7 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 8 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 9 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 10 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 11 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 12 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 13 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 14 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 15 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 16 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 17 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 18 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 19 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 20 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 21 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 22 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 23 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 24 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 25 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 26 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 27 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 28 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 29 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 30 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 31 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 32 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 33 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 34 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 35 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 36 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 37 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 38 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 39 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 40 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 41 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 42 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 43 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 44 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 45 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 46 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 47 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 48 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 49 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 50 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 51 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 52 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 53 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 54 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 55 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 56 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 57 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 58 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 59 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 60 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 61 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 62 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 63 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 64 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 65 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 66 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 67 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 68 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 69 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 70 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 71 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 72 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 73 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 74 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 75 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 76 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 77 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 78 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 79 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 80 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 81 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 82 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 83 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 84 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 85 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 86 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 87 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 88 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 89 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 90 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 91 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 92 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 93 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 94 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 95 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 96 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 97 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 98 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 99 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 100 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 101 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 102 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 103 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 104 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 105 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 106 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 107 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 108 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 109 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 110 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 111 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 112 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 113 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 114 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; } slAccRegPrmChangeFcn ( S , mdlOutputsTID2 ) ; }
static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
