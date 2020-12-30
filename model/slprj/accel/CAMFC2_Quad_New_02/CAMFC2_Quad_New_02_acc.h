#include "__cf_CAMFC2_Quad_New_02.h"
#ifndef RTW_HEADER_CAMFC2_Quad_New_02_acc_h_
#define RTW_HEADER_CAMFC2_Quad_New_02_acc_h_
#include <stddef.h>
#include <string.h>
#ifndef CAMFC2_Quad_New_02_acc_COMMON_INCLUDES_
#define CAMFC2_Quad_New_02_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn 
#define S_FUNCTION_LEVEL 2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "CAMFC2_Quad_New_02_acc_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
typedef struct { P_bus B_116_89_0 ; P_bus B_116_145_0 ; P_bus B_116_192_0 ;
P_bus B_116_239_0 ; epsilon_bus B_116_55_0 ; epsilon_bus B_116_132_0 ;
epsilon_bus B_116_179_0 ; epsilon_bus B_116_226_0 ; T_bus B_116_50_0 ; T_bus
B_116_131_0 ; T_bus B_116_178_0 ; T_bus B_116_225_0 ; real_T B_116_0_0 ;
real_T B_116_1_0 [ 36 ] ; real_T B_116_2_0 [ 15 ] ; real_T B_116_3_0 [ 12 ] ;
real_T B_116_4_0 [ 12 ] ; real_T B_116_5_0 [ 12 ] ; real_T B_116_6_0 [ 12 ] ;
real_T B_116_7_0 ; real_T B_116_8_0 ; real_T B_116_9_0 ; real_T B_116_10_0 [
6 ] ; real_T B_116_12_0 [ 6 ] ; real_T B_116_13_0 [ 36 ] ; real_T B_116_14_0
[ 3 ] ; real_T B_116_16_0 [ 3 ] ; real_T B_116_18_0 [ 3 ] ; real_T B_116_19_0
[ 3 ] ; real_T B_116_20_0 [ 15 ] ; real_T B_116_22_0 [ 15 ] ; real_T
B_116_24_0 [ 3 ] ; real_T B_116_25_0 [ 3 ] ; real_T B_116_26_0 [ 6 ] ; real_T
B_116_27_0 [ 3 ] ; real_T B_116_29_0 [ 3 ] ; real_T B_116_34_0 [ 6 ] ; real_T
B_116_35_0 [ 6 ] ; real_T B_116_37_0 [ 6 ] ; real_T B_116_38_0 [ 6 ] ; real_T
B_116_40_0 [ 6 ] ; real_T B_116_42_0 [ 36 ] ; real_T B_116_43_0 [ 36 ] ;
real_T B_116_44_0 [ 6 ] ; real_T B_116_47_0 [ 15 ] ; real_T B_116_48_0 [ 15 ]
; real_T B_116_49_0 [ 15 ] ; real_T B_116_51_0 [ 15 ] ; real_T B_116_52_0 [
15 ] ; real_T B_116_53_0 [ 15 ] ; real_T B_116_54_0 [ 15 ] ; real_T
B_116_57_0 [ 3 ] ; real_T B_116_58_0 [ 3 ] ; real_T B_116_59_0 ; real_T
B_116_60_0 ; real_T B_116_61_0 ; real_T B_116_64_0 [ 3 ] ; real_T B_116_65_0
[ 3 ] ; real_T B_116_66_0 [ 3 ] ; real_T B_116_67_0 [ 3 ] ; real_T B_116_68_0
[ 3 ] ; real_T B_116_69_0 [ 3 ] ; real_T B_116_71_0 [ 3 ] ; real_T B_116_72_0
[ 3 ] ; real_T B_116_73_0 [ 3 ] ; real_T B_116_74_0 [ 3 ] ; real_T B_116_75_0
[ 3 ] ; real_T B_116_76_0 [ 3 ] ; real_T B_116_86_0 [ 36 ] ; real_T
B_116_87_0 [ 36 ] ; real_T B_116_88_0 [ 36 ] ; real_T B_116_90_0 ; real_T
B_116_91_0 [ 6 ] ; real_T B_116_93_0 ; real_T B_116_94_0 [ 6 ] ; real_T
B_116_96_0 ; real_T B_116_97_0 [ 6 ] ; real_T B_116_102_0 ; real_T
B_116_104_0 [ 6 ] ; real_T B_116_105_0 [ 36 ] ; real_T B_116_106_0 [ 15 ] ;
real_T B_116_108_0 [ 15 ] ; real_T B_116_110_0 [ 6 ] ; real_T B_116_111_0 [ 3
] ; real_T B_116_113_0 [ 3 ] ; real_T B_116_118_0 [ 6 ] ; real_T B_116_119_0
[ 6 ] ; real_T B_116_121_0 [ 6 ] ; real_T B_116_122_0 [ 6 ] ; real_T
B_116_124_0 [ 6 ] ; real_T B_116_126_0 [ 36 ] ; real_T B_116_127_0 [ 36 ] ;
real_T B_116_128_0 [ 6 ] ; real_T B_116_149_0 ; real_T B_116_151_0 [ 6 ] ;
real_T B_116_152_0 [ 36 ] ; real_T B_116_153_0 [ 15 ] ; real_T B_116_155_0 [
15 ] ; real_T B_116_157_0 [ 6 ] ; real_T B_116_158_0 [ 3 ] ; real_T
B_116_160_0 [ 3 ] ; real_T B_116_165_0 [ 6 ] ; real_T B_116_166_0 [ 6 ] ;
real_T B_116_168_0 [ 6 ] ; real_T B_116_169_0 [ 6 ] ; real_T B_116_171_0 [ 6
] ; real_T B_116_173_0 [ 36 ] ; real_T B_116_174_0 [ 36 ] ; real_T
B_116_175_0 [ 6 ] ; real_T B_116_196_0 ; real_T B_116_198_0 [ 6 ] ; real_T
B_116_199_0 [ 36 ] ; real_T B_116_200_0 [ 15 ] ; real_T B_116_202_0 [ 15 ] ;
real_T B_116_204_0 [ 6 ] ; real_T B_116_205_0 [ 3 ] ; real_T B_116_207_0 [ 3
] ; real_T B_116_212_0 [ 6 ] ; real_T B_116_213_0 [ 6 ] ; real_T B_116_215_0
[ 6 ] ; real_T B_116_216_0 [ 6 ] ; real_T B_116_218_0 [ 6 ] ; real_T
B_116_220_0 [ 36 ] ; real_T B_116_221_0 [ 36 ] ; real_T B_116_222_0 [ 6 ] ;
real_T B_116_243_0 ; real_T B_116_253_0 ; real_T B_116_254_0 ; real_T
B_116_255_0 ; real_T B_116_256_0 ; real_T B_116_257_0 ; real_T B_116_258_0 ;
real_T B_116_261_0 ; real_T B_116_262_0 ; real_T B_116_263_0 ; real_T
B_116_264_0 ; real_T B_116_265_0 ; real_T B_116_266_0 ; real_T B_116_267_0 ;
real_T B_116_269_0 ; real_T B_116_270_0 ; real_T B_116_271_0 ; real_T
B_116_272_0 ; real_T B_116_274_0 ; real_T B_115_0_1 [ 36 ] ; real_T B_114_0_1
[ 36 ] ; real_T B_113_0_1 [ 36 ] ; real_T B_112_0_1 [ 36 ] ; real_T B_111_0_1
[ 36 ] ; real_T B_110_0_1 [ 36 ] ; real_T B_109_0_1 [ 36 ] ; real_T B_108_0_1
[ 36 ] ; real_T B_107_0_1 [ 36 ] ; real_T B_106_0_1 [ 36 ] ; real_T B_105_0_1
[ 36 ] ; real_T B_104_0_1 [ 36 ] ; real_T B_103_0_1 [ 36 ] ; real_T B_102_0_1
[ 36 ] ; real_T B_101_0_1 [ 36 ] ; real_T B_100_0_1 [ 36 ] ; real_T B_99_0_0
; real_T B_98_0_1 [ 15 ] ; real_T B_97_0_1 [ 3 ] ; real_T B_96_0_1 [ 3 ] ;
real_T B_95_0_1 [ 15 ] ; real_T B_94_0_1 [ 15 ] ; real_T B_93_0_1 [ 15 ] ;
real_T B_92_0_1 [ 15 ] ; real_T B_91_0_1 [ 15 ] ; real_T B_90_0_1 [ 15 ] ;
real_T B_89_0_1 [ 15 ] ; real_T B_88_0_1 [ 15 ] ; real_T B_87_0_1 [ 12 ] ;
real_T B_86_0_0 [ 48 ] ; real_T B_86_1_0 [ 3 ] ; real_T B_86_2_1 [ 6 ] ;
real_T B_85_0_1 [ 6 ] ; real_T B_84_0_1 [ 3 ] ; real_T B_83_0_1 [ 3 ] ;
real_T B_82_0_1 [ 36 ] ; real_T B_81_0_0 [ 24 ] ; real_T B_81_1_1 [ 6 ] ;
real_T B_80_0_1 [ 36 ] ; real_T B_79_0_1 [ 6 ] ; real_T B_79_0_2 [ 6 ] ;
real_T B_79_0_3 [ 6 ] ; real_T B_78_0_1 [ 6 ] ; real_T B_77_0_1 [ 36 ] ;
real_T B_76_0_1 [ 6 ] ; real_T B_75_0_1 [ 6 ] ; real_T B_74_0_1 [ 6 ] ;
real_T B_73_0_1 [ 36 ] ; real_T B_72_0_0 [ 12 ] ; real_T B_72_1_0 [ 12 ] ;
real_T B_72_2_0 [ 3 ] ; real_T B_72_3_1 [ 3 ] ; real_T B_72_3_2 [ 3 ] ;
real_T B_71_0_0 [ 12 ] ; real_T B_71_1_0 [ 12 ] ; real_T B_71_2_1 [ 3 ] ;
real_T B_71_2_2 [ 3 ] ; real_T B_70_0_1 [ 15 ] ; real_T B_70_0_2 [ 15 ] ;
real_T B_69_0_1 [ 15 ] ; real_T B_68_0_1 [ 15 ] ; real_T B_67_0_1 [ 4 ] ;
real_T B_66_0_1 ; real_T B_66_0_2 [ 3 ] ; real_T B_65_0_1 [ 12 ] ; real_T
B_64_0_0 [ 48 ] ; real_T B_64_1_0 [ 3 ] ; real_T B_64_2_1 [ 6 ] ; real_T
B_63_0_1 [ 6 ] ; real_T B_62_0_1 [ 3 ] ; real_T B_61_0_1 [ 3 ] ; real_T
B_60_0_1 [ 36 ] ; real_T B_59_0_0 [ 24 ] ; real_T B_59_1_1 [ 6 ] ; real_T
B_58_0_1 [ 36 ] ; real_T B_57_0_1 [ 6 ] ; real_T B_57_0_2 [ 6 ] ; real_T
B_57_0_3 [ 6 ] ; real_T B_56_0_1 [ 6 ] ; real_T B_55_0_1 [ 36 ] ; real_T
B_54_0_1 [ 6 ] ; real_T B_53_0_1 [ 6 ] ; real_T B_52_0_1 [ 6 ] ; real_T
B_51_0_1 [ 36 ] ; real_T B_50_0_0 [ 12 ] ; real_T B_50_1_0 [ 12 ] ; real_T
B_50_2_0 [ 3 ] ; real_T B_50_3_1 [ 3 ] ; real_T B_50_3_2 [ 3 ] ; real_T
B_49_0_0 [ 12 ] ; real_T B_49_1_0 [ 12 ] ; real_T B_49_2_1 [ 3 ] ; real_T
B_49_2_2 [ 3 ] ; real_T B_48_0_1 [ 15 ] ; real_T B_48_0_2 [ 15 ] ; real_T
B_47_0_1 [ 15 ] ; real_T B_46_0_1 [ 15 ] ; real_T B_45_0_1 [ 4 ] ; real_T
B_44_0_1 ; real_T B_44_0_2 [ 3 ] ; real_T B_43_0_1 [ 12 ] ; real_T B_42_0_0 [
48 ] ; real_T B_42_1_0 [ 3 ] ; real_T B_42_2_1 [ 6 ] ; real_T B_41_0_1 [ 6 ]
; real_T B_40_0_1 [ 3 ] ; real_T B_39_0_1 [ 3 ] ; real_T B_38_0_1 [ 36 ] ;
real_T B_37_0_0 [ 24 ] ; real_T B_37_1_1 [ 6 ] ; real_T B_36_0_1 [ 36 ] ;
real_T B_35_0_1 [ 6 ] ; real_T B_35_0_2 [ 6 ] ; real_T B_35_0_3 [ 6 ] ;
real_T B_34_0_1 [ 6 ] ; real_T B_33_0_1 [ 36 ] ; real_T B_32_0_1 [ 6 ] ;
real_T B_31_0_1 [ 6 ] ; real_T B_30_0_1 [ 6 ] ; real_T B_29_0_1 [ 36 ] ;
real_T B_28_0_0 [ 12 ] ; real_T B_28_1_0 [ 12 ] ; real_T B_28_2_0 [ 3 ] ;
real_T B_28_3_1 [ 3 ] ; real_T B_28_3_2 [ 3 ] ; real_T B_27_0_0 [ 12 ] ;
real_T B_27_1_0 [ 12 ] ; real_T B_27_2_1 [ 3 ] ; real_T B_27_2_2 [ 3 ] ;
real_T B_26_0_1 [ 15 ] ; real_T B_26_0_2 [ 15 ] ; real_T B_25_0_1 [ 15 ] ;
real_T B_24_0_1 [ 15 ] ; real_T B_23_0_1 [ 4 ] ; real_T B_22_0_1 ; real_T
B_22_0_2 [ 3 ] ; real_T B_21_0_1 [ 12 ] ; real_T B_20_0_0 [ 48 ] ; real_T
B_20_1_0 [ 3 ] ; real_T B_20_2_1 [ 6 ] ; real_T B_19_0_1 [ 6 ] ; real_T
B_18_0_1 [ 3 ] ; real_T B_17_0_1 [ 3 ] ; real_T B_16_0_1 [ 36 ] ; real_T
B_15_0_0 [ 24 ] ; real_T B_15_1_1 [ 6 ] ; real_T B_14_0_1 [ 36 ] ; real_T
B_13_0_1 [ 6 ] ; real_T B_13_0_2 [ 6 ] ; real_T B_13_0_3 [ 6 ] ; real_T
B_12_0_1 [ 6 ] ; real_T B_11_0_1 [ 36 ] ; real_T B_10_0_1 [ 6 ] ; real_T
B_9_0_1 [ 6 ] ; real_T B_8_0_1 [ 6 ] ; real_T B_7_0_1 [ 36 ] ; real_T B_6_0_0
[ 12 ] ; real_T B_6_1_0 [ 12 ] ; real_T B_6_2_0 [ 3 ] ; real_T B_6_3_1 [ 3 ]
; real_T B_6_3_2 [ 3 ] ; real_T B_5_0_0 [ 12 ] ; real_T B_5_1_0 [ 12 ] ;
real_T B_5_2_1 [ 3 ] ; real_T B_5_2_2 [ 3 ] ; real_T B_4_0_1 [ 15 ] ; real_T
B_4_0_2 [ 15 ] ; real_T B_3_0_1 [ 15 ] ; real_T B_2_0_1 [ 15 ] ; real_T
B_1_0_1 [ 4 ] ; real_T B_0_0_1 ; real_T B_0_0_2 [ 3 ] ; }
B_CAMFC2_Quad_New_02_T ; typedef struct { real_T Memory2_PreviousInput [ 6 ]
; real_T Memory_PreviousInput [ 6 ] ; real_T Memory3_PreviousInput [ 15 ] ;
real_T Memory3_PreviousInput_j [ 15 ] ; real_T Memory3_PreviousInput_b [ 15 ]
; real_T Memory3_PreviousInput_jb [ 15 ] ; real_T Memory_PreviousInput_j [ 3
] ; real_T Memory5_PreviousInput [ 3 ] ; real_T Memory_PreviousInput_o [ 3 ]
; real_T Memory_PreviousInput_a [ 3 ] ; real_T Memory_PreviousInput_h [ 3 ] ;
real_T Memory5_PreviousInput_k [ 3 ] ; real_T Memory5_PreviousInput_n [ 3 ] ;
real_T Memory5_PreviousInput_p [ 3 ] ; real_T Memory2_PreviousInput_f [ 6 ] ;
real_T Memory2_PreviousInput_p [ 6 ] ; real_T Memory2_PreviousInput_d [ 6 ] ;
real_T Memory_PreviousInput_j4 [ 6 ] ; real_T Memory_PreviousInput_az [ 6 ] ;
real_T Memory_PreviousInput_jv [ 6 ] ; void * Scope_PWORK ; void *
Scope10_PWORK ; void * Scope_PWORK_o ; void * Scope1_PWORK ; void *
Scope_PWORK_i ; void * Scope10_PWORK_d ; void * Scope_PWORK_k ; void *
Scope1_PWORK_p ; void * Scope_PWORK_oh ; void * Scope10_PWORK_h ; void *
Scope_PWORK_ok ; void * Scope1_PWORK_pi ; void * Scope_PWORK_f ; void *
Scope10_PWORK_h4 ; void * Scope_PWORK_n ; void * Scope1_PWORK_g ; void *
Scope16_PWORK ; void * Scope17_PWORK ; void * Scope18_PWORK ; void *
Scope19_PWORK ; void * Scope25_PWORK ; void * Scope26_PWORK ; void *
Scope_PWORK_p ; void * Scope1_PWORK_d [ 3 ] ; void * Scope2_PWORK [ 3 ] ;
void * FromWorkspace_PWORK [ 3 ] ; void * FromWorkspace1_PWORK [ 3 ] ; void *
FromWorkspace3_PWORK [ 3 ] ; void * ToWorkspace_PWORK ; void *
ToWorkspace_PWORK_d ; void * ToWorkspace_PWORK_f ; void * ToWorkspace_PWORK_c
; void * Scope19_PWORK_e ; void * ToWorkspace_PWORK_a ; void *
ToWorkspace_PWORK_k ; void * ToWorkspace_PWORK_j ; void * ToWorkspace_PWORK_h
; void * Scope20_PWORK ; void * Scope21_PWORK ; void * Scope22_PWORK ; void *
Scope23_PWORK ; void * Scope10_PWORK_g ; void * Scope11_PWORK ; void *
Scope8_PWORK ; void * Scope9_PWORK ; void * Scope4_PWORK ; void *
Scope5_PWORK ; void * Scope6_PWORK ; void * Scope7_PWORK ; void *
Scope40_PWORK ; void * Scope41_PWORK ; void * Scope43_PWORK ; void *
Scope44_PWORK ; void * ToWorkspace_PWORK_kd ; void * ToWorkspace_PWORK_fw ;
void * ToWorkspace_PWORK_p ; void * ToWorkspace_PWORK_py ; void *
ToWorkspace_PWORK_po ; void * ToWorkspace_PWORK_b ; void *
ToWorkspace_PWORK_fw2 ; void * ToWorkspace_PWORK_m ; void * Scope14_PWORK ;
void * Scope15_PWORK ; void * Scope12_PWORK ; void * Scope13_PWORK ; void *
Scope_PWORK_m ; void * Scope1_PWORK_c ; void * Scope2_PWORK_e ; void *
Scope3_PWORK ; void * ToWorkspace_PWORK_cw ; void * ToWorkspace_PWORK_o ;
void * ToWorkspace_PWORK_n ; void * ToWorkspace_PWORK_l ; void *
ToWorkspace_PWORK_ht ; void * ToWorkspace_PWORK_c2 ; void *
ToWorkspace_PWORK_i ; void * ToWorkspace_PWORK_as ; void * Scope12_PWORK_d ;
void * Scope13_PWORK_o ; void * Scope14_PWORK_h ; void * Scope15_PWORK_b ;
void * Scope_PWORK_fx ; void * Scope1_PWORK_j ; void * Scope27_PWORK ; void *
Scope28_PWORK ; void * Scope29_PWORK ; void * Scope30_PWORK ; void *
Scope2_PWORK_e4 ; void * Scope3_PWORK_f ; int32_T MATLABFunction_sysIdxToRun
; int32_T MATLABFunction_sysIdxToRun_o ; int32_T MATLABFunction_sysIdxToRun_n
; int32_T MATLABFunction_sysIdxToRun_c ; int32_T
MATLABFunction_sysIdxToRun_or ; int32_T MATLABFunction_sysIdxToRun_b ;
int32_T MATLABFunction_sysIdxToRun_f ; int32_T MATLABFunction_sysIdxToRun_k ;
int32_T MATLABFunction_sysIdxToRun_d ; int32_T MATLABFunction_sysIdxToRun_e ;
int32_T MATLABFunction_sysIdxToRun_g ; int32_T MATLABFunction_sysIdxToRun_h ;
int32_T MATLABFunction_sysIdxToRun_a ; int32_T MATLABFunction_sysIdxToRun_l ;
int32_T MATLABFunction_sysIdxToRun_dl ; int32_T MATLABFunction_sysIdxToRun_go
; int32_T TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ; int32_T
MATLABFunction_sysIdxToRun_aw ; int32_T Slidingdifferentiator1_sysIdxToRun ;
int32_T Slidingdifferentiator_sysIdxToRun ; int32_T
MATLABFunction_sysIdxToRun_p ; int32_T MATLABFunction_sysIdxToRun_kg ;
int32_T MATLABFunction_sysIdxToRun_fv ; int32_T MATLABFunction_sysIdxToRun_cu
; int32_T MATLABFunction_sysIdxToRun_orb ; int32_T
MATLABFunction_sysIdxToRun_cp ; int32_T MATLABFunction_sysIdxToRun_i ;
int32_T MATLABFunction_sysIdxToRun_j ; int32_T MATLABFunction_sysIdxToRun_nn
; int32_T ModuletocomputeConsensusError_T4_sysIdxToRun ; int32_T
MainController_T4_sysIdxToRun ; int32_T Slidingdifferentiator1_sysIdxToRun_h
; int32_T Slidingdifferentiator_sysIdxToRun_b ; int32_T DRE_T_sysIdxToRun ;
int32_T AdaptiveLawg_T4_sysIdxToRun ; int32_T AdaptiveLawA_T4_sysIdxToRun ;
int32_T variablechange_sysIdxToRun ; int32_T main_sysIdxToRun ; int32_T
gEstimator1_sysIdxToRun ; int32_T gEstimator_sysIdxToRun ; int32_T
Slidingdifferentiator1_sysIdxToRun_i ; int32_T
Slidingdifferentiator_sysIdxToRun_bi ; int32_T CARE_sysIdxToRun ; int32_T
Observerx0_hat4_sysIdxToRun ; int32_T Observerq4_sysIdxToRun ; int32_T
ObserverT4_sysIdxToRun ; int32_T Slidingdifferentiator1_sysIdxToRun_f ;
int32_T Slidingdifferentiator_sysIdxToRun_m ; int32_T
ControllertoMotors4_sysIdxToRun ; int32_T ControllerInterpreter4_sysIdxToRun
; int32_T MATLABFunction_sysIdxToRun_m ; int32_T
ModuletocomputeConsensusError_T3_sysIdxToRun ; int32_T
MainController_T3_sysIdxToRun ; int32_T Slidingdifferentiator1_sysIdxToRun_j
; int32_T Slidingdifferentiator_sysIdxToRun_e ; int32_T DRE_T_sysIdxToRun_n ;
int32_T AdaptiveLawg_T3_sysIdxToRun ; int32_T AdaptiveLawA_T3_sysIdxToRun ;
int32_T variablechange_sysIdxToRun_n ; int32_T main_sysIdxToRun_e ; int32_T
gEstimator1_sysIdxToRun_c ; int32_T gEstimator_sysIdxToRun_b ; int32_T
Slidingdifferentiator1_sysIdxToRun_b ; int32_T
Slidingdifferentiator_sysIdxToRun_h ; int32_T CARE_sysIdxToRun_d ; int32_T
Observerx0_hat3_sysIdxToRun ; int32_T Observerq3_sysIdxToRun ; int32_T
ObserverT3_sysIdxToRun ; int32_T Slidingdifferentiator1_sysIdxToRun_m ;
int32_T Slidingdifferentiator_sysIdxToRun_a ; int32_T
ControllertoMotors3_sysIdxToRun ; int32_T ControllerInterpreter3_sysIdxToRun
; int32_T MATLABFunction_sysIdxToRun_ld ; int32_T
ModuletocomputeConsensusError_T2_sysIdxToRun ; int32_T
MainController_T2_sysIdxToRun ; int32_T Slidingdifferentiator1_sysIdxToRun_k
; int32_T Slidingdifferentiator_sysIdxToRun_hb ; int32_T DRE_T_sysIdxToRun_h
; int32_T AdaptiveLawg_T2_sysIdxToRun ; int32_T AdaptiveLawA_T2_sysIdxToRun ;
int32_T variablechange_sysIdxToRun_d ; int32_T main_sysIdxToRun_d ; int32_T
gEstimator1_sysIdxToRun_f ; int32_T gEstimator_sysIdxToRun_l ; int32_T
Slidingdifferentiator1_sysIdxToRun_iy ; int32_T
Slidingdifferentiator_sysIdxToRun_ec ; int32_T CARE_sysIdxToRun_a ; int32_T
Observerx0_hat2_sysIdxToRun ; int32_T Observerq2_sysIdxToRun ; int32_T
ObserverT2_sysIdxToRun ; int32_T Slidingdifferentiator1_sysIdxToRun_d ;
int32_T Slidingdifferentiator_sysIdxToRun_p ; int32_T
ControllerToMotors2_sysIdxToRun ; int32_T ControllerInterpreter2_sysIdxToRun
; int32_T MATLABFunction_sysIdxToRun_ez ; int32_T
ModuletocomputeConsensusError_T1_sysIdxToRun ; int32_T
MainController_T1_sysIdxToRun ; int32_T Slidingdifferentiator1_sysIdxToRun_a
; int32_T Slidingdifferentiator_sysIdxToRun_l ; int32_T DRE_T_sysIdxToRun_j ;
int32_T AdaptiveLawg_T1_sysIdxToRun ; int32_T AdaptiveLawA_T1_sysIdxToRun ;
int32_T variablechange_sysIdxToRun_dg ; int32_T main_sysIdxToRun_a ; int32_T
gEstimator1_sysIdxToRun_k ; int32_T gEstimator_sysIdxToRun_bf ; int32_T
Slidingdifferentiator1_sysIdxToRun_iv ; int32_T
Slidingdifferentiator_sysIdxToRun_k ; int32_T CARE_sysIdxToRun_k ; int32_T
Observerx0_hat1_sysIdxToRun ; int32_T Observerq1_sysIdxToRun ; int32_T
ObserverT1_sysIdxToRun ; int32_T Slidingdifferentiator1_sysIdxToRun_kd ;
int32_T Slidingdifferentiator_sysIdxToRun_ly ; int32_T
ControllertoMotors1_sysIdxToRun ; int32_T ControllerInterpreter1_sysIdxToRun
; int_T FromWorkspace_IWORK ; int_T FromWorkspace1_IWORK ; int_T
FromWorkspace3_IWORK ; int_T Abs_MODE ; int_T Abs1_MODE ; boolean_T
Switch_Mode ; boolean_T Switch2_Mode ; boolean_T Switch3_Mode ; char_T
pad_Switch3_Mode [ 1 ] ; } DW_CAMFC2_Quad_New_02_T ; typedef struct { real_T
Integrator4_CSTATE [ 36 ] ; real_T Integrator5_CSTATE [ 15 ] ; real_T
Integrator_CSTATE [ 12 ] ; real_T Integrator_CSTATE_b [ 12 ] ; real_T
Integrator_CSTATE_e [ 12 ] ; real_T Integrator_CSTATE_k [ 12 ] ; real_T
TransferFcn3_CSTATE ; real_T TransferFcn2_CSTATE ; real_T TransferFcn1_CSTATE
; real_T Integrator1_CSTATE [ 6 ] ; real_T Integrator3_CSTATE [ 36 ] ; real_T
Integrator_CSTATE_bj [ 3 ] ; real_T Integrator1_CSTATE_b [ 3 ] ; real_T
Integrator_CSTATE_ko [ 15 ] ; real_T Integrator1_CSTATE_a [ 15 ] ; real_T
Integrator_CSTATE_o [ 3 ] ; real_T Integrator6_CSTATE [ 3 ] ; real_T
Integrator2_CSTATE [ 6 ] ; real_T Integrator_CSTATE_d [ 3 ] ; real_T
Integrator1_CSTATE_bg [ 3 ] ; real_T Integrator3_CSTATE_k [ 6 ] ; real_T
Integrator_CSTATE_d0 [ 6 ] ; real_T Integrator1_CSTATE_g [ 6 ] ; real_T
Integrator1_CSTATE_k [ 36 ] ; real_T Integrator_CSTATE_c [ 36 ] ; real_T
Integrator2_CSTATE_g [ 6 ] ; real_T Integrator5_CSTATE_b [ 15 ] ; real_T
Integrator5_CSTATE_l [ 15 ] ; real_T Integrator5_CSTATE_n [ 15 ] ; real_T
TransferFcn1_CSTATE_k ; real_T TransferFcn2_CSTATE_a ; real_T
TransferFcn5_CSTATE ; real_T Integrator_CSTATE_p [ 3 ] ; real_T
Integrator_CSTATE_c2 [ 3 ] ; real_T Integrator_CSTATE_o3 [ 3 ] ; real_T
Integrator6_CSTATE_j [ 3 ] ; real_T Integrator6_CSTATE_n [ 3 ] ; real_T
Integrator6_CSTATE_i [ 3 ] ; real_T Integrator4_CSTATE_o [ 36 ] ; real_T
Integrator4_CSTATE_l [ 36 ] ; real_T Integrator4_CSTATE_a [ 36 ] ; real_T
Integrator1_CSTATE_i [ 6 ] ; real_T Integrator3_CSTATE_g [ 36 ] ; real_T
Integrator_CSTATE_et [ 15 ] ; real_T Integrator1_CSTATE_a2 [ 15 ] ; real_T
Integrator2_CSTATE_i [ 6 ] ; real_T Integrator_CSTATE_g [ 3 ] ; real_T
Integrator1_CSTATE_kk [ 3 ] ; real_T Integrator3_CSTATE_m [ 6 ] ; real_T
Integrator_CSTATE_kp [ 6 ] ; real_T Integrator1_CSTATE_g3 [ 6 ] ; real_T
Integrator1_CSTATE_ap [ 36 ] ; real_T Integrator_CSTATE_n [ 36 ] ; real_T
Integrator2_CSTATE_h [ 6 ] ; real_T Integrator1_CSTATE_l [ 6 ] ; real_T
Integrator3_CSTATE_n [ 36 ] ; real_T Integrator_CSTATE_h [ 15 ] ; real_T
Integrator1_CSTATE_ld [ 15 ] ; real_T Integrator2_CSTATE_j [ 6 ] ; real_T
Integrator_CSTATE_na [ 3 ] ; real_T Integrator1_CSTATE_k3 [ 3 ] ; real_T
Integrator3_CSTATE_h [ 6 ] ; real_T Integrator_CSTATE_dq [ 6 ] ; real_T
Integrator1_CSTATE_lf [ 6 ] ; real_T Integrator1_CSTATE_f [ 36 ] ; real_T
Integrator_CSTATE_cz [ 36 ] ; real_T Integrator2_CSTATE_n [ 6 ] ; real_T
Integrator1_CSTATE_kl [ 6 ] ; real_T Integrator3_CSTATE_p [ 36 ] ; real_T
Integrator_CSTATE_bs [ 15 ] ; real_T Integrator1_CSTATE_c [ 15 ] ; real_T
Integrator2_CSTATE_gf [ 6 ] ; real_T Integrator_CSTATE_a [ 3 ] ; real_T
Integrator1_CSTATE_c4 [ 3 ] ; real_T Integrator3_CSTATE_d [ 6 ] ; real_T
Integrator_CSTATE_dg [ 6 ] ; real_T Integrator1_CSTATE_h [ 6 ] ; real_T
Integrator1_CSTATE_lq [ 36 ] ; real_T Integrator_CSTATE_d1 [ 36 ] ; real_T
Integrator2_CSTATE_n1 [ 6 ] ; real_T TransferFcn4_CSTATE ; real_T
TransferFcn3_CSTATE_i ; } X_CAMFC2_Quad_New_02_T ; typedef struct { real_T
Integrator4_CSTATE [ 36 ] ; real_T Integrator5_CSTATE [ 15 ] ; real_T
Integrator_CSTATE [ 12 ] ; real_T Integrator_CSTATE_b [ 12 ] ; real_T
Integrator_CSTATE_e [ 12 ] ; real_T Integrator_CSTATE_k [ 12 ] ; real_T
TransferFcn3_CSTATE ; real_T TransferFcn2_CSTATE ; real_T TransferFcn1_CSTATE
; real_T Integrator1_CSTATE [ 6 ] ; real_T Integrator3_CSTATE [ 36 ] ; real_T
Integrator_CSTATE_bj [ 3 ] ; real_T Integrator1_CSTATE_b [ 3 ] ; real_T
Integrator_CSTATE_ko [ 15 ] ; real_T Integrator1_CSTATE_a [ 15 ] ; real_T
Integrator_CSTATE_o [ 3 ] ; real_T Integrator6_CSTATE [ 3 ] ; real_T
Integrator2_CSTATE [ 6 ] ; real_T Integrator_CSTATE_d [ 3 ] ; real_T
Integrator1_CSTATE_bg [ 3 ] ; real_T Integrator3_CSTATE_k [ 6 ] ; real_T
Integrator_CSTATE_d0 [ 6 ] ; real_T Integrator1_CSTATE_g [ 6 ] ; real_T
Integrator1_CSTATE_k [ 36 ] ; real_T Integrator_CSTATE_c [ 36 ] ; real_T
Integrator2_CSTATE_g [ 6 ] ; real_T Integrator5_CSTATE_b [ 15 ] ; real_T
Integrator5_CSTATE_l [ 15 ] ; real_T Integrator5_CSTATE_n [ 15 ] ; real_T
TransferFcn1_CSTATE_k ; real_T TransferFcn2_CSTATE_a ; real_T
TransferFcn5_CSTATE ; real_T Integrator_CSTATE_p [ 3 ] ; real_T
Integrator_CSTATE_c2 [ 3 ] ; real_T Integrator_CSTATE_o3 [ 3 ] ; real_T
Integrator6_CSTATE_j [ 3 ] ; real_T Integrator6_CSTATE_n [ 3 ] ; real_T
Integrator6_CSTATE_i [ 3 ] ; real_T Integrator4_CSTATE_o [ 36 ] ; real_T
Integrator4_CSTATE_l [ 36 ] ; real_T Integrator4_CSTATE_a [ 36 ] ; real_T
Integrator1_CSTATE_i [ 6 ] ; real_T Integrator3_CSTATE_g [ 36 ] ; real_T
Integrator_CSTATE_et [ 15 ] ; real_T Integrator1_CSTATE_a2 [ 15 ] ; real_T
Integrator2_CSTATE_i [ 6 ] ; real_T Integrator_CSTATE_g [ 3 ] ; real_T
Integrator1_CSTATE_kk [ 3 ] ; real_T Integrator3_CSTATE_m [ 6 ] ; real_T
Integrator_CSTATE_kp [ 6 ] ; real_T Integrator1_CSTATE_g3 [ 6 ] ; real_T
Integrator1_CSTATE_ap [ 36 ] ; real_T Integrator_CSTATE_n [ 36 ] ; real_T
Integrator2_CSTATE_h [ 6 ] ; real_T Integrator1_CSTATE_l [ 6 ] ; real_T
Integrator3_CSTATE_n [ 36 ] ; real_T Integrator_CSTATE_h [ 15 ] ; real_T
Integrator1_CSTATE_ld [ 15 ] ; real_T Integrator2_CSTATE_j [ 6 ] ; real_T
Integrator_CSTATE_na [ 3 ] ; real_T Integrator1_CSTATE_k3 [ 3 ] ; real_T
Integrator3_CSTATE_h [ 6 ] ; real_T Integrator_CSTATE_dq [ 6 ] ; real_T
Integrator1_CSTATE_lf [ 6 ] ; real_T Integrator1_CSTATE_f [ 36 ] ; real_T
Integrator_CSTATE_cz [ 36 ] ; real_T Integrator2_CSTATE_n [ 6 ] ; real_T
Integrator1_CSTATE_kl [ 6 ] ; real_T Integrator3_CSTATE_p [ 36 ] ; real_T
Integrator_CSTATE_bs [ 15 ] ; real_T Integrator1_CSTATE_c [ 15 ] ; real_T
Integrator2_CSTATE_gf [ 6 ] ; real_T Integrator_CSTATE_a [ 3 ] ; real_T
Integrator1_CSTATE_c4 [ 3 ] ; real_T Integrator3_CSTATE_d [ 6 ] ; real_T
Integrator_CSTATE_dg [ 6 ] ; real_T Integrator1_CSTATE_h [ 6 ] ; real_T
Integrator1_CSTATE_lq [ 36 ] ; real_T Integrator_CSTATE_d1 [ 36 ] ; real_T
Integrator2_CSTATE_n1 [ 6 ] ; real_T TransferFcn4_CSTATE ; real_T
TransferFcn3_CSTATE_i ; } XDot_CAMFC2_Quad_New_02_T ; typedef struct {
boolean_T Integrator4_CSTATE [ 36 ] ; boolean_T Integrator5_CSTATE [ 15 ] ;
boolean_T Integrator_CSTATE [ 12 ] ; boolean_T Integrator_CSTATE_b [ 12 ] ;
boolean_T Integrator_CSTATE_e [ 12 ] ; boolean_T Integrator_CSTATE_k [ 12 ] ;
boolean_T TransferFcn3_CSTATE ; boolean_T TransferFcn2_CSTATE ; boolean_T
TransferFcn1_CSTATE ; boolean_T Integrator1_CSTATE [ 6 ] ; boolean_T
Integrator3_CSTATE [ 36 ] ; boolean_T Integrator_CSTATE_bj [ 3 ] ; boolean_T
Integrator1_CSTATE_b [ 3 ] ; boolean_T Integrator_CSTATE_ko [ 15 ] ;
boolean_T Integrator1_CSTATE_a [ 15 ] ; boolean_T Integrator_CSTATE_o [ 3 ] ;
boolean_T Integrator6_CSTATE [ 3 ] ; boolean_T Integrator2_CSTATE [ 6 ] ;
boolean_T Integrator_CSTATE_d [ 3 ] ; boolean_T Integrator1_CSTATE_bg [ 3 ] ;
boolean_T Integrator3_CSTATE_k [ 6 ] ; boolean_T Integrator_CSTATE_d0 [ 6 ] ;
boolean_T Integrator1_CSTATE_g [ 6 ] ; boolean_T Integrator1_CSTATE_k [ 36 ]
; boolean_T Integrator_CSTATE_c [ 36 ] ; boolean_T Integrator2_CSTATE_g [ 6 ]
; boolean_T Integrator5_CSTATE_b [ 15 ] ; boolean_T Integrator5_CSTATE_l [ 15
] ; boolean_T Integrator5_CSTATE_n [ 15 ] ; boolean_T TransferFcn1_CSTATE_k ;
boolean_T TransferFcn2_CSTATE_a ; boolean_T TransferFcn5_CSTATE ; boolean_T
Integrator_CSTATE_p [ 3 ] ; boolean_T Integrator_CSTATE_c2 [ 3 ] ; boolean_T
Integrator_CSTATE_o3 [ 3 ] ; boolean_T Integrator6_CSTATE_j [ 3 ] ; boolean_T
Integrator6_CSTATE_n [ 3 ] ; boolean_T Integrator6_CSTATE_i [ 3 ] ; boolean_T
Integrator4_CSTATE_o [ 36 ] ; boolean_T Integrator4_CSTATE_l [ 36 ] ;
boolean_T Integrator4_CSTATE_a [ 36 ] ; boolean_T Integrator1_CSTATE_i [ 6 ]
; boolean_T Integrator3_CSTATE_g [ 36 ] ; boolean_T Integrator_CSTATE_et [ 15
] ; boolean_T Integrator1_CSTATE_a2 [ 15 ] ; boolean_T Integrator2_CSTATE_i [
6 ] ; boolean_T Integrator_CSTATE_g [ 3 ] ; boolean_T Integrator1_CSTATE_kk [
3 ] ; boolean_T Integrator3_CSTATE_m [ 6 ] ; boolean_T Integrator_CSTATE_kp [
6 ] ; boolean_T Integrator1_CSTATE_g3 [ 6 ] ; boolean_T Integrator1_CSTATE_ap
[ 36 ] ; boolean_T Integrator_CSTATE_n [ 36 ] ; boolean_T
Integrator2_CSTATE_h [ 6 ] ; boolean_T Integrator1_CSTATE_l [ 6 ] ; boolean_T
Integrator3_CSTATE_n [ 36 ] ; boolean_T Integrator_CSTATE_h [ 15 ] ;
boolean_T Integrator1_CSTATE_ld [ 15 ] ; boolean_T Integrator2_CSTATE_j [ 6 ]
; boolean_T Integrator_CSTATE_na [ 3 ] ; boolean_T Integrator1_CSTATE_k3 [ 3
] ; boolean_T Integrator3_CSTATE_h [ 6 ] ; boolean_T Integrator_CSTATE_dq [ 6
] ; boolean_T Integrator1_CSTATE_lf [ 6 ] ; boolean_T Integrator1_CSTATE_f [
36 ] ; boolean_T Integrator_CSTATE_cz [ 36 ] ; boolean_T Integrator2_CSTATE_n
[ 6 ] ; boolean_T Integrator1_CSTATE_kl [ 6 ] ; boolean_T
Integrator3_CSTATE_p [ 36 ] ; boolean_T Integrator_CSTATE_bs [ 15 ] ;
boolean_T Integrator1_CSTATE_c [ 15 ] ; boolean_T Integrator2_CSTATE_gf [ 6 ]
; boolean_T Integrator_CSTATE_a [ 3 ] ; boolean_T Integrator1_CSTATE_c4 [ 3 ]
; boolean_T Integrator3_CSTATE_d [ 6 ] ; boolean_T Integrator_CSTATE_dg [ 6 ]
; boolean_T Integrator1_CSTATE_h [ 6 ] ; boolean_T Integrator1_CSTATE_lq [ 36
] ; boolean_T Integrator_CSTATE_d1 [ 36 ] ; boolean_T Integrator2_CSTATE_n1 [
6 ] ; boolean_T TransferFcn4_CSTATE ; boolean_T TransferFcn3_CSTATE_i ; }
XDis_CAMFC2_Quad_New_02_T ; typedef struct { real_T Integrator4_CSTATE [ 36 ]
; real_T Integrator5_CSTATE [ 15 ] ; real_T Integrator_CSTATE [ 12 ] ; real_T
Integrator_CSTATE_b [ 12 ] ; real_T Integrator_CSTATE_e [ 12 ] ; real_T
Integrator_CSTATE_k [ 12 ] ; real_T TransferFcn3_CSTATE ; real_T
TransferFcn2_CSTATE ; real_T TransferFcn1_CSTATE ; real_T Integrator1_CSTATE
[ 6 ] ; real_T Integrator3_CSTATE [ 36 ] ; real_T Integrator_CSTATE_bj [ 3 ]
; real_T Integrator1_CSTATE_b [ 3 ] ; real_T Integrator_CSTATE_ko [ 15 ] ;
real_T Integrator1_CSTATE_a [ 15 ] ; real_T Integrator_CSTATE_o [ 3 ] ;
real_T Integrator6_CSTATE [ 3 ] ; real_T Integrator2_CSTATE [ 6 ] ; real_T
Integrator_CSTATE_d [ 3 ] ; real_T Integrator1_CSTATE_bg [ 3 ] ; real_T
Integrator3_CSTATE_k [ 6 ] ; real_T Integrator_CSTATE_d0 [ 6 ] ; real_T
Integrator1_CSTATE_g [ 6 ] ; real_T Integrator1_CSTATE_k [ 36 ] ; real_T
Integrator_CSTATE_c [ 36 ] ; real_T Integrator2_CSTATE_g [ 6 ] ; real_T
Integrator5_CSTATE_b [ 15 ] ; real_T Integrator5_CSTATE_l [ 15 ] ; real_T
Integrator5_CSTATE_n [ 15 ] ; real_T TransferFcn1_CSTATE_k ; real_T
TransferFcn2_CSTATE_a ; real_T TransferFcn5_CSTATE ; real_T
Integrator_CSTATE_p [ 3 ] ; real_T Integrator_CSTATE_c2 [ 3 ] ; real_T
Integrator_CSTATE_o3 [ 3 ] ; real_T Integrator6_CSTATE_j [ 3 ] ; real_T
Integrator6_CSTATE_n [ 3 ] ; real_T Integrator6_CSTATE_i [ 3 ] ; real_T
Integrator4_CSTATE_o [ 36 ] ; real_T Integrator4_CSTATE_l [ 36 ] ; real_T
Integrator4_CSTATE_a [ 36 ] ; real_T Integrator1_CSTATE_i [ 6 ] ; real_T
Integrator3_CSTATE_g [ 36 ] ; real_T Integrator_CSTATE_et [ 15 ] ; real_T
Integrator1_CSTATE_a2 [ 15 ] ; real_T Integrator2_CSTATE_i [ 6 ] ; real_T
Integrator_CSTATE_g [ 3 ] ; real_T Integrator1_CSTATE_kk [ 3 ] ; real_T
Integrator3_CSTATE_m [ 6 ] ; real_T Integrator_CSTATE_kp [ 6 ] ; real_T
Integrator1_CSTATE_g3 [ 6 ] ; real_T Integrator1_CSTATE_ap [ 36 ] ; real_T
Integrator_CSTATE_n [ 36 ] ; real_T Integrator2_CSTATE_h [ 6 ] ; real_T
Integrator1_CSTATE_l [ 6 ] ; real_T Integrator3_CSTATE_n [ 36 ] ; real_T
Integrator_CSTATE_h [ 15 ] ; real_T Integrator1_CSTATE_ld [ 15 ] ; real_T
Integrator2_CSTATE_j [ 6 ] ; real_T Integrator_CSTATE_na [ 3 ] ; real_T
Integrator1_CSTATE_k3 [ 3 ] ; real_T Integrator3_CSTATE_h [ 6 ] ; real_T
Integrator_CSTATE_dq [ 6 ] ; real_T Integrator1_CSTATE_lf [ 6 ] ; real_T
Integrator1_CSTATE_f [ 36 ] ; real_T Integrator_CSTATE_cz [ 36 ] ; real_T
Integrator2_CSTATE_n [ 6 ] ; real_T Integrator1_CSTATE_kl [ 6 ] ; real_T
Integrator3_CSTATE_p [ 36 ] ; real_T Integrator_CSTATE_bs [ 15 ] ; real_T
Integrator1_CSTATE_c [ 15 ] ; real_T Integrator2_CSTATE_gf [ 6 ] ; real_T
Integrator_CSTATE_a [ 3 ] ; real_T Integrator1_CSTATE_c4 [ 3 ] ; real_T
Integrator3_CSTATE_d [ 6 ] ; real_T Integrator_CSTATE_dg [ 6 ] ; real_T
Integrator1_CSTATE_h [ 6 ] ; real_T Integrator1_CSTATE_lq [ 36 ] ; real_T
Integrator_CSTATE_d1 [ 36 ] ; real_T Integrator2_CSTATE_n1 [ 6 ] ; real_T
TransferFcn4_CSTATE ; real_T TransferFcn3_CSTATE_i ; }
CStateAbsTol_CAMFC2_Quad_New_02_T ; typedef struct { real_T Abs_AbsZc_ZC ;
real_T Abs1_AbsZc_ZC ; real_T Switch_SwitchCond_ZC ; real_T
Switch2_SwitchCond_ZC ; real_T Switch3_SwitchCond_ZC ; }
ZCV_CAMFC2_Quad_New_02_T ; typedef struct { ZCSigState Abs_AbsZc_ZCE ;
ZCSigState Abs1_AbsZc_ZCE ; ZCSigState Switch_SwitchCond_ZCE ; ZCSigState
Switch2_SwitchCond_ZCE ; ZCSigState Switch3_SwitchCond_ZCE ; }
PrevZCX_CAMFC2_Quad_New_02_T ; typedef struct { real_T pooled1 [ 2 ] ; real_T
pooled2 [ 16 ] ; real_T pooled3 [ 2 ] ; real_T pooled4 [ 16 ] ; real_T
pooled5 [ 2 ] ; real_T pooled6 ; real_T pooled7 [ 2 ] ; real_T pooled8 ;
real_T pooled9 [ 2 ] ; real_T pooled10 ; real_T pooled11 [ 2 ] ; real_T
pooled12 [ 16 ] ; real_T pooled13 [ 2 ] ; real_T pooled14 [ 36 ] ; real_T
pooled15 [ 2 ] ; real_T pooled16 ; real_T pooled17 [ 2 ] ; real_T pooled18 [
36 ] ; real_T pooled19 [ 2 ] ; real_T pooled20 ; real_T pooled21 [ 2 ] ;
real_T pooled22 [ 36 ] ; } ConstP_CAMFC2_Quad_New_02_T ; struct
P_CAMFC2_Quad_New_02_T_ { real_T P_0 [ 2 ] ; real_T P_1 [ 16 ] ; real_T P_2 [
2 ] ; real_T P_3 ; real_T P_4 [ 2 ] ; real_T P_5 ; real_T P_6 [ 2 ] ; real_T
P_7 ; real_T P_8 [ 2 ] ; real_T P_9 ; real_T P_10 [ 2 ] ; real_T P_11 [ 16 ]
; real_T P_12 [ 2 ] ; real_T P_13 ; real_T P_14 [ 2 ] ; real_T P_15 [ 3 ] ;
real_T P_16 [ 2 ] ; real_T P_17 [ 16 ] ; real_T P_18 [ 2 ] ; real_T P_19 ;
real_T P_20 [ 2 ] ; real_T P_21 [ 3 ] ; real_T P_22 [ 2 ] ; real_T P_23 ;
real_T P_24 [ 2 ] ; real_T P_25 [ 16 ] ; real_T P_26 [ 2 ] ; real_T P_27 ;
real_T P_28 [ 2 ] ; real_T P_29 [ 3 ] ; real_T P_30 [ 2 ] ; real_T P_31 ;
real_T P_32 [ 2 ] ; real_T P_33 [ 36 ] ; real_T P_34 [ 2 ] ; real_T P_35 [ 36
] ; real_T P_36 [ 2 ] ; real_T P_37 [ 36 ] ; real_T P_38 [ 2 ] ; real_T P_39
; real_T P_40 [ 2 ] ; real_T P_41 ; real_T P_42 [ 2 ] ; real_T P_43 [ 36 ] ;
real_T P_44 [ 2 ] ; real_T P_45 ; real_T P_46 [ 2 ] ; real_T P_47 [ 36 ] ;
real_T P_48 [ 2 ] ; real_T P_49 ; real_T P_50 [ 2 ] ; real_T P_51 [ 36 ] ;
real_T P_52 [ 2 ] ; real_T P_53 [ 36 ] ; real_T P_54 [ 2 ] ; real_T P_55 [ 36
] ; real_T P_56 [ 2 ] ; real_T P_57 [ 36 ] ; real_T P_58 [ 2 ] ; real_T P_59
[ 36 ] ; real_T P_60 [ 2 ] ; real_T P_61 [ 36 ] ; real_T P_62 [ 2 ] ; real_T
P_63 [ 36 ] ; real_T P_64 [ 2 ] ; real_T P_65 ; real_T P_66 [ 2 ] ; real_T
P_67 ; real_T P_68 [ 2 ] ; real_T P_69 ; real_T P_70 [ 2 ] ; real_T P_71 ;
real_T P_72 [ 2 ] ; real_T P_73 [ 16 ] ; real_T P_74 [ 2 ] ; real_T P_75 [ 16
] ; real_T P_76 [ 2 ] ; real_T P_77 [ 36 ] ; real_T P_78 [ 2 ] ; real_T P_79
[ 36 ] ; real_T P_80 [ 2 ] ; real_T P_81 [ 16 ] ; real_T P_82 [ 2 ] ; real_T
P_83 [ 16 ] ; real_T P_84 [ 2 ] ; real_T P_85 [ 9 ] ; real_T P_86 [ 2 ] ;
real_T P_87 ; real_T P_88 [ 2 ] ; real_T P_89 ; real_T P_90 [ 2 ] ; real_T
P_91 ; real_T P_92 [ 2 ] ; real_T P_93 ; real_T P_94 [ 2 ] ; real_T P_95 ;
real_T P_96 [ 2 ] ; real_T P_97 ; real_T P_98 [ 2 ] ; real_T P_99 ; real_T
P_100 [ 2 ] ; real_T P_101 [ 16 ] ; real_T P_102 [ 2 ] ; real_T P_103 ;
real_T P_104 [ 2 ] ; real_T P_105 ; real_T P_106 [ 2 ] ; real_T P_107 ;
real_T P_108 [ 2 ] ; real_T P_109 ; real_T P_110 [ 2 ] ; real_T P_111 [ 16 ]
; real_T P_112 [ 2 ] ; real_T P_113 ; real_T P_114 [ 2 ] ; real_T P_115 [ 3 ]
; real_T P_116 [ 2 ] ; real_T P_117 [ 16 ] ; real_T P_118 [ 2 ] ; real_T
P_119 ; real_T P_120 [ 2 ] ; real_T P_121 [ 3 ] ; real_T P_122 [ 2 ] ; real_T
P_123 ; real_T P_124 [ 2 ] ; real_T P_125 [ 16 ] ; real_T P_126 [ 2 ] ;
real_T P_127 ; real_T P_128 [ 2 ] ; real_T P_129 [ 3 ] ; real_T P_130 [ 2 ] ;
real_T P_131 ; real_T P_132 [ 2 ] ; real_T P_133 [ 36 ] ; real_T P_134 [ 2 ]
; real_T P_135 [ 36 ] ; real_T P_136 [ 2 ] ; real_T P_137 [ 36 ] ; real_T
P_138 [ 2 ] ; real_T P_139 ; real_T P_140 [ 2 ] ; real_T P_141 ; real_T P_142
[ 2 ] ; real_T P_143 [ 36 ] ; real_T P_144 [ 2 ] ; real_T P_145 ; real_T
P_146 [ 2 ] ; real_T P_147 [ 36 ] ; real_T P_148 [ 2 ] ; real_T P_149 ;
real_T P_150 [ 2 ] ; real_T P_151 [ 36 ] ; real_T P_152 [ 2 ] ; real_T P_153
[ 36 ] ; real_T P_154 [ 2 ] ; real_T P_155 [ 36 ] ; real_T P_156 [ 2 ] ;
real_T P_157 [ 36 ] ; real_T P_158 [ 2 ] ; real_T P_159 [ 36 ] ; real_T P_160
[ 2 ] ; real_T P_161 [ 36 ] ; real_T P_162 [ 2 ] ; real_T P_163 [ 36 ] ;
real_T P_164 [ 2 ] ; real_T P_165 ; real_T P_166 [ 2 ] ; real_T P_167 ;
real_T P_168 [ 2 ] ; real_T P_169 ; real_T P_170 [ 2 ] ; real_T P_171 ;
real_T P_172 [ 2 ] ; real_T P_173 [ 16 ] ; real_T P_174 [ 2 ] ; real_T P_175
[ 16 ] ; real_T P_176 [ 2 ] ; real_T P_177 [ 36 ] ; real_T P_178 [ 2 ] ;
real_T P_179 [ 36 ] ; real_T P_180 [ 2 ] ; real_T P_181 [ 16 ] ; real_T P_182
[ 2 ] ; real_T P_183 [ 16 ] ; real_T P_184 [ 2 ] ; real_T P_185 [ 9 ] ;
real_T P_186 [ 2 ] ; real_T P_187 ; real_T P_188 [ 2 ] ; real_T P_189 ;
real_T P_190 [ 2 ] ; real_T P_191 ; real_T P_192 [ 2 ] ; real_T P_193 ;
real_T P_194 [ 2 ] ; real_T P_195 ; real_T P_196 [ 2 ] ; real_T P_197 ;
real_T P_198 [ 2 ] ; real_T P_199 ; real_T P_200 [ 2 ] ; real_T P_201 [ 16 ]
; real_T P_202 [ 2 ] ; real_T P_203 ; real_T P_204 [ 2 ] ; real_T P_205 ;
real_T P_206 [ 2 ] ; real_T P_207 ; real_T P_208 [ 2 ] ; real_T P_209 ;
real_T P_210 [ 2 ] ; real_T P_211 [ 16 ] ; real_T P_212 [ 2 ] ; real_T P_213
; real_T P_214 [ 2 ] ; real_T P_215 [ 3 ] ; real_T P_216 [ 2 ] ; real_T P_217
[ 16 ] ; real_T P_218 [ 2 ] ; real_T P_219 ; real_T P_220 [ 2 ] ; real_T
P_221 [ 3 ] ; real_T P_222 [ 2 ] ; real_T P_223 ; real_T P_224 [ 2 ] ; real_T
P_225 [ 16 ] ; real_T P_226 [ 2 ] ; real_T P_227 ; real_T P_228 [ 2 ] ;
real_T P_229 [ 3 ] ; real_T P_230 [ 2 ] ; real_T P_231 ; real_T P_232 [ 2 ] ;
real_T P_233 [ 36 ] ; real_T P_234 [ 2 ] ; real_T P_235 [ 36 ] ; real_T P_236
[ 2 ] ; real_T P_237 [ 36 ] ; real_T P_238 [ 2 ] ; real_T P_239 ; real_T
P_240 [ 2 ] ; real_T P_241 ; real_T P_242 [ 2 ] ; real_T P_243 [ 36 ] ;
real_T P_244 [ 2 ] ; real_T P_245 ; real_T P_246 [ 2 ] ; real_T P_247 [ 36 ]
; real_T P_248 [ 2 ] ; real_T P_249 ; real_T P_250 [ 2 ] ; real_T P_251 [ 36
] ; real_T P_252 [ 2 ] ; real_T P_253 [ 36 ] ; real_T P_254 [ 2 ] ; real_T
P_255 [ 36 ] ; real_T P_256 [ 2 ] ; real_T P_257 [ 36 ] ; real_T P_258 [ 2 ]
; real_T P_259 [ 36 ] ; real_T P_260 [ 2 ] ; real_T P_261 [ 36 ] ; real_T
P_262 [ 2 ] ; real_T P_263 [ 36 ] ; real_T P_264 [ 2 ] ; real_T P_265 ;
real_T P_266 [ 2 ] ; real_T P_267 ; real_T P_268 [ 2 ] ; real_T P_269 ;
real_T P_270 [ 2 ] ; real_T P_271 ; real_T P_272 [ 2 ] ; real_T P_273 [ 16 ]
; real_T P_274 [ 2 ] ; real_T P_275 [ 16 ] ; real_T P_276 [ 2 ] ; real_T
P_277 [ 36 ] ; real_T P_278 [ 2 ] ; real_T P_279 [ 36 ] ; real_T P_280 [ 2 ]
; real_T P_281 [ 16 ] ; real_T P_282 [ 2 ] ; real_T P_283 [ 16 ] ; real_T
P_284 [ 2 ] ; real_T P_285 [ 9 ] ; real_T P_286 [ 2 ] ; real_T P_287 ; real_T
P_288 [ 2 ] ; real_T P_289 ; real_T P_290 [ 2 ] ; real_T P_291 ; real_T P_292
[ 2 ] ; real_T P_293 ; real_T P_294 [ 2 ] ; real_T P_295 ; real_T P_296 [ 2 ]
; real_T P_297 ; real_T P_298 [ 2 ] ; real_T P_299 ; real_T P_300 [ 2 ] ;
real_T P_301 [ 16 ] ; real_T P_302 [ 2 ] ; real_T P_303 ; real_T P_304 [ 2 ]
; real_T P_305 ; real_T P_306 [ 2 ] ; real_T P_307 ; real_T P_308 [ 2 ] ;
real_T P_309 ; real_T P_310 [ 2 ] ; real_T P_311 [ 16 ] ; real_T P_312 [ 2 ]
; real_T P_313 ; real_T P_314 [ 2 ] ; real_T P_315 [ 3 ] ; real_T P_316 [ 2 ]
; real_T P_317 [ 16 ] ; real_T P_318 [ 2 ] ; real_T P_319 ; real_T P_320 [ 2
] ; real_T P_321 [ 3 ] ; real_T P_322 [ 2 ] ; real_T P_323 ; real_T P_324 [ 2
] ; real_T P_325 [ 16 ] ; real_T P_326 [ 2 ] ; real_T P_327 ; real_T P_328 [
2 ] ; real_T P_329 [ 3 ] ; real_T P_330 [ 2 ] ; real_T P_331 ; real_T P_332 [
2 ] ; real_T P_333 [ 36 ] ; real_T P_334 [ 2 ] ; real_T P_335 [ 36 ] ; real_T
P_336 [ 2 ] ; real_T P_337 [ 36 ] ; real_T P_338 [ 2 ] ; real_T P_339 ;
real_T P_340 [ 2 ] ; real_T P_341 ; real_T P_342 [ 2 ] ; real_T P_343 [ 36 ]
; real_T P_344 [ 2 ] ; real_T P_345 ; real_T P_346 [ 2 ] ; real_T P_347 [ 36
] ; real_T P_348 [ 2 ] ; real_T P_349 ; real_T P_350 [ 2 ] ; real_T P_351 [
36 ] ; real_T P_352 [ 2 ] ; real_T P_353 [ 36 ] ; real_T P_354 [ 2 ] ; real_T
P_355 [ 36 ] ; real_T P_356 [ 2 ] ; real_T P_357 [ 36 ] ; real_T P_358 [ 2 ]
; real_T P_359 [ 36 ] ; real_T P_360 [ 2 ] ; real_T P_361 [ 36 ] ; real_T
P_362 [ 2 ] ; real_T P_363 [ 36 ] ; real_T P_364 [ 2 ] ; real_T P_365 ;
real_T P_366 [ 2 ] ; real_T P_367 ; real_T P_368 [ 2 ] ; real_T P_369 ;
real_T P_370 [ 2 ] ; real_T P_371 ; real_T P_372 [ 2 ] ; real_T P_373 [ 16 ]
; real_T P_374 [ 2 ] ; real_T P_375 [ 16 ] ; real_T P_376 [ 2 ] ; real_T
P_377 [ 36 ] ; real_T P_378 [ 2 ] ; real_T P_379 [ 36 ] ; real_T P_380 [ 2 ]
; real_T P_381 [ 16 ] ; real_T P_382 [ 2 ] ; real_T P_383 [ 16 ] ; real_T
P_384 [ 2 ] ; real_T P_385 [ 9 ] ; real_T P_386 [ 2 ] ; real_T P_387 ; real_T
P_388 [ 2 ] ; real_T P_389 ; real_T P_390 [ 2 ] ; real_T P_391 ; real_T P_392
[ 2 ] ; real_T P_393 ; real_T P_394 [ 2 ] ; real_T P_395 ; real_T P_396 [ 2 ]
; real_T P_397 ; real_T P_398 [ 2 ] ; real_T P_399 ; real_T P_400 [ 2 ] ;
real_T P_401 ; real_T P_402 [ 2 ] ; real_T P_403 ; real_T P_404 [ 2 ] ;
real_T P_405 ; real_T P_406 [ 2 ] ; real_T P_407 ; real_T P_408 ; real_T
P_409 ; real_T P_410 [ 36 ] ; real_T P_411 [ 15 ] ; real_T P_412 [ 12 ] ;
real_T P_413 [ 12 ] ; real_T P_414 [ 12 ] ; real_T P_415 [ 12 ] ; real_T
P_416 ; real_T P_417 ; real_T P_418 ; real_T P_419 ; real_T P_420 ; real_T
P_421 ; real_T P_422 [ 6 ] ; real_T P_423 [ 6 ] ; real_T P_424 [ 36 ] ;
real_T P_425 [ 3 ] ; real_T P_426 [ 3 ] ; real_T P_427 [ 3 ] ; real_T P_428 [
15 ] ; real_T P_429 [ 15 ] ; real_T P_430 [ 3 ] ; real_T P_431 [ 3 ] ; real_T
P_432 [ 6 ] ; real_T P_433 [ 3 ] ; real_T P_434 [ 3 ] ; real_T P_435 [ 6 ] ;
real_T P_436 [ 6 ] ; real_T P_437 [ 6 ] ; real_T P_438 [ 6 ] ; real_T P_439 [
36 ] ; real_T P_440 [ 36 ] ; real_T P_441 [ 6 ] ; real_T P_442 [ 15 ] ;
real_T P_443 [ 15 ] ; real_T P_444 [ 15 ] ; real_T P_445 [ 15 ] ; real_T
P_446 [ 15 ] ; real_T P_447 [ 15 ] ; real_T P_448 [ 15 ] ; real_T P_449 [ 3 ]
; real_T P_450 [ 3 ] ; real_T P_451 ; real_T P_452 ; real_T P_453 ; real_T
P_454 ; real_T P_455 ; real_T P_456 ; real_T P_457 [ 3 ] ; real_T P_458 [ 3 ]
; real_T P_459 [ 3 ] ; real_T P_460 [ 3 ] ; real_T P_461 [ 3 ] ; real_T P_462
[ 3 ] ; real_T P_463 [ 3 ] ; real_T P_464 [ 3 ] ; real_T P_465 [ 3 ] ; real_T
P_466 [ 3 ] ; real_T P_467 [ 3 ] ; real_T P_468 [ 3 ] ; real_T P_469 [ 36 ] ;
real_T P_470 [ 36 ] ; real_T P_471 [ 36 ] ; real_T P_472 ; real_T P_473 [ 6 ]
; real_T P_474 ; real_T P_475 [ 6 ] ; real_T P_476 ; real_T P_477 [ 6 ] ;
real_T P_478 [ 6 ] ; real_T P_479 [ 36 ] ; real_T P_480 [ 15 ] ; real_T P_481
[ 15 ] ; real_T P_482 [ 6 ] ; real_T P_483 [ 3 ] ; real_T P_484 [ 3 ] ;
real_T P_485 [ 6 ] ; real_T P_486 [ 6 ] ; real_T P_487 [ 6 ] ; real_T P_488 [
6 ] ; real_T P_489 [ 36 ] ; real_T P_490 [ 36 ] ; real_T P_491 [ 6 ] ; real_T
P_492 [ 6 ] ; real_T P_493 [ 36 ] ; real_T P_494 [ 15 ] ; real_T P_495 [ 15 ]
; real_T P_496 [ 6 ] ; real_T P_497 [ 3 ] ; real_T P_498 [ 3 ] ; real_T P_499
[ 6 ] ; real_T P_500 [ 6 ] ; real_T P_501 [ 6 ] ; real_T P_502 [ 6 ] ; real_T
P_503 [ 36 ] ; real_T P_504 [ 36 ] ; real_T P_505 [ 6 ] ; real_T P_506 [ 6 ]
; real_T P_507 [ 36 ] ; real_T P_508 [ 15 ] ; real_T P_509 [ 15 ] ; real_T
P_510 [ 6 ] ; real_T P_511 [ 3 ] ; real_T P_512 [ 3 ] ; real_T P_513 [ 6 ] ;
real_T P_514 [ 6 ] ; real_T P_515 [ 6 ] ; real_T P_516 [ 6 ] ; real_T P_517 [
36 ] ; real_T P_518 [ 36 ] ; real_T P_519 [ 6 ] ; real_T P_520 ; real_T P_521
; real_T P_522 ; real_T P_523 ; real_T P_524 ; real_T P_525 ; real_T P_526 ;
real_T P_527 ; real_T P_528 ; real_T P_529 ; real_T P_530 ; real_T P_531 ;
real_T P_532 ; real_T P_533 ; real_T P_534 ; real_T P_535 ; } ; extern
P_CAMFC2_Quad_New_02_T CAMFC2_Quad_New_02_rtDefaultP ; extern const
ConstP_CAMFC2_Quad_New_02_T CAMFC2_Quad_New_02_rtConstP ;
#endif
