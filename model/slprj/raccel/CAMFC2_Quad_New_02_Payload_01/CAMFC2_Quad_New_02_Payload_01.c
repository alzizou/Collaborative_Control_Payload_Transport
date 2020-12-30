#include "__cf_CAMFC2_Quad_New_02_Payload_01.h"
#include "rt_logging_mmi.h"
#include "CAMFC2_Quad_New_02_Payload_01_capi.h"
#include <math.h>
#include "CAMFC2_Quad_New_02_Payload_01.h"
#include "CAMFC2_Quad_New_02_Payload_01_private.h"
#include "CAMFC2_Quad_New_02_Payload_01_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 1 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.0 (R2018b) 24-May-2018" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
 "slprj\\raccel\\CAMFC2_Quad_New_02_Payload_01\\CAMFC2_Quad_New_02_Payload_01_Jpattern.mat"
; const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const
int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1
} ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1
} ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static void hrxq02e1oc ( const real_T x [ 36 ] , real_T y [ 36 ]
) ; static void nrqzh0iv0s ( const real_T a [ 9 ] , real_T c [ 9 ] ) ; void
kakf0pv0ls ( const real_T lfsumukmmt [ 3 ] , dnxczn3dnn * localB ) { real_T
f0 ; f0 = muDoubleScalarSqrt ( ( lfsumukmmt [ 0 ] * lfsumukmmt [ 0 ] +
lfsumukmmt [ 1 ] * lfsumukmmt [ 1 ] ) + lfsumukmmt [ 2 ] * lfsumukmmt [ 2 ] )
; localB -> kh3hogern0 [ 0 ] = muDoubleScalarAsin ( muDoubleScalarMin (
muDoubleScalarMax ( ( 0.0 * lfsumukmmt [ 0 ] - lfsumukmmt [ 1 ] ) / ( f0 +
0.001 ) , - 1.0 ) , 1.0 ) ) ; localB -> kh3hogern0 [ 1 ] = muDoubleScalarAtan
( ( 0.0 * lfsumukmmt [ 1 ] + lfsumukmmt [ 0 ] ) / ( lfsumukmmt [ 2 ] + 0.001
) ) ; localB -> kh3hogern0 [ 2 ] = 0.0 ; localB -> psgobcrgrf = f0 ; } void
kivi1wcgc4 ( real_T klxmqivsgi , const real_T nzlmzikqej [ 6 ] , pix5xwdmn4 *
localB ) { int32_T i ; for ( i = 0 ; i < 4 ; i ++ ) { localB -> nnix5btgdj [
i ] = 0.0 ; localB -> nnix5btgdj [ i ] += rtP . RM_1 [ i ] * klxmqivsgi ;
localB -> nnix5btgdj [ i ] += rtP . RM_1 [ i + 4 ] * nzlmzikqej [ 3 ] ;
localB -> nnix5btgdj [ i ] += rtP . RM_1 [ i + 8 ] * nzlmzikqej [ 4 ] ;
localB -> nnix5btgdj [ i ] += rtP . RM_1 [ i + 12 ] * nzlmzikqej [ 5 ] ;
localB -> nnix5btgdj [ i ] = muDoubleScalarSqrt ( muDoubleScalarAbs ( localB
-> nnix5btgdj [ i ] ) ) ; } } void p4cag1h1yw ( const real_T ekib50sewq [ 15
] , const real_T adx3v3vwnv [ 15 ] , e31aom0tez * localB ) { int32_T k ;
real_T ABS ; for ( k = 0 ; k < 15 ; k ++ ) { ABS = muDoubleScalarAbs (
adx3v3vwnv [ k ] ) ; localB -> dwzefkbt4i [ k ] = muDoubleScalarSqrt ( ABS )
; localB -> dwzefkbt4i [ k ] = ekib50sewq [ k ] - adx3v3vwnv [ k ] / ( ABS +
rtP . alpha ) * localB -> dwzefkbt4i [ k ] * rtP . k1 ; } } void go1q2xrxlf (
const real_T djhnagsvr2 [ 15 ] , pa1jyfyqnc * localB ) { int32_T k ; for ( k
= 0 ; k < 15 ; k ++ ) { localB -> do3vqytzlr [ k ] = muDoubleScalarAbs (
djhnagsvr2 [ k ] ) ; localB -> do3vqytzlr [ k ] = djhnagsvr2 [ k ] / ( localB
-> do3vqytzlr [ k ] + rtP . alpha ) * - rtP . k2 ; } } void etzl23kxck (
const T_bus * caneqib032 , const epsilon_bus * aghid4aphn , const real_T
k0qla0533x [ 15 ] , real_T jlwgyftr1y , const real_T nejlxl21iz [ 15 ] ,
lu0vsdjkvp * localB ) { real_T Sum2 [ 15 ] ; lqv4z2ycts b_T_struct [ 4 ] ;
lqv4z2ycts b_epsilon_struct [ 4 ] ; real_T y [ 15 ] ; real_T d [ 9 ] ; static
const int8_T b_BN [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 } ; static const int8_T b_AN [ 16 ] = { 0 , 1 , 0 , 0 , 1 , 0 ,
1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 } ; int32_T b_BN_p ; int32_T b_AN_p ;
real_T tmp ; real_T Sum2_p [ 15 ] ; int32_T i ; b_BN_p = b_BN [ ( ( ( (
int32_T ) jlwgyftr1y - 1 ) << 2 ) + ( int32_T ) jlwgyftr1y ) - 1 ] ; for ( i
= 0 ; i < 15 ; i ++ ) { b_T_struct [ 0 ] . data [ i ] = caneqib032 -> t1 [ i
] ; b_T_struct [ 1 ] . data [ i ] = caneqib032 -> t2 [ i ] ; b_T_struct [ 2 ]
. data [ i ] = caneqib032 -> t3 [ i ] ; b_T_struct [ 3 ] . data [ i ] =
caneqib032 -> t4 [ i ] ; b_epsilon_struct [ 0 ] . data [ i ] = aghid4aphn ->
eps1 [ i ] ; b_epsilon_struct [ 1 ] . data [ i ] = aghid4aphn -> eps2 [ i ] ;
b_epsilon_struct [ 2 ] . data [ i ] = aghid4aphn -> eps3 [ i ] ;
b_epsilon_struct [ 3 ] . data [ i ] = aghid4aphn -> eps4 [ i ] ; localB ->
h4qfg23klo [ i ] = ( k0qla0533x [ i ] - nejlxl21iz [ i ] ) * ( real_T )
b_BN_p ; Sum2 [ i ] = 0.0 ; } for ( b_BN_p = 0 ; b_BN_p < 4 ; b_BN_p ++ ) {
b_AN_p = b_AN [ ( ( b_BN_p << 2 ) + ( int32_T ) jlwgyftr1y ) - 1 ] ; tmp =
rtP . H [ ( ( ( int32_T ) jlwgyftr1y - 1 ) << 2 ) + b_BN_p ] ; for ( i = 0 ;
i < 15 ; i ++ ) { localB -> h4qfg23klo [ i ] += ( k0qla0533x [ i ] -
b_T_struct [ b_BN_p ] . data [ i ] ) * ( real_T ) b_AN_p ; Sum2 [ i ] += tmp
* b_epsilon_struct [ b_BN_p ] . data [ i ] ; } } for ( b_BN_p = 0 ; b_BN_p <
15 ; b_BN_p ++ ) { y [ b_BN_p ] = muDoubleScalarAbs ( Sum2 [ b_BN_p ] ) ; }
memset ( & d [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; d [ 0 ] = rtP . Upsilon_M
[ 0 ] ; d [ 4 ] = rtP . Upsilon_M [ 1 ] ; d [ 8 ] = rtP . Upsilon_M [ 2 ] ;
for ( i = 0 ; i < 15 ; i ++ ) { Sum2_p [ i ] = Sum2 [ i ] / ( y [ i ] + 0.1 )
; } for ( i = 0 ; i < 3 ; i ++ ) { for ( b_BN_p = 0 ; b_BN_p < 5 ; b_BN_p ++
) { localB -> h5nzmu35n2 [ b_BN_p + 5 * i ] = localB -> h4qfg23klo [ 5 * i +
b_BN_p ] * - rtP . Observer_Gain1 - ( ( d [ 3 * i + 1 ] * Sum2_p [ b_BN_p + 5
] + d [ 3 * i ] * Sum2_p [ b_BN_p ] ) + d [ 3 * i + 2 ] * Sum2_p [ b_BN_p +
10 ] ) ; } } } void ornqmajb3j ( const real_T grgres4rfr [ 36 ] , const
real_T oy1typyq5y [ 36 ] , hqx3jg054o * localB ) { real_T oy1typyq5y_p [ 36 ]
; real_T grgres4rfr_p [ 36 ] ; real_T grgres4rfr_e [ 36 ] ; real_T
grgres4rfr_i [ 36 ] ; real_T grgres4rfr_m [ 36 ] ; int32_T i ; int32_T i_p ;
int32_T i_e ; real_T tmp ; for ( i = 0 ; i < 6 ; i ++ ) { for ( i_p = 0 ; i_p
< 6 ; i_p ++ ) { oy1typyq5y_p [ i + 6 * i_p ] = 0.0 ; grgres4rfr_p [ i + 6 *
i_p ] = 0.0 ; grgres4rfr_e [ i + 6 * i_p ] = 0.0 ; for ( i_e = 0 ; i_e < 6 ;
i_e ++ ) { oy1typyq5y_p [ i + 6 * i_p ] += oy1typyq5y [ 6 * i_e + i ] *
grgres4rfr [ 6 * i_p + i_e ] ; grgres4rfr_p [ i + 6 * i_p ] += grgres4rfr [ 6
* i_e + i ] * oy1typyq5y [ 6 * i_e + i_p ] ; grgres4rfr_e [ i + 6 * i_p ] +=
grgres4rfr [ 6 * i_e + i ] * rtP . B [ 6 * i_p + i_e ] ; } } for ( i_p = 0 ;
i_p < 6 ; i_p ++ ) { grgres4rfr_i [ i + 6 * i_p ] = 0.0 ; for ( i_e = 0 ; i_e
< 6 ; i_e ++ ) { grgres4rfr_i [ i + 6 * i_p ] += grgres4rfr_e [ 6 * i_e + i ]
* rtP . R [ 6 * i_p + i_e ] ; } } for ( i_p = 0 ; i_p < 6 ; i_p ++ ) {
grgres4rfr_m [ i + 6 * i_p ] = 0.0 ; for ( i_e = 0 ; i_e < 6 ; i_e ++ ) {
grgres4rfr_m [ i + 6 * i_p ] += grgres4rfr_i [ 6 * i_e + i ] * rtP . B [ 6 *
i_e + i_p ] ; } } for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { tmp = 0.0 ; for ( i_e
= 0 ; i_e < 6 ; i_e ++ ) { tmp += grgres4rfr_m [ 6 * i_e + i ] * grgres4rfr [
6 * i_p + i_e ] ; } localB -> oizdxburtj [ i + 6 * i_p ] = ( ( oy1typyq5y_p [
6 * i_p + i ] + grgres4rfr_p [ 6 * i_p + i ] ) - tmp ) + rtP . QR [ 6 * i_p +
i ] * 2.0 ; } } } void ljfb5rsuh1 ( const real_T j1fd3tvuya [ 6 ] , const
real_T pu1qv4zuwd [ 6 ] , fxcaggpt2g * localB ) { int32_T i ; real_T ABS ;
for ( i = 0 ; i < 6 ; i ++ ) { if ( pu1qv4zuwd [ i ] > 0.0 ) { ABS =
pu1qv4zuwd [ i ] ; } else { ABS = - pu1qv4zuwd [ i ] ; } localB -> lsn2ixkb43
[ i ] = muDoubleScalarSqrt ( ABS ) ; localB -> lsn2ixkb43 [ i ] = j1fd3tvuya
[ i ] - pu1qv4zuwd [ i ] / ( ABS + 0.01 ) * ( rtP . k1 * localB -> lsn2ixkb43
[ i ] ) ; } } void nrigba1tb3 ( const real_T jvpqcdgjmx [ 6 ] , eq5cp5blsh *
localB ) { int32_T i ; for ( i = 0 ; i < 6 ; i ++ ) { if ( jvpqcdgjmx [ i ] >
0.0 ) { localB -> jomd12grfe [ i ] = jvpqcdgjmx [ i ] ; } else { localB ->
jomd12grfe [ i ] = - jvpqcdgjmx [ i ] ; } localB -> jomd12grfe [ i ] =
jvpqcdgjmx [ i ] / ( localB -> jomd12grfe [ i ] + 0.01 ) * - rtP . k2 ; } }
void h0vretpjys ( const real_T et3l0nssc0 [ 6 ] , const real_T kkxs5suqwr [ 6
] , const real_T gzfzyufp2b [ 36 ] , dm2tzdbcgz * localB ) { real_T tmp [ 36
] ; real_T tmp_p [ 36 ] ; real_T tmp_e [ 6 ] ; real_T tmp_i [ 6 ] ; int32_T i
; int32_T i_p ; int32_T i_e ; for ( i = 0 ; i < 36 ; i ++ ) { tmp [ i ] = -
rtP . gamma_1 [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { tmp_e [ i ] = 0.0 ;
tmp_i [ i ] = 0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { tmp_p [ i + 6 * i_p
] = 0.0 ; for ( i_e = 0 ; i_e < 6 ; i_e ++ ) { tmp_p [ i + 6 * i_p ] += tmp [
6 * i_e + i ] * gzfzyufp2b [ 6 * i_p + i_e ] ; } tmp_e [ i ] += tmp_p [ 6 *
i_p + i ] * et3l0nssc0 [ i_p ] ; tmp_i [ i ] += rtP . gamma_1 [ 6 * i_p + i ]
* rtP . rho_1 * kkxs5suqwr [ i_p ] ; } localB -> awuha2csho [ i ] = tmp_e [ i
] - tmp_i [ i ] ; } } void a3yntw2avp ( const real_T fmixvpcmj1 [ 6 ] , const
real_T mrnphdhd0q [ 6 ] , const real_T ikx5054sbz [ 36 ] , const real_T
okllnwjrva [ 36 ] , cwfhnd541o * localB ) { real_T DVa_hat [ 6 ] ; real_T d [
36 ] ; int32_T j ; real_T b_d [ 6 ] ; real_T tmp [ 36 ] ; real_T tmp_p [ 36 ]
; real_T tmp_e [ 36 ] ; real_T mrnphdhd0q_p [ 6 ] ; real_T tmp_i [ 6 ] ;
real_T tmp_m [ 6 ] ; int32_T i ; int32_T i_p ; memset ( & d [ 0 ] , 0 , 36U *
sizeof ( real_T ) ) ; for ( j = 0 ; j < 6 ; j ++ ) { d [ j + 6 * j ] =
fmixvpcmj1 [ j ] ; b_d [ j ] = okllnwjrva [ 6 * j + j ] ; } for ( j = 0 ; j <
36 ; j ++ ) { tmp [ j ] = - rtP . gamma_0 [ j ] ; } for ( j = 0 ; j < 6 ; j
++ ) { for ( i = 0 ; i < 6 ; i ++ ) { tmp_p [ j + 6 * i ] = 0.0 ; for ( i_p =
0 ; i_p < 6 ; i_p ++ ) { tmp_p [ j + 6 * i ] += tmp [ 6 * i_p + j ] *
ikx5054sbz [ 6 * i + i_p ] ; } } for ( i = 0 ; i < 6 ; i ++ ) { tmp_e [ j + 6
* i ] = 0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { tmp_e [ j + 6 * i ] +=
tmp_p [ 6 * i_p + j ] * d [ 6 * i + i_p ] ; } } mrnphdhd0q_p [ j ] =
mrnphdhd0q [ j ] - fmixvpcmj1 [ j ] ; } for ( j = 0 ; j < 6 ; j ++ ) { tmp_i
[ j ] = 0.0 ; tmp_m [ j ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { tmp_i [ j ]
+= tmp_e [ 6 * i + j ] * mrnphdhd0q_p [ i ] ; tmp_m [ j ] += rtP . gamma_0 [
6 * i + j ] * rtP . rho_0 * b_d [ i ] ; } DVa_hat [ j ] = tmp_i [ j ] - tmp_m
[ j ] ; } memset ( & localB -> lgflny3vaf [ 0 ] , 0 , 36U * sizeof ( real_T )
) ; for ( j = 0 ; j < 6 ; j ++ ) { localB -> lgflny3vaf [ j + 6 * j ] =
DVa_hat [ j ] ; } } static void hrxq02e1oc ( const real_T x [ 36 ] , real_T y
[ 36 ] ) { int8_T p [ 6 ] ; real_T A [ 36 ] ; int8_T ipiv [ 6 ] ; int32_T b_j
; int32_T ix ; real_T smax ; real_T s ; int32_T b_k ; int32_T iy ; int32_T
c_ix ; int32_T d ; int32_T ijA ; int32_T pipk ; for ( b_j = 0 ; b_j < 36 ;
b_j ++ ) { y [ b_j ] = 0.0 ; A [ b_j ] = x [ b_j ] ; } for ( b_j = 0 ; b_j <
6 ; b_j ++ ) { ipiv [ b_j ] = ( int8_T ) ( 1 + b_j ) ; } for ( b_j = 0 ; b_j
< 5 ; b_j ++ ) { pipk = b_j * 7 ; iy = 0 ; ix = pipk ; smax =
muDoubleScalarAbs ( A [ pipk ] ) ; for ( b_k = 2 ; b_k <= 6 - b_j ; b_k ++ )
{ ix ++ ; s = muDoubleScalarAbs ( A [ ix ] ) ; if ( s > smax ) { iy = b_k - 1
; smax = s ; } } if ( A [ pipk + iy ] != 0.0 ) { if ( iy != 0 ) { ipiv [ b_j
] = ( int8_T ) ( ( b_j + iy ) + 1 ) ; ix = b_j ; iy += b_j ; for ( b_k = 0 ;
b_k < 6 ; b_k ++ ) { smax = A [ ix ] ; A [ ix ] = A [ iy ] ; A [ iy ] = smax
; ix += 6 ; iy += 6 ; } } iy = ( pipk - b_j ) + 6 ; for ( ix = pipk + 1 ; ix
< iy ; ix ++ ) { A [ ix ] /= A [ pipk ] ; } } iy = pipk ; ix = pipk + 6 ; for
( b_k = 0 ; b_k <= 4 - b_j ; b_k ++ ) { if ( A [ ix ] != 0.0 ) { smax = - A [
ix ] ; c_ix = pipk + 1 ; d = ( iy - b_j ) + 12 ; for ( ijA = 7 + iy ; ijA < d
; ijA ++ ) { A [ ijA ] += A [ c_ix ] * smax ; c_ix ++ ; } } ix += 6 ; iy += 6
; } } for ( b_j = 0 ; b_j < 6 ; b_j ++ ) { p [ b_j ] = ( int8_T ) ( 1 + b_j )
; } for ( b_j = 0 ; b_j < 5 ; b_j ++ ) { if ( ipiv [ b_j ] > 1 + b_j ) { pipk
= p [ ipiv [ b_j ] - 1 ] ; p [ ipiv [ b_j ] - 1 ] = p [ b_j ] ; p [ b_j ] = (
int8_T ) pipk ; } } for ( b_j = 0 ; b_j < 6 ; b_j ++ ) { pipk = p [ b_j ] - 1
; y [ b_j + 6 * ( p [ b_j ] - 1 ) ] = 1.0 ; for ( iy = b_j ; iy + 1 < 7 ; iy
++ ) { if ( y [ 6 * pipk + iy ] != 0.0 ) { for ( ix = iy + 1 ; ix + 1 < 7 ;
ix ++ ) { y [ ix + 6 * pipk ] -= y [ 6 * pipk + iy ] * A [ 6 * iy + ix ] ; }
} } } for ( b_j = 0 ; b_j < 6 ; b_j ++ ) { pipk = 6 * b_j ; for ( iy = 5 ; iy
>= 0 ; iy -- ) { ix = 6 * iy ; if ( y [ iy + pipk ] != 0.0 ) { y [ iy + pipk
] /= A [ iy + ix ] ; for ( b_k = 0 ; b_k < iy ; b_k ++ ) { y [ b_k + pipk ]
-= y [ iy + pipk ] * A [ b_k + ix ] ; } } } } } void efke5v1e1t ( const
real_T dgvfvbigjv [ 6 ] , const real_T firebztxbf [ 6 ] , const real_T
p0hddgz3zs [ 6 ] , const real_T eqlejw0yrs [ 36 ] , const real_T lx3xlkc25d [
36 ] , const real_T o30ytas2l4 [ 6 ] , const real_T psivrwfxae [ 6 ] ,
j3tg11tzyf * localB ) { int8_T b_I [ 36 ] ; int32_T k ; real_T tmp [ 36 ] ;
real_T tmp_p [ 36 ] ; real_T tmp_e [ 36 ] ; real_T tmp_i [ 36 ] ; real_T
b_I_p [ 36 ] ; real_T b_I_e [ 6 ] ; real_T p0hddgz3zs_p [ 6 ] ; real_T tmp_m
[ 6 ] ; int32_T i ; int32_T i_p ; real_T tmp_g ; for ( i = 0 ; i < 36 ; i ++
) { b_I [ i ] = 0 ; } hrxq02e1oc ( eqlejw0yrs , tmp ) ; for ( k = 0 ; k < 6 ;
k ++ ) { b_I [ k + 6 * k ] = 1 ; for ( i = 0 ; i < 6 ; i ++ ) { tmp_p [ k + 6
* i ] = 0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { tmp_p [ k + 6 * i ] += rtP
. R [ 6 * i_p + k ] * 0.5 * rtP . B [ 6 * i_p + i ] ; } } for ( i = 0 ; i < 6
; i ++ ) { tmp_e [ k + 6 * i ] = 0.0 ; tmp_i [ k + 6 * i ] = 0.0 ; for ( i_p
= 0 ; i_p < 6 ; i_p ++ ) { tmp_e [ k + 6 * i ] += tmp_p [ 6 * i_p + k ] *
eqlejw0yrs [ 6 * i + i_p ] ; tmp_i [ k + 6 * i ] += tmp [ 6 * i_p + k ] * rtP
. QR [ 6 * i + i_p ] ; } } } for ( i = 0 ; i < 36 ; i ++ ) { b_I_p [ i ] = (
2.0 * tmp_i [ i ] + ( real_T ) b_I [ i ] ) + lx3xlkc25d [ i ] ; } for ( i = 0
; i < 6 ; i ++ ) { tmp_g = 0.0 ; b_I_e [ i ] = 0.0 ; for ( i_p = 0 ; i_p < 6
; i_p ++ ) { tmp_g += lx3xlkc25d [ 6 * i_p + i ] * psivrwfxae [ i_p ] ; tmp [
i + 6 * i_p ] = 0.0 ; for ( k = 0 ; k < 6 ; k ++ ) { tmp [ i + 6 * i_p ] +=
rtP . R [ 6 * k + i ] * 0.75 * rtP . B [ 6 * k + i_p ] ; } b_I_e [ i ] +=
b_I_p [ 6 * i_p + i ] * dgvfvbigjv [ i_p ] ; } p0hddgz3zs_p [ i ] = ( ( (
p0hddgz3zs [ i ] - tmp_g ) + b_I_e [ i ] ) - o30ytas2l4 [ i ] ) - firebztxbf
[ i ] ; for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { tmp_p [ i + 6 * i_p ] = 0.0 ;
for ( k = 0 ; k < 6 ; k ++ ) { tmp_p [ i + 6 * i_p ] += tmp [ 6 * k + i ] *
eqlejw0yrs [ 6 * i_p + k ] ; } } } for ( i = 0 ; i < 6 ; i ++ ) { b_I_e [ i ]
= 0.0 ; tmp_m [ i ] = 0.0 ; tmp_g = 0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p ++ )
{ tmp_g += tmp_e [ 6 * i_p + i ] * dgvfvbigjv [ i_p ] ; b_I_e [ i ] += rtP .
BBT_inv [ 6 * i_p + i ] * p0hddgz3zs_p [ i_p ] ; tmp_m [ i ] += tmp_p [ 6 *
i_p + i ] * dgvfvbigjv [ i_p ] ; } localB -> ceslw2bcsd [ i ] = ( b_I_e [ i ]
- tmp_m [ i ] ) + tmp_g ; } } void dqxwi3ojws ( const real_T m0qfadm4v1 [ 12
] , const real_T jo04qdk1m3 [ 3 ] , const real_T owbcypsami [ 6 ] ,
hgdkpbfvpv * localB ) { int32_T i ; localB -> p0sifpbcra [ 0 ] = m0qfadm4v1 [
3 ] ; localB -> p0sifpbcra [ 3 ] = m0qfadm4v1 [ 9 ] ; localB -> okla4d4php [
0 ] = jo04qdk1m3 [ 0 ] ; localB -> okla4d4php [ 3 ] = owbcypsami [ 0 ] ;
localB -> p0sifpbcra [ 1 ] = m0qfadm4v1 [ 4 ] ; localB -> p0sifpbcra [ 4 ] =
m0qfadm4v1 [ 10 ] ; localB -> okla4d4php [ 1 ] = jo04qdk1m3 [ 1 ] ; localB ->
okla4d4php [ 4 ] = owbcypsami [ 1 ] ; localB -> p0sifpbcra [ 2 ] = m0qfadm4v1
[ 5 ] ; localB -> p0sifpbcra [ 5 ] = m0qfadm4v1 [ 11 ] ; localB -> okla4d4php
[ 2 ] = jo04qdk1m3 [ 2 ] ; localB -> okla4d4php [ 5 ] = owbcypsami [ 2 ] ;
for ( i = 0 ; i < 6 ; i ++ ) { localB -> koxsf3yz0i [ i ] = localB ->
okla4d4php [ i ] - localB -> p0sifpbcra [ i ] ; } } void kwtgsaa2gl ( real_T
ph30t50ryd , const real_T aaqwo0z3uc [ 36 ] , const real_T k15kfxpnvx [ 15 ]
, const real_T ge3ediddqr [ 36 ] , const real_T pddkeec24h [ 6 ] , const
real_T i54gey3p0m [ 3 ] , const real_T nq2vlwzuda [ 3 ] , const real_T
lqrbpnpeky [ 6 ] , oxhaxmnvep * localB ) { real_T z0_i [ 6 ] ; real_T
x0_hat_i [ 6 ] ; real_T vA_hat [ 6 ] ; real_T Sum [ 6 ] ; int32_T k ; real_T
d [ 36 ] ; static const int8_T b_BN [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const int8_T b_H [ 16 ] = { 2 , -
1 , 0 , 0 , - 1 , 2 , - 1 , 0 , 0 , - 1 , 2 , - 1 , 0 , 0 , - 1 , 1 } ;
static const real_T a [ 36 ] = { 1.0E-8 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0E-8 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0E-8 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.010000000000000002 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.010000000000000002 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.010000000000000002 } ; static const real_T b_a [ 36 ] = { - 1.0E-7 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 1.0E-7 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 1.0E-7 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.1 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.1 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.1 } ; int32_T b_BN_p ; int32_T
b_H_p ; real_T k15kfxpnvx_p [ 6 ] ; real_T b_a_p [ 36 ] ; real_T b_a_e [ 36 ]
; x0_hat_i [ 0 ] = nq2vlwzuda [ 0 ] ; x0_hat_i [ 3 ] = lqrbpnpeky [ 0 ] ;
x0_hat_i [ 1 ] = nq2vlwzuda [ 1 ] ; x0_hat_i [ 4 ] = lqrbpnpeky [ 1 ] ;
x0_hat_i [ 2 ] = nq2vlwzuda [ 2 ] ; x0_hat_i [ 5 ] = lqrbpnpeky [ 2 ] ; for (
k = 0 ; k < 6 ; k ++ ) { vA_hat [ k ] = aaqwo0z3uc [ 6 * k + k ] ; Sum [ k ]
= 0.0 ; } for ( k = 0 ; k < 4 ; k ++ ) { b_H_p = b_H [ ( ( k << 2 ) + (
int32_T ) ph30t50ryd ) - 1 ] ; z0_i [ 0 ] = 2.0 * k15kfxpnvx [ 0 ] ; z0_i [ 3
] = 0.0 ; k15kfxpnvx_p [ 0 ] = k15kfxpnvx [ k + 1 ] ; k15kfxpnvx_p [ 3 ] =
0.0 ; z0_i [ 1 ] = 2.0 * k15kfxpnvx [ 5 ] ; z0_i [ 4 ] = 0.0 ; k15kfxpnvx_p [
1 ] = k15kfxpnvx [ k + 6 ] ; k15kfxpnvx_p [ 4 ] = 0.0 ; z0_i [ 2 ] = 2.0 *
k15kfxpnvx [ 10 ] ; z0_i [ 5 ] = 0.0 ; k15kfxpnvx_p [ 2 ] = k15kfxpnvx [ k +
11 ] ; k15kfxpnvx_p [ 5 ] = 0.0 ; for ( b_BN_p = 0 ; b_BN_p < 6 ; b_BN_p ++ )
{ Sum [ b_BN_p ] += ( ( 2.0 * x0_hat_i [ b_BN_p ] - z0_i [ b_BN_p ] ) +
k15kfxpnvx_p [ b_BN_p ] ) * ( real_T ) b_H_p ; } } b_BN_p = b_BN [ ( ( ( (
int32_T ) ph30t50ryd - 1 ) << 2 ) + ( int32_T ) ph30t50ryd ) - 1 ] ; Sum [ 0
] = ( ( real_T ) b_BN_p * i54gey3p0m [ 0 ] + Sum [ 0 ] ) - pddkeec24h [ 0 ] ;
Sum [ 3 ] = ( Sum [ 3 ] + lqrbpnpeky [ 0 ] ) - pddkeec24h [ 3 ] ; Sum [ 1 ] =
( ( real_T ) b_BN_p * i54gey3p0m [ 1 ] + Sum [ 1 ] ) - pddkeec24h [ 1 ] ; Sum
[ 4 ] = ( Sum [ 4 ] + lqrbpnpeky [ 1 ] ) - pddkeec24h [ 4 ] ; Sum [ 2 ] = ( (
real_T ) b_BN_p * i54gey3p0m [ 2 ] + Sum [ 2 ] ) - pddkeec24h [ 2 ] ; Sum [ 5
] = ( Sum [ 5 ] + lqrbpnpeky [ 2 ] ) - pddkeec24h [ 5 ] ; memset ( & d [ 0 ]
, 0 , 36U * sizeof ( real_T ) ) ; for ( k = 0 ; k < 6 ; k ++ ) { d [ k + 6 *
k ] = Sum [ k ] ; } for ( b_BN_p = 0 ; b_BN_p < 6 ; b_BN_p ++ ) { for ( k = 0
; k < 6 ; k ++ ) { b_a_p [ b_BN_p + 6 * k ] = 0.0 ; for ( b_H_p = 0 ; b_H_p <
6 ; b_H_p ++ ) { b_a_p [ b_BN_p + 6 * k ] += b_a [ 6 * b_H_p + b_BN_p ] * d [
6 * k + b_H_p ] ; } } x0_hat_i [ b_BN_p ] = 0.0 ; Sum [ b_BN_p ] = 0.0 ; for
( k = 0 ; k < 6 ; k ++ ) { b_a_e [ b_BN_p + 6 * k ] = 0.0 ; for ( b_H_p = 0 ;
b_H_p < 6 ; b_H_p ++ ) { b_a_e [ b_BN_p + 6 * k ] += b_a_p [ 6 * b_H_p +
b_BN_p ] * ge3ediddqr [ 6 * k + b_H_p ] ; } x0_hat_i [ b_BN_p ] += b_a_e [ 6
* k + b_BN_p ] * pddkeec24h [ k ] ; Sum [ b_BN_p ] += a [ 6 * k + b_BN_p ] *
vA_hat [ k ] ; } z0_i [ b_BN_p ] = x0_hat_i [ b_BN_p ] - Sum [ b_BN_p ] ; }
memset ( & localB -> dokc3h5z1d [ 0 ] , 0 , 36U * sizeof ( real_T ) ) ; for (
k = 0 ; k < 6 ; k ++ ) { localB -> dokc3h5z1d [ k + 6 * k ] = z0_i [ k ] ; }
} void me5jg4e3mq ( real_T itjqwawrwx , const real_T ob3kfuaint [ 6 ] , const
P_bus * bvadikvx3w , const real_T d4vkxwwyr4 [ 6 ] , const real_T on0yebraig
[ 6 ] , const real_T e52vds4hmr [ 6 ] , const real_T hnko5nw00y [ 6 ] ,
giihdnwpjj * localB ) { real_T Sum [ 6 ] ; int32_T b ; bxx445tlh5 b_P_struct
[ 4 ] ; real_T y [ 36 ] ; real_T b_y [ 6 ] ; int32_T aoffset ; int32_T b_i ;
static const int8_T b_H [ 16 ] = { 2 , - 1 , 0 , 0 , - 1 , 2 , - 1 , 0 , 0 ,
- 1 , 2 , - 1 , 0 , 0 , - 1 , 1 } ; static const real_T a [ 36 ] = { - 0.001
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.001 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.001 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 1000.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 1000.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 1000.0 } ; static const
real_T b_a [ 36 ] = { 0.001 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.001 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.001 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1000.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1000.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1000.0 } ; real_T kacwuwudmu [ 24 ] ; int32_T i ; real_T b_a_p [
6 ] ; int32_T b_H_p ; real_T cvww0icfys_data [ 24 ] ; for ( i = 0 ; i < 6 ; i
++ ) { kacwuwudmu [ i ] = d4vkxwwyr4 [ i ] ; kacwuwudmu [ i + 6 ] =
on0yebraig [ i ] ; kacwuwudmu [ i + 12 ] = e52vds4hmr [ i ] ; kacwuwudmu [ i
+ 18 ] = hnko5nw00y [ i ] ; } memcpy ( & b_P_struct [ 0 ] . data [ 0 ] , &
bvadikvx3w -> p1 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & b_P_struct [
1 ] . data [ 0 ] , & bvadikvx3w -> p2 [ 0 ] , 36U * sizeof ( real_T ) ) ;
memcpy ( & b_P_struct [ 2 ] . data [ 0 ] , & bvadikvx3w -> p3 [ 0 ] , 36U *
sizeof ( real_T ) ) ; memcpy ( & b_P_struct [ 3 ] . data [ 0 ] , & bvadikvx3w
-> p4 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { Sum
[ i ] = 0.0 ; } for ( i = 0 ; i < 4 ; i ++ ) { b = i * 6 ; aoffset = ( 1 + i
) * 6 ; if ( b + 1 > aoffset ) { b = 0 ; aoffset = 0 ; } b_H_p = b_H [ ( ( (
int32_T ) itjqwawrwx - 1 ) << 2 ) + i ] ; for ( b_i = 0 ; b_i < 36 ; b_i ++ )
{ y [ b_i ] = ( real_T ) b_H_p * b_P_struct [ i ] . data [ b_i ] ; } if (
aoffset - b == 1 ) { aoffset -= b ; for ( b_i = 0 ; b_i < aoffset ; b_i ++ )
{ cvww0icfys_data [ b_i ] = kacwuwudmu [ b + b_i ] ; } for ( b_i = 0 ; b_i <
6 ; b_i ++ ) { b_y [ b_i ] = 0.0 ; for ( b = 0 ; b < 6 ; b ++ ) { b_y [ b_i ]
+= y [ 6 * b + b_i ] * cvww0icfys_data [ b ] ; } } } else { for ( b_i = 0 ;
b_i < 6 ; b_i ++ ) { b_y [ b_i ] = 0.0 ; } for ( b_i = 0 ; b_i < 6 ; b_i ++ )
{ aoffset = b_i * 6 ; for ( b_H_p = 0 ; b_H_p < 6 ; b_H_p ++ ) { b_y [ b_H_p
] += kacwuwudmu [ b + b_i ] * y [ aoffset + b_H_p ] ; } } } for ( b_i = 0 ;
b_i < 6 ; b_i ++ ) { Sum [ b_i ] += b_y [ b_i ] ; } } for ( b_i = 0 ; b_i < 6
; b_i ++ ) { b_y [ b_i ] = 0.0 ; b_a_p [ b_i ] = 0.0 ; for ( b = 0 ; b < 6 ;
b ++ ) { b_y [ b_i ] += a [ 6 * b + b_i ] * Sum [ b ] ; b_a_p [ b_i ] += b_a
[ 6 * b + b_i ] * ob3kfuaint [ b ] ; } localB -> ovkgcdutyp [ b_i ] = b_y [
b_i ] - b_a_p [ b_i ] ; } } void emensgwh2t ( const real_T bkwg4do5l2 [ 36 ]
, const real_T psnquggbka [ 36 ] , lkn5opn3wh * localB ) { real_T tmp [ 36 ]
; real_T tmp_p [ 36 ] ; real_T bkwg4do5l2_p [ 36 ] ; real_T bkwg4do5l2_e [ 36
] ; real_T bkwg4do5l2_i [ 36 ] ; int32_T i ; int32_T i_p ; int32_T i_e ;
real_T tmp_e ; for ( i = 0 ; i < 6 ; i ++ ) { for ( i_p = 0 ; i_p < 6 ; i_p
++ ) { tmp [ i + 6 * i_p ] = 0.0 ; tmp_p [ i + 6 * i_p ] = 0.0 ; bkwg4do5l2_p
[ i + 6 * i_p ] = 0.0 ; for ( i_e = 0 ; i_e < 6 ; i_e ++ ) { tmp [ i + 6 *
i_p ] += psnquggbka [ 6 * i_e + i ] * 2.0 * bkwg4do5l2 [ 6 * i_p + i_e ] ;
tmp_p [ i + 6 * i_p ] += bkwg4do5l2 [ 6 * i_e + i ] * 2.0 * psnquggbka [ 6 *
i_e + i_p ] ; bkwg4do5l2_p [ i + 6 * i_p ] += bkwg4do5l2 [ 6 * i_e + i ] *
rtP . B [ 6 * i_p + i_e ] ; } } for ( i_p = 0 ; i_p < 6 ; i_p ++ ) {
bkwg4do5l2_e [ i + 6 * i_p ] = 0.0 ; for ( i_e = 0 ; i_e < 6 ; i_e ++ ) {
bkwg4do5l2_e [ i + 6 * i_p ] += bkwg4do5l2_p [ 6 * i_e + i ] * rtP . R [ 6 *
i_p + i_e ] ; } } for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { bkwg4do5l2_i [ i + 6 *
i_p ] = 0.0 ; for ( i_e = 0 ; i_e < 6 ; i_e ++ ) { bkwg4do5l2_i [ i + 6 * i_p
] += bkwg4do5l2_e [ 6 * i_e + i ] * rtP . B [ 6 * i_e + i_p ] ; } } for ( i_p
= 0 ; i_p < 6 ; i_p ++ ) { tmp_e = 0.0 ; for ( i_e = 0 ; i_e < 6 ; i_e ++ ) {
tmp_e += bkwg4do5l2_i [ 6 * i_e + i ] * bkwg4do5l2 [ 6 * i_p + i_e ] ; }
localB -> ertj4nm0qu [ i + 6 * i_p ] = ( ( tmp [ 6 * i_p + i ] + tmp_p [ 6 *
i_p + i ] ) - tmp_e ) + rtP . Q [ 6 * i_p + i ] * 2.0 ; } } } void bjoegfn2je
( const real_T kcazes3wnw [ 3 ] , const real_T ju3ia4kylo [ 3 ] , j3teq4qctc
* localB ) { real_T ABS ; ABS = muDoubleScalarAbs ( ju3ia4kylo [ 0 ] ) ;
localB -> g0oikhinbf [ 0 ] = muDoubleScalarSqrt ( ABS ) ; localB ->
g0oikhinbf [ 0 ] = kcazes3wnw [ 0 ] - ju3ia4kylo [ 0 ] / ( ABS + rtP . alpha
) * localB -> g0oikhinbf [ 0 ] * rtP . k1 ; ABS = muDoubleScalarAbs (
ju3ia4kylo [ 1 ] ) ; localB -> g0oikhinbf [ 1 ] = muDoubleScalarSqrt ( ABS )
; localB -> g0oikhinbf [ 1 ] = kcazes3wnw [ 1 ] - ju3ia4kylo [ 1 ] / ( ABS +
rtP . alpha ) * localB -> g0oikhinbf [ 1 ] * rtP . k1 ; ABS =
muDoubleScalarAbs ( ju3ia4kylo [ 2 ] ) ; localB -> g0oikhinbf [ 2 ] =
muDoubleScalarSqrt ( ABS ) ; localB -> g0oikhinbf [ 2 ] = kcazes3wnw [ 2 ] -
ju3ia4kylo [ 2 ] / ( ABS + rtP . alpha ) * localB -> g0oikhinbf [ 2 ] * rtP .
k1 ; } void abfhyutv0s ( const real_T jlbrmmdvk4 [ 3 ] , mae1jzyb5r * localB
) { localB -> iu3foypmzb [ 0 ] = muDoubleScalarAbs ( jlbrmmdvk4 [ 0 ] ) ;
localB -> iu3foypmzb [ 0 ] = jlbrmmdvk4 [ 0 ] / ( localB -> iu3foypmzb [ 0 ]
+ rtP . alpha ) * - rtP . k2 ; localB -> iu3foypmzb [ 1 ] = muDoubleScalarAbs
( jlbrmmdvk4 [ 1 ] ) ; localB -> iu3foypmzb [ 1 ] = jlbrmmdvk4 [ 1 ] / (
localB -> iu3foypmzb [ 1 ] + rtP . alpha ) * - rtP . k2 ; localB ->
iu3foypmzb [ 2 ] = muDoubleScalarAbs ( jlbrmmdvk4 [ 2 ] ) ; localB ->
iu3foypmzb [ 2 ] = jlbrmmdvk4 [ 2 ] / ( localB -> iu3foypmzb [ 2 ] + rtP .
alpha ) * - rtP . k2 ; } void fmax3olm5p ( const real_T gggefvteh1 [ 36 ] ,
const real_T ms1q5x23fi [ 6 ] , const real_T mg1alaepbu [ 6 ] , const real_T
kjfufk133f [ 36 ] , const real_T kcvdwwfdb5 [ 3 ] , const real_T gh0ygdc1th [
3 ] , const real_T m2kyg0bbfh [ 15 ] , const real_T iq4hbqmcz2 [ 15 ] , const
real_T jscfxmk1hd [ 3 ] , real_T o2jf2v3giv , const real_T ixvdy15moz [ 6 ] ,
const real_T ct33szpwrs [ 3 ] , const real_T jmhfitoezt [ 6 ] , const real_T
ed1kj1l250 [ 3 ] , pc3asbr0tb * localB ) { real_T z0_i [ 6 ] ; real_T
x0_hat_i [ 6 ] ; real_T U5 [ 6 ] ; real_T y ; static const int8_T b_a [ 36 ]
= { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0
, 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 } ;
static const real_T c_a [ 36 ] = { 0.5 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.5 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.5 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.5 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.5 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.5 } ; static const real_T d_a [ 36 ] = { 0.75 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.75 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.75 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.75 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.75
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.75 } ; real_T tmp ; real_T tmp_p [ 6
] ; real_T iq4hbqmcz2_p [ 6 ] ; real_T c_a_p [ 36 ] ; real_T c_a_e [ 6 ] ;
real_T m2kyg0bbfh_p [ 6 ] ; real_T jscfxmk1hd_p [ 6 ] ; real_T m2kyg0bbfh_e [
6 ] ; real_T x0_hat_i_p [ 6 ] ; int32_T o2jf2v3giv_p ; int32_T i ; int32_T
i_p ; real_T tmp_e ; real_T tmp_i ; x0_hat_i [ 0 ] = ct33szpwrs [ 0 ] ;
x0_hat_i [ 3 ] = ixvdy15moz [ 0 ] ; x0_hat_i [ 1 ] = ct33szpwrs [ 1 ] ;
x0_hat_i [ 4 ] = ixvdy15moz [ 1 ] ; x0_hat_i [ 2 ] = ct33szpwrs [ 2 ] ;
x0_hat_i [ 5 ] = ixvdy15moz [ 2 ] ; y = - ( ( ( ( rtP . H [ ( int32_T )
o2jf2v3giv - 1 ] + rtP . H [ ( int32_T ) o2jf2v3giv + 3 ] ) + rtP . H [ (
int32_T ) o2jf2v3giv + 7 ] ) + rtP . H [ ( int32_T ) o2jf2v3giv + 11 ] ) -
rtP . H [ ( ( ( ( int32_T ) o2jf2v3giv - 1 ) << 2 ) + ( int32_T ) o2jf2v3giv
) - 1 ] ) ; tmp = rtP . H [ ( ( ( ( int32_T ) o2jf2v3giv - 1 ) << 2 ) + (
int32_T ) o2jf2v3giv ) - 1 ] ; o2jf2v3giv_p = ( int32_T ) ( o2jf2v3giv + 1.0
) ; tmp_p [ 0 ] = 2.0 * iq4hbqmcz2 [ 0 ] ; tmp_p [ 3 ] = 0.0 ; iq4hbqmcz2_p [
0 ] = iq4hbqmcz2 [ o2jf2v3giv_p - 1 ] ; iq4hbqmcz2_p [ 3 ] = 0.0 ; tmp_p [ 1
] = 2.0 * iq4hbqmcz2 [ 5 ] ; tmp_p [ 4 ] = 0.0 ; iq4hbqmcz2_p [ 1 ] =
iq4hbqmcz2 [ o2jf2v3giv_p + 4 ] ; iq4hbqmcz2_p [ 4 ] = 0.0 ; tmp_p [ 2 ] =
2.0 * iq4hbqmcz2 [ 10 ] ; tmp_p [ 5 ] = 0.0 ; iq4hbqmcz2_p [ 2 ] = iq4hbqmcz2
[ o2jf2v3giv_p + 9 ] ; iq4hbqmcz2_p [ 5 ] = 0.0 ; for ( o2jf2v3giv_p = 0 ;
o2jf2v3giv_p < 6 ; o2jf2v3giv_p ++ ) { c_a_e [ o2jf2v3giv_p ] = ( ( 2.0 *
x0_hat_i [ o2jf2v3giv_p ] - tmp_p [ o2jf2v3giv_p ] ) + iq4hbqmcz2_p [
o2jf2v3giv_p ] ) * tmp ; } for ( o2jf2v3giv_p = 0 ; o2jf2v3giv_p < 6 ;
o2jf2v3giv_p ++ ) { tmp = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { tmp +=
kjfufk133f [ 6 * i + o2jf2v3giv_p ] * c_a_e [ i ] ; } U5 [ o2jf2v3giv_p ] =
tmp - ms1q5x23fi [ o2jf2v3giv_p ] ; } tmp = rtP . BN [ ( ( ( ( int32_T )
o2jf2v3giv - 1 ) << 2 ) + ( int32_T ) o2jf2v3giv ) - 1 ] ; U5 [ 0 ] += tmp *
gh0ygdc1th [ 0 ] ; U5 [ 3 ] += ixvdy15moz [ 0 ] ; U5 [ 1 ] += tmp *
gh0ygdc1th [ 1 ] ; U5 [ 4 ] += ixvdy15moz [ 1 ] ; U5 [ 2 ] += tmp *
gh0ygdc1th [ 2 ] ; U5 [ 5 ] += ixvdy15moz [ 2 ] ; tmp = - rtP . BN [ ( ( ( (
int32_T ) o2jf2v3giv - 1 ) << 2 ) + ( int32_T ) o2jf2v3giv ) - 1 ] ; z0_i [ 0
] = ( m2kyg0bbfh [ 0 ] - kcvdwwfdb5 [ 0 ] ) * tmp ; z0_i [ 3 ] = - ( 0.0 -
ed1kj1l250 [ 0 ] ) ; z0_i [ 1 ] = ( m2kyg0bbfh [ 5 ] - kcvdwwfdb5 [ 1 ] ) *
tmp ; z0_i [ 4 ] = - ( 0.0 - ed1kj1l250 [ 1 ] ) ; z0_i [ 2 ] = ( m2kyg0bbfh [
10 ] - kcvdwwfdb5 [ 2 ] ) * tmp ; z0_i [ 5 ] = - ( 0.0 - ed1kj1l250 [ 2 ] ) ;
o2jf2v3giv_p = ( int32_T ) ( o2jf2v3giv + 1.0 ) ; m2kyg0bbfh_p [ 0 ] =
m2kyg0bbfh [ o2jf2v3giv_p - 1 ] ; m2kyg0bbfh_p [ 3 ] = 0.0 ; jscfxmk1hd_p [ 0
] = jscfxmk1hd [ 0 ] ; jscfxmk1hd_p [ 3 ] = ed1kj1l250 [ 0 ] ; m2kyg0bbfh_e [
0 ] = m2kyg0bbfh [ 0 ] ; m2kyg0bbfh_e [ 3 ] = 0.0 ; iq4hbqmcz2_p [ 0 ] =
iq4hbqmcz2 [ 0 ] ; iq4hbqmcz2_p [ 3 ] = 0.0 ; m2kyg0bbfh_p [ 1 ] = m2kyg0bbfh
[ o2jf2v3giv_p + 4 ] ; m2kyg0bbfh_p [ 4 ] = 0.0 ; jscfxmk1hd_p [ 1 ] =
jscfxmk1hd [ 1 ] ; jscfxmk1hd_p [ 4 ] = ed1kj1l250 [ 1 ] ; m2kyg0bbfh_e [ 1 ]
= m2kyg0bbfh [ 5 ] ; m2kyg0bbfh_e [ 4 ] = 0.0 ; iq4hbqmcz2_p [ 1 ] =
iq4hbqmcz2 [ 5 ] ; iq4hbqmcz2_p [ 4 ] = 0.0 ; m2kyg0bbfh_p [ 2 ] = m2kyg0bbfh
[ o2jf2v3giv_p + 9 ] ; m2kyg0bbfh_p [ 5 ] = 0.0 ; jscfxmk1hd_p [ 2 ] =
jscfxmk1hd [ 2 ] ; jscfxmk1hd_p [ 5 ] = ed1kj1l250 [ 2 ] ; m2kyg0bbfh_e [ 2 ]
= m2kyg0bbfh [ 10 ] ; m2kyg0bbfh_e [ 5 ] = 0.0 ; iq4hbqmcz2_p [ 2 ] =
iq4hbqmcz2 [ 10 ] ; iq4hbqmcz2_p [ 5 ] = 0.0 ; for ( o2jf2v3giv_p = 0 ;
o2jf2v3giv_p < 6 ; o2jf2v3giv_p ++ ) { tmp = 0.0 ; for ( i = 0 ; i < 6 ; i ++
) { c_a_p [ o2jf2v3giv_p + 6 * i ] = 0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p ++ )
{ c_a_p [ o2jf2v3giv_p + 6 * i ] += c_a [ 6 * i_p + o2jf2v3giv_p ] *
gggefvteh1 [ 6 * i + i_p ] ; } tmp += c_a_p [ 6 * i + o2jf2v3giv_p ] *
ms1q5x23fi [ i ] ; } c_a_e [ o2jf2v3giv_p ] = tmp + - jmhfitoezt [
o2jf2v3giv_p ] ; x0_hat_i_p [ o2jf2v3giv_p ] = x0_hat_i [ o2jf2v3giv_p ] -
iq4hbqmcz2_p [ o2jf2v3giv_p ] ; } for ( o2jf2v3giv_p = 0 ; o2jf2v3giv_p < 6 ;
o2jf2v3giv_p ++ ) { tmp = 0.0 ; tmp_i = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) {
tmp += kjfufk133f [ 6 * i + o2jf2v3giv_p ] * x0_hat_i_p [ i ] ; tmp_e = 0.0 ;
for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { tmp_e += d_a [ 6 * i_p + o2jf2v3giv_p ]
* gggefvteh1 [ 6 * i + i_p ] ; } c_a_p [ o2jf2v3giv_p + 6 * i ] = rtP . Q [ 6
* i + o2jf2v3giv_p ] * 2.0 - tmp_e ; tmp_i += rtP . K [ 6 * i + o2jf2v3giv_p
] * mg1alaepbu [ i ] ; } tmp_p [ o2jf2v3giv_p ] = 0.0 ; for ( i = 0 ; i < 6 ;
i ++ ) { tmp_p [ o2jf2v3giv_p ] += c_a_p [ 6 * i + o2jf2v3giv_p ] *
ms1q5x23fi [ i ] ; } x0_hat_i [ o2jf2v3giv_p ] = ( ( ( ( ( ( jscfxmk1hd_p [
o2jf2v3giv_p ] - m2kyg0bbfh_e [ o2jf2v3giv_p ] ) - tmp ) * y + ( c_a_e [
o2jf2v3giv_p ] + m2kyg0bbfh_p [ o2jf2v3giv_p ] ) ) + U5 [ o2jf2v3giv_p ] ) +
z0_i [ o2jf2v3giv_p ] ) + tmp_i ) + tmp_p [ o2jf2v3giv_p ] ; } tmp = rtP . H
[ ( ( ( ( int32_T ) o2jf2v3giv - 1 ) << 2 ) + ( int32_T ) o2jf2v3giv ) - 1 ]
; for ( o2jf2v3giv_p = 0 ; o2jf2v3giv_p < 6 ; o2jf2v3giv_p ++ ) { tmp_i = 0.0
; for ( i = 0 ; i < 6 ; i ++ ) { tmp_i += ( real_T ) b_a [ 6 * i +
o2jf2v3giv_p ] * x0_hat_i [ i ] ; } localB -> iqrledjweq [ o2jf2v3giv_p ] =
tmp_i / tmp ; } } void drphagqhrh ( const real_T ajjd5ffcwh [ 15 ] , const
real_T kaoh5h1jjz [ 12 ] , const real_T iafuiitpqg [ 12 ] , const real_T
m2a2e4lo2y [ 12 ] , const real_T bh04ltxqgw [ 12 ] , real_T evz3bukxwb ,
real_T hkquzci0sv , real_T kyzfoe2r5r , real_T khgsblrmg4 , const real_T
j3bzdqdntj [ 6 ] , mdnaam41iv * localB ) { real_T xp [ 24 ] ; real_T xp_other
[ 24 ] ; real_T Diff_Star_to_Other [ 12 ] ; static const int8_T a [ 9 ] = { 1
, 0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 } ; real_T dty1h0qiha [ 48 ] ; int32_T i ;
int32_T i_p ; real_T tmp ; int32_T khgsblrmg4_p ; int32_T i_e ; real_T a_p ;
for ( i = 0 ; i < 12 ; i ++ ) { dty1h0qiha [ i ] = kaoh5h1jjz [ i ] ;
dty1h0qiha [ i + 12 ] = iafuiitpqg [ i ] ; dty1h0qiha [ i + 24 ] = m2a2e4lo2y
[ i ] ; dty1h0qiha [ i + 36 ] = bh04ltxqgw [ i ] ; } khgsblrmg4_p = ( int32_T
) ( khgsblrmg4 + 1.0 ) ; for ( i_e = 0 ; i_e < 3 ; i_e ++ ) { a_p = ( real_T
) a [ i_e + 6 ] * ajjd5ffcwh [ khgsblrmg4_p + 9 ] + ( ( real_T ) a [ i_e + 3
] * ajjd5ffcwh [ khgsblrmg4_p + 4 ] + ajjd5ffcwh [ khgsblrmg4_p - 1 ] * (
real_T ) a [ i_e ] ) ; Diff_Star_to_Other [ i_e ] = a_p - ajjd5ffcwh [ 5 *
i_e + 1 ] ; Diff_Star_to_Other [ i_e + 3 ] = a_p - ajjd5ffcwh [ 5 * i_e + 2 ]
; Diff_Star_to_Other [ i_e + 6 ] = a_p - ajjd5ffcwh [ 5 * i_e + 3 ] ;
Diff_Star_to_Other [ i_e + 9 ] = a_p - ajjd5ffcwh [ 5 * i_e + 4 ] ; } for ( i
= 0 ; i < 4 ; i ++ ) { khgsblrmg4_p = i * 12 ; i_p = i * 12 ; xp [ 6 * i ] =
dty1h0qiha [ khgsblrmg4_p ] ; xp [ 3 + 6 * i ] = dty1h0qiha [ i_p + 6 ] ; xp
[ 1 + 6 * i ] = dty1h0qiha [ 1 + khgsblrmg4_p ] ; xp [ 4 + 6 * i ] =
dty1h0qiha [ i_p + 7 ] ; xp [ 2 + 6 * i ] = dty1h0qiha [ 2 + khgsblrmg4_p ] ;
xp [ 5 + 6 * i ] = dty1h0qiha [ i_p + 8 ] ; } for ( i = 0 ; i < 6 ; i ++ ) {
localB -> j50ump3tqb [ i ] = 0.0 ; } a_p = rtP . BN [ ( ( ( ( int32_T )
khgsblrmg4 - 1 ) << 2 ) + ( int32_T ) khgsblrmg4 ) - 1 ] ; khgsblrmg4_p = (
int32_T ) khgsblrmg4 ; i_p = ( int32_T ) ( khgsblrmg4 + 1.0 ) ; i = ( int32_T
) khgsblrmg4 ; localB -> j50ump3tqb [ 0 ] += ( - ( xp [ ( khgsblrmg4_p - 1 )
* 6 ] - evz3bukxwb ) + ajjd5ffcwh [ i_p - 1 ] ) * a_p ; localB -> j50ump3tqb
[ 3 ] += - ( xp [ ( i - 1 ) * 6 + 3 ] - j3bzdqdntj [ 0 ] ) ; localB ->
j50ump3tqb [ 1 ] += ( - ( xp [ ( khgsblrmg4_p - 1 ) * 6 + 1 ] - hkquzci0sv )
+ ajjd5ffcwh [ i_p + 4 ] ) * a_p ; localB -> j50ump3tqb [ 4 ] += - ( xp [ ( i
- 1 ) * 6 + 4 ] - j3bzdqdntj [ 1 ] ) ; localB -> j50ump3tqb [ 2 ] += ( - ( xp
[ ( khgsblrmg4_p - 1 ) * 6 + 2 ] - kyzfoe2r5r ) + ajjd5ffcwh [ i_p + 9 ] ) *
a_p ; localB -> j50ump3tqb [ 5 ] += - ( xp [ ( i - 1 ) * 6 + 5 ] - j3bzdqdntj
[ 2 ] ) ; khgsblrmg4_p = ( int32_T ) khgsblrmg4 ; i_p = ( int32_T )
khgsblrmg4 ; for ( i = 0 ; i < 4 ; i ++ ) { for ( i_e = 0 ; i_e < 6 ; i_e ++
) { xp_other [ i_e + 6 * i ] = xp [ 6 * i + i_e ] ; } a_p = rtP . AN [ ( ( i
<< 2 ) + ( int32_T ) khgsblrmg4 ) - 1 ] ; tmp = rtP . AN [ ( ( i << 2 ) + (
int32_T ) khgsblrmg4 ) - 1 ] ; localB -> j50ump3tqb [ 0 ] += ( - ( xp [ (
khgsblrmg4_p - 1 ) * 6 ] - xp_other [ 6 * i ] ) + Diff_Star_to_Other [ 3 * i
] ) * a_p ; localB -> j50ump3tqb [ 3 ] += - ( xp [ ( i_p - 1 ) * 6 + 3 ] -
xp_other [ 6 * i + 3 ] ) * tmp ; localB -> j50ump3tqb [ 1 ] += ( - ( xp [ (
khgsblrmg4_p - 1 ) * 6 + 1 ] - xp_other [ 6 * i + 1 ] ) + Diff_Star_to_Other
[ 3 * i + 1 ] ) * a_p ; localB -> j50ump3tqb [ 4 ] += - ( xp [ ( i_p - 1 ) *
6 + 4 ] - xp_other [ 6 * i + 4 ] ) * tmp ; localB -> j50ump3tqb [ 2 ] += ( -
( xp [ ( khgsblrmg4_p - 1 ) * 6 + 2 ] - xp_other [ 6 * i + 2 ] ) +
Diff_Star_to_Other [ 3 * i + 2 ] ) * a_p ; localB -> j50ump3tqb [ 5 ] += - (
xp [ ( i_p - 1 ) * 6 + 5 ] - xp_other [ 6 * i + 5 ] ) * tmp ; } } static void
nrqzh0iv0s ( const real_T a [ 9 ] , real_T c [ 9 ] ) { real_T x [ 9 ] ;
int32_T p1 ; int32_T p2 ; int32_T p3 ; real_T absx11 ; real_T absx21 ; real_T
absx31 ; int32_T itmp ; memcpy ( & x [ 0 ] , & a [ 0 ] , 9U * sizeof ( real_T
) ) ; p1 = 0 ; p2 = 3 ; p3 = 6 ; absx11 = muDoubleScalarAbs ( a [ 0 ] ) ;
absx21 = muDoubleScalarAbs ( a [ 1 ] ) ; absx31 = muDoubleScalarAbs ( a [ 2 ]
) ; if ( ( absx21 > absx11 ) && ( absx21 > absx31 ) ) { p1 = 3 ; p2 = 0 ; x [
0 ] = a [ 1 ] ; x [ 1 ] = a [ 0 ] ; x [ 3 ] = a [ 4 ] ; x [ 4 ] = a [ 3 ] ; x
[ 6 ] = a [ 7 ] ; x [ 7 ] = a [ 6 ] ; } else { if ( absx31 > absx11 ) { p1 =
6 ; p3 = 0 ; x [ 0 ] = a [ 2 ] ; x [ 2 ] = a [ 0 ] ; x [ 3 ] = a [ 5 ] ; x [
5 ] = a [ 3 ] ; x [ 6 ] = a [ 8 ] ; x [ 8 ] = a [ 6 ] ; } } absx11 = x [ 1 ]
/ x [ 0 ] ; x [ 1 ] /= x [ 0 ] ; absx21 = x [ 2 ] / x [ 0 ] ; x [ 2 ] /= x [
0 ] ; x [ 4 ] -= absx11 * x [ 3 ] ; x [ 5 ] -= absx21 * x [ 3 ] ; x [ 7 ] -=
absx11 * x [ 6 ] ; x [ 8 ] -= absx21 * x [ 6 ] ; if ( muDoubleScalarAbs ( x [
5 ] ) > muDoubleScalarAbs ( x [ 4 ] ) ) { itmp = p2 ; p2 = p3 ; p3 = itmp ; x
[ 1 ] = absx21 ; x [ 2 ] = absx11 ; absx11 = x [ 4 ] ; x [ 4 ] = x [ 5 ] ; x
[ 5 ] = absx11 ; absx11 = x [ 7 ] ; x [ 7 ] = x [ 8 ] ; x [ 8 ] = absx11 ; }
absx11 = x [ 5 ] / x [ 4 ] ; x [ 5 ] /= x [ 4 ] ; x [ 8 ] -= absx11 * x [ 7 ]
; absx11 = ( x [ 5 ] * x [ 1 ] - x [ 2 ] ) / x [ 8 ] ; absx21 = - ( x [ 7 ] *
absx11 + x [ 1 ] ) / x [ 4 ] ; c [ p1 ] = ( ( 1.0 - x [ 3 ] * absx21 ) - x [
6 ] * absx11 ) / x [ 0 ] ; c [ p1 + 1 ] = absx21 ; c [ p1 + 2 ] = absx11 ;
absx11 = - x [ 5 ] / x [ 8 ] ; absx21 = ( 1.0 - x [ 7 ] * absx11 ) / x [ 4 ]
; c [ p2 ] = - ( x [ 3 ] * absx21 + x [ 6 ] * absx11 ) / x [ 0 ] ; c [ p2 + 1
] = absx21 ; c [ p2 + 2 ] = absx11 ; absx11 = 1.0 / x [ 8 ] ; absx21 = - x [
7 ] * absx11 / x [ 4 ] ; c [ p3 ] = - ( x [ 3 ] * absx21 + x [ 6 ] * absx11 )
/ x [ 0 ] ; c [ p3 + 1 ] = absx21 ; c [ p3 + 2 ] = absx11 ; } void fwg3hcnrgf
( const real_T fzwwr3n0bo [ 12 ] , const real_T cmg4poosto [ 4 ] , real_T
pcbyigcow4 , lvtfhbh3ww * localB ) { real_T Rq [ 9 ] ; real_T EXT_PRD [ 3 ] ;
real_T F1 ; real_T F2 ; real_T F3 ; real_T F4 ; real_T FTT [ 3 ] ; real_T b ;
real_T x ; real_T tmp [ 9 ] ; real_T tmp_p [ 9 ] ; real_T FTT_p [ 3 ] ;
real_T tmp_e [ 3 ] ; real_T tmp_i [ 3 ] ; real_T tmp_m [ 3 ] ; real_T b_a [ 3
] ; int32_T i ; real_T tmp_g ; Rq [ 0 ] = muDoubleScalarCos ( fzwwr3n0bo [ 5
] ) * muDoubleScalarCos ( fzwwr3n0bo [ 4 ] ) ; Rq [ 3 ] = muDoubleScalarCos (
fzwwr3n0bo [ 5 ] ) * muDoubleScalarSin ( fzwwr3n0bo [ 4 ] ) *
muDoubleScalarSin ( fzwwr3n0bo [ 3 ] ) + - muDoubleScalarSin ( fzwwr3n0bo [ 5
] ) * muDoubleScalarCos ( fzwwr3n0bo [ 3 ] ) ; Rq [ 6 ] = muDoubleScalarCos (
fzwwr3n0bo [ 5 ] ) * muDoubleScalarSin ( fzwwr3n0bo [ 4 ] ) *
muDoubleScalarCos ( fzwwr3n0bo [ 3 ] ) + muDoubleScalarSin ( fzwwr3n0bo [ 5 ]
) * muDoubleScalarSin ( fzwwr3n0bo [ 3 ] ) ; Rq [ 1 ] = muDoubleScalarSin (
fzwwr3n0bo [ 5 ] ) * muDoubleScalarCos ( fzwwr3n0bo [ 4 ] ) ; Rq [ 4 ] =
muDoubleScalarSin ( fzwwr3n0bo [ 5 ] ) * muDoubleScalarSin ( fzwwr3n0bo [ 4 ]
) * muDoubleScalarSin ( fzwwr3n0bo [ 3 ] ) + muDoubleScalarCos ( fzwwr3n0bo [
5 ] ) * muDoubleScalarCos ( fzwwr3n0bo [ 3 ] ) ; Rq [ 7 ] = muDoubleScalarSin
( fzwwr3n0bo [ 5 ] ) * muDoubleScalarSin ( fzwwr3n0bo [ 4 ] ) *
muDoubleScalarCos ( fzwwr3n0bo [ 3 ] ) + - muDoubleScalarCos ( fzwwr3n0bo [ 5
] ) * muDoubleScalarSin ( fzwwr3n0bo [ 3 ] ) ; Rq [ 2 ] = - muDoubleScalarSin
( fzwwr3n0bo [ 4 ] ) ; Rq [ 5 ] = muDoubleScalarCos ( fzwwr3n0bo [ 4 ] ) *
muDoubleScalarSin ( fzwwr3n0bo [ 3 ] ) ; Rq [ 8 ] = muDoubleScalarCos (
fzwwr3n0bo [ 4 ] ) * muDoubleScalarCos ( fzwwr3n0bo [ 3 ] ) ; for ( i = 0 ; i
< 3 ; i ++ ) { EXT_PRD [ i ] = 0.0 ; FTT [ i ] = rtP . J [ i + 6 ] *
fzwwr3n0bo [ 11 ] + ( rtP . J [ i + 3 ] * fzwwr3n0bo [ 10 ] + rtP . J [ i ] *
fzwwr3n0bo [ 9 ] ) ; } EXT_PRD [ 1 ] = - ( fzwwr3n0bo [ 9 ] * FTT [ 2 ] -
fzwwr3n0bo [ 11 ] * FTT [ 0 ] ) ; EXT_PRD [ 0 ] = fzwwr3n0bo [ 9 ] * FTT [ 1
] - fzwwr3n0bo [ 10 ] * FTT [ 0 ] ; F1 = cmg4poosto [ 0 ] * cmg4poosto [ 0 ]
* rtP . Kf ; F2 = cmg4poosto [ 1 ] * cmg4poosto [ 1 ] * rtP . Kf ; F3 =
cmg4poosto [ 2 ] * cmg4poosto [ 2 ] * rtP . Kf ; F4 = cmg4poosto [ 3 ] *
cmg4poosto [ 3 ] * rtP . Kf ; tmp_g = ( ( F1 + F2 ) + F3 ) + F4 ; for ( i = 0
; i < 3 ; i ++ ) { FTT [ i ] = Rq [ i + 6 ] * tmp_g + ( Rq [ i + 3 ] * 0.0 +
Rq [ i ] * 0.0 ) ; } tmp_g = 1.0 / rtP . M ; b = 0.1 * muDoubleScalarSin (
pcbyigcow4 ) ; x = muDoubleScalarSin ( pcbyigcow4 ) ; tmp [ 0 ] = 1.0 ; tmp [
3 ] = 0.0 ; tmp [ 6 ] = - muDoubleScalarSin ( fzwwr3n0bo [ 4 ] ) ; tmp [ 1 ]
= 0.0 ; tmp [ 4 ] = muDoubleScalarCos ( fzwwr3n0bo [ 3 ] ) ; tmp [ 7 ] =
muDoubleScalarCos ( fzwwr3n0bo [ 4 ] ) * muDoubleScalarSin ( fzwwr3n0bo [ 3 ]
) ; tmp [ 2 ] = 0.0 ; tmp [ 5 ] = - muDoubleScalarSin ( fzwwr3n0bo [ 3 ] ) ;
tmp [ 8 ] = muDoubleScalarCos ( fzwwr3n0bo [ 4 ] ) * muDoubleScalarCos (
fzwwr3n0bo [ 3 ] ) ; nrqzh0iv0s ( tmp , tmp_p ) ; nrqzh0iv0s ( rtP . J , tmp
) ; FTT_p [ 0 ] = FTT [ 0 ] ; FTT_p [ 1 ] = FTT [ 1 ] ; FTT_p [ 2 ] = FTT [ 2
] ; FTT [ 0 ] = rtP . M * 0.0 ; FTT [ 1 ] = rtP . M * 0.0 ; FTT [ 2 ] = rtP .
M * rtP . ge ; tmp_e [ 0 ] = ( F3 - F1 ) * rtP . Lq ; tmp_e [ 1 ] = ( F4 - F2
) * rtP . Lq ; tmp_e [ 2 ] = ( ( cmg4poosto [ 0 ] * cmg4poosto [ 0 ] * rtP .
Kt - cmg4poosto [ 1 ] * cmg4poosto [ 1 ] * rtP . Kt ) + cmg4poosto [ 2 ] *
cmg4poosto [ 2 ] * rtP . Kt ) - cmg4poosto [ 3 ] * cmg4poosto [ 3 ] * rtP .
Kt ; for ( i = 0 ; i < 3 ; i ++ ) { tmp_i [ i ] = ( tmp_e [ i ] - fzwwr3n0bo
[ 9 + i ] * rtP . Ka ) - EXT_PRD [ i ] ; b_a [ i ] = ( ( FTT_p [ i ] -
fzwwr3n0bo [ 6 + i ] * rtP . Kd ) - FTT [ i ] ) * tmp_g + ( ( Rq [ i + 3 ] *
b * 0.0 + Rq [ i ] * b * 0.0 ) + Rq [ i + 6 ] * b ) ; tmp_m [ i ] = tmp_p [ i
+ 6 ] * fzwwr3n0bo [ 11 ] + ( tmp_p [ i + 3 ] * fzwwr3n0bo [ 10 ] + tmp_p [ i
] * fzwwr3n0bo [ 9 ] ) ; } for ( i = 0 ; i < 3 ; i ++ ) { localB ->
lfrnaagn2k [ i ] = fzwwr3n0bo [ 6 + i ] ; localB -> lfrnaagn2k [ i + 3 ] =
tmp_m [ i ] ; localB -> lfrnaagn2k [ i + 6 ] = b_a [ i ] ; localB ->
lfrnaagn2k [ i + 9 ] = ( ( tmp [ i + 3 ] * tmp_i [ 1 ] + tmp [ i ] * tmp_i [
0 ] ) + tmp [ i + 6 ] * tmp_i [ 2 ] ) + x ; } } void kuqyagplbz ( const
real_T b5qfiiiquc [ 15 ] , ao2lyclpb5 * localB ) { real_T num ; int32_T i ;
memset ( & localB -> lsl2hmd5f3 [ 0 ] , 0 , 15U * sizeof ( real_T ) ) ; num =
0.0 ; for ( i = 0 ; i < 5 ; i ++ ) { num ++ ; localB -> lsl2hmd5f3 [ (
int32_T ) num - 1 ] = b5qfiiiquc [ i ] ; num ++ ; localB -> lsl2hmd5f3 [ (
int32_T ) num - 1 ] = b5qfiiiquc [ i + 5 ] ; num ++ ; localB -> lsl2hmd5f3 [
( int32_T ) num - 1 ] = b5qfiiiquc [ i + 10 ] ; } } void apebeofw3g ( const
real_T apgw05wcpp [ 36 ] , l41nytie0l * localB ) { real_T num ; int32_T i ;
int32_T j ; memset ( & localB -> mwv442a0wi [ 0 ] , 0 , 36U * sizeof ( real_T
) ) ; num = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { for ( j = 0 ; j < 6 ; j ++ )
{ num ++ ; localB -> mwv442a0wi [ ( int32_T ) num - 1 ] = apgw05wcpp [ 6 * j
+ i ] ; } } } void MdlInitialize ( void ) { int32_T i ; memcpy ( & rtX .
filapmf4cs [ 0 ] , & rtP . Integrator4_IC [ 0 ] , 36U * sizeof ( real_T ) ) ;
memcpy ( & rtX . dkf0xcw1to [ 0 ] , & rtP . Integrator5_IC [ 0 ] , 15U *
sizeof ( real_T ) ) ; memcpy ( & rtX . oweh1cvpwb [ 0 ] , & rtP .
Integrator_IC [ 0 ] , 12U * sizeof ( real_T ) ) ; memcpy ( & rtX . hyrtgzkn1j
[ 0 ] , & rtP . Integrator_IC_ll5yvtvr3k [ 0 ] , 12U * sizeof ( real_T ) ) ;
memcpy ( & rtX . lnyqg3gjey [ 0 ] , & rtP . Integrator_IC_j4cpqfdea5 [ 0 ] ,
12U * sizeof ( real_T ) ) ; memcpy ( & rtX . pet0sahf2n [ 0 ] , & rtP .
Integrator_IC_bhnfxbuaak [ 0 ] , 12U * sizeof ( real_T ) ) ; rtX . ajjwc4eanm
= 0.0 ; rtX . oaqvw1cmmj = 0.0 ; rtX . lp3durdr4l = 0.0 ; for ( i = 0 ; i < 6
; i ++ ) { rtDW . kstiocozka [ i ] = rtP . Memory2_InitialCondition [ i ] ;
rtX . ohuimt1kj1 [ i ] = rtP . Integrator1_IC [ i ] ; } memcpy ( & rtX .
cn4y1idp3t [ 0 ] , & rtP . Integrator3_IC [ 0 ] , 36U * sizeof ( real_T ) ) ;
rtX . jhtu45vxt4 [ 0 ] = rtP . Integrator_IC_fvooay02cq [ 0 ] ; rtX .
nytonewnkc [ 0 ] = rtP . Integrator1_IC_gvc4lbz4zt [ 0 ] ; rtX . jhtu45vxt4 [
1 ] = rtP . Integrator_IC_fvooay02cq [ 1 ] ; rtX . nytonewnkc [ 1 ] = rtP .
Integrator1_IC_gvc4lbz4zt [ 1 ] ; rtX . jhtu45vxt4 [ 2 ] = rtP .
Integrator_IC_fvooay02cq [ 2 ] ; rtX . nytonewnkc [ 2 ] = rtP .
Integrator1_IC_gvc4lbz4zt [ 2 ] ; memcpy ( & rtX . ku4bbglgq2 [ 0 ] , & rtP .
Integrator_IC_dxdefvbqqz [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & rtX .
kdpp4uug5y [ 0 ] , & rtP . Integrator1_IC_dhvfmby03k [ 0 ] , 15U * sizeof (
real_T ) ) ; rtX . nzmi3egeno [ 0 ] = rtP . Integrator_IC_hkn1g5z50u [ 0 ] ;
rtX . iju3hejemb [ 0 ] = rtP . Integrator6_IC [ 0 ] ; rtX . nzmi3egeno [ 1 ]
= rtP . Integrator_IC_hkn1g5z50u [ 1 ] ; rtX . iju3hejemb [ 1 ] = rtP .
Integrator6_IC [ 1 ] ; rtX . nzmi3egeno [ 2 ] = rtP .
Integrator_IC_hkn1g5z50u [ 2 ] ; rtX . iju3hejemb [ 2 ] = rtP .
Integrator6_IC [ 2 ] ; rtX . pqorbdh2sp [ 0 ] = rtP .
Integrator_IC_m5trwyg02m [ 0 ] ; rtX . lacvtmifen [ 0 ] = rtP .
Integrator1_IC_o1x1rfxplt [ 0 ] ; rtX . pqorbdh2sp [ 1 ] = rtP .
Integrator_IC_m5trwyg02m [ 1 ] ; rtX . lacvtmifen [ 1 ] = rtP .
Integrator1_IC_o1x1rfxplt [ 1 ] ; rtX . pqorbdh2sp [ 2 ] = rtP .
Integrator_IC_m5trwyg02m [ 2 ] ; rtX . lacvtmifen [ 2 ] = rtP .
Integrator1_IC_o1x1rfxplt [ 2 ] ; rtDW . f0c002qbsv = ( rtInf ) ; rtDW .
mv5h2lqtxu = ( rtInf ) ; rtDW . j2jsulvdm1 = ( rtInf ) ; rtDW . pjv2r5rhzy =
( rtInf ) ; rtX . ntzccs4iix [ 0 ] = rtP . Integrator_IC_eqgi5u5j2i ; rtX .
ntzccs4iix [ 1 ] = rtP . Integrator_IC_eqgi5u5j2i ; rtX . ntzccs4iix [ 2 ] =
rtP . Integrator_IC_eqgi5u5j2i ; for ( i = 0 ; i < 6 ; i ++ ) { rtX .
jgaq55ujqb [ i ] = rtP . Integrator2_IC [ i ] ; rtX . ncicpbmtkr [ i ] = rtP
. Integrator_IC_br54vzkuoj [ i ] ; rtX . lzogr0v4zv [ i ] = rtP .
Integrator3_IC_cqn1tixb11 [ i ] ; rtDW . hwmovhfzf2 [ i ] = rtP .
Memory_InitialCondition [ i ] ; rtX . hcwdtblhkw [ i ] = rtP .
Integrator_IC_ak45y034mz [ i ] ; rtX . irj1jq1t3z [ i ] = rtP .
Integrator1_IC_lwsrxvv1dn [ i ] ; } memcpy ( & rtX . pteyqc24bu [ 0 ] , & rtP
. Integrator1_IC_kch0jyq4l1 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
rtX . gaxneeplm1 [ 0 ] , & rtP . Integrator_IC_m2wkiw3enz [ 0 ] , 36U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtX . bir1ggdein [ i ] =
rtP . Integrator2_IC_gzbylzelej [ i ] ; } memcpy ( & rtX . f20hsrwsbu [ 0 ] ,
& rtP . Integrator5_IC_hdhhn35ras [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy
( & rtX . brw5ncjp0j [ 0 ] , & rtP . Integrator5_IC_nwcrjrmntz [ 0 ] , 15U *
sizeof ( real_T ) ) ; memcpy ( & rtX . bktfffzsqn [ 0 ] , & rtP .
Integrator5_IC_bdphhlsjj4 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & rtDW
. be0imqxqro [ 0 ] , & rtP . Memory3_InitialCondition [ 0 ] , 15U * sizeof (
real_T ) ) ; memcpy ( & rtDW . mx4qqpknqe [ 0 ] , & rtP .
Memory3_InitialCondition_odrfcddzo2 [ 0 ] , 15U * sizeof ( real_T ) ) ;
memcpy ( & rtDW . cbxnmjiv35 [ 0 ] , & rtP .
Memory3_InitialCondition_a0irr1iih0 [ 0 ] , 15U * sizeof ( real_T ) ) ;
memcpy ( & rtDW . j3sy2mrawp [ 0 ] , & rtP .
Memory3_InitialCondition_e4520jnbi2 [ 0 ] , 15U * sizeof ( real_T ) ) ; rtX .
ivgcimcucj = 0.0 ; rtX . addj05wge0 = 0.0 ; rtX . mvx4m5pboe = 0.0 ; rtDW .
ha4pdvtcus [ 0 ] = rtP . Memory_InitialCondition_kfc1wjzym5 [ 0 ] ; rtDW .
coqd1tvx1u [ 0 ] = rtP . Memory5_InitialCondition [ 0 ] ; rtX . e024iaip1v [
0 ] = rtP . Integrator_IC_dv2mdr05ix [ 0 ] ; rtX . a1515hp3gw [ 0 ] = rtP .
Integrator_IC_lea510ieom [ 0 ] ; rtX . pf5zjr3mp2 [ 0 ] = rtP .
Integrator_IC_b2z2fy5xzx [ 0 ] ; rtDW . jof3zfdlkv [ 0 ] = rtP .
Memory_InitialCondition_a15umzwd5d [ 0 ] ; rtDW . pkkl0tyrak [ 0 ] = rtP .
Memory_InitialCondition_fdpfscth32 [ 0 ] ; rtDW . ps4xa0zgh4 [ 0 ] = rtP .
Memory_InitialCondition_pnqhyj4v2u [ 0 ] ; rtX . jno5haxgvz [ 0 ] = rtP .
Integrator6_IC_pn0cggvpg5 [ 0 ] ; rtX . dzhvipaz2k [ 0 ] = rtP .
Integrator6_IC_oyuxsjsyrt [ 0 ] ; rtX . micy5ovmck [ 0 ] = rtP .
Integrator6_IC_llwvnjivrz [ 0 ] ; rtDW . ndbjd515lt [ 0 ] = rtP .
Memory5_InitialCondition_omczlhgywm [ 0 ] ; rtDW . d4dmyhlqbm [ 0 ] = rtP .
Memory5_InitialCondition_krghwgtwzz [ 0 ] ; rtDW . kuepayhel0 [ 0 ] = rtP .
Memory5_InitialCondition_hwmjgecp2p [ 0 ] ; rtDW . ha4pdvtcus [ 1 ] = rtP .
Memory_InitialCondition_kfc1wjzym5 [ 1 ] ; rtDW . coqd1tvx1u [ 1 ] = rtP .
Memory5_InitialCondition [ 1 ] ; rtX . e024iaip1v [ 1 ] = rtP .
Integrator_IC_dv2mdr05ix [ 1 ] ; rtX . a1515hp3gw [ 1 ] = rtP .
Integrator_IC_lea510ieom [ 1 ] ; rtX . pf5zjr3mp2 [ 1 ] = rtP .
Integrator_IC_b2z2fy5xzx [ 1 ] ; rtDW . jof3zfdlkv [ 1 ] = rtP .
Memory_InitialCondition_a15umzwd5d [ 1 ] ; rtDW . pkkl0tyrak [ 1 ] = rtP .
Memory_InitialCondition_fdpfscth32 [ 1 ] ; rtDW . ps4xa0zgh4 [ 1 ] = rtP .
Memory_InitialCondition_pnqhyj4v2u [ 1 ] ; rtX . jno5haxgvz [ 1 ] = rtP .
Integrator6_IC_pn0cggvpg5 [ 1 ] ; rtX . dzhvipaz2k [ 1 ] = rtP .
Integrator6_IC_oyuxsjsyrt [ 1 ] ; rtX . micy5ovmck [ 1 ] = rtP .
Integrator6_IC_llwvnjivrz [ 1 ] ; rtDW . ndbjd515lt [ 1 ] = rtP .
Memory5_InitialCondition_omczlhgywm [ 1 ] ; rtDW . d4dmyhlqbm [ 1 ] = rtP .
Memory5_InitialCondition_krghwgtwzz [ 1 ] ; rtDW . kuepayhel0 [ 1 ] = rtP .
Memory5_InitialCondition_hwmjgecp2p [ 1 ] ; rtDW . ha4pdvtcus [ 2 ] = rtP .
Memory_InitialCondition_kfc1wjzym5 [ 2 ] ; rtDW . coqd1tvx1u [ 2 ] = rtP .
Memory5_InitialCondition [ 2 ] ; rtX . e024iaip1v [ 2 ] = rtP .
Integrator_IC_dv2mdr05ix [ 2 ] ; rtX . a1515hp3gw [ 2 ] = rtP .
Integrator_IC_lea510ieom [ 2 ] ; rtX . pf5zjr3mp2 [ 2 ] = rtP .
Integrator_IC_b2z2fy5xzx [ 2 ] ; rtDW . jof3zfdlkv [ 2 ] = rtP .
Memory_InitialCondition_a15umzwd5d [ 2 ] ; rtDW . pkkl0tyrak [ 2 ] = rtP .
Memory_InitialCondition_fdpfscth32 [ 2 ] ; rtDW . ps4xa0zgh4 [ 2 ] = rtP .
Memory_InitialCondition_pnqhyj4v2u [ 2 ] ; rtX . jno5haxgvz [ 2 ] = rtP .
Integrator6_IC_pn0cggvpg5 [ 2 ] ; rtX . dzhvipaz2k [ 2 ] = rtP .
Integrator6_IC_oyuxsjsyrt [ 2 ] ; rtX . micy5ovmck [ 2 ] = rtP .
Integrator6_IC_llwvnjivrz [ 2 ] ; rtDW . ndbjd515lt [ 2 ] = rtP .
Memory5_InitialCondition_omczlhgywm [ 2 ] ; rtDW . d4dmyhlqbm [ 2 ] = rtP .
Memory5_InitialCondition_krghwgtwzz [ 2 ] ; rtDW . kuepayhel0 [ 2 ] = rtP .
Memory5_InitialCondition_hwmjgecp2p [ 2 ] ; memcpy ( & rtX . dv53n1gvyw [ 0 ]
, & rtP . Integrator4_IC_bqwjoax0yj [ 0 ] , 36U * sizeof ( real_T ) ) ;
memcpy ( & rtX . aawca0xb2d [ 0 ] , & rtP . Integrator4_IC_hsxa2r15rn [ 0 ] ,
36U * sizeof ( real_T ) ) ; memcpy ( & rtX . jbl2zb4c4m [ 0 ] , & rtP .
Integrator4_IC_llpsksryx3 [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i
< 6 ; i ++ ) { rtDW . idvr4rh4mu [ i ] = rtP .
Memory2_InitialCondition_ixkbydzld5 [ i ] ; rtDW . fztt0z3pyb [ i ] = rtP .
Memory2_InitialCondition_opuvtlyd5u [ i ] ; rtDW . lmomxeodsu [ i ] = rtP .
Memory2_InitialCondition_ozc5y51w41 [ i ] ; rtX . ljhpwq5usb [ i ] = rtP .
Integrator1_IC_ix2kdurm0a [ i ] ; } memcpy ( & rtX . kg0ugkqytj [ 0 ] , & rtP
. Integrator3_IC_pl55dsru54 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
rtX . naxi5vltsi [ 0 ] , & rtP . Integrator_IC_alj3l4jksp [ 0 ] , 15U *
sizeof ( real_T ) ) ; memcpy ( & rtX . ew3cughtjj [ 0 ] , & rtP .
Integrator1_IC_e434obmerv [ 0 ] , 15U * sizeof ( real_T ) ) ; rtX .
fzkicub43y [ 0 ] = rtP . Integrator_IC_aqhpgobmia [ 0 ] ; rtX . o30rzpjaco [
0 ] = rtP . Integrator1_IC_d2gz3itgvv [ 0 ] ; rtX . fzkicub43y [ 1 ] = rtP .
Integrator_IC_aqhpgobmia [ 1 ] ; rtX . o30rzpjaco [ 1 ] = rtP .
Integrator1_IC_d2gz3itgvv [ 1 ] ; rtX . fzkicub43y [ 2 ] = rtP .
Integrator_IC_aqhpgobmia [ 2 ] ; rtX . o30rzpjaco [ 2 ] = rtP .
Integrator1_IC_d2gz3itgvv [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { rtX .
a1k30snvq0 [ i ] = rtP . Integrator2_IC_dlogixgno1 [ i ] ; rtX . cimgd544vu [
i ] = rtP . Integrator3_IC_irlb5jed0u [ i ] ; rtDW . lgcgglfpr5 [ i ] = rtP .
Memory_InitialCondition_a1f4f1efjn [ i ] ; rtX . ccnwggclyg [ i ] = rtP .
Integrator_IC_f4jweekbgj [ i ] ; rtX . eo3jeu2u13 [ i ] = rtP .
Integrator1_IC_dggkktknfv [ i ] ; } memcpy ( & rtX . g2nqcuil3a [ 0 ] , & rtP
. Integrator1_IC_ovoo50kpue [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
rtX . cy42njcpkh [ 0 ] , & rtP . Integrator_IC_asfyyakemt [ 0 ] , 36U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtX . fdenftcp5x [ i ] =
rtP . Integrator2_IC_cpeckpugec [ i ] ; rtX . ic3q3cbrlg [ i ] = rtP .
Integrator1_IC_fmopbs2ypa [ i ] ; } memcpy ( & rtX . ddymkn2sup [ 0 ] , & rtP
. Integrator3_IC_fagx4trrvf [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
rtX . e0j4zo50kw [ 0 ] , & rtP . Integrator_IC_ontqyxzrde [ 0 ] , 15U *
sizeof ( real_T ) ) ; memcpy ( & rtX . ocwmo4ag2m [ 0 ] , & rtP .
Integrator1_IC_hl1b0vrylw [ 0 ] , 15U * sizeof ( real_T ) ) ; rtX .
ljpgz2iakn [ 0 ] = rtP . Integrator_IC_ayfhthp0v4 [ 0 ] ; rtX . ehwg0uvmnb [
0 ] = rtP . Integrator1_IC_koasodr4as [ 0 ] ; rtX . ljpgz2iakn [ 1 ] = rtP .
Integrator_IC_ayfhthp0v4 [ 1 ] ; rtX . ehwg0uvmnb [ 1 ] = rtP .
Integrator1_IC_koasodr4as [ 1 ] ; rtX . ljpgz2iakn [ 2 ] = rtP .
Integrator_IC_ayfhthp0v4 [ 2 ] ; rtX . ehwg0uvmnb [ 2 ] = rtP .
Integrator1_IC_koasodr4as [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { rtX .
lbz5rkxaei [ i ] = rtP . Integrator2_IC_k5gg2bqqkf [ i ] ; rtX . hlfemejl1b [
i ] = rtP . Integrator3_IC_jiozsrcxii [ i ] ; rtDW . ofcsp2xnjt [ i ] = rtP .
Memory_InitialCondition_az54btma51 [ i ] ; rtX . pxyjcvvevd [ i ] = rtP .
Integrator_IC_ghhpktks14 [ i ] ; rtX . kctrjublf0 [ i ] = rtP .
Integrator1_IC_fyphguyldl [ i ] ; } memcpy ( & rtX . g0dx10c2um [ 0 ] , & rtP
. Integrator1_IC_mdknrruii3 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
rtX . djovh5b3kq [ 0 ] , & rtP . Integrator_IC_kpzn5be1yb [ 0 ] , 36U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtX . e2pcsiol3y [ i ] =
rtP . Integrator2_IC_l5f4ire3yt [ i ] ; rtX . egalmcbuqp [ i ] = rtP .
Integrator1_IC_fvtztp1tml [ i ] ; } memcpy ( & rtX . mxr42d2wl0 [ 0 ] , & rtP
. Integrator3_IC_okmfayw4p2 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
rtX . j32sa5rgd2 [ 0 ] , & rtP . Integrator_IC_cyubkmsog4 [ 0 ] , 15U *
sizeof ( real_T ) ) ; memcpy ( & rtX . cpltwh23xe [ 0 ] , & rtP .
Integrator1_IC_kh4niuf2a4 [ 0 ] , 15U * sizeof ( real_T ) ) ; rtX .
pnhbys003g [ 0 ] = rtP . Integrator_IC_cfnxz4nui1 [ 0 ] ; rtX . lqaehp4prm [
0 ] = rtP . Integrator1_IC_dtwgjipyua [ 0 ] ; rtX . pnhbys003g [ 1 ] = rtP .
Integrator_IC_cfnxz4nui1 [ 1 ] ; rtX . lqaehp4prm [ 1 ] = rtP .
Integrator1_IC_dtwgjipyua [ 1 ] ; rtX . pnhbys003g [ 2 ] = rtP .
Integrator_IC_cfnxz4nui1 [ 2 ] ; rtX . lqaehp4prm [ 2 ] = rtP .
Integrator1_IC_dtwgjipyua [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { rtX .
cqdcvy2yck [ i ] = rtP . Integrator2_IC_k5nghiidw3 [ i ] ; rtX . b4wxud2s5x [
i ] = rtP . Integrator3_IC_pzwcjpn3kt [ i ] ; rtDW . ktoqhjnspo [ i ] = rtP .
Memory_InitialCondition_iflgyxbk0d [ i ] ; rtX . bopvre4od1 [ i ] = rtP .
Integrator_IC_c1yketrjdu [ i ] ; rtX . it5wbajlge [ i ] = rtP .
Integrator1_IC_gjuqacamsk [ i ] ; } memcpy ( & rtX . jefvdqfjy5 [ 0 ] , & rtP
. Integrator1_IC_jokakqqnqr [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
rtX . dratvy31am [ 0 ] , & rtP . Integrator_IC_jhbgz2gwkd [ 0 ] , 36U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtX . l3ttobdsfe [ i ] =
rtP . Integrator2_IC_dgk30gjhwf [ i ] ; } rtX . jjw13zegrz = 0.0 ; rtX .
igwlihe1d5 = 0.0 ; } void MdlStart ( void ) { { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void * *
pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
char errMsgCreatingOSigstreamManager [ 16384 ] ; bool
errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { RTWLogSignalInfo rt_ScopeSignalInfo
; static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Scope" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . bfeqkoqnt0 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "PHI_d1" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . bfeqkoqnt0 .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Scope" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . pefmvwipw1 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "PHI_d2" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . pefmvwipw1 .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Scope" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . ow3bgvrozh . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "PHI_d3" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . ow3bgvrozh .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Scope" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . cacxxwupgo . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "PHI_d4" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . cacxxwupgo .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 6 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 6 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Scope1" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . iuen3vwhwf . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "xp" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . iuen3vwhwf . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 12 } ; static int_T rt_ScopeSignalNumDimensions
[ ] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 12 } ; static
void * rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static const char_T *
rt_ScopeSignalLabels [ ] = { "" } ; static char_T rt_ScopeSignalTitles [ ] =
"" ; static int_T rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes
[ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Scope16" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . k1i2cgujxx . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "x1" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . k1i2cgujxx . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 12 } ; static int_T rt_ScopeSignalNumDimensions
[ ] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 12 } ; static
void * rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static const char_T *
rt_ScopeSignalLabels [ ] = { "" } ; static char_T rt_ScopeSignalTitles [ ] =
"" ; static int_T rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes
[ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Scope17" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . o1qmdgtcqs . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "x2" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . o1qmdgtcqs . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 12 } ; static int_T rt_ScopeSignalNumDimensions
[ ] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 12 } ; static
void * rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static const char_T *
rt_ScopeSignalLabels [ ] = { "" } ; static char_T rt_ScopeSignalTitles [ ] =
"" ; static int_T rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes
[ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Scope18" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . ahgn3ni2nd . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "x3" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . ahgn3ni2nd . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 12 } ; static int_T rt_ScopeSignalNumDimensions
[ ] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 12 } ; static
void * rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static const char_T *
rt_ScopeSignalLabels [ ] = { "" } ; static char_T rt_ScopeSignalTitles [ ] =
"" ; static int_T rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes
[ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Scope19" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . ftsenby5we . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "x4" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . ftsenby5we . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 3 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 3 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Scope2" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . axnhqeg3ue . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "up" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . axnhqeg3ue . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 3 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 3 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Scope25" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . jyofunjeyz . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "u0" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . jyofunjeyz . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 3 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 3 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Scope26" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . hv1dj310ft . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "x0" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . hv1dj310ft . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 1 , 1 , 1 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 , 1 , 2 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 1 , 1 , 1 , 1 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ;
static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 , 4 , 4 , 4 } ; static const
char_T * rt_ScopeSignalLabels [ ] = { "" , "" , "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 , 0 , 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 , 0 , 0 }
; static int_T rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 3 ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static char_T
rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Scope1" ;
static int_T rt_ScopeFrameData [ ] = { 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; rt_ScopeSignalInfo . numSignals =
3 ; rt_ScopeSignalInfo . numCols = rt_ScopeSignalWidths ; rt_ScopeSignalInfo
. numDims = rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . pjf4td5nr0 . LoggedData [ 0 ] = rt_CreateStructLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "Ref" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . pjf4td5nr0 . LoggedData [ 0 ] == ( NULL )
) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 1 , 1 , 1 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 , 1 , 2 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 1 , 1 , 1 , 1 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ;
static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 , 4 , 4 , 4 } ; static const
char_T * rt_ScopeSignalLabels [ ] = { "" , "" , "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 , 0 , 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 , 0 , 0 }
; static int_T rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 3 ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static char_T
rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Scope2"
; static int_T rt_ScopeFrameData [ ] = { 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; rt_ScopeSignalInfo . numSignals =
3 ; rt_ScopeSignalInfo . numCols = rt_ScopeSignalWidths ; rt_ScopeSignalInfo
. numDims = rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . ijkymdxn5s . LoggedData [ 0 ] = rt_CreateStructLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "Ref_Pos" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . ijkymdxn5s .
LoggedData [ 0 ] == ( NULL ) ) return ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "RECT_Z" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo -> nDataPoints
= 601 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace3_Time0 ; rtDW
. i1wwy5n5rc . TimePtr = fromwksInfo -> time ; rtDW . i1wwy5n5rc . DataPtr =
fromwksInfo -> data ; rtDW . i1wwy5n5rc . RSimInfoPtr = fromwksInfo ; } rtDW
. abl3fffzqi . PrevIndex = 0 ; } { static int_T rt_ToWksWidths [ ] = { 15 } ;
static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 15 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot10/To Workspace"
; rtDW . hzwyeasm43 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "T3" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . hzwyeasm43 . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 15 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
15 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot11/To Workspace"
; rtDW . j4nrepcgpu . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "T4" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . j4nrepcgpu . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 15 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
15 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot8/To Workspace"
; rtDW . camjz1utpm . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "T1" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . camjz1utpm . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 15 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
15 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot9/To Workspace"
; rtDW . h34d0dz1tx . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "T2" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . h34d0dz1tx . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 15 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
15 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot12/To Workspace"
; rtDW . dgeamk1wo2 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "epsilon1" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . dgeamk1wo2 .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 15
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 15 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot13/To Workspace"
; rtDW . lhreu3iook . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "epsilon2" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . lhreu3iook .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 15
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 15 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot14/To Workspace"
; rtDW . du1u11a542 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "epsilon3" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . du1u11a542 .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 15
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 15 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/For matrix Plot15/To Workspace"
; rtDW . hdz014mlxm . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "epsilon4" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . hdz014mlxm .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope20" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . givugmca51 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "q1" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . givugmca51 . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 3 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 3 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope21" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . atjwpkepvl . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "q2" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . atjwpkepvl . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 3 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 3 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope22" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . lmit2h4t34 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "q3" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . lmit2h4t34 . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 3 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 3 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope23" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . kczpusi2s1 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "q4" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo ,
rt_ScopeBlockName ) ; if ( rtDW . kczpusi2s1 . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 3 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 3 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope10" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . ij1bjq2pp1 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "x0_hat3" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . ij1bjq2pp1 .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope11" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . n0iqt32sfp . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "x0_hat4" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . n0iqt32sfp .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope8" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . kljv1hxyju . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "x0_hat1" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . kljv1hxyju .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope9" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . kn41ewqeq3 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "x0_hat2" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . kn41ewqeq3 .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope4" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . hhoqznvhi3 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "ScopeData13" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . hhoqznvhi3 .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope5" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . agu3biksdl . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "ScopeData14" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . agu3biksdl .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope6" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . lnkqhumnxa . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "ScopeData15" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . lnkqhumnxa .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope7" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . ecdze0zcrs . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "ScopeData16" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . ecdze0zcrs .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope40" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . ntjqns0oae . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "ScopeData1" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . ntjqns0oae .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope41" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . nzjvtx2drp . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "ScopeData2" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . nzjvtx2drp .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope43" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . ludcryuovc . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "ScopeData3" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . ludcryuovc .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 3 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 3 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 1 ] =
{ SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Observers Log/Scope44" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . jhug4f4fnn . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "ScopeData4" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . jhug4f4fnn .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 36
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 36 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot/To Workspace"
; rtDW . peyk0za1jj . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "P1_R" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo
, rt_ToWksBlockName ) ; if ( rtDW . peyk0za1jj . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 36 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
36 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot1/To Workspace"
; rtDW . nmnsqs0foz . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "P2_R" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo
, rt_ToWksBlockName ) ; if ( rtDW . nmnsqs0foz . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 36 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
36 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot2/To Workspace"
; rtDW . lunjbjcbzb . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "P3_R" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo
, rt_ToWksBlockName ) ; if ( rtDW . lunjbjcbzb . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 36 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
36 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot3/To Workspace"
; rtDW . lpq1kb1sjr . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "P4_R" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo
, rt_ToWksBlockName ) ; if ( rtDW . lpq1kb1sjr . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 36 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
36 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot4/To Workspace"
; rtDW . l4tovimwan . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "A_hat1_R" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . l4tovimwan .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 36
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 36 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot5/To Workspace"
; rtDW . kwk1qgvysg . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "A_hat2_R" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . kwk1qgvysg .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 36
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 36 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot6/To Workspace"
; rtDW . bkcvxpj14h . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "A_hat3_R" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . bkcvxpj14h .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 36
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 36 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/For matrix Plot7/To Workspace"
; rtDW . fq2moqhx1k . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "A_hat4_R" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . fq2moqhx1k .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 6 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 6 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/Scope14" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . nkzxvnpzaq . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "e3_R" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . nkzxvnpzaq . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 6 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 6 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ;
static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/Scope15" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . phclb1hosq . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "e4_R" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . phclb1hosq . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 6 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 6 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ;
static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/Scope12" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . hlltd51e5p . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "e1_R" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . hlltd51e5p . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 6 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 6 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ;
static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/Scope13" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . kjead5tgs4 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "e2_R" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . kjead5tgs4 . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 6 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 6 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ;
static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/Scope" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . mbjldeeb4d . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "g_hat1_R" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . mbjldeeb4d .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 6 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 6 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/Scope1" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . lnpvpj0cx3 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "g_hat2_R" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . lnpvpj0cx3 .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 6 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 6 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/Scope2" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . jcai3h0pvz . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "g_hat3_R" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . jcai3h0pvz .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 6 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 6 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Rotational Log/Scope3" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . cxb5ckleoa . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "g_hat4_R" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . cxb5ckleoa .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 36
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 36 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot/To Workspace"
; rtDW . oapfejjykt . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "P1_T" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo
, rt_ToWksBlockName ) ; if ( rtDW . oapfejjykt . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 36 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
36 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot1/To Workspace"
; rtDW . orsxbm3qij . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "P2_T" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo
, rt_ToWksBlockName ) ; if ( rtDW . orsxbm3qij . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 36 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
36 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot2/To Workspace"
; rtDW . cn2rx14hit . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "P3_T" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo
, rt_ToWksBlockName ) ; if ( rtDW . cn2rx14hit . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 36 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
36 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot3/To Workspace"
; rtDW . bnzftshx34 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "P4_T" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo
, rt_ToWksBlockName ) ; if ( rtDW . bnzftshx34 . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 36 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = {
36 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot4/To Workspace"
; rtDW . b3h2bgfvmf . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "A_hat1_T" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . b3h2bgfvmf .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 36
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 36 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot5/To Workspace"
; rtDW . ovnjs4iqgp . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "A_hat2_T" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . ovnjs4iqgp .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 36
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 36 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot6/To Workspace"
; rtDW . c0vkh1nckw . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "A_hat3_T" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . c0vkh1nckw .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 36
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 36 } ; static boolean_T rt_ToWksIsVarDims [ ] = {
0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/For matrix Plot7/To Workspace"
; rtDW . lzksfbzheq . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "A_hat4_T" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . lzksfbzheq .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 6 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 6 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope12" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . bm3qbtlsvl . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "e1_T" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . bm3qbtlsvl . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 6 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 6 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ;
static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope13" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . lbh2v4cxsw . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "e2_T" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . lbh2v4cxsw . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 6 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 6 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ;
static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope14" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . gngxoqyce2 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "e3_T" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . gngxoqyce2 . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 6 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 6 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ;
static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope15" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . j4t5utnqsu . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "e4_T" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . j4t5utnqsu . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 6 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 6 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ;
static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . ohhdayxsqf . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "g_hat1_T" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . ohhdayxsqf .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 6 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 6 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope1" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . hw5kuuf0zz . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "g_hat2_T" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . hw5kuuf0zz .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 4 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 4 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1
] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope27" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . flmxkmsuse . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "u1_T" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . flmxkmsuse . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 4 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 4 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope28" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . dnfwnpgyjn . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "u2_T" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . dnfwnpgyjn . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 4 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 4 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope29" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . nnpouilxcu . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "u3_T" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . nnpouilxcu . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 4 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 4 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static
char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope30" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . hr2cuewb1d . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "u4_T" , 1 , 0 , 1 , 0.0 , & rt_ScopeSignalInfo
, rt_ScopeBlockName ) ; if ( rtDW . hr2cuewb1d . LoggedData == ( NULL ) )
return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T
rt_ScopeSignalWidths [ ] = { 6 } ; static int_T rt_ScopeSignalNumDimensions [
] = { 1 } ; static int_T rt_ScopeSignalDimensions [ ] = { 6 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ;
static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope2" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . mnpnnxmz24 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "g_hat3_T" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . mnpnnxmz24 .
LoggedData == ( NULL ) ) return ; } { RTWLogSignalInfo rt_ScopeSignalInfo ;
static int_T rt_ScopeSignalWidths [ ] = { 6 } ; static int_T
rt_ScopeSignalNumDimensions [ ] = { 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 6 } ; static void * rt_ScopeCurrSigDims [ ]
= { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 } ; static
const char_T * rt_ScopeSignalLabels [ ] = { "" } ; static char_T
rt_ScopeSignalTitles [ ] = "" ; static int_T rt_ScopeSignalTitleLengths [ ] =
{ 0 } ; static boolean_T rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; BuiltInDTypeId
dTypes [ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName [ ] =
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Translational Log/Scope3" ; static
int_T rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . g1kahszp5p . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "g_hat4_T" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . g1kahszp5p .
LoggedData == ( NULL ) ) return ; } MdlInitialize ( ) ; } void MdlOutputs (
int_T tid ) { P_bus ptbh3bmhhg ; P_bus fjt2ekrj4l ; P_bus lgkxjsb4pn ; P_bus
pni5sniwcc ; T_bus pn0ki0555k ; T_bus pmh2i5do12 ; T_bus igiw41w3mf ; T_bus
irfd2zdft4 ; real_T lk3nn5bbfz [ 36 ] ; real_T ax4zf5kobh [ 15 ] ; real_T
h4ajguzybf [ 6 ] ; real_T c2aver3dxc [ 36 ] ; real_T jw2oq0p55i [ 3 ] ;
real_T dnuhrcjkkl [ 3 ] ; real_T jlqcf41dgp [ 15 ] ; real_T bizoeuupal [ 15 ]
; real_T grt0wvcogn [ 3 ] ; real_T diakalarve [ 3 ] ; real_T ctjjrlpdi5 [ 3 ]
; real_T ecievgqthq [ 6 ] ; real_T dsffd5vvhs [ 6 ] ; real_T h0xy1rdev3 [ 36
] ; real_T fjudlli45r [ 36 ] ; real_T gxhomrvm3x [ 15 ] ; real_T jpgmqjwf01 [
15 ] ; real_T bssdkhb0vx [ 15 ] ; real_T idgmoweaed [ 15 ] ; real_T
ifzsacw3nd [ 15 ] ; real_T nqy40numco [ 15 ] ; real_T a25czsqxjb [ 36 ] ;
real_T cxawfcsfzh [ 36 ] ; real_T huqnxkh55s [ 36 ] ; real_T oxcb4s41s5 ;
real_T k4ogwjgjyc [ 6 ] ; real_T advizqj3ha [ 36 ] ; real_T nhn5tp2vva [ 15 ]
; real_T ak2ecose3u [ 15 ] ; real_T ngorhefjjy [ 3 ] ; real_T lpnd34wjvg [ 3
] ; real_T ktujytaqhq [ 3 ] ; real_T benjh1zrdx [ 6 ] ; real_T iftpnj5b4l [ 6
] ; real_T nxvcwdhzv1 [ 36 ] ; real_T ipmspkbyis [ 36 ] ; real_T ph3ajuwqpu ;
real_T ohitilcoh5 [ 6 ] ; real_T ao2wtesi4w [ 36 ] ; real_T d0wp20k22c [ 15 ]
; real_T m0pcbkfaaj [ 15 ] ; real_T lfls4avrhx [ 3 ] ; real_T ga2rxblkrr [ 3
] ; real_T loxbcpprvl [ 3 ] ; real_T lv1xhvhatj [ 6 ] ; real_T jiiq1n32wh [ 6
] ; real_T lodhdkq13m [ 36 ] ; real_T cfw3hg13mq [ 36 ] ; real_T ezhxgxis1h ;
real_T c5ungu42h4 [ 6 ] ; real_T h5tz0x5bs2 [ 36 ] ; real_T bp3grqjuj3 [ 15 ]
; real_T ilqmriesq3 [ 15 ] ; real_T iaiszp35qu [ 3 ] ; real_T cfwqar2em3 [ 3
] ; real_T du4v3mstvy [ 3 ] ; real_T pajieigztr [ 6 ] ; real_T ccc1dkvwhq [ 6
] ; real_T i00waqcu3t [ 36 ] ; real_T ayhwzzbb1m [ 36 ] ; real_T c451mqxe4s ;
real_T ot140ierlh ; real_T ( * lastU ) [ 3 ] ; real_T Sum2 [ 3 ] ; int32_T c
; real_T b_d [ 9 ] ; static const int8_T b_BN [ 16 ] = { 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const int8_T b_AN [ 16 ]
= { 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 } ; static
const int8_T b_BN_p [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 } ; static const int8_T b_AN_p [ 16 ] = { 0 , 1 , 0 , 0 , 1 ,
0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 } ; static const int8_T b_BN_e [ 16
] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static const int8_T b_AN_e [ 16 ] = { 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 ,
0 , 1 , 0 , 0 , 1 , 0 } ; static const int8_T b_BN_i [ 16 ] = { 1 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const int8_T
b_AN_i [ 16 ] = { 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 ,
0 } ; static const int8_T b_BN_m [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const int8_T b_AN_m [ 16 ] = { 0 , 1 ,
0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 } ; static const int8_T
b_BN_g [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } ; static const int8_T b_AN_g [ 16 ] = { 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0
, 1 , 0 , 1 , 0 , 0 , 1 , 0 } ; static const int8_T b_BN_j [ 16 ] = { 1 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const int8_T
b_AN_j [ 16 ] = { 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 ,
0 } ; static const int8_T b_BN_f [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const int8_T b_AN_f [ 16 ] = { 0 , 1 ,
0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 } ; real_T akwxtnrtar ;
real_T e5vadmot5s ; real_T nzh4xfbh4v [ 12 ] ; real_T oiryq5ez2s [ 12 ] ;
int32_T i ; int32_T b_BN_c ; int32_T b_AN_c ; int8_T b_data [ 12 ] ; real_T
tmp [ 3 ] ; int32_T i_p ; real_T ABS ; real_T ABS_idx_0 ; real_T ABS_idx_1 ;
real_T ABS_idx_2 ; memcpy ( & lk3nn5bbfz [ 0 ] , & rtX . filapmf4cs [ 0 ] ,
36U * sizeof ( real_T ) ) ; memcpy ( & ax4zf5kobh [ 0 ] , & rtX . dkf0xcw1to
[ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & rtB . lbn4luqpfw [ 0 ] , & rtX
. oweh1cvpwb [ 0 ] , 12U * sizeof ( real_T ) ) ; memcpy ( & rtB . fdipzybztz
[ 0 ] , & rtX . hyrtgzkn1j [ 0 ] , 12U * sizeof ( real_T ) ) ; memcpy ( & rtB
. gi1v4dqyzv [ 0 ] , & rtX . lnyqg3gjey [ 0 ] , 12U * sizeof ( real_T ) ) ;
memcpy ( & rtB . nbziqu4k4i [ 0 ] , & rtX . pet0sahf2n [ 0 ] , 12U * sizeof (
real_T ) ) ; rtB . jbtx2pjet0 = 0.0 ; rtB . jbtx2pjet0 += rtP .
TransferFcn3_C * rtX . ajjwc4eanm ; rtB . o5hqdwcanp = 0.0 ; rtB . o5hqdwcanp
+= rtP . TransferFcn2_C * rtX . oaqvw1cmmj ; rtB . gikzhfrh2r = 0.0 ; rtB .
gikzhfrh2r += rtP . TransferFcn1_C * rtX . lp3durdr4l ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB . o1w4cyxkr0 [ i ] =
rtDW . kstiocozka [ i ] ; } } drphagqhrh ( ax4zf5kobh , rtB . lbn4luqpfw ,
rtB . fdipzybztz , rtB . gi1v4dqyzv , rtB . nbziqu4k4i , rtB . jbtx2pjet0 ,
rtB . o5hqdwcanp , rtB . gikzhfrh2r , rtP . Agent_Value , rtB . o1w4cyxkr0 ,
& rtB . koohydnldu ) ; for ( i = 0 ; i < 6 ; i ++ ) { h4ajguzybf [ i ] = rtX
. ohuimt1kj1 [ i ] ; } memcpy ( & c2aver3dxc [ 0 ] , & rtX . cn4y1idp3t [ 0 ]
, 36U * sizeof ( real_T ) ) ; jw2oq0p55i [ 0 ] = rtX . nytonewnkc [ 0 ] - rtB
. jbtx2pjet0 ; jw2oq0p55i [ 1 ] = rtX . nytonewnkc [ 1 ] - rtB . o5hqdwcanp ;
jw2oq0p55i [ 2 ] = rtX . nytonewnkc [ 2 ] - rtB . gikzhfrh2r ; ABS =
muDoubleScalarAbs ( jw2oq0p55i [ 0 ] ) ; rtB . hcmtphgh1v [ 0 ] =
muDoubleScalarSqrt ( ABS ) ; rtB . hcmtphgh1v [ 0 ] = rtX . jhtu45vxt4 [ 0 ]
- jw2oq0p55i [ 0 ] / ( ABS + rtP . alpha ) * rtB . hcmtphgh1v [ 0 ] * rtP .
k1 ; ABS = muDoubleScalarAbs ( jw2oq0p55i [ 1 ] ) ; rtB . hcmtphgh1v [ 1 ] =
muDoubleScalarSqrt ( ABS ) ; rtB . hcmtphgh1v [ 1 ] = rtX . jhtu45vxt4 [ 1 ]
- jw2oq0p55i [ 1 ] / ( ABS + rtP . alpha ) * rtB . hcmtphgh1v [ 1 ] * rtP .
k1 ; ABS = muDoubleScalarAbs ( jw2oq0p55i [ 2 ] ) ; rtB . hcmtphgh1v [ 2 ] =
muDoubleScalarSqrt ( ABS ) ; rtB . hcmtphgh1v [ 2 ] = rtX . jhtu45vxt4 [ 2 ]
- jw2oq0p55i [ 2 ] / ( ABS + rtP . alpha ) * rtB . hcmtphgh1v [ 2 ] * rtP .
k1 ; dnuhrcjkkl [ 0 ] = rtP . formationoftheleader_Value [ 0 ] - rtB .
jbtx2pjet0 ; dnuhrcjkkl [ 1 ] = rtP . formationoftheleader_Value [ 1 ] - rtB
. o5hqdwcanp ; dnuhrcjkkl [ 2 ] = rtP . formationoftheleader_Value [ 2 ] -
rtB . gikzhfrh2r ; for ( i = 0 ; i < 15 ; i ++ ) { jlqcf41dgp [ i ] = rtX .
ku4bbglgq2 [ i ] ; bizoeuupal [ i ] = rtX . kdpp4uug5y [ i ] - ax4zf5kobh [ i
] ; } p4cag1h1yw ( jlqcf41dgp , bizoeuupal , & rtB . ounrqp0kqp ) ; rtB .
ittv15bcsa [ 0 ] = rtX . nzmi3egeno [ 0 ] ; rtB . pdfkmj3akd [ 0 ] = rtX .
iju3hejemb [ 0 ] ; rtB . ittv15bcsa [ 1 ] = rtX . nzmi3egeno [ 1 ] ; rtB .
pdfkmj3akd [ 1 ] = rtX . iju3hejemb [ 1 ] ; rtB . ittv15bcsa [ 2 ] = rtX .
nzmi3egeno [ 2 ] ; rtB . pdfkmj3akd [ 2 ] = rtX . iju3hejemb [ 2 ] ; for ( i
= 0 ; i < 6 ; i ++ ) { rtB . itgoh1hxqp [ i ] = rtX . jgaq55ujqb [ i ] ; }
grt0wvcogn [ 0 ] = rtX . pqorbdh2sp [ 0 ] ; diakalarve [ 0 ] = rtX .
lacvtmifen [ 0 ] - rtB . o1w4cyxkr0 [ 0 ] ; grt0wvcogn [ 1 ] = rtX .
pqorbdh2sp [ 1 ] ; diakalarve [ 1 ] = rtX . lacvtmifen [ 1 ] - rtB .
o1w4cyxkr0 [ 1 ] ; grt0wvcogn [ 2 ] = rtX . pqorbdh2sp [ 2 ] ; diakalarve [ 2
] = rtX . lacvtmifen [ 2 ] - rtB . o1w4cyxkr0 [ 2 ] ; bjoegfn2je ( grt0wvcogn
, diakalarve , & rtB . geh5ssntfp ) ; fmax3olm5p ( lk3nn5bbfz , rtB .
koohydnldu . j50ump3tqb , h4ajguzybf , c2aver3dxc , rtB . hcmtphgh1v ,
dnuhrcjkkl , rtB . ounrqp0kqp . dwzefkbt4i , ax4zf5kobh , rtB . ittv15bcsa ,
rtP . Agent_Value , rtB . o1w4cyxkr0 , rtB . pdfkmj3akd , rtB . itgoh1hxqp ,
rtB . geh5ssntfp . g0oikhinbf , & rtB . or1qu0lbxa ) ; if ( ( rtDW .
f0c002qbsv >= ssGetT ( rtS ) ) && ( rtDW . mv5h2lqtxu >= ssGetT ( rtS ) ) ) {
rtB . hngud44kjo [ 0 ] = 0.0 ; rtB . hngud44kjo [ 1 ] = 0.0 ; rtB .
hngud44kjo [ 2 ] = 0.0 ; } else { ABS = rtDW . f0c002qbsv ; lastU = & rtDW .
pqpmtevv2j ; if ( rtDW . f0c002qbsv < rtDW . mv5h2lqtxu ) { if ( rtDW .
mv5h2lqtxu < ssGetT ( rtS ) ) { ABS = rtDW . mv5h2lqtxu ; lastU = & rtDW .
dr2fd4czo0 ; } } else { if ( rtDW . f0c002qbsv >= ssGetT ( rtS ) ) { ABS =
rtDW . mv5h2lqtxu ; lastU = & rtDW . dr2fd4czo0 ; } } ABS = ssGetT ( rtS ) -
ABS ; rtB . hngud44kjo [ 0 ] = ( rtB . jbtx2pjet0 - ( * lastU ) [ 0 ] ) / ABS
; rtB . hngud44kjo [ 1 ] = ( rtB . o5hqdwcanp - ( * lastU ) [ 1 ] ) / ABS ;
rtB . hngud44kjo [ 2 ] = ( rtB . gikzhfrh2r - ( * lastU ) [ 2 ] ) / ABS ; }
if ( ( rtDW . j2jsulvdm1 >= ssGetT ( rtS ) ) && ( rtDW . pjv2r5rhzy >= ssGetT
( rtS ) ) ) { ABS_idx_0 = 0.0 ; ABS_idx_1 = 0.0 ; ABS_idx_2 = 0.0 ; } else {
ABS = rtDW . j2jsulvdm1 ; lastU = & rtDW . ekpr5jhh05 ; if ( rtDW .
j2jsulvdm1 < rtDW . pjv2r5rhzy ) { if ( rtDW . pjv2r5rhzy < ssGetT ( rtS ) )
{ ABS = rtDW . pjv2r5rhzy ; lastU = & rtDW . it1tzyqmx3 ; } } else { if (
rtDW . j2jsulvdm1 >= ssGetT ( rtS ) ) { ABS = rtDW . pjv2r5rhzy ; lastU = &
rtDW . it1tzyqmx3 ; } } ABS = ssGetT ( rtS ) - ABS ; ABS_idx_0 = ( rtB .
hngud44kjo [ 0 ] - ( * lastU ) [ 0 ] ) / ABS ; ABS_idx_1 = ( rtB . hngud44kjo
[ 1 ] - ( * lastU ) [ 1 ] ) / ABS ; ABS_idx_2 = ( rtB . hngud44kjo [ 2 ] - (
* lastU ) [ 2 ] ) / ABS ; } for ( i = 0 ; i < 6 ; i ++ ) { rtB . o5fje2j3te [
i ] = rtX . ncicpbmtkr [ i ] ; } rtB . lf5t1r3q3k [ 0 ] = rtB . jbtx2pjet0 -
rtB . o5fje2j3te [ 0 ] ; rtB . lf5t1r3q3k [ 1 ] = rtB . o5hqdwcanp - rtB .
o5fje2j3te [ 1 ] ; rtB . lf5t1r3q3k [ 2 ] = rtB . gikzhfrh2r - rtB .
o5fje2j3te [ 2 ] ; rtB . lk5bwa3fu5 [ 0 ] = ( ( ( ABS_idx_0 + rtB .
hngud44kjo [ 0 ] ) - rtB . o5fje2j3te [ 3 ] ) + 10.0 * rtB . lf5t1r3q3k [ 0 ]
) + rtX . ntzccs4iix [ 0 ] ; ABS = rtP . Gain_Gain * rtB . lk5bwa3fu5 [ 0 ] ;
ctjjrlpdi5 [ 0 ] = rtB . or1qu0lbxa . iqrledjweq [ 3 ] + ABS ; ABS_idx_0 =
ABS ; rtB . lk5bwa3fu5 [ 1 ] = ( ( ( ABS_idx_1 + rtB . hngud44kjo [ 1 ] ) -
rtB . o5fje2j3te [ 4 ] ) + 10.0 * rtB . lf5t1r3q3k [ 1 ] ) + rtX . ntzccs4iix
[ 1 ] ; ABS = rtP . Gain_Gain * rtB . lk5bwa3fu5 [ 1 ] ; ctjjrlpdi5 [ 1 ] =
rtB . or1qu0lbxa . iqrledjweq [ 4 ] + ABS ; ABS_idx_1 = ABS ; rtB .
lk5bwa3fu5 [ 2 ] = ( ( ( ABS_idx_2 + rtB . hngud44kjo [ 2 ] ) - rtB .
o5fje2j3te [ 5 ] ) + 10.0 * rtB . lf5t1r3q3k [ 2 ] ) + rtX . ntzccs4iix [ 2 ]
; ABS = rtP . Gain_Gain * rtB . lk5bwa3fu5 [ 2 ] ; ctjjrlpdi5 [ 2 ] = rtB .
or1qu0lbxa . iqrledjweq [ 5 ] + ABS ; kakf0pv0ls ( ctjjrlpdi5 , & rtB .
kqhftxu5gq ) ; if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . bfeqkoqnt0 . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . kqhftxu5gq . kh3hogern0 [ 0 ] ; up0 [ 1 ] = rtB
. kqhftxu5gq . kh3hogern0 [ 1 ] ; up0 [ 2 ] = rtB . kqhftxu5gq . kh3hogern0 [
2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } for ( i = 0 ; i <
6 ; i ++ ) { ecievgqthq [ i ] = rtX . lzogr0v4zv [ i ] ; } if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB . mixz2kbbzd [ i ] =
rtDW . hwmovhfzf2 [ i ] ; } } dqxwi3ojws ( rtB . lbn4luqpfw , rtB .
kqhftxu5gq . kh3hogern0 , rtB . mixz2kbbzd , & rtB . ejm1xz1i3s ) ; for ( i =
0 ; i < 6 ; i ++ ) { rtB . lpfnz5a2xn [ i ] = ecievgqthq [ i ] + rtB .
ejm1xz1i3s . koxsf3yz0i [ i ] ; dsffd5vvhs [ i ] = rtX . hcwdtblhkw [ i ] ;
rtB . h01ja14scr [ i ] = rtX . irj1jq1t3z [ i ] - rtB . ejm1xz1i3s .
okla4d4php [ i ] ; } ljfb5rsuh1 ( dsffd5vvhs , rtB . h01ja14scr , & rtB .
etbc3ao3mx ) ; memcpy ( & h0xy1rdev3 [ 0 ] , & rtX . pteyqc24bu [ 0 ] , 36U *
sizeof ( real_T ) ) ; memcpy ( & fjudlli45r [ 0 ] , & rtX . gaxneeplm1 [ 0 ]
, 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . gqx5b5eit1
[ i ] = rtX . bir1ggdein [ i ] ; } efke5v1e1t ( rtB . lpfnz5a2xn , ecievgqthq
, rtB . etbc3ao3mx . lsn2ixkb43 , h0xy1rdev3 , fjudlli45r , rtB . gqx5b5eit1
, rtB . ejm1xz1i3s . p0sifpbcra , & rtB . aoni3btcrm ) ; kivi1wcgc4 ( rtB .
kqhftxu5gq . psgobcrgrf , rtB . aoni3btcrm . ceslw2bcsd , & rtB . ndp0ayzs4j
) ; for ( i = 0 ; i < 15 ; i ++ ) { gxhomrvm3x [ i ] = rtX . f20hsrwsbu [ i ]
; jpgmqjwf01 [ i ] = rtX . brw5ncjp0j [ i ] ; rtB . pxebxuyzlv [ i ] = rtX .
bktfffzsqn [ i ] ; pn0ki0555k . t1 [ i ] = ax4zf5kobh [ i ] ; pn0ki0555k . t2
[ i ] = gxhomrvm3x [ i ] ; pn0ki0555k . t3 [ i ] = jpgmqjwf01 [ i ] ;
pn0ki0555k . t4 [ i ] = rtB . pxebxuyzlv [ i ] ; } if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { for ( i = 0 ; i < 15 ; i ++ ) { bssdkhb0vx [ i ] = rtDW .
be0imqxqro [ i ] ; idgmoweaed [ i ] = rtDW . mx4qqpknqe [ i ] ; ifzsacw3nd [
i ] = rtDW . cbxnmjiv35 [ i ] ; nqy40numco [ i ] = rtDW . j3sy2mrawp [ i ] ;
rtB . n5xztpmvdo . eps1 [ i ] = bssdkhb0vx [ i ] ; rtB . n5xztpmvdo . eps2 [
i ] = idgmoweaed [ i ] ; rtB . n5xztpmvdo . eps3 [ i ] = ifzsacw3nd [ i ] ;
rtB . n5xztpmvdo . eps4 [ i ] = nqy40numco [ i ] ; } } go1q2xrxlf (
bizoeuupal , & rtB . khvlym1mbm ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . asu0f2ijbr [ 0 ] = rtDW . ha4pdvtcus [ 0 ] ; rtB . ow20kwohpt [ 0 ] =
rtDW . coqd1tvx1u [ 0 ] ; rtB . asu0f2ijbr [ 1 ] = rtDW . ha4pdvtcus [ 1 ] ;
rtB . ow20kwohpt [ 1 ] = rtDW . coqd1tvx1u [ 1 ] ; rtB . asu0f2ijbr [ 2 ] =
rtDW . ha4pdvtcus [ 2 ] ; rtB . ow20kwohpt [ 2 ] = rtDW . coqd1tvx1u [ 2 ] ;
} ABS_idx_2 = rtP . TransferFcn1_C_cmxvg3m0j5 * rtX . ivgcimcucj ; akwxtnrtar
= rtP . TransferFcn2_C_nzmool04r2 * rtX . addj05wge0 ; e5vadmot5s = rtP .
TransferFcn5_C * rtX . mvx4m5pboe ; rtB . pqzidfucir [ 0 ] = 0.0 ; rtB .
pqzidfucir [ 5 ] = 0.0 ; rtB . pqzidfucir [ 10 ] = 0.0 ; rtB . pqzidfucir [ 1
] = akwxtnrtar ; rtB . pqzidfucir [ 6 ] = e5vadmot5s ; rtB . pqzidfucir [ 11
] = ABS_idx_2 ; rtB . pqzidfucir [ 2 ] = - akwxtnrtar ; rtB . pqzidfucir [ 7
] = e5vadmot5s ; rtB . pqzidfucir [ 12 ] = 2.0 * ABS_idx_2 ; rtB . pqzidfucir
[ 3 ] = - akwxtnrtar ; rtB . pqzidfucir [ 8 ] = - e5vadmot5s ; rtB .
pqzidfucir [ 13 ] = 3.0 * ABS_idx_2 ; rtB . pqzidfucir [ 4 ] = akwxtnrtar ;
rtB . pqzidfucir [ 9 ] = - e5vadmot5s ; rtB . pqzidfucir [ 14 ] = 4.0 *
ABS_idx_2 ; etzl23kxck ( & pn0ki0555k , & rtB . n5xztpmvdo , ax4zf5kobh , rtP
. Agent_Value , rtB . pqzidfucir , & rtB . by50irynec ) ; rtB . ktynx515e0 [
0 ] = rtX . e024iaip1v [ 0 ] ; rtB . gcxmhwbhns [ 0 ] = rtX . a1515hp3gw [ 0
] ; rtB . e2i3atu3ac [ 0 ] = rtX . pf5zjr3mp2 [ 0 ] ; rtB . ktynx515e0 [ 1 ]
= rtX . e024iaip1v [ 1 ] ; rtB . gcxmhwbhns [ 1 ] = rtX . a1515hp3gw [ 1 ] ;
rtB . e2i3atu3ac [ 1 ] = rtX . pf5zjr3mp2 [ 1 ] ; rtB . ktynx515e0 [ 2 ] =
rtX . e024iaip1v [ 2 ] ; rtB . gcxmhwbhns [ 2 ] = rtX . a1515hp3gw [ 2 ] ;
rtB . e2i3atu3ac [ 2 ] = rtX . pf5zjr3mp2 [ 2 ] ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { rtB . j2pscqeale [ 0 ] = rtDW . jof3zfdlkv [ 0 ] ; rtB .
nfvj4bpva5 [ 0 ] = rtDW . pkkl0tyrak [ 0 ] ; rtB . cvpsjp1xqu [ 0 ] = rtDW .
ps4xa0zgh4 [ 0 ] ; rtB . j2pscqeale [ 1 ] = rtDW . jof3zfdlkv [ 1 ] ; rtB .
nfvj4bpva5 [ 1 ] = rtDW . pkkl0tyrak [ 1 ] ; rtB . cvpsjp1xqu [ 1 ] = rtDW .
ps4xa0zgh4 [ 1 ] ; rtB . j2pscqeale [ 2 ] = rtDW . jof3zfdlkv [ 2 ] ; rtB .
nfvj4bpva5 [ 2 ] = rtDW . pkkl0tyrak [ 2 ] ; rtB . cvpsjp1xqu [ 2 ] = rtDW .
ps4xa0zgh4 [ 2 ] ; } b_BN_c = b_BN [ ( ( ( ( int32_T ) rtP . Agent_Value - 1
) << 2 ) + ( int32_T ) rtP . Agent_Value ) - 1 ] ; nzh4xfbh4v [ 0 ] = rtB .
ittv15bcsa [ 0 ] ; nzh4xfbh4v [ 3 ] = rtB . ktynx515e0 [ 0 ] ; nzh4xfbh4v [ 6
] = rtB . gcxmhwbhns [ 0 ] ; nzh4xfbh4v [ 9 ] = rtB . e2i3atu3ac [ 0 ] ;
oiryq5ez2s [ 0 ] = rtB . asu0f2ijbr [ 0 ] ; oiryq5ez2s [ 3 ] = rtB .
j2pscqeale [ 0 ] ; oiryq5ez2s [ 6 ] = rtB . nfvj4bpva5 [ 0 ] ; oiryq5ez2s [ 9
] = rtB . cvpsjp1xqu [ 0 ] ; rtB . mwunt1htil [ 0 ] = ( rtB . ittv15bcsa [ 0
] - rtB . hcmtphgh1v [ 0 ] ) * ( real_T ) b_BN_c ; Sum2 [ 0 ] = 0.0 ;
nzh4xfbh4v [ 1 ] = rtB . ittv15bcsa [ 1 ] ; nzh4xfbh4v [ 4 ] = rtB .
ktynx515e0 [ 1 ] ; nzh4xfbh4v [ 7 ] = rtB . gcxmhwbhns [ 1 ] ; nzh4xfbh4v [
10 ] = rtB . e2i3atu3ac [ 1 ] ; oiryq5ez2s [ 1 ] = rtB . asu0f2ijbr [ 1 ] ;
oiryq5ez2s [ 4 ] = rtB . j2pscqeale [ 1 ] ; oiryq5ez2s [ 7 ] = rtB .
nfvj4bpva5 [ 1 ] ; oiryq5ez2s [ 10 ] = rtB . cvpsjp1xqu [ 1 ] ; rtB .
mwunt1htil [ 1 ] = ( rtB . ittv15bcsa [ 1 ] - rtB . hcmtphgh1v [ 1 ] ) * (
real_T ) b_BN_c ; Sum2 [ 1 ] = 0.0 ; nzh4xfbh4v [ 2 ] = rtB . ittv15bcsa [ 2
] ; nzh4xfbh4v [ 5 ] = rtB . ktynx515e0 [ 2 ] ; nzh4xfbh4v [ 8 ] = rtB .
gcxmhwbhns [ 2 ] ; nzh4xfbh4v [ 11 ] = rtB . e2i3atu3ac [ 2 ] ; oiryq5ez2s [
2 ] = rtB . asu0f2ijbr [ 2 ] ; oiryq5ez2s [ 5 ] = rtB . j2pscqeale [ 2 ] ;
oiryq5ez2s [ 8 ] = rtB . nfvj4bpva5 [ 2 ] ; oiryq5ez2s [ 11 ] = rtB .
cvpsjp1xqu [ 2 ] ; rtB . mwunt1htil [ 2 ] = ( rtB . ittv15bcsa [ 2 ] - rtB .
hcmtphgh1v [ 2 ] ) * ( real_T ) b_BN_c ; Sum2 [ 2 ] = 0.0 ; for ( i = 0 ; i <
4 ; i ++ ) { b_BN_c = i * 3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) {
b_BN_c = 1 ; c = 0 ; } b_AN_c = b_AN [ ( ( i << 2 ) + ( int32_T ) rtP .
Agent_Value ) - 1 ] ; c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) {
b_data [ i_p ] = ( int8_T ) ( b_BN_c + i_p ) ; } rtB . mwunt1htil [ 0 ] += (
rtB . ittv15bcsa [ 0 ] - nzh4xfbh4v [ b_data [ 0 ] - 1 ] ) * ( real_T )
b_AN_c ; rtB . mwunt1htil [ 1 ] += ( rtB . ittv15bcsa [ 1 ] - nzh4xfbh4v [
b_data [ 1 ] - 1 ] ) * ( real_T ) b_AN_c ; rtB . mwunt1htil [ 2 ] += ( rtB .
ittv15bcsa [ 2 ] - nzh4xfbh4v [ b_data [ 2 ] - 1 ] ) * ( real_T ) b_AN_c ;
b_BN_c = i * 3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c =
0 ; } ABS_idx_2 = rtP . H [ ( ( ( int32_T ) rtP . Agent_Value - 1 ) << 2 ) +
i ] ; c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [ i_p ] = (
int8_T ) ( b_BN_c + i_p ) ; } Sum2 [ 0 ] += oiryq5ez2s [ b_data [ 0 ] - 1 ] *
ABS_idx_2 ; Sum2 [ 1 ] += oiryq5ez2s [ b_data [ 1 ] - 1 ] * ABS_idx_2 ; Sum2
[ 2 ] += oiryq5ez2s [ b_data [ 2 ] - 1 ] * ABS_idx_2 ; } Sum2 [ 0 ] /=
muDoubleScalarAbs ( Sum2 [ 0 ] ) + rtP . alpha ; Sum2 [ 1 ] /=
muDoubleScalarAbs ( Sum2 [ 1 ] ) + rtP . alpha ; memset ( & b_d [ 0 ] , 0 ,
9U * sizeof ( real_T ) ) ; b_d [ 0 ] = Sum2 [ 0 ] ; b_d [ 4 ] = Sum2 [ 1 ] ;
b_d [ 8 ] = Sum2 [ 2 ] / ( muDoubleScalarAbs ( Sum2 [ 2 ] ) + rtP . alpha ) ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . m3bgszen3q [ i ] = - rtP . Observer_Gain
* rtB . mwunt1htil [ i ] - ( ( b_d [ i + 3 ] * rtP . U_dot0_M [ 1 ] + b_d [ i
] * rtP . U_dot0_M [ 0 ] ) + b_d [ i + 6 ] * rtP . U_dot0_M [ 2 ] ) ; rtB .
myxakcrmqb [ i ] = rtX . jno5haxgvz [ i ] ; rtB . ozfculoppj [ i ] = rtX .
dzhvipaz2k [ i ] ; rtB . btqsez3icc [ i ] = rtX . micy5ovmck [ i ] ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . htdjvfkvx0 [ 0 ] = rtDW . ndbjd515lt
[ 0 ] ; rtB . okuh0wfpjd [ 0 ] = rtDW . d4dmyhlqbm [ 0 ] ; rtB . mythggah1g [
0 ] = rtDW . kuepayhel0 [ 0 ] ; rtB . htdjvfkvx0 [ 1 ] = rtDW . ndbjd515lt [
1 ] ; rtB . okuh0wfpjd [ 1 ] = rtDW . d4dmyhlqbm [ 1 ] ; rtB . mythggah1g [ 1
] = rtDW . kuepayhel0 [ 1 ] ; rtB . htdjvfkvx0 [ 2 ] = rtDW . ndbjd515lt [ 2
] ; rtB . okuh0wfpjd [ 2 ] = rtDW . d4dmyhlqbm [ 2 ] ; rtB . mythggah1g [ 2 ]
= rtDW . kuepayhel0 [ 2 ] ; } b_BN_c = b_BN_p [ ( ( ( ( int32_T ) rtP .
Agent_Value - 1 ) << 2 ) + ( int32_T ) rtP . Agent_Value ) - 1 ] ; nzh4xfbh4v
[ 0 ] = rtB . pdfkmj3akd [ 0 ] ; nzh4xfbh4v [ 3 ] = rtB . myxakcrmqb [ 0 ] ;
nzh4xfbh4v [ 6 ] = rtB . ozfculoppj [ 0 ] ; nzh4xfbh4v [ 9 ] = rtB .
btqsez3icc [ 0 ] ; oiryq5ez2s [ 0 ] = rtB . ow20kwohpt [ 0 ] ; oiryq5ez2s [ 3
] = rtB . htdjvfkvx0 [ 0 ] ; oiryq5ez2s [ 6 ] = rtB . okuh0wfpjd [ 0 ] ;
oiryq5ez2s [ 9 ] = rtB . mythggah1g [ 0 ] ; rtB . kjivth4tcr [ 0 ] = ( rtB .
pdfkmj3akd [ 0 ] - rtB . jbtx2pjet0 ) * ( real_T ) b_BN_c ; Sum2 [ 0 ] = 0.0
; nzh4xfbh4v [ 1 ] = rtB . pdfkmj3akd [ 1 ] ; nzh4xfbh4v [ 4 ] = rtB .
myxakcrmqb [ 1 ] ; nzh4xfbh4v [ 7 ] = rtB . ozfculoppj [ 1 ] ; nzh4xfbh4v [
10 ] = rtB . btqsez3icc [ 1 ] ; oiryq5ez2s [ 1 ] = rtB . ow20kwohpt [ 1 ] ;
oiryq5ez2s [ 4 ] = rtB . htdjvfkvx0 [ 1 ] ; oiryq5ez2s [ 7 ] = rtB .
okuh0wfpjd [ 1 ] ; oiryq5ez2s [ 10 ] = rtB . mythggah1g [ 1 ] ; rtB .
kjivth4tcr [ 1 ] = ( rtB . pdfkmj3akd [ 1 ] - rtB . o5hqdwcanp ) * ( real_T )
b_BN_c ; Sum2 [ 1 ] = 0.0 ; nzh4xfbh4v [ 2 ] = rtB . pdfkmj3akd [ 2 ] ;
nzh4xfbh4v [ 5 ] = rtB . myxakcrmqb [ 2 ] ; nzh4xfbh4v [ 8 ] = rtB .
ozfculoppj [ 2 ] ; nzh4xfbh4v [ 11 ] = rtB . btqsez3icc [ 2 ] ; oiryq5ez2s [
2 ] = rtB . ow20kwohpt [ 2 ] ; oiryq5ez2s [ 5 ] = rtB . htdjvfkvx0 [ 2 ] ;
oiryq5ez2s [ 8 ] = rtB . okuh0wfpjd [ 2 ] ; oiryq5ez2s [ 11 ] = rtB .
mythggah1g [ 2 ] ; rtB . kjivth4tcr [ 2 ] = ( rtB . pdfkmj3akd [ 2 ] - rtB .
gikzhfrh2r ) * ( real_T ) b_BN_c ; Sum2 [ 2 ] = 0.0 ; for ( i = 0 ; i < 4 ; i
++ ) { b_BN_c = i * 3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) { b_BN_c =
1 ; c = 0 ; } b_AN_c = b_AN_p [ ( ( i << 2 ) + ( int32_T ) rtP . Agent_Value
) - 1 ] ; c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [ i_p ]
= ( int8_T ) ( b_BN_c + i_p ) ; } rtB . kjivth4tcr [ 0 ] += ( rtB .
pdfkmj3akd [ 0 ] - nzh4xfbh4v [ b_data [ 0 ] - 1 ] ) * ( real_T ) b_AN_c ;
rtB . kjivth4tcr [ 1 ] += ( rtB . pdfkmj3akd [ 1 ] - nzh4xfbh4v [ b_data [ 1
] - 1 ] ) * ( real_T ) b_AN_c ; rtB . kjivth4tcr [ 2 ] += ( rtB . pdfkmj3akd
[ 2 ] - nzh4xfbh4v [ b_data [ 2 ] - 1 ] ) * ( real_T ) b_AN_c ; b_BN_c = i *
3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c = 0 ; }
ABS_idx_2 = rtP . H [ ( ( ( int32_T ) rtP . Agent_Value - 1 ) << 2 ) + i ] ;
c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [ i_p ] = ( int8_T
) ( b_BN_c + i_p ) ; } Sum2 [ 0 ] += oiryq5ez2s [ b_data [ 0 ] - 1 ] *
ABS_idx_2 ; Sum2 [ 1 ] += oiryq5ez2s [ b_data [ 1 ] - 1 ] * ABS_idx_2 ; Sum2
[ 2 ] += oiryq5ez2s [ b_data [ 2 ] - 1 ] * ABS_idx_2 ; } Sum2 [ 0 ] /=
muDoubleScalarAbs ( Sum2 [ 0 ] ) + rtP . alpha ; Sum2 [ 1 ] /=
muDoubleScalarAbs ( Sum2 [ 1 ] ) + rtP . alpha ; memset ( & b_d [ 0 ] , 0 ,
9U * sizeof ( real_T ) ) ; b_d [ 0 ] = Sum2 [ 0 ] ; b_d [ 4 ] = Sum2 [ 1 ] ;
b_d [ 8 ] = Sum2 [ 2 ] / ( muDoubleScalarAbs ( Sum2 [ 2 ] ) + rtP . alpha ) ;
for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { rtB . jgni5sqhom [ i_p ] = - rtP .
Observer_Gain * rtB . kjivth4tcr [ i_p ] - ( ( b_d [ i_p + 3 ] * rtP . X_M [
1 ] + b_d [ i_p ] * rtP . X_M [ 0 ] ) + b_d [ i_p + 6 ] * rtP . X_M [ 2 ] ) ;
} ornqmajb3j ( h0xy1rdev3 , fjudlli45r , & rtB . a2ww44jm1e ) ; nrigba1tb3 (
rtB . h01ja14scr , & rtB . bx3nl12y2l ) ; h0vretpjys ( rtB . lpfnz5a2xn , rtB
. gqx5b5eit1 , h0xy1rdev3 , & rtB . czp4tvzurt ) ; a3yntw2avp ( rtB .
lpfnz5a2xn , rtB . ejm1xz1i3s . p0sifpbcra , h0xy1rdev3 , fjudlli45r , & rtB
. br1bl3k0ub ) ; kwtgsaa2gl ( rtP . Agent_Value , c2aver3dxc , ax4zf5kobh ,
lk3nn5bbfz , rtB . koohydnldu . j50ump3tqb , dnuhrcjkkl , rtB . pdfkmj3akd ,
rtB . o1w4cyxkr0 , & rtB . gnq3tqucqn ) ; for ( i = 0 ; i < 36 ; i ++ ) {
a25czsqxjb [ i ] = rtX . dv53n1gvyw [ i ] ; cxawfcsfzh [ i ] = rtX .
aawca0xb2d [ i ] ; huqnxkh55s [ i ] = rtX . jbl2zb4c4m [ i ] ; ptbh3bmhhg .
p1 [ i ] = lk3nn5bbfz [ i ] ; ptbh3bmhhg . p2 [ i ] = a25czsqxjb [ i ] ;
ptbh3bmhhg . p3 [ i ] = cxawfcsfzh [ i ] ; ptbh3bmhhg . p4 [ i ] = huqnxkh55s
[ i ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ )
{ rtB . g5dxvtvvft [ i ] = rtDW . idvr4rh4mu [ i ] ; } } drphagqhrh (
gxhomrvm3x , rtB . lbn4luqpfw , rtB . fdipzybztz , rtB . gi1v4dqyzv , rtB .
nbziqu4k4i , rtB . jbtx2pjet0 , rtB . o5hqdwcanp , rtB . gikzhfrh2r , rtP .
Agent_Value_ixja5dv44z , rtB . g5dxvtvvft , & rtB . oeqeegnqph ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB .
ptdcd1mp3v [ i ] = rtDW . fztt0z3pyb [ i ] ; } } drphagqhrh ( jpgmqjwf01 ,
rtB . lbn4luqpfw , rtB . fdipzybztz , rtB . gi1v4dqyzv , rtB . nbziqu4k4i ,
rtB . jbtx2pjet0 , rtB . o5hqdwcanp , rtB . gikzhfrh2r , rtP .
Agent_Value_axqasj4p0a , rtB . ptdcd1mp3v , & rtB . iief32edxg ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB .
hokah0t1ey [ i ] = rtDW . lmomxeodsu [ i ] ; } } drphagqhrh ( rtB .
pxebxuyzlv , rtB . lbn4luqpfw , rtB . fdipzybztz , rtB . gi1v4dqyzv , rtB .
nbziqu4k4i , rtB . jbtx2pjet0 , rtB . o5hqdwcanp , rtB . gikzhfrh2r , rtP .
Agent_Value_osrr3ginzy , rtB . hokah0t1ey , & rtB . jvph4vnkr4 ) ; me5jg4e3mq
( rtP . Agent_Value , rtB . itgoh1hxqp , & ptbh3bmhhg , rtB . koohydnldu .
j50ump3tqb , rtB . oeqeegnqph . j50ump3tqb , rtB . iief32edxg . j50ump3tqb ,
rtB . jvph4vnkr4 . j50ump3tqb , & rtB . oqlntds35a ) ; emensgwh2t (
lk3nn5bbfz , c2aver3dxc , & rtB . kv2bmipsop ) ; abfhyutv0s ( diakalarve , &
rtB . d0b2e2tbom ) ; oxcb4s41s5 = ssGetT ( rtS ) ; fwg3hcnrgf ( rtB .
lbn4luqpfw , rtB . ndp0ayzs4j . nnix5btgdj , oxcb4s41s5 , & rtB . oa3j2mackf
) ; for ( i = 0 ; i < 6 ; i ++ ) { k4ogwjgjyc [ i ] = rtX . ljhpwq5usb [ i ]
; } memcpy ( & advizqj3ha [ 0 ] , & rtX . kg0ugkqytj [ 0 ] , 36U * sizeof (
real_T ) ) ; for ( i = 0 ; i < 15 ; i ++ ) { nhn5tp2vva [ i ] = rtX .
naxi5vltsi [ i ] ; ak2ecose3u [ i ] = rtX . ew3cughtjj [ i ] - gxhomrvm3x [ i
] ; } p4cag1h1yw ( nhn5tp2vva , ak2ecose3u , & rtB . d3xq0g2bn4 ) ; for ( i =
0 ; i < 6 ; i ++ ) { rtB . incdyqesqd [ i ] = rtX . a1k30snvq0 [ i ] ; }
ngorhefjjy [ 0 ] = rtX . fzkicub43y [ 0 ] ; lpnd34wjvg [ 0 ] = rtX .
o30rzpjaco [ 0 ] - rtB . g5dxvtvvft [ 0 ] ; ngorhefjjy [ 1 ] = rtX .
fzkicub43y [ 1 ] ; lpnd34wjvg [ 1 ] = rtX . o30rzpjaco [ 1 ] - rtB .
g5dxvtvvft [ 1 ] ; ngorhefjjy [ 2 ] = rtX . fzkicub43y [ 2 ] ; lpnd34wjvg [ 2
] = rtX . o30rzpjaco [ 2 ] - rtB . g5dxvtvvft [ 2 ] ; bjoegfn2je ( ngorhefjjy
, lpnd34wjvg , & rtB . aeorekhod3 ) ; fmax3olm5p ( a25czsqxjb , rtB .
oeqeegnqph . j50ump3tqb , k4ogwjgjyc , advizqj3ha , rtB . hcmtphgh1v ,
dnuhrcjkkl , rtB . d3xq0g2bn4 . dwzefkbt4i , gxhomrvm3x , rtB . ktynx515e0 ,
rtP . Agent_Value_ixja5dv44z , rtB . g5dxvtvvft , rtB . myxakcrmqb , rtB .
incdyqesqd , rtB . aeorekhod3 . g0oikhinbf , & rtB . psbegwgczo ) ;
ktujytaqhq [ 0 ] = rtB . psbegwgczo . iqrledjweq [ 3 ] + ABS_idx_0 ;
ktujytaqhq [ 1 ] = rtB . psbegwgczo . iqrledjweq [ 4 ] + ABS_idx_1 ;
ktujytaqhq [ 2 ] = rtB . psbegwgczo . iqrledjweq [ 5 ] + ABS ; kakf0pv0ls (
ktujytaqhq , & rtB . bbinms31xh ) ; if ( ssGetLogOutput ( rtS ) ) {
StructLogVar * svar = ( StructLogVar * ) rtDW . pefmvwipw1 . LoggedData ;
LogVar * var = svar -> signals . values ; { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ;
} { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB . bbinms31xh . kh3hogern0 [ 0 ] ; up0
[ 1 ] = rtB . bbinms31xh . kh3hogern0 [ 1 ] ; up0 [ 2 ] = rtB . bbinms31xh .
kh3hogern0 [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } for (
i = 0 ; i < 6 ; i ++ ) { benjh1zrdx [ i ] = rtX . cimgd544vu [ i ] ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB .
afgqiftecc [ i ] = rtDW . lgcgglfpr5 [ i ] ; } } dqxwi3ojws ( rtB .
fdipzybztz , rtB . bbinms31xh . kh3hogern0 , rtB . afgqiftecc , & rtB .
jbgetkuxaj ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . mcgappzh0a [ i ] =
benjh1zrdx [ i ] + rtB . jbgetkuxaj . koxsf3yz0i [ i ] ; iftpnj5b4l [ i ] =
rtX . ccnwggclyg [ i ] ; rtB . pm3zcgsze2 [ i ] = rtX . eo3jeu2u13 [ i ] -
rtB . jbgetkuxaj . okla4d4php [ i ] ; } ljfb5rsuh1 ( iftpnj5b4l , rtB .
pm3zcgsze2 , & rtB . evhpd5pqdh ) ; memcpy ( & nxvcwdhzv1 [ 0 ] , & rtX .
g2nqcuil3a [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & ipmspkbyis [ 0 ] ,
& rtX . cy42njcpkh [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ;
i ++ ) { rtB . kzomkkaldu [ i ] = rtX . fdenftcp5x [ i ] ; } efke5v1e1t ( rtB
. mcgappzh0a , benjh1zrdx , rtB . evhpd5pqdh . lsn2ixkb43 , nxvcwdhzv1 ,
ipmspkbyis , rtB . kzomkkaldu , rtB . jbgetkuxaj . p0sifpbcra , & rtB .
dhlomykkky ) ; kivi1wcgc4 ( rtB . bbinms31xh . psgobcrgrf , rtB . dhlomykkky
. ceslw2bcsd , & rtB . l2ylxix2y4 ) ; memcpy ( & pmh2i5do12 . t1 [ 0 ] , &
ax4zf5kobh [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & pmh2i5do12 . t2 [ 0
] , & gxhomrvm3x [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & pmh2i5do12 .
t3 [ 0 ] , & jpgmqjwf01 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( &
pmh2i5do12 . t4 [ 0 ] , & rtB . pxebxuyzlv [ 0 ] , 15U * sizeof ( real_T ) )
; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { memcpy ( & rtB . ptv2m3ufnc . eps1 [
0 ] , & bssdkhb0vx [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & rtB .
ptv2m3ufnc . eps2 [ 0 ] , & idgmoweaed [ 0 ] , 15U * sizeof ( real_T ) ) ;
memcpy ( & rtB . ptv2m3ufnc . eps3 [ 0 ] , & ifzsacw3nd [ 0 ] , 15U * sizeof
( real_T ) ) ; memcpy ( & rtB . ptv2m3ufnc . eps4 [ 0 ] , & nqy40numco [ 0 ]
, 15U * sizeof ( real_T ) ) ; } go1q2xrxlf ( ak2ecose3u , & rtB . f20gcf5hzy
) ; etzl23kxck ( & pmh2i5do12 , & rtB . ptv2m3ufnc , gxhomrvm3x , rtP .
Agent_Value_ixja5dv44z , rtB . pqzidfucir , & rtB . frmzupx0zv ) ; b_BN_c =
b_BN_e [ ( ( ( ( int32_T ) rtP . Agent_Value_ixja5dv44z - 1 ) << 2 ) + (
int32_T ) rtP . Agent_Value_ixja5dv44z ) - 1 ] ; nzh4xfbh4v [ 0 ] = rtB .
ittv15bcsa [ 0 ] ; nzh4xfbh4v [ 3 ] = rtB . ktynx515e0 [ 0 ] ; nzh4xfbh4v [ 6
] = rtB . gcxmhwbhns [ 0 ] ; nzh4xfbh4v [ 9 ] = rtB . e2i3atu3ac [ 0 ] ;
oiryq5ez2s [ 0 ] = rtB . asu0f2ijbr [ 0 ] ; oiryq5ez2s [ 3 ] = rtB .
j2pscqeale [ 0 ] ; oiryq5ez2s [ 6 ] = rtB . nfvj4bpva5 [ 0 ] ; oiryq5ez2s [ 9
] = rtB . cvpsjp1xqu [ 0 ] ; rtB . eko0owjdui [ 0 ] = ( rtB . ktynx515e0 [ 0
] - rtB . hcmtphgh1v [ 0 ] ) * ( real_T ) b_BN_c ; Sum2 [ 0 ] = 0.0 ;
nzh4xfbh4v [ 1 ] = rtB . ittv15bcsa [ 1 ] ; nzh4xfbh4v [ 4 ] = rtB .
ktynx515e0 [ 1 ] ; nzh4xfbh4v [ 7 ] = rtB . gcxmhwbhns [ 1 ] ; nzh4xfbh4v [
10 ] = rtB . e2i3atu3ac [ 1 ] ; oiryq5ez2s [ 1 ] = rtB . asu0f2ijbr [ 1 ] ;
oiryq5ez2s [ 4 ] = rtB . j2pscqeale [ 1 ] ; oiryq5ez2s [ 7 ] = rtB .
nfvj4bpva5 [ 1 ] ; oiryq5ez2s [ 10 ] = rtB . cvpsjp1xqu [ 1 ] ; rtB .
eko0owjdui [ 1 ] = ( rtB . ktynx515e0 [ 1 ] - rtB . hcmtphgh1v [ 1 ] ) * (
real_T ) b_BN_c ; Sum2 [ 1 ] = 0.0 ; nzh4xfbh4v [ 2 ] = rtB . ittv15bcsa [ 2
] ; nzh4xfbh4v [ 5 ] = rtB . ktynx515e0 [ 2 ] ; nzh4xfbh4v [ 8 ] = rtB .
gcxmhwbhns [ 2 ] ; nzh4xfbh4v [ 11 ] = rtB . e2i3atu3ac [ 2 ] ; oiryq5ez2s [
2 ] = rtB . asu0f2ijbr [ 2 ] ; oiryq5ez2s [ 5 ] = rtB . j2pscqeale [ 2 ] ;
oiryq5ez2s [ 8 ] = rtB . nfvj4bpva5 [ 2 ] ; oiryq5ez2s [ 11 ] = rtB .
cvpsjp1xqu [ 2 ] ; rtB . eko0owjdui [ 2 ] = ( rtB . ktynx515e0 [ 2 ] - rtB .
hcmtphgh1v [ 2 ] ) * ( real_T ) b_BN_c ; Sum2 [ 2 ] = 0.0 ; for ( i = 0 ; i <
4 ; i ++ ) { b_BN_c = i * 3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) {
b_BN_c = 1 ; c = 0 ; } b_AN_c = b_AN_e [ ( ( i << 2 ) + ( int32_T ) rtP .
Agent_Value_ixja5dv44z ) - 1 ] ; c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p
++ ) { b_data [ i_p ] = ( int8_T ) ( b_BN_c + i_p ) ; } rtB . eko0owjdui [ 0
] += ( rtB . ktynx515e0 [ 0 ] - nzh4xfbh4v [ b_data [ 0 ] - 1 ] ) * ( real_T
) b_AN_c ; rtB . eko0owjdui [ 1 ] += ( rtB . ktynx515e0 [ 1 ] - nzh4xfbh4v [
b_data [ 1 ] - 1 ] ) * ( real_T ) b_AN_c ; rtB . eko0owjdui [ 2 ] += ( rtB .
ktynx515e0 [ 2 ] - nzh4xfbh4v [ b_data [ 2 ] - 1 ] ) * ( real_T ) b_AN_c ;
b_BN_c = i * 3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c =
0 ; } ABS_idx_2 = rtP . H [ ( ( ( int32_T ) rtP . Agent_Value_ixja5dv44z - 1
) << 2 ) + i ] ; c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [
i_p ] = ( int8_T ) ( b_BN_c + i_p ) ; } Sum2 [ 0 ] += oiryq5ez2s [ b_data [ 0
] - 1 ] * ABS_idx_2 ; Sum2 [ 1 ] += oiryq5ez2s [ b_data [ 1 ] - 1 ] *
ABS_idx_2 ; Sum2 [ 2 ] += oiryq5ez2s [ b_data [ 2 ] - 1 ] * ABS_idx_2 ; }
Sum2 [ 0 ] /= muDoubleScalarAbs ( Sum2 [ 0 ] ) + rtP . alpha ; Sum2 [ 1 ] /=
muDoubleScalarAbs ( Sum2 [ 1 ] ) + rtP . alpha ; memset ( & b_d [ 0 ] , 0 ,
9U * sizeof ( real_T ) ) ; b_d [ 0 ] = Sum2 [ 0 ] ; b_d [ 4 ] = Sum2 [ 1 ] ;
b_d [ 8 ] = Sum2 [ 2 ] / ( muDoubleScalarAbs ( Sum2 [ 2 ] ) + rtP . alpha ) ;
b_BN_c = b_BN_i [ ( ( ( ( int32_T ) rtP . Agent_Value_ixja5dv44z - 1 ) << 2 )
+ ( int32_T ) rtP . Agent_Value_ixja5dv44z ) - 1 ] ; tmp [ 0 ] = rtB .
jbtx2pjet0 ; tmp [ 1 ] = rtB . o5hqdwcanp ; tmp [ 2 ] = rtB . gikzhfrh2r ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . dmj2b1er01 [ i ] = - rtP . Observer_Gain
* rtB . eko0owjdui [ i ] - ( ( b_d [ i + 3 ] * rtP . U_dot0_M [ 1 ] + b_d [ i
] * rtP . U_dot0_M [ 0 ] ) + b_d [ i + 6 ] * rtP . U_dot0_M [ 2 ] ) ;
nzh4xfbh4v [ i ] = rtB . pdfkmj3akd [ i ] ; nzh4xfbh4v [ i + 3 ] = rtB .
myxakcrmqb [ i ] ; nzh4xfbh4v [ i + 6 ] = rtB . ozfculoppj [ i ] ; nzh4xfbh4v
[ i + 9 ] = rtB . btqsez3icc [ i ] ; oiryq5ez2s [ i ] = rtB . ow20kwohpt [ i
] ; oiryq5ez2s [ i + 3 ] = rtB . htdjvfkvx0 [ i ] ; oiryq5ez2s [ i + 6 ] =
rtB . okuh0wfpjd [ i ] ; oiryq5ez2s [ i + 9 ] = rtB . mythggah1g [ i ] ; rtB
. onz3z4vedl [ i ] = ( rtB . myxakcrmqb [ i ] - tmp [ i ] ) * ( real_T )
b_BN_c ; Sum2 [ i ] = 0.0 ; } for ( i = 0 ; i < 4 ; i ++ ) { b_BN_c = i * 3 +
1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c = 0 ; } b_AN_c =
b_AN_i [ ( ( i << 2 ) + ( int32_T ) rtP . Agent_Value_ixja5dv44z ) - 1 ] ; c
-= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [ i_p ] = ( int8_T )
( b_BN_c + i_p ) ; } rtB . onz3z4vedl [ 0 ] += ( rtB . myxakcrmqb [ 0 ] -
nzh4xfbh4v [ b_data [ 0 ] - 1 ] ) * ( real_T ) b_AN_c ; rtB . onz3z4vedl [ 1
] += ( rtB . myxakcrmqb [ 1 ] - nzh4xfbh4v [ b_data [ 1 ] - 1 ] ) * ( real_T
) b_AN_c ; rtB . onz3z4vedl [ 2 ] += ( rtB . myxakcrmqb [ 2 ] - nzh4xfbh4v [
b_data [ 2 ] - 1 ] ) * ( real_T ) b_AN_c ; b_BN_c = i * 3 + 1 ; c = ( 1 + i )
* 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c = 0 ; } ABS_idx_2 = rtP . H [ ( ( (
int32_T ) rtP . Agent_Value_ixja5dv44z - 1 ) << 2 ) + i ] ; c -= b_BN_c ; for
( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [ i_p ] = ( int8_T ) ( b_BN_c + i_p
) ; } Sum2 [ 0 ] += oiryq5ez2s [ b_data [ 0 ] - 1 ] * ABS_idx_2 ; Sum2 [ 1 ]
+= oiryq5ez2s [ b_data [ 1 ] - 1 ] * ABS_idx_2 ; Sum2 [ 2 ] += oiryq5ez2s [
b_data [ 2 ] - 1 ] * ABS_idx_2 ; } Sum2 [ 0 ] /= muDoubleScalarAbs ( Sum2 [ 0
] ) + rtP . alpha ; Sum2 [ 1 ] /= muDoubleScalarAbs ( Sum2 [ 1 ] ) + rtP .
alpha ; memset ( & b_d [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; b_d [ 0 ] =
Sum2 [ 0 ] ; b_d [ 4 ] = Sum2 [ 1 ] ; b_d [ 8 ] = Sum2 [ 2 ] / (
muDoubleScalarAbs ( Sum2 [ 2 ] ) + rtP . alpha ) ; for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { rtB . d234fos3qo [ i_p ] = - rtP . Observer_Gain * rtB .
onz3z4vedl [ i_p ] - ( ( b_d [ i_p + 3 ] * rtP . X_M [ 1 ] + b_d [ i_p ] *
rtP . X_M [ 0 ] ) + b_d [ i_p + 6 ] * rtP . X_M [ 2 ] ) ; } ornqmajb3j (
nxvcwdhzv1 , ipmspkbyis , & rtB . odecv1tkpq ) ; nrigba1tb3 ( rtB .
pm3zcgsze2 , & rtB . hdtx0qvcg5 ) ; h0vretpjys ( rtB . mcgappzh0a , rtB .
kzomkkaldu , nxvcwdhzv1 , & rtB . f251a30bl5 ) ; a3yntw2avp ( rtB .
mcgappzh0a , rtB . jbgetkuxaj . p0sifpbcra , nxvcwdhzv1 , ipmspkbyis , & rtB
. htfczxwbqt ) ; kwtgsaa2gl ( rtP . Agent_Value_ixja5dv44z , advizqj3ha ,
gxhomrvm3x , a25czsqxjb , rtB . oeqeegnqph . j50ump3tqb , dnuhrcjkkl , rtB .
myxakcrmqb , rtB . g5dxvtvvft , & rtB . d2q5qnt0b3 ) ; memcpy ( & fjt2ekrj4l
. p1 [ 0 ] , & lk3nn5bbfz [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
fjt2ekrj4l . p2 [ 0 ] , & a25czsqxjb [ 0 ] , 36U * sizeof ( real_T ) ) ;
memcpy ( & fjt2ekrj4l . p3 [ 0 ] , & cxawfcsfzh [ 0 ] , 36U * sizeof ( real_T
) ) ; memcpy ( & fjt2ekrj4l . p4 [ 0 ] , & huqnxkh55s [ 0 ] , 36U * sizeof (
real_T ) ) ; me5jg4e3mq ( rtP . Agent_Value_ixja5dv44z , rtB . incdyqesqd , &
fjt2ekrj4l , rtB . koohydnldu . j50ump3tqb , rtB . oeqeegnqph . j50ump3tqb ,
rtB . iief32edxg . j50ump3tqb , rtB . jvph4vnkr4 . j50ump3tqb , & rtB .
du2lrvbx5h ) ; emensgwh2t ( a25czsqxjb , advizqj3ha , & rtB . avlxughyns ) ;
abfhyutv0s ( lpnd34wjvg , & rtB . ftxqlzmaxy ) ; ph3ajuwqpu = ssGetT ( rtS )
; fwg3hcnrgf ( rtB . fdipzybztz , rtB . l2ylxix2y4 . nnix5btgdj , ph3ajuwqpu
, & rtB . mtut1sc5t2 ) ; for ( i = 0 ; i < 6 ; i ++ ) { ohitilcoh5 [ i ] =
rtX . ic3q3cbrlg [ i ] ; } memcpy ( & ao2wtesi4w [ 0 ] , & rtX . ddymkn2sup [
0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 15 ; i ++ ) { d0wp20k22c
[ i ] = rtX . e0j4zo50kw [ i ] ; m0pcbkfaaj [ i ] = rtX . ocwmo4ag2m [ i ] -
jpgmqjwf01 [ i ] ; } p4cag1h1yw ( d0wp20k22c , m0pcbkfaaj , & rtB .
k1qsnregiz ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . gmpoamd1yl [ i ] = rtX .
lbz5rkxaei [ i ] ; } lfls4avrhx [ 0 ] = rtX . ljpgz2iakn [ 0 ] ; ga2rxblkrr [
0 ] = rtX . ehwg0uvmnb [ 0 ] - rtB . ptdcd1mp3v [ 0 ] ; lfls4avrhx [ 1 ] =
rtX . ljpgz2iakn [ 1 ] ; ga2rxblkrr [ 1 ] = rtX . ehwg0uvmnb [ 1 ] - rtB .
ptdcd1mp3v [ 1 ] ; lfls4avrhx [ 2 ] = rtX . ljpgz2iakn [ 2 ] ; ga2rxblkrr [ 2
] = rtX . ehwg0uvmnb [ 2 ] - rtB . ptdcd1mp3v [ 2 ] ; bjoegfn2je ( lfls4avrhx
, ga2rxblkrr , & rtB . lssgckg42l ) ; fmax3olm5p ( cxawfcsfzh , rtB .
iief32edxg . j50ump3tqb , ohitilcoh5 , ao2wtesi4w , rtB . hcmtphgh1v ,
dnuhrcjkkl , rtB . k1qsnregiz . dwzefkbt4i , jpgmqjwf01 , rtB . gcxmhwbhns ,
rtP . Agent_Value_axqasj4p0a , rtB . ptdcd1mp3v , rtB . ozfculoppj , rtB .
gmpoamd1yl , rtB . lssgckg42l . g0oikhinbf , & rtB . m3u1mc53xu ) ;
loxbcpprvl [ 0 ] = rtB . m3u1mc53xu . iqrledjweq [ 3 ] + ABS_idx_0 ;
loxbcpprvl [ 1 ] = rtB . m3u1mc53xu . iqrledjweq [ 4 ] + ABS_idx_1 ;
loxbcpprvl [ 2 ] = rtB . m3u1mc53xu . iqrledjweq [ 5 ] + ABS ; kakf0pv0ls (
loxbcpprvl , & rtB . li222mg0tu ) ; if ( ssGetLogOutput ( rtS ) ) {
StructLogVar * svar = ( StructLogVar * ) rtDW . ow3bgvrozh . LoggedData ;
LogVar * var = svar -> signals . values ; { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ;
} { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB . li222mg0tu . kh3hogern0 [ 0 ] ; up0
[ 1 ] = rtB . li222mg0tu . kh3hogern0 [ 1 ] ; up0 [ 2 ] = rtB . li222mg0tu .
kh3hogern0 [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } for (
i = 0 ; i < 6 ; i ++ ) { lv1xhvhatj [ i ] = rtX . hlfemejl1b [ i ] ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB .
l4y53aslys [ i ] = rtDW . ofcsp2xnjt [ i ] ; } } dqxwi3ojws ( rtB .
gi1v4dqyzv , rtB . li222mg0tu . kh3hogern0 , rtB . l4y53aslys , & rtB .
c1eq5vcpx4 ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . oca1yeauge [ i ] =
lv1xhvhatj [ i ] + rtB . c1eq5vcpx4 . koxsf3yz0i [ i ] ; jiiq1n32wh [ i ] =
rtX . pxyjcvvevd [ i ] ; rtB . duuk0gubye [ i ] = rtX . kctrjublf0 [ i ] -
rtB . c1eq5vcpx4 . okla4d4php [ i ] ; } ljfb5rsuh1 ( jiiq1n32wh , rtB .
duuk0gubye , & rtB . co5vre2gwb ) ; memcpy ( & lodhdkq13m [ 0 ] , & rtX .
g0dx10c2um [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & cfw3hg13mq [ 0 ] ,
& rtX . djovh5b3kq [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ;
i ++ ) { rtB . ajig4v24ce [ i ] = rtX . e2pcsiol3y [ i ] ; } efke5v1e1t ( rtB
. oca1yeauge , lv1xhvhatj , rtB . co5vre2gwb . lsn2ixkb43 , lodhdkq13m ,
cfw3hg13mq , rtB . ajig4v24ce , rtB . c1eq5vcpx4 . p0sifpbcra , & rtB .
cxm1w1zufa ) ; kivi1wcgc4 ( rtB . li222mg0tu . psgobcrgrf , rtB . cxm1w1zufa
. ceslw2bcsd , & rtB . n2gxek1ysk ) ; memcpy ( & igiw41w3mf . t1 [ 0 ] , &
ax4zf5kobh [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & igiw41w3mf . t2 [ 0
] , & gxhomrvm3x [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & igiw41w3mf .
t3 [ 0 ] , & jpgmqjwf01 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( &
igiw41w3mf . t4 [ 0 ] , & rtB . pxebxuyzlv [ 0 ] , 15U * sizeof ( real_T ) )
; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { memcpy ( & rtB . nhbjfwwdjl . eps1 [
0 ] , & bssdkhb0vx [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & rtB .
nhbjfwwdjl . eps2 [ 0 ] , & idgmoweaed [ 0 ] , 15U * sizeof ( real_T ) ) ;
memcpy ( & rtB . nhbjfwwdjl . eps3 [ 0 ] , & ifzsacw3nd [ 0 ] , 15U * sizeof
( real_T ) ) ; memcpy ( & rtB . nhbjfwwdjl . eps4 [ 0 ] , & nqy40numco [ 0 ]
, 15U * sizeof ( real_T ) ) ; } go1q2xrxlf ( m0pcbkfaaj , & rtB . bg42xqoh1c
) ; etzl23kxck ( & igiw41w3mf , & rtB . nhbjfwwdjl , jpgmqjwf01 , rtP .
Agent_Value_axqasj4p0a , rtB . pqzidfucir , & rtB . dm0iynorl1 ) ; b_BN_c =
b_BN_m [ ( ( ( ( int32_T ) rtP . Agent_Value_axqasj4p0a - 1 ) << 2 ) + (
int32_T ) rtP . Agent_Value_axqasj4p0a ) - 1 ] ; nzh4xfbh4v [ 0 ] = rtB .
ittv15bcsa [ 0 ] ; nzh4xfbh4v [ 3 ] = rtB . ktynx515e0 [ 0 ] ; nzh4xfbh4v [ 6
] = rtB . gcxmhwbhns [ 0 ] ; nzh4xfbh4v [ 9 ] = rtB . e2i3atu3ac [ 0 ] ;
oiryq5ez2s [ 0 ] = rtB . asu0f2ijbr [ 0 ] ; oiryq5ez2s [ 3 ] = rtB .
j2pscqeale [ 0 ] ; oiryq5ez2s [ 6 ] = rtB . nfvj4bpva5 [ 0 ] ; oiryq5ez2s [ 9
] = rtB . cvpsjp1xqu [ 0 ] ; rtB . oxqbz15e3l [ 0 ] = ( rtB . gcxmhwbhns [ 0
] - rtB . hcmtphgh1v [ 0 ] ) * ( real_T ) b_BN_c ; Sum2 [ 0 ] = 0.0 ;
nzh4xfbh4v [ 1 ] = rtB . ittv15bcsa [ 1 ] ; nzh4xfbh4v [ 4 ] = rtB .
ktynx515e0 [ 1 ] ; nzh4xfbh4v [ 7 ] = rtB . gcxmhwbhns [ 1 ] ; nzh4xfbh4v [
10 ] = rtB . e2i3atu3ac [ 1 ] ; oiryq5ez2s [ 1 ] = rtB . asu0f2ijbr [ 1 ] ;
oiryq5ez2s [ 4 ] = rtB . j2pscqeale [ 1 ] ; oiryq5ez2s [ 7 ] = rtB .
nfvj4bpva5 [ 1 ] ; oiryq5ez2s [ 10 ] = rtB . cvpsjp1xqu [ 1 ] ; rtB .
oxqbz15e3l [ 1 ] = ( rtB . gcxmhwbhns [ 1 ] - rtB . hcmtphgh1v [ 1 ] ) * (
real_T ) b_BN_c ; Sum2 [ 1 ] = 0.0 ; nzh4xfbh4v [ 2 ] = rtB . ittv15bcsa [ 2
] ; nzh4xfbh4v [ 5 ] = rtB . ktynx515e0 [ 2 ] ; nzh4xfbh4v [ 8 ] = rtB .
gcxmhwbhns [ 2 ] ; nzh4xfbh4v [ 11 ] = rtB . e2i3atu3ac [ 2 ] ; oiryq5ez2s [
2 ] = rtB . asu0f2ijbr [ 2 ] ; oiryq5ez2s [ 5 ] = rtB . j2pscqeale [ 2 ] ;
oiryq5ez2s [ 8 ] = rtB . nfvj4bpva5 [ 2 ] ; oiryq5ez2s [ 11 ] = rtB .
cvpsjp1xqu [ 2 ] ; rtB . oxqbz15e3l [ 2 ] = ( rtB . gcxmhwbhns [ 2 ] - rtB .
hcmtphgh1v [ 2 ] ) * ( real_T ) b_BN_c ; Sum2 [ 2 ] = 0.0 ; for ( i = 0 ; i <
4 ; i ++ ) { b_BN_c = i * 3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) {
b_BN_c = 1 ; c = 0 ; } b_AN_c = b_AN_m [ ( ( i << 2 ) + ( int32_T ) rtP .
Agent_Value_axqasj4p0a ) - 1 ] ; c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p
++ ) { b_data [ i_p ] = ( int8_T ) ( b_BN_c + i_p ) ; } rtB . oxqbz15e3l [ 0
] += ( rtB . gcxmhwbhns [ 0 ] - nzh4xfbh4v [ b_data [ 0 ] - 1 ] ) * ( real_T
) b_AN_c ; rtB . oxqbz15e3l [ 1 ] += ( rtB . gcxmhwbhns [ 1 ] - nzh4xfbh4v [
b_data [ 1 ] - 1 ] ) * ( real_T ) b_AN_c ; rtB . oxqbz15e3l [ 2 ] += ( rtB .
gcxmhwbhns [ 2 ] - nzh4xfbh4v [ b_data [ 2 ] - 1 ] ) * ( real_T ) b_AN_c ;
b_BN_c = i * 3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c =
0 ; } ABS_idx_2 = rtP . H [ ( ( ( int32_T ) rtP . Agent_Value_axqasj4p0a - 1
) << 2 ) + i ] ; c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [
i_p ] = ( int8_T ) ( b_BN_c + i_p ) ; } Sum2 [ 0 ] += oiryq5ez2s [ b_data [ 0
] - 1 ] * ABS_idx_2 ; Sum2 [ 1 ] += oiryq5ez2s [ b_data [ 1 ] - 1 ] *
ABS_idx_2 ; Sum2 [ 2 ] += oiryq5ez2s [ b_data [ 2 ] - 1 ] * ABS_idx_2 ; }
Sum2 [ 0 ] /= muDoubleScalarAbs ( Sum2 [ 0 ] ) + rtP . alpha ; Sum2 [ 1 ] /=
muDoubleScalarAbs ( Sum2 [ 1 ] ) + rtP . alpha ; memset ( & b_d [ 0 ] , 0 ,
9U * sizeof ( real_T ) ) ; b_d [ 0 ] = Sum2 [ 0 ] ; b_d [ 4 ] = Sum2 [ 1 ] ;
b_d [ 8 ] = Sum2 [ 2 ] / ( muDoubleScalarAbs ( Sum2 [ 2 ] ) + rtP . alpha ) ;
b_BN_c = b_BN_g [ ( ( ( ( int32_T ) rtP . Agent_Value_axqasj4p0a - 1 ) << 2 )
+ ( int32_T ) rtP . Agent_Value_axqasj4p0a ) - 1 ] ; tmp [ 0 ] = rtB .
jbtx2pjet0 ; tmp [ 1 ] = rtB . o5hqdwcanp ; tmp [ 2 ] = rtB . gikzhfrh2r ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . odtp4k5ik4 [ i ] = - rtP . Observer_Gain
* rtB . oxqbz15e3l [ i ] - ( ( b_d [ i + 3 ] * rtP . U_dot0_M [ 1 ] + b_d [ i
] * rtP . U_dot0_M [ 0 ] ) + b_d [ i + 6 ] * rtP . U_dot0_M [ 2 ] ) ;
nzh4xfbh4v [ i ] = rtB . pdfkmj3akd [ i ] ; nzh4xfbh4v [ i + 3 ] = rtB .
myxakcrmqb [ i ] ; nzh4xfbh4v [ i + 6 ] = rtB . ozfculoppj [ i ] ; nzh4xfbh4v
[ i + 9 ] = rtB . btqsez3icc [ i ] ; oiryq5ez2s [ i ] = rtB . ow20kwohpt [ i
] ; oiryq5ez2s [ i + 3 ] = rtB . htdjvfkvx0 [ i ] ; oiryq5ez2s [ i + 6 ] =
rtB . okuh0wfpjd [ i ] ; oiryq5ez2s [ i + 9 ] = rtB . mythggah1g [ i ] ; rtB
. nc5l5ompcr [ i ] = ( rtB . ozfculoppj [ i ] - tmp [ i ] ) * ( real_T )
b_BN_c ; Sum2 [ i ] = 0.0 ; } for ( i = 0 ; i < 4 ; i ++ ) { b_BN_c = i * 3 +
1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c = 0 ; } b_AN_c =
b_AN_g [ ( ( i << 2 ) + ( int32_T ) rtP . Agent_Value_axqasj4p0a ) - 1 ] ; c
-= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [ i_p ] = ( int8_T )
( b_BN_c + i_p ) ; } rtB . nc5l5ompcr [ 0 ] += ( rtB . ozfculoppj [ 0 ] -
nzh4xfbh4v [ b_data [ 0 ] - 1 ] ) * ( real_T ) b_AN_c ; rtB . nc5l5ompcr [ 1
] += ( rtB . ozfculoppj [ 1 ] - nzh4xfbh4v [ b_data [ 1 ] - 1 ] ) * ( real_T
) b_AN_c ; rtB . nc5l5ompcr [ 2 ] += ( rtB . ozfculoppj [ 2 ] - nzh4xfbh4v [
b_data [ 2 ] - 1 ] ) * ( real_T ) b_AN_c ; b_BN_c = i * 3 + 1 ; c = ( 1 + i )
* 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c = 0 ; } ABS_idx_2 = rtP . H [ ( ( (
int32_T ) rtP . Agent_Value_axqasj4p0a - 1 ) << 2 ) + i ] ; c -= b_BN_c ; for
( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [ i_p ] = ( int8_T ) ( b_BN_c + i_p
) ; } Sum2 [ 0 ] += oiryq5ez2s [ b_data [ 0 ] - 1 ] * ABS_idx_2 ; Sum2 [ 1 ]
+= oiryq5ez2s [ b_data [ 1 ] - 1 ] * ABS_idx_2 ; Sum2 [ 2 ] += oiryq5ez2s [
b_data [ 2 ] - 1 ] * ABS_idx_2 ; } Sum2 [ 0 ] /= muDoubleScalarAbs ( Sum2 [ 0
] ) + rtP . alpha ; Sum2 [ 1 ] /= muDoubleScalarAbs ( Sum2 [ 1 ] ) + rtP .
alpha ; memset ( & b_d [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; b_d [ 0 ] =
Sum2 [ 0 ] ; b_d [ 4 ] = Sum2 [ 1 ] ; b_d [ 8 ] = Sum2 [ 2 ] / (
muDoubleScalarAbs ( Sum2 [ 2 ] ) + rtP . alpha ) ; for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { rtB . fxo2ztmqiq [ i_p ] = - rtP . Observer_Gain * rtB .
nc5l5ompcr [ i_p ] - ( ( b_d [ i_p + 3 ] * rtP . X_M [ 1 ] + b_d [ i_p ] *
rtP . X_M [ 0 ] ) + b_d [ i_p + 6 ] * rtP . X_M [ 2 ] ) ; } ornqmajb3j (
lodhdkq13m , cfw3hg13mq , & rtB . jjieidn0fp ) ; nrigba1tb3 ( rtB .
duuk0gubye , & rtB . ofvqlpwckb ) ; h0vretpjys ( rtB . oca1yeauge , rtB .
ajig4v24ce , lodhdkq13m , & rtB . fay2vqnghf ) ; a3yntw2avp ( rtB .
oca1yeauge , rtB . c1eq5vcpx4 . p0sifpbcra , lodhdkq13m , cfw3hg13mq , & rtB
. fbh4dqoyov ) ; kwtgsaa2gl ( rtP . Agent_Value_axqasj4p0a , ao2wtesi4w ,
jpgmqjwf01 , cxawfcsfzh , rtB . iief32edxg . j50ump3tqb , dnuhrcjkkl , rtB .
ozfculoppj , rtB . ptdcd1mp3v , & rtB . b44jbvl1vq ) ; memcpy ( & lgkxjsb4pn
. p1 [ 0 ] , & lk3nn5bbfz [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
lgkxjsb4pn . p2 [ 0 ] , & a25czsqxjb [ 0 ] , 36U * sizeof ( real_T ) ) ;
memcpy ( & lgkxjsb4pn . p3 [ 0 ] , & cxawfcsfzh [ 0 ] , 36U * sizeof ( real_T
) ) ; memcpy ( & lgkxjsb4pn . p4 [ 0 ] , & huqnxkh55s [ 0 ] , 36U * sizeof (
real_T ) ) ; me5jg4e3mq ( rtP . Agent_Value_axqasj4p0a , rtB . gmpoamd1yl , &
lgkxjsb4pn , rtB . koohydnldu . j50ump3tqb , rtB . oeqeegnqph . j50ump3tqb ,
rtB . iief32edxg . j50ump3tqb , rtB . jvph4vnkr4 . j50ump3tqb , & rtB .
b20p2q3lgq ) ; emensgwh2t ( cxawfcsfzh , ao2wtesi4w , & rtB . ex1zkqtfgv ) ;
abfhyutv0s ( ga2rxblkrr , & rtB . i2taelcq5m ) ; ezhxgxis1h = ssGetT ( rtS )
; fwg3hcnrgf ( rtB . gi1v4dqyzv , rtB . n2gxek1ysk . nnix5btgdj , ezhxgxis1h
, & rtB . jwexpeel5j ) ; for ( i = 0 ; i < 6 ; i ++ ) { c5ungu42h4 [ i ] =
rtX . egalmcbuqp [ i ] ; } memcpy ( & h5tz0x5bs2 [ 0 ] , & rtX . mxr42d2wl0 [
0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 15 ; i ++ ) { bp3grqjuj3
[ i ] = rtX . j32sa5rgd2 [ i ] ; ilqmriesq3 [ i ] = rtX . cpltwh23xe [ i ] -
rtB . pxebxuyzlv [ i ] ; } p4cag1h1yw ( bp3grqjuj3 , ilqmriesq3 , & rtB .
aue1vbpmvj ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . fdryynjim2 [ i ] = rtX .
cqdcvy2yck [ i ] ; } iaiszp35qu [ 0 ] = rtX . pnhbys003g [ 0 ] ; cfwqar2em3 [
0 ] = rtX . lqaehp4prm [ 0 ] - rtB . hokah0t1ey [ 0 ] ; iaiszp35qu [ 1 ] =
rtX . pnhbys003g [ 1 ] ; cfwqar2em3 [ 1 ] = rtX . lqaehp4prm [ 1 ] - rtB .
hokah0t1ey [ 1 ] ; iaiszp35qu [ 2 ] = rtX . pnhbys003g [ 2 ] ; cfwqar2em3 [ 2
] = rtX . lqaehp4prm [ 2 ] - rtB . hokah0t1ey [ 2 ] ; bjoegfn2je ( iaiszp35qu
, cfwqar2em3 , & rtB . kc2ijyeu0y ) ; fmax3olm5p ( huqnxkh55s , rtB .
jvph4vnkr4 . j50ump3tqb , c5ungu42h4 , h5tz0x5bs2 , rtB . hcmtphgh1v ,
dnuhrcjkkl , rtB . aue1vbpmvj . dwzefkbt4i , rtB . pxebxuyzlv , rtB .
e2i3atu3ac , rtP . Agent_Value_osrr3ginzy , rtB . hokah0t1ey , rtB .
btqsez3icc , rtB . fdryynjim2 , rtB . kc2ijyeu0y . g0oikhinbf , & rtB .
adhekhczer ) ; du4v3mstvy [ 0 ] = rtB . adhekhczer . iqrledjweq [ 3 ] +
ABS_idx_0 ; du4v3mstvy [ 1 ] = rtB . adhekhczer . iqrledjweq [ 4 ] +
ABS_idx_1 ; du4v3mstvy [ 2 ] = rtB . adhekhczer . iqrledjweq [ 5 ] + ABS ;
kakf0pv0ls ( du4v3mstvy , & rtB . idhvdfhluc ) ; if ( ssGetLogOutput ( rtS )
) { StructLogVar * svar = ( StructLogVar * ) rtDW . cacxxwupgo . LoggedData ;
LogVar * var = svar -> signals . values ; { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ;
} { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB . idhvdfhluc . kh3hogern0 [ 0 ] ; up0
[ 1 ] = rtB . idhvdfhluc . kh3hogern0 [ 1 ] ; up0 [ 2 ] = rtB . idhvdfhluc .
kh3hogern0 [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } for (
i = 0 ; i < 6 ; i ++ ) { pajieigztr [ i ] = rtX . b4wxud2s5x [ i ] ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB .
jsxfpjxi0q [ i ] = rtDW . ktoqhjnspo [ i ] ; } } dqxwi3ojws ( rtB .
nbziqu4k4i , rtB . idhvdfhluc . kh3hogern0 , rtB . jsxfpjxi0q , & rtB .
bf440oddgu ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . ki3bbacr2g [ i ] =
pajieigztr [ i ] + rtB . bf440oddgu . koxsf3yz0i [ i ] ; ccc1dkvwhq [ i ] =
rtX . bopvre4od1 [ i ] ; rtB . nd5m5e34h4 [ i ] = rtX . it5wbajlge [ i ] -
rtB . bf440oddgu . okla4d4php [ i ] ; } ljfb5rsuh1 ( ccc1dkvwhq , rtB .
nd5m5e34h4 , & rtB . majmcadfuu ) ; memcpy ( & i00waqcu3t [ 0 ] , & rtX .
jefvdqfjy5 [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & ayhwzzbb1m [ 0 ] ,
& rtX . dratvy31am [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ;
i ++ ) { rtB . ievgosfumo [ i ] = rtX . l3ttobdsfe [ i ] ; } efke5v1e1t ( rtB
. ki3bbacr2g , pajieigztr , rtB . majmcadfuu . lsn2ixkb43 , i00waqcu3t ,
ayhwzzbb1m , rtB . ievgosfumo , rtB . bf440oddgu . p0sifpbcra , & rtB .
cdm1uy5lwx ) ; kivi1wcgc4 ( rtB . idhvdfhluc . psgobcrgrf , rtB . cdm1uy5lwx
. ceslw2bcsd , & rtB . h5potfgoew ) ; memcpy ( & irfd2zdft4 . t1 [ 0 ] , &
ax4zf5kobh [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & irfd2zdft4 . t2 [ 0
] , & gxhomrvm3x [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & irfd2zdft4 .
t3 [ 0 ] , & jpgmqjwf01 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( &
irfd2zdft4 . t4 [ 0 ] , & rtB . pxebxuyzlv [ 0 ] , 15U * sizeof ( real_T ) )
; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { memcpy ( & rtB . lnnr0iw0cn . eps1 [
0 ] , & bssdkhb0vx [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & rtB .
lnnr0iw0cn . eps2 [ 0 ] , & idgmoweaed [ 0 ] , 15U * sizeof ( real_T ) ) ;
memcpy ( & rtB . lnnr0iw0cn . eps3 [ 0 ] , & ifzsacw3nd [ 0 ] , 15U * sizeof
( real_T ) ) ; memcpy ( & rtB . lnnr0iw0cn . eps4 [ 0 ] , & nqy40numco [ 0 ]
, 15U * sizeof ( real_T ) ) ; } go1q2xrxlf ( ilqmriesq3 , & rtB . eda2vxrff0
) ; etzl23kxck ( & irfd2zdft4 , & rtB . lnnr0iw0cn , rtB . pxebxuyzlv , rtP .
Agent_Value_osrr3ginzy , rtB . pqzidfucir , & rtB . m2rbsbdny1 ) ; b_BN_c =
b_BN_j [ ( ( ( ( int32_T ) rtP . Agent_Value_osrr3ginzy - 1 ) << 2 ) + (
int32_T ) rtP . Agent_Value_osrr3ginzy ) - 1 ] ; nzh4xfbh4v [ 0 ] = rtB .
ittv15bcsa [ 0 ] ; nzh4xfbh4v [ 3 ] = rtB . ktynx515e0 [ 0 ] ; nzh4xfbh4v [ 6
] = rtB . gcxmhwbhns [ 0 ] ; nzh4xfbh4v [ 9 ] = rtB . e2i3atu3ac [ 0 ] ;
oiryq5ez2s [ 0 ] = rtB . asu0f2ijbr [ 0 ] ; oiryq5ez2s [ 3 ] = rtB .
j2pscqeale [ 0 ] ; oiryq5ez2s [ 6 ] = rtB . nfvj4bpva5 [ 0 ] ; oiryq5ez2s [ 9
] = rtB . cvpsjp1xqu [ 0 ] ; rtB . b0oya0sorf [ 0 ] = ( rtB . e2i3atu3ac [ 0
] - rtB . hcmtphgh1v [ 0 ] ) * ( real_T ) b_BN_c ; Sum2 [ 0 ] = 0.0 ;
nzh4xfbh4v [ 1 ] = rtB . ittv15bcsa [ 1 ] ; nzh4xfbh4v [ 4 ] = rtB .
ktynx515e0 [ 1 ] ; nzh4xfbh4v [ 7 ] = rtB . gcxmhwbhns [ 1 ] ; nzh4xfbh4v [
10 ] = rtB . e2i3atu3ac [ 1 ] ; oiryq5ez2s [ 1 ] = rtB . asu0f2ijbr [ 1 ] ;
oiryq5ez2s [ 4 ] = rtB . j2pscqeale [ 1 ] ; oiryq5ez2s [ 7 ] = rtB .
nfvj4bpva5 [ 1 ] ; oiryq5ez2s [ 10 ] = rtB . cvpsjp1xqu [ 1 ] ; rtB .
b0oya0sorf [ 1 ] = ( rtB . e2i3atu3ac [ 1 ] - rtB . hcmtphgh1v [ 1 ] ) * (
real_T ) b_BN_c ; Sum2 [ 1 ] = 0.0 ; nzh4xfbh4v [ 2 ] = rtB . ittv15bcsa [ 2
] ; nzh4xfbh4v [ 5 ] = rtB . ktynx515e0 [ 2 ] ; nzh4xfbh4v [ 8 ] = rtB .
gcxmhwbhns [ 2 ] ; nzh4xfbh4v [ 11 ] = rtB . e2i3atu3ac [ 2 ] ; oiryq5ez2s [
2 ] = rtB . asu0f2ijbr [ 2 ] ; oiryq5ez2s [ 5 ] = rtB . j2pscqeale [ 2 ] ;
oiryq5ez2s [ 8 ] = rtB . nfvj4bpva5 [ 2 ] ; oiryq5ez2s [ 11 ] = rtB .
cvpsjp1xqu [ 2 ] ; rtB . b0oya0sorf [ 2 ] = ( rtB . e2i3atu3ac [ 2 ] - rtB .
hcmtphgh1v [ 2 ] ) * ( real_T ) b_BN_c ; Sum2 [ 2 ] = 0.0 ; for ( i = 0 ; i <
4 ; i ++ ) { b_BN_c = i * 3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) {
b_BN_c = 1 ; c = 0 ; } b_AN_c = b_AN_j [ ( ( i << 2 ) + ( int32_T ) rtP .
Agent_Value_osrr3ginzy ) - 1 ] ; c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p
++ ) { b_data [ i_p ] = ( int8_T ) ( b_BN_c + i_p ) ; } rtB . b0oya0sorf [ 0
] += ( rtB . e2i3atu3ac [ 0 ] - nzh4xfbh4v [ b_data [ 0 ] - 1 ] ) * ( real_T
) b_AN_c ; rtB . b0oya0sorf [ 1 ] += ( rtB . e2i3atu3ac [ 1 ] - nzh4xfbh4v [
b_data [ 1 ] - 1 ] ) * ( real_T ) b_AN_c ; rtB . b0oya0sorf [ 2 ] += ( rtB .
e2i3atu3ac [ 2 ] - nzh4xfbh4v [ b_data [ 2 ] - 1 ] ) * ( real_T ) b_AN_c ;
b_BN_c = i * 3 + 1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c =
0 ; } ABS_idx_2 = rtP . H [ ( ( ( int32_T ) rtP . Agent_Value_osrr3ginzy - 1
) << 2 ) + i ] ; c -= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [
i_p ] = ( int8_T ) ( b_BN_c + i_p ) ; } Sum2 [ 0 ] += oiryq5ez2s [ b_data [ 0
] - 1 ] * ABS_idx_2 ; Sum2 [ 1 ] += oiryq5ez2s [ b_data [ 1 ] - 1 ] *
ABS_idx_2 ; Sum2 [ 2 ] += oiryq5ez2s [ b_data [ 2 ] - 1 ] * ABS_idx_2 ; }
Sum2 [ 0 ] /= muDoubleScalarAbs ( Sum2 [ 0 ] ) + rtP . alpha ; Sum2 [ 1 ] /=
muDoubleScalarAbs ( Sum2 [ 1 ] ) + rtP . alpha ; memset ( & b_d [ 0 ] , 0 ,
9U * sizeof ( real_T ) ) ; b_d [ 0 ] = Sum2 [ 0 ] ; b_d [ 4 ] = Sum2 [ 1 ] ;
b_d [ 8 ] = Sum2 [ 2 ] / ( muDoubleScalarAbs ( Sum2 [ 2 ] ) + rtP . alpha ) ;
b_BN_c = b_BN_f [ ( ( ( ( int32_T ) rtP . Agent_Value_osrr3ginzy - 1 ) << 2 )
+ ( int32_T ) rtP . Agent_Value_osrr3ginzy ) - 1 ] ; tmp [ 0 ] = rtB .
jbtx2pjet0 ; tmp [ 1 ] = rtB . o5hqdwcanp ; tmp [ 2 ] = rtB . gikzhfrh2r ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . axhl1ytdq1 [ i ] = - rtP . Observer_Gain
* rtB . b0oya0sorf [ i ] - ( ( b_d [ i + 3 ] * rtP . U_dot0_M [ 1 ] + b_d [ i
] * rtP . U_dot0_M [ 0 ] ) + b_d [ i + 6 ] * rtP . U_dot0_M [ 2 ] ) ;
oiryq5ez2s [ i ] = rtB . pdfkmj3akd [ i ] ; oiryq5ez2s [ i + 3 ] = rtB .
myxakcrmqb [ i ] ; oiryq5ez2s [ i + 6 ] = rtB . ozfculoppj [ i ] ; oiryq5ez2s
[ i + 9 ] = rtB . btqsez3icc [ i ] ; nzh4xfbh4v [ i ] = rtB . ow20kwohpt [ i
] ; nzh4xfbh4v [ i + 3 ] = rtB . htdjvfkvx0 [ i ] ; nzh4xfbh4v [ i + 6 ] =
rtB . okuh0wfpjd [ i ] ; nzh4xfbh4v [ i + 9 ] = rtB . mythggah1g [ i ] ; rtB
. ctx14gz0mc [ i ] = ( rtB . btqsez3icc [ i ] - tmp [ i ] ) * ( real_T )
b_BN_c ; Sum2 [ i ] = 0.0 ; } for ( i = 0 ; i < 4 ; i ++ ) { b_BN_c = i * 3 +
1 ; c = ( 1 + i ) * 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c = 0 ; } b_AN_c =
b_AN_f [ ( ( i << 2 ) + ( int32_T ) rtP . Agent_Value_osrr3ginzy ) - 1 ] ; c
-= b_BN_c ; for ( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [ i_p ] = ( int8_T )
( b_BN_c + i_p ) ; } rtB . ctx14gz0mc [ 0 ] += ( rtB . btqsez3icc [ 0 ] -
oiryq5ez2s [ b_data [ 0 ] - 1 ] ) * ( real_T ) b_AN_c ; rtB . ctx14gz0mc [ 1
] += ( rtB . btqsez3icc [ 1 ] - oiryq5ez2s [ b_data [ 1 ] - 1 ] ) * ( real_T
) b_AN_c ; rtB . ctx14gz0mc [ 2 ] += ( rtB . btqsez3icc [ 2 ] - oiryq5ez2s [
b_data [ 2 ] - 1 ] ) * ( real_T ) b_AN_c ; b_BN_c = i * 3 + 1 ; c = ( 1 + i )
* 3 ; if ( b_BN_c > c ) { b_BN_c = 1 ; c = 0 ; } ABS_idx_2 = rtP . H [ ( ( (
int32_T ) rtP . Agent_Value_osrr3ginzy - 1 ) << 2 ) + i ] ; c -= b_BN_c ; for
( i_p = 0 ; i_p <= c ; i_p ++ ) { b_data [ i_p ] = ( int8_T ) ( b_BN_c + i_p
) ; } Sum2 [ 0 ] += nzh4xfbh4v [ b_data [ 0 ] - 1 ] * ABS_idx_2 ; Sum2 [ 1 ]
+= nzh4xfbh4v [ b_data [ 1 ] - 1 ] * ABS_idx_2 ; Sum2 [ 2 ] += nzh4xfbh4v [
b_data [ 2 ] - 1 ] * ABS_idx_2 ; } Sum2 [ 0 ] /= muDoubleScalarAbs ( Sum2 [ 0
] ) + rtP . alpha ; Sum2 [ 1 ] /= muDoubleScalarAbs ( Sum2 [ 1 ] ) + rtP .
alpha ; memset ( & b_d [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; b_d [ 0 ] =
Sum2 [ 0 ] ; b_d [ 4 ] = Sum2 [ 1 ] ; b_d [ 8 ] = Sum2 [ 2 ] / (
muDoubleScalarAbs ( Sum2 [ 2 ] ) + rtP . alpha ) ; for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { rtB . g3205b3ehz [ i_p ] = - rtP . Observer_Gain * rtB .
ctx14gz0mc [ i_p ] - ( ( b_d [ i_p + 3 ] * rtP . X_M [ 1 ] + b_d [ i_p ] *
rtP . X_M [ 0 ] ) + b_d [ i_p + 6 ] * rtP . X_M [ 2 ] ) ; } ornqmajb3j (
i00waqcu3t , ayhwzzbb1m , & rtB . gb4iihhqdp ) ; nrigba1tb3 ( rtB .
nd5m5e34h4 , & rtB . dnfgeeso11 ) ; h0vretpjys ( rtB . ki3bbacr2g , rtB .
ievgosfumo , i00waqcu3t , & rtB . ouqutwqspm ) ; a3yntw2avp ( rtB .
ki3bbacr2g , rtB . bf440oddgu . p0sifpbcra , i00waqcu3t , ayhwzzbb1m , & rtB
. pffczfadw0 ) ; kwtgsaa2gl ( rtP . Agent_Value_osrr3ginzy , h5tz0x5bs2 , rtB
. pxebxuyzlv , huqnxkh55s , rtB . jvph4vnkr4 . j50ump3tqb , dnuhrcjkkl , rtB
. btqsez3icc , rtB . hokah0t1ey , & rtB . nbfgabjloh ) ; memcpy ( &
pni5sniwcc . p1 [ 0 ] , & lk3nn5bbfz [ 0 ] , 36U * sizeof ( real_T ) ) ;
memcpy ( & pni5sniwcc . p2 [ 0 ] , & a25czsqxjb [ 0 ] , 36U * sizeof ( real_T
) ) ; memcpy ( & pni5sniwcc . p3 [ 0 ] , & cxawfcsfzh [ 0 ] , 36U * sizeof (
real_T ) ) ; memcpy ( & pni5sniwcc . p4 [ 0 ] , & huqnxkh55s [ 0 ] , 36U *
sizeof ( real_T ) ) ; me5jg4e3mq ( rtP . Agent_Value_osrr3ginzy , rtB .
fdryynjim2 , & pni5sniwcc , rtB . koohydnldu . j50ump3tqb , rtB . oeqeegnqph
. j50ump3tqb , rtB . iief32edxg . j50ump3tqb , rtB . jvph4vnkr4 . j50ump3tqb
, & rtB . hiuzcdovtx ) ; emensgwh2t ( huqnxkh55s , h5tz0x5bs2 , & rtB .
dtqe2jyuyw ) ; abfhyutv0s ( cfwqar2em3 , & rtB . aruhpddimh ) ; c451mqxe4s =
ssGetT ( rtS ) ; fwg3hcnrgf ( rtB . nbziqu4k4i , rtB . h5potfgoew .
nnix5btgdj , c451mqxe4s , & rtB . okynqnkfux ) ; if ( ssGetLogOutput ( rtS )
) { StructLogVar * svar = ( StructLogVar * ) rtDW . iuen3vwhwf . LoggedData ;
LogVar * var = svar -> signals . values ; { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ;
} { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB . o5fje2j3te [ 0
] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 )
; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar *
) rtDW . k1i2cgujxx . LoggedData ; LogVar * var = svar -> signals . values ;
{ double locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar *
) svar -> time , & locTime , 0 ) ; } { real_T up0 [ 12 ] ; ( void ) memcpy (
& up0 [ 0 ] , & rtB . lbn4luqpfw [ 0 ] , 12 * sizeof ( real_T ) ) ;
rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput (
rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW . o1qmdgtcqs .
LoggedData ; LogVar * var = svar -> signals . values ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , &
locTime , 0 ) ; } { real_T up0 [ 12 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB
. fdipzybztz [ 0 ] , 12 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar *
) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar =
( StructLogVar * ) rtDW . ahgn3ni2nd . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 12 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB . gi1v4dqyzv [ 0 ] , 12 *
sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if
( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
ftsenby5we . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 12 ] ; ( void ) memcpy ( & up0 [
0 ] , & rtB . nbziqu4k4i [ 0 ] , 12 * sizeof ( real_T ) ) ; rt_UpdateLogVar (
( LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) {
StructLogVar * svar = ( StructLogVar * ) rtDW . axnhqeg3ue . LoggedData ;
LogVar * var = svar -> signals . values ; { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ;
} { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB . lk5bwa3fu5 [ 0 ] ; up0 [ 1 ] = rtB .
lk5bwa3fu5 [ 1 ] ; up0 [ 2 ] = rtB . lk5bwa3fu5 [ 2 ] ; rt_UpdateLogVar ( (
LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar
* svar = ( StructLogVar * ) rtDW . jyofunjeyz . LoggedData ; LogVar * var =
svar -> signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . hcmtphgh1v [ 0 ] ; up0 [ 1 ] = rtB . hcmtphgh1v
[ 1 ] ; up0 [ 2 ] = rtB . hcmtphgh1v [ 2 ] ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . hv1dj310ft . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . jbtx2pjet0 ; up0 [ 1 ] = rtB . o5hqdwcanp ; up0
[ 2 ] = rtB . gikzhfrh2r ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; }
} if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * )
rtDW . pjf4td5nr0 . LoggedData [ 0 ] ; LogVar * var = svar -> signals .
values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( (
LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T up0 [ 1 ] ; up0 [ 0 ]
= rtB . jbtx2pjet0 ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; var =
var -> next ; } { real_T up1 [ 1 ] ; up1 [ 0 ] = rtB . o5hqdwcanp ;
rt_UpdateLogVar ( ( LogVar * ) var , up1 , 0 ) ; var = var -> next ; } {
real_T up2 [ 1 ] ; up2 [ 0 ] = rtB . gikzhfrh2r ; rt_UpdateLogVar ( ( LogVar
* ) var , up2 , 0 ) ; } } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
m1udjgpeyw = ( rtB . jbtx2pjet0 >= 0.0 ) ; rtDW . bjfbg3j4bh = ( rtB .
o5hqdwcanp >= 0.0 ) ; } rtB . fswysouih3 = rtDW . m1udjgpeyw > 0 ? rtB .
jbtx2pjet0 : - rtB . jbtx2pjet0 ; rtB . b5uou53b4t = rtDW . bjfbg3j4bh > 0 ?
rtB . o5hqdwcanp : - rtB . o5hqdwcanp ; abfhyutv0s ( jw2oq0p55i , & rtB .
nk3dg1co2i ) ; if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . ijkymdxn5s . LoggedData [ 0 ] ; LogVar * var = svar
-> signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 1 ] ; up0 [ 0 ] = rtB . jbtx2pjet0 ; rt_UpdateLogVar ( ( LogVar * ) var
, up0 , 0 ) ; var = var -> next ; } { real_T up1 [ 1 ] ; up1 [ 0 ] = rtB .
o5hqdwcanp ; rt_UpdateLogVar ( ( LogVar * ) var , up1 , 0 ) ; var = var ->
next ; } { real_T up2 [ 1 ] ; up2 [ 0 ] = rtB . gikzhfrh2r ; rt_UpdateLogVar
( ( LogVar * ) var , up2 , 0 ) ; } } rtB . fjuaz0z3oj = ssGetT ( rtS ) ; {
real_T * pDataValues = ( real_T * ) rtDW . i1wwy5n5rc . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . i1wwy5n5rc . TimePtr ; int_T currTimeIndex
= rtDW . abl3fffzqi . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
i1wwy5n5rc . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . abl3fffzqi .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { ot140ierlh = pDataValues [ currTimeIndex ] ; } else { ot140ierlh =
pDataValues [ currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; ot140ierlh = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
cjep00xofb = ( rtB . fjuaz0z3oj > rtP . Switch_Threshold ) ; rtDW .
er0mumta3j = ( rtB . fswysouih3 > rtP . Switch2_Threshold ) ; } if ( rtDW .
cjep00xofb ) { rtB . o2hi21fjpg = rtP . Gain2_Gain * ot140ierlh ; rtB .
hozlr0pwk1 = rtB . o2hi21fjpg ; } else { rtB . hozlr0pwk1 = rtP .
DesiredPosition4_Value_pidnqqr40v ; } if ( rtDW . er0mumta3j ) { rtB .
d4hj01c1vg = rtP . r_formX ; } else { rtB . d4hj01c1vg = rtP .
DesiredPosition4_Value ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
cyoxgzoski = ( rtB . b5uou53b4t > rtP . Switch3_Threshold ) ; } if ( rtDW .
cyoxgzoski ) { rtB . jeeth114rb = rtP . r_formY ; } else { rtB . jeeth114rb =
rtP . DesiredPosition4_Value ; } kuqyagplbz ( jpgmqjwf01 , & rtB . oor4lambv3
) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . hzwyeasm43 . LoggedData , & locTime , & rtB .
oor4lambv3 . lsl2hmd5f3 [ 0 ] ) ; } } } } kuqyagplbz ( rtB . pxebxuyzlv , &
rtB . e3fsepjhu3 ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . j4nrepcgpu . LoggedData , & locTime , & rtB .
e3fsepjhu3 . lsl2hmd5f3 [ 0 ] ) ; } } } } kuqyagplbz ( ax4zf5kobh , & rtB .
c0oxtpeizm ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . camjz1utpm . LoggedData , & locTime , & rtB .
c0oxtpeizm . lsl2hmd5f3 [ 0 ] ) ; } } } } kuqyagplbz ( gxhomrvm3x , & rtB .
fdngayugtw ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . h34d0dz1tx . LoggedData , & locTime , & rtB .
fdngayugtw . lsl2hmd5f3 [ 0 ] ) ; } } } } if ( ssIsSampleHit ( rtS , 1 , 0 )
) { kuqyagplbz ( bssdkhb0vx , & rtB . eu5twy3xqi ) ; { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . dgeamk1wo2 .
LoggedData , & locTime , & rtB . eu5twy3xqi . lsl2hmd5f3 [ 0 ] ) ; } } } }
kuqyagplbz ( idgmoweaed , & rtB . hewtmlrb4i ) ; { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . lhreu3iook .
LoggedData , & locTime , & rtB . hewtmlrb4i . lsl2hmd5f3 [ 0 ] ) ; } } } }
kuqyagplbz ( ifzsacw3nd , & rtB . cqfsohgyr0 ) ; { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . du1u11a542 .
LoggedData , & locTime , & rtB . cqfsohgyr0 . lsl2hmd5f3 [ 0 ] ) ; } } } }
kuqyagplbz ( nqy40numco , & rtB . phayf32gqx ) ; { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . hdz014mlxm .
LoggedData , & locTime , & rtB . phayf32gqx . lsl2hmd5f3 [ 0 ] ) ; } } } } }
if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW
. givugmca51 . LoggedData ; LogVar * var = svar -> signals . values ; {
double locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * )
svar -> time , & locTime , 0 ) ; } { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB .
ittv15bcsa [ 0 ] ; up0 [ 1 ] = rtB . ittv15bcsa [ 1 ] ; up0 [ 2 ] = rtB .
ittv15bcsa [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if (
ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
atjwpkepvl . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB .
ktynx515e0 [ 0 ] ; up0 [ 1 ] = rtB . ktynx515e0 [ 1 ] ; up0 [ 2 ] = rtB .
ktynx515e0 [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if (
ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
lmit2h4t34 . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB .
gcxmhwbhns [ 0 ] ; up0 [ 1 ] = rtB . gcxmhwbhns [ 1 ] ; up0 [ 2 ] = rtB .
gcxmhwbhns [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if (
ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
kczpusi2s1 . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB .
e2i3atu3ac [ 0 ] ; up0 [ 1 ] = rtB . e2i3atu3ac [ 1 ] ; up0 [ 2 ] = rtB .
e2i3atu3ac [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if (
ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
ij1bjq2pp1 . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB .
ozfculoppj [ 0 ] ; up0 [ 1 ] = rtB . ozfculoppj [ 1 ] ; up0 [ 2 ] = rtB .
ozfculoppj [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if (
ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
n0iqt32sfp . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB .
btqsez3icc [ 0 ] ; up0 [ 1 ] = rtB . btqsez3icc [ 1 ] ; up0 [ 2 ] = rtB .
btqsez3icc [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if (
ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
kljv1hxyju . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB .
pdfkmj3akd [ 0 ] ; up0 [ 1 ] = rtB . pdfkmj3akd [ 1 ] ; up0 [ 2 ] = rtB .
pdfkmj3akd [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if (
ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
kn41ewqeq3 . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB .
myxakcrmqb [ 0 ] ; up0 [ 1 ] = rtB . myxakcrmqb [ 1 ] ; up0 [ 2 ] = rtB .
myxakcrmqb [ 2 ] ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) {
StructLogVar * svar = ( StructLogVar * ) rtDW . hhoqznvhi3 . LoggedData ;
LogVar * var = svar -> signals . values ; { double locTime = ssGetTaskTime (
rtS , 1 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ;
} { real_T up0 [ 3 ] ; up0 [ 0 ] = rtB . asu0f2ijbr [ 0 ] ; up0 [ 1 ] = rtB .
asu0f2ijbr [ 1 ] ; up0 [ 2 ] = rtB . asu0f2ijbr [ 2 ] ; rt_UpdateLogVar ( (
LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar
* svar = ( StructLogVar * ) rtDW . agu3biksdl . LoggedData ; LogVar * var =
svar -> signals . values ; { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . j2pscqeale [ 0 ] ; up0 [ 1 ] = rtB . j2pscqeale
[ 1 ] ; up0 [ 2 ] = rtB . j2pscqeale [ 2 ] ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . lnkqhumnxa . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . nfvj4bpva5 [ 0 ] ; up0 [ 1 ] = rtB . nfvj4bpva5
[ 1 ] ; up0 [ 2 ] = rtB . nfvj4bpva5 [ 2 ] ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . ecdze0zcrs . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . cvpsjp1xqu [ 0 ] ; up0 [ 1 ] = rtB . cvpsjp1xqu
[ 1 ] ; up0 [ 2 ] = rtB . cvpsjp1xqu [ 2 ] ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . ntjqns0oae . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . okuh0wfpjd [ 0 ] ; up0 [ 1 ] = rtB . okuh0wfpjd
[ 1 ] ; up0 [ 2 ] = rtB . okuh0wfpjd [ 2 ] ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . nzjvtx2drp . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . mythggah1g [ 0 ] ; up0 [ 1 ] = rtB . mythggah1g
[ 1 ] ; up0 [ 2 ] = rtB . mythggah1g [ 2 ] ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . ludcryuovc . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . ow20kwohpt [ 0 ] ; up0 [ 1 ] = rtB . ow20kwohpt
[ 1 ] ; up0 [ 2 ] = rtB . ow20kwohpt [ 2 ] ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . jhug4f4fnn . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 3 ] ; up0 [ 0 ] = rtB . htdjvfkvx0 [ 0 ] ; up0 [ 1 ] = rtB . htdjvfkvx0
[ 1 ] ; up0 [ 2 ] = rtB . htdjvfkvx0 [ 2 ] ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } } apebeofw3g ( h0xy1rdev3 , & rtB . dwv0b3nbpt ) ; {
double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) )
{ { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . peyk0za1jj . LoggedData , & locTime , & rtB .
dwv0b3nbpt . mwv442a0wi [ 0 ] ) ; } } } } apebeofw3g ( nxvcwdhzv1 , & rtB .
kxpjd1a3pi ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . nmnsqs0foz . LoggedData , & locTime , & rtB .
kxpjd1a3pi . mwv442a0wi [ 0 ] ) ; } } } } apebeofw3g ( lodhdkq13m , & rtB .
b2dgeus3id ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . lunjbjcbzb . LoggedData , & locTime , & rtB .
b2dgeus3id . mwv442a0wi [ 0 ] ) ; } } } } apebeofw3g ( i00waqcu3t , & rtB .
bmskov3xln ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . lpq1kb1sjr . LoggedData , & locTime , & rtB .
bmskov3xln . mwv442a0wi [ 0 ] ) ; } } } } apebeofw3g ( fjudlli45r , & rtB .
nvxpjyra3b ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . l4tovimwan . LoggedData , & locTime , & rtB .
nvxpjyra3b . mwv442a0wi [ 0 ] ) ; } } } } apebeofw3g ( ipmspkbyis , & rtB .
e5ut0spxgg ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . kwk1qgvysg . LoggedData , & locTime , & rtB .
e5ut0spxgg . mwv442a0wi [ 0 ] ) ; } } } } apebeofw3g ( cfw3hg13mq , & rtB .
kku1cld2tf ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . bkcvxpj14h . LoggedData , & locTime , & rtB .
kku1cld2tf . mwv442a0wi [ 0 ] ) ; } } } } apebeofw3g ( ayhwzzbb1m , & rtB .
idrbq1s50x ) ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . fq2moqhx1k . LoggedData , & locTime , & rtB .
idrbq1s50x . mwv442a0wi [ 0 ] ) ; } } } } if ( ssGetLogOutput ( rtS ) ) {
StructLogVar * svar = ( StructLogVar * ) rtDW . nkzxvnpzaq . LoggedData ;
LogVar * var = svar -> signals . values ; { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ;
} { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB . c1eq5vcpx4 .
koxsf3yz0i [ 0 ] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . phclb1hosq . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB . bf440oddgu . koxsf3yz0i [
0 ] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0
) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar
* ) rtDW . hlltd51e5p . LoggedData ; LogVar * var = svar -> signals . values
; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar
* ) svar -> time , & locTime , 0 ) ; } { real_T up0 [ 6 ] ; ( void ) memcpy (
& up0 [ 0 ] , & rtB . ejm1xz1i3s . koxsf3yz0i [ 0 ] , 6 * sizeof ( real_T ) )
; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput (
rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW . kjead5tgs4 .
LoggedData ; LogVar * var = svar -> signals . values ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , &
locTime , 0 ) ; } { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB
. jbgetkuxaj . koxsf3yz0i [ 0 ] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar (
( LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) {
StructLogVar * svar = ( StructLogVar * ) rtDW . mbjldeeb4d . LoggedData ;
LogVar * var = svar -> signals . values ; { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ;
} { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB . gqx5b5eit1 [ 0
] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 )
; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar *
) rtDW . lnpvpj0cx3 . LoggedData ; LogVar * var = svar -> signals . values ;
{ double locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar *
) svar -> time , & locTime , 0 ) ; } { real_T up0 [ 6 ] ; ( void ) memcpy ( &
up0 [ 0 ] , & rtB . kzomkkaldu [ 0 ] , 6 * sizeof ( real_T ) ) ;
rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput (
rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW . jcai3h0pvz .
LoggedData ; LogVar * var = svar -> signals . values ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , &
locTime , 0 ) ; } { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB
. ajig4v24ce [ 0 ] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . cxb5ckleoa . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB . ievgosfumo [ 0 ] , 6 *
sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } }
apebeofw3g ( lk3nn5bbfz , & rtB . bra5bscetp ) ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . oapfejjykt .
LoggedData , & locTime , & rtB . bra5bscetp . mwv442a0wi [ 0 ] ) ; } } } }
apebeofw3g ( a25czsqxjb , & rtB . axfkml5ixh ) ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . orsxbm3qij .
LoggedData , & locTime , & rtB . axfkml5ixh . mwv442a0wi [ 0 ] ) ; } } } }
apebeofw3g ( cxawfcsfzh , & rtB . ltofzehbyr ) ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . cn2rx14hit .
LoggedData , & locTime , & rtB . ltofzehbyr . mwv442a0wi [ 0 ] ) ; } } } }
apebeofw3g ( huqnxkh55s , & rtB . hzg1zx3v41 ) ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . bnzftshx34 .
LoggedData , & locTime , & rtB . hzg1zx3v41 . mwv442a0wi [ 0 ] ) ; } } } }
apebeofw3g ( c2aver3dxc , & rtB . bcakaosdk3 ) ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . b3h2bgfvmf .
LoggedData , & locTime , & rtB . bcakaosdk3 . mwv442a0wi [ 0 ] ) ; } } } }
apebeofw3g ( advizqj3ha , & rtB . eume1su52i ) ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . ovnjs4iqgp .
LoggedData , & locTime , & rtB . eume1su52i . mwv442a0wi [ 0 ] ) ; } } } }
apebeofw3g ( ao2wtesi4w , & rtB . newkwtnnyb ) ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . c0vkh1nckw .
LoggedData , & locTime , & rtB . newkwtnnyb . mwv442a0wi [ 0 ] ) ; } } } }
apebeofw3g ( h5tz0x5bs2 , & rtB . oxm0qdhvd1 ) ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . lzksfbzheq .
LoggedData , & locTime , & rtB . oxm0qdhvd1 . mwv442a0wi [ 0 ] ) ; } } } } if
( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
bm3qbtlsvl . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [
0 ] , & rtB . koohydnldu . j50ump3tqb [ 0 ] , 6 * sizeof ( real_T ) ) ;
rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput (
rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW . lbh2v4cxsw .
LoggedData ; LogVar * var = svar -> signals . values ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , &
locTime , 0 ) ; } { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB
. oeqeegnqph . j50ump3tqb [ 0 ] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar (
( LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) {
StructLogVar * svar = ( StructLogVar * ) rtDW . gngxoqyce2 . LoggedData ;
LogVar * var = svar -> signals . values ; { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ;
} { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB . iief32edxg .
j50ump3tqb [ 0 ] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . j4t5utnqsu . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB . jvph4vnkr4 . j50ump3tqb [
0 ] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0
) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar
* ) rtDW . ohhdayxsqf . LoggedData ; LogVar * var = svar -> signals . values
; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar
* ) svar -> time , & locTime , 0 ) ; } { real_T up0 [ 6 ] ; ( void ) memcpy (
& up0 [ 0 ] , & rtB . itgoh1hxqp [ 0 ] , 6 * sizeof ( real_T ) ) ;
rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput (
rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW . hw5kuuf0zz .
LoggedData ; LogVar * var = svar -> signals . values ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar -> time , &
locTime , 0 ) ; } { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB
. incdyqesqd [ 0 ] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * )
var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . flmxkmsuse . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 4 ] ; up0 [ 0 ] = rtB . ndp0ayzs4j . nnix5btgdj [ 0 ] ; up0 [ 1 ] = rtB
. ndp0ayzs4j . nnix5btgdj [ 1 ] ; up0 [ 2 ] = rtB . ndp0ayzs4j . nnix5btgdj [
2 ] ; up0 [ 3 ] = rtB . ndp0ayzs4j . nnix5btgdj [ 3 ] ; rt_UpdateLogVar ( (
LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar
* svar = ( StructLogVar * ) rtDW . dnfwnpgyjn . LoggedData ; LogVar * var =
svar -> signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 4 ] ; up0 [ 0 ] = rtB . l2ylxix2y4 . nnix5btgdj [ 0 ] ; up0 [ 1 ] = rtB
. l2ylxix2y4 . nnix5btgdj [ 1 ] ; up0 [ 2 ] = rtB . l2ylxix2y4 . nnix5btgdj [
2 ] ; up0 [ 3 ] = rtB . l2ylxix2y4 . nnix5btgdj [ 3 ] ; rt_UpdateLogVar ( (
LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar
* svar = ( StructLogVar * ) rtDW . nnpouilxcu . LoggedData ; LogVar * var =
svar -> signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 4 ] ; up0 [ 0 ] = rtB . n2gxek1ysk . nnix5btgdj [ 0 ] ; up0 [ 1 ] = rtB
. n2gxek1ysk . nnix5btgdj [ 1 ] ; up0 [ 2 ] = rtB . n2gxek1ysk . nnix5btgdj [
2 ] ; up0 [ 3 ] = rtB . n2gxek1ysk . nnix5btgdj [ 3 ] ; rt_UpdateLogVar ( (
LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar
* svar = ( StructLogVar * ) rtDW . hr2cuewb1d . LoggedData ; LogVar * var =
svar -> signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 4 ] ; up0 [ 0 ] = rtB . h5potfgoew . nnix5btgdj [ 0 ] ; up0 [ 1 ] = rtB
. h5potfgoew . nnix5btgdj [ 1 ] ; up0 [ 2 ] = rtB . h5potfgoew . nnix5btgdj [
2 ] ; up0 [ 3 ] = rtB . h5potfgoew . nnix5btgdj [ 3 ] ; rt_UpdateLogVar ( (
LogVar * ) var , up0 , 0 ) ; } } if ( ssGetLogOutput ( rtS ) ) { StructLogVar
* svar = ( StructLogVar * ) rtDW . mnpnnxmz24 . LoggedData ; LogVar * var =
svar -> signals . values ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 6 ] ; ( void ) memcpy ( & up0 [ 0 ] , & rtB . gmpoamd1yl [ 0 ] , 6 *
sizeof ( real_T ) ) ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; } } if
( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
g1kahszp5p . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; rt_UpdateLogVar ( ( LogVar * ) svar
-> time , & locTime , 0 ) ; } { real_T up0 [ 6 ] ; ( void ) memcpy ( & up0 [
0 ] , & rtB . fdryynjim2 [ 0 ] , 6 * sizeof ( real_T ) ) ; rt_UpdateLogVar (
( LogVar * ) var , up0 , 0 ) ; } } rtB . kg1nnjy4y0 [ 0 ] = rtB . o5fje2j3te
[ 3 ] ; rtB . kg1nnjy4y0 [ 3 ] = rtB . lk5bwa3fu5 [ 0 ] ; rtB . kg1nnjy4y0 [
1 ] = rtB . o5fje2j3te [ 4 ] ; rtB . kg1nnjy4y0 [ 4 ] = rtB . lk5bwa3fu5 [ 1
] ; rtB . kg1nnjy4y0 [ 2 ] = rtB . o5fje2j3te [ 5 ] ; rtB . kg1nnjy4y0 [ 5 ]
= rtB . lk5bwa3fu5 [ 2 ] - 98.100000000000009 ; UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID2 ( int_T tid ) { rtB . oycm4jbgim = rtP .
Gain_Gain_a5iekrgwtt * 0.0 ; rtB . pzwszwmdnd = rtP . Gain1_Gain * 0.0 ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { real_T ( * lastU
) [ 3 ] ; int32_T i ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i = 0 ; i
< 6 ; i ++ ) { rtDW . kstiocozka [ i ] = rtB . or1qu0lbxa . iqrledjweq [ i ]
; } } if ( rtDW . f0c002qbsv == ( rtInf ) ) { rtDW . f0c002qbsv = ssGetT (
rtS ) ; lastU = & rtDW . pqpmtevv2j ; } else if ( rtDW . mv5h2lqtxu == (
rtInf ) ) { rtDW . mv5h2lqtxu = ssGetT ( rtS ) ; lastU = & rtDW . dr2fd4czo0
; } else if ( rtDW . f0c002qbsv < rtDW . mv5h2lqtxu ) { rtDW . f0c002qbsv =
ssGetT ( rtS ) ; lastU = & rtDW . pqpmtevv2j ; } else { rtDW . mv5h2lqtxu =
ssGetT ( rtS ) ; lastU = & rtDW . dr2fd4czo0 ; } ( * lastU ) [ 0 ] = rtB .
jbtx2pjet0 ; ( * lastU ) [ 1 ] = rtB . o5hqdwcanp ; ( * lastU ) [ 2 ] = rtB .
gikzhfrh2r ; if ( rtDW . j2jsulvdm1 == ( rtInf ) ) { rtDW . j2jsulvdm1 =
ssGetT ( rtS ) ; lastU = & rtDW . ekpr5jhh05 ; } else if ( rtDW . pjv2r5rhzy
== ( rtInf ) ) { rtDW . pjv2r5rhzy = ssGetT ( rtS ) ; lastU = & rtDW .
it1tzyqmx3 ; } else if ( rtDW . j2jsulvdm1 < rtDW . pjv2r5rhzy ) { rtDW .
j2jsulvdm1 = ssGetT ( rtS ) ; lastU = & rtDW . ekpr5jhh05 ; } else { rtDW .
pjv2r5rhzy = ssGetT ( rtS ) ; lastU = & rtDW . it1tzyqmx3 ; } ( * lastU ) [ 0
] = rtB . hngud44kjo [ 0 ] ; ( * lastU ) [ 1 ] = rtB . hngud44kjo [ 1 ] ; ( *
lastU ) [ 2 ] = rtB . hngud44kjo [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ for ( i = 0 ; i < 6 ; i ++ ) { rtDW . hwmovhfzf2 [ i ] = rtB . aoni3btcrm .
ceslw2bcsd [ i ] ; } memcpy ( & rtDW . be0imqxqro [ 0 ] , & rtB . by50irynec
. h4qfg23klo [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & rtDW . mx4qqpknqe
[ 0 ] , & rtB . frmzupx0zv . h4qfg23klo [ 0 ] , 15U * sizeof ( real_T ) ) ;
memcpy ( & rtDW . cbxnmjiv35 [ 0 ] , & rtB . dm0iynorl1 . h4qfg23klo [ 0 ] ,
15U * sizeof ( real_T ) ) ; memcpy ( & rtDW . j3sy2mrawp [ 0 ] , & rtB .
m2rbsbdny1 . h4qfg23klo [ 0 ] , 15U * sizeof ( real_T ) ) ; rtDW . ha4pdvtcus
[ 0 ] = rtB . mwunt1htil [ 0 ] ; rtDW . coqd1tvx1u [ 0 ] = rtB . kjivth4tcr [
0 ] ; rtDW . jof3zfdlkv [ 0 ] = rtB . eko0owjdui [ 0 ] ; rtDW . pkkl0tyrak [
0 ] = rtB . oxqbz15e3l [ 0 ] ; rtDW . ps4xa0zgh4 [ 0 ] = rtB . b0oya0sorf [ 0
] ; rtDW . ndbjd515lt [ 0 ] = rtB . onz3z4vedl [ 0 ] ; rtDW . d4dmyhlqbm [ 0
] = rtB . nc5l5ompcr [ 0 ] ; rtDW . kuepayhel0 [ 0 ] = rtB . ctx14gz0mc [ 0 ]
; rtDW . ha4pdvtcus [ 1 ] = rtB . mwunt1htil [ 1 ] ; rtDW . coqd1tvx1u [ 1 ]
= rtB . kjivth4tcr [ 1 ] ; rtDW . jof3zfdlkv [ 1 ] = rtB . eko0owjdui [ 1 ] ;
rtDW . pkkl0tyrak [ 1 ] = rtB . oxqbz15e3l [ 1 ] ; rtDW . ps4xa0zgh4 [ 1 ] =
rtB . b0oya0sorf [ 1 ] ; rtDW . ndbjd515lt [ 1 ] = rtB . onz3z4vedl [ 1 ] ;
rtDW . d4dmyhlqbm [ 1 ] = rtB . nc5l5ompcr [ 1 ] ; rtDW . kuepayhel0 [ 1 ] =
rtB . ctx14gz0mc [ 1 ] ; rtDW . ha4pdvtcus [ 2 ] = rtB . mwunt1htil [ 2 ] ;
rtDW . coqd1tvx1u [ 2 ] = rtB . kjivth4tcr [ 2 ] ; rtDW . jof3zfdlkv [ 2 ] =
rtB . eko0owjdui [ 2 ] ; rtDW . pkkl0tyrak [ 2 ] = rtB . oxqbz15e3l [ 2 ] ;
rtDW . ps4xa0zgh4 [ 2 ] = rtB . b0oya0sorf [ 2 ] ; rtDW . ndbjd515lt [ 2 ] =
rtB . onz3z4vedl [ 2 ] ; rtDW . d4dmyhlqbm [ 2 ] = rtB . nc5l5ompcr [ 2 ] ;
rtDW . kuepayhel0 [ 2 ] = rtB . ctx14gz0mc [ 2 ] ; for ( i = 0 ; i < 6 ; i ++
) { rtDW . idvr4rh4mu [ i ] = rtB . psbegwgczo . iqrledjweq [ i ] ; rtDW .
fztt0z3pyb [ i ] = rtB . m3u1mc53xu . iqrledjweq [ i ] ; rtDW . lmomxeodsu [
i ] = rtB . adhekhczer . iqrledjweq [ i ] ; rtDW . lgcgglfpr5 [ i ] = rtB .
dhlomykkky . ceslw2bcsd [ i ] ; rtDW . ofcsp2xnjt [ i ] = rtB . cxm1w1zufa .
ceslw2bcsd [ i ] ; rtDW . ktoqhjnspo [ i ] = rtB . cdm1uy5lwx . ceslw2bcsd [
i ] ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { int32_T i ; XDot
* _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; memcpy ( & _rtXdot ->
filapmf4cs [ 0 ] , & rtB . kv2bmipsop . ertj4nm0qu [ 0 ] , 36U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> dkf0xcw1to [ 0 ] , & rtB . by50irynec .
h5nzmu35n2 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot ->
oweh1cvpwb [ 0 ] , & rtB . oa3j2mackf . lfrnaagn2k [ 0 ] , 12U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> hyrtgzkn1j [ 0 ] , & rtB . mtut1sc5t2 .
lfrnaagn2k [ 0 ] , 12U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot ->
lnyqg3gjey [ 0 ] , & rtB . jwexpeel5j . lfrnaagn2k [ 0 ] , 12U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> pet0sahf2n [ 0 ] , & rtB . okynqnkfux .
lfrnaagn2k [ 0 ] , 12U * sizeof ( real_T ) ) ; _rtXdot -> ajjwc4eanm = 0.0 ;
_rtXdot -> ajjwc4eanm += rtP . TransferFcn3_A * rtX . ajjwc4eanm ; _rtXdot ->
ajjwc4eanm += rtB . oycm4jbgim ; _rtXdot -> oaqvw1cmmj = 0.0 ; _rtXdot ->
oaqvw1cmmj += rtP . TransferFcn2_A * rtX . oaqvw1cmmj ; _rtXdot -> oaqvw1cmmj
+= rtB . pzwszwmdnd ; _rtXdot -> lp3durdr4l = 0.0 ; _rtXdot -> lp3durdr4l +=
rtP . TransferFcn1_A * rtX . lp3durdr4l ; _rtXdot -> lp3durdr4l += rtB .
hozlr0pwk1 ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot -> ohuimt1kj1 [ i ] = rtB
. koohydnldu . j50ump3tqb [ i ] ; } memcpy ( & _rtXdot -> cn4y1idp3t [ 0 ] ,
& rtB . gnq3tqucqn . dokc3h5z1d [ 0 ] , 36U * sizeof ( real_T ) ) ; _rtXdot
-> jhtu45vxt4 [ 0 ] = rtB . nk3dg1co2i . iu3foypmzb [ 0 ] ; _rtXdot ->
nytonewnkc [ 0 ] = rtB . hcmtphgh1v [ 0 ] ; _rtXdot -> jhtu45vxt4 [ 1 ] = rtB
. nk3dg1co2i . iu3foypmzb [ 1 ] ; _rtXdot -> nytonewnkc [ 1 ] = rtB .
hcmtphgh1v [ 1 ] ; _rtXdot -> jhtu45vxt4 [ 2 ] = rtB . nk3dg1co2i .
iu3foypmzb [ 2 ] ; _rtXdot -> nytonewnkc [ 2 ] = rtB . hcmtphgh1v [ 2 ] ;
memcpy ( & _rtXdot -> ku4bbglgq2 [ 0 ] , & rtB . khvlym1mbm . do3vqytzlr [ 0
] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> kdpp4uug5y [ 0 ] , &
rtB . ounrqp0kqp . dwzefkbt4i [ 0 ] , 15U * sizeof ( real_T ) ) ; _rtXdot ->
nzmi3egeno [ 0 ] = rtB . m3bgszen3q [ 0 ] ; _rtXdot -> iju3hejemb [ 0 ] = rtB
. jgni5sqhom [ 0 ] ; _rtXdot -> nzmi3egeno [ 1 ] = rtB . m3bgszen3q [ 1 ] ;
_rtXdot -> iju3hejemb [ 1 ] = rtB . jgni5sqhom [ 1 ] ; _rtXdot -> nzmi3egeno
[ 2 ] = rtB . m3bgszen3q [ 2 ] ; _rtXdot -> iju3hejemb [ 2 ] = rtB .
jgni5sqhom [ 2 ] ; _rtXdot -> pqorbdh2sp [ 0 ] = rtB . d0b2e2tbom .
iu3foypmzb [ 0 ] ; _rtXdot -> lacvtmifen [ 0 ] = rtB . geh5ssntfp .
g0oikhinbf [ 0 ] ; _rtXdot -> pqorbdh2sp [ 1 ] = rtB . d0b2e2tbom .
iu3foypmzb [ 1 ] ; _rtXdot -> lacvtmifen [ 1 ] = rtB . geh5ssntfp .
g0oikhinbf [ 1 ] ; _rtXdot -> pqorbdh2sp [ 2 ] = rtB . d0b2e2tbom .
iu3foypmzb [ 2 ] ; _rtXdot -> lacvtmifen [ 2 ] = rtB . geh5ssntfp .
g0oikhinbf [ 2 ] ; _rtXdot -> ntzccs4iix [ 0 ] = rtB . lf5t1r3q3k [ 0 ] ;
_rtXdot -> ntzccs4iix [ 1 ] = rtB . lf5t1r3q3k [ 1 ] ; _rtXdot -> ntzccs4iix
[ 2 ] = rtB . lf5t1r3q3k [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot ->
jgaq55ujqb [ i ] = rtB . oqlntds35a . ovkgcdutyp [ i ] ; _rtXdot ->
ncicpbmtkr [ i ] = rtB . kg1nnjy4y0 [ i ] ; _rtXdot -> lzogr0v4zv [ i ] = rtB
. ejm1xz1i3s . koxsf3yz0i [ i ] ; _rtXdot -> hcwdtblhkw [ i ] = rtB .
bx3nl12y2l . jomd12grfe [ i ] ; _rtXdot -> irj1jq1t3z [ i ] = rtB .
etbc3ao3mx . lsn2ixkb43 [ i ] ; } memcpy ( & _rtXdot -> pteyqc24bu [ 0 ] , &
rtB . a2ww44jm1e . oizdxburtj [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
_rtXdot -> gaxneeplm1 [ 0 ] , & rtB . br1bl3k0ub . lgflny3vaf [ 0 ] , 36U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot -> bir1ggdein [
i ] = rtB . czp4tvzurt . awuha2csho [ i ] ; } memcpy ( & _rtXdot ->
f20hsrwsbu [ 0 ] , & rtB . frmzupx0zv . h5nzmu35n2 [ 0 ] , 15U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> brw5ncjp0j [ 0 ] , & rtB . dm0iynorl1 .
h5nzmu35n2 [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot ->
bktfffzsqn [ 0 ] , & rtB . m2rbsbdny1 . h5nzmu35n2 [ 0 ] , 15U * sizeof (
real_T ) ) ; _rtXdot -> ivgcimcucj = 0.0 ; _rtXdot -> ivgcimcucj += rtP .
TransferFcn1_A_nujdlcbjyt * rtX . ivgcimcucj ; _rtXdot -> ivgcimcucj += rtP .
r_formZ ; _rtXdot -> addj05wge0 = 0.0 ; _rtXdot -> addj05wge0 += rtP .
TransferFcn2_A_begbkhkapk * rtX . addj05wge0 ; _rtXdot -> addj05wge0 += rtB .
d4hj01c1vg ; _rtXdot -> mvx4m5pboe = 0.0 ; _rtXdot -> mvx4m5pboe += rtP .
TransferFcn5_A * rtX . mvx4m5pboe ; _rtXdot -> mvx4m5pboe += rtB . jeeth114rb
; _rtXdot -> e024iaip1v [ 0 ] = rtB . dmj2b1er01 [ 0 ] ; _rtXdot ->
a1515hp3gw [ 0 ] = rtB . odtp4k5ik4 [ 0 ] ; _rtXdot -> pf5zjr3mp2 [ 0 ] = rtB
. axhl1ytdq1 [ 0 ] ; _rtXdot -> jno5haxgvz [ 0 ] = rtB . d234fos3qo [ 0 ] ;
_rtXdot -> dzhvipaz2k [ 0 ] = rtB . fxo2ztmqiq [ 0 ] ; _rtXdot -> micy5ovmck
[ 0 ] = rtB . g3205b3ehz [ 0 ] ; _rtXdot -> e024iaip1v [ 1 ] = rtB .
dmj2b1er01 [ 1 ] ; _rtXdot -> a1515hp3gw [ 1 ] = rtB . odtp4k5ik4 [ 1 ] ;
_rtXdot -> pf5zjr3mp2 [ 1 ] = rtB . axhl1ytdq1 [ 1 ] ; _rtXdot -> jno5haxgvz
[ 1 ] = rtB . d234fos3qo [ 1 ] ; _rtXdot -> dzhvipaz2k [ 1 ] = rtB .
fxo2ztmqiq [ 1 ] ; _rtXdot -> micy5ovmck [ 1 ] = rtB . g3205b3ehz [ 1 ] ;
_rtXdot -> e024iaip1v [ 2 ] = rtB . dmj2b1er01 [ 2 ] ; _rtXdot -> a1515hp3gw
[ 2 ] = rtB . odtp4k5ik4 [ 2 ] ; _rtXdot -> pf5zjr3mp2 [ 2 ] = rtB .
axhl1ytdq1 [ 2 ] ; _rtXdot -> jno5haxgvz [ 2 ] = rtB . d234fos3qo [ 2 ] ;
_rtXdot -> dzhvipaz2k [ 2 ] = rtB . fxo2ztmqiq [ 2 ] ; _rtXdot -> micy5ovmck
[ 2 ] = rtB . g3205b3ehz [ 2 ] ; memcpy ( & _rtXdot -> dv53n1gvyw [ 0 ] , &
rtB . avlxughyns . ertj4nm0qu [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
_rtXdot -> aawca0xb2d [ 0 ] , & rtB . ex1zkqtfgv . ertj4nm0qu [ 0 ] , 36U *
sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> jbl2zb4c4m [ 0 ] , & rtB .
dtqe2jyuyw . ertj4nm0qu [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i <
6 ; i ++ ) { _rtXdot -> ljhpwq5usb [ i ] = rtB . oeqeegnqph . j50ump3tqb [ i
] ; } memcpy ( & _rtXdot -> kg0ugkqytj [ 0 ] , & rtB . d2q5qnt0b3 .
dokc3h5z1d [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( & _rtXdot ->
naxi5vltsi [ 0 ] , & rtB . f20gcf5hzy . do3vqytzlr [ 0 ] , 15U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> ew3cughtjj [ 0 ] , & rtB . d3xq0g2bn4 .
dwzefkbt4i [ 0 ] , 15U * sizeof ( real_T ) ) ; _rtXdot -> fzkicub43y [ 0 ] =
rtB . ftxqlzmaxy . iu3foypmzb [ 0 ] ; _rtXdot -> o30rzpjaco [ 0 ] = rtB .
aeorekhod3 . g0oikhinbf [ 0 ] ; _rtXdot -> fzkicub43y [ 1 ] = rtB .
ftxqlzmaxy . iu3foypmzb [ 1 ] ; _rtXdot -> o30rzpjaco [ 1 ] = rtB .
aeorekhod3 . g0oikhinbf [ 1 ] ; _rtXdot -> fzkicub43y [ 2 ] = rtB .
ftxqlzmaxy . iu3foypmzb [ 2 ] ; _rtXdot -> o30rzpjaco [ 2 ] = rtB .
aeorekhod3 . g0oikhinbf [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot ->
a1k30snvq0 [ i ] = rtB . du2lrvbx5h . ovkgcdutyp [ i ] ; _rtXdot ->
cimgd544vu [ i ] = rtB . jbgetkuxaj . koxsf3yz0i [ i ] ; _rtXdot ->
ccnwggclyg [ i ] = rtB . hdtx0qvcg5 . jomd12grfe [ i ] ; _rtXdot ->
eo3jeu2u13 [ i ] = rtB . evhpd5pqdh . lsn2ixkb43 [ i ] ; } memcpy ( & _rtXdot
-> g2nqcuil3a [ 0 ] , & rtB . odecv1tkpq . oizdxburtj [ 0 ] , 36U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> cy42njcpkh [ 0 ] , & rtB . htfczxwbqt .
lgflny3vaf [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtXdot -> fdenftcp5x [ i ] = rtB . f251a30bl5 . awuha2csho [ i ] ; _rtXdot
-> ic3q3cbrlg [ i ] = rtB . iief32edxg . j50ump3tqb [ i ] ; } memcpy ( &
_rtXdot -> ddymkn2sup [ 0 ] , & rtB . b44jbvl1vq . dokc3h5z1d [ 0 ] , 36U *
sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> e0j4zo50kw [ 0 ] , & rtB .
bg42xqoh1c . do3vqytzlr [ 0 ] , 15U * sizeof ( real_T ) ) ; memcpy ( &
_rtXdot -> ocwmo4ag2m [ 0 ] , & rtB . k1qsnregiz . dwzefkbt4i [ 0 ] , 15U *
sizeof ( real_T ) ) ; _rtXdot -> ljpgz2iakn [ 0 ] = rtB . i2taelcq5m .
iu3foypmzb [ 0 ] ; _rtXdot -> ehwg0uvmnb [ 0 ] = rtB . lssgckg42l .
g0oikhinbf [ 0 ] ; _rtXdot -> ljpgz2iakn [ 1 ] = rtB . i2taelcq5m .
iu3foypmzb [ 1 ] ; _rtXdot -> ehwg0uvmnb [ 1 ] = rtB . lssgckg42l .
g0oikhinbf [ 1 ] ; _rtXdot -> ljpgz2iakn [ 2 ] = rtB . i2taelcq5m .
iu3foypmzb [ 2 ] ; _rtXdot -> ehwg0uvmnb [ 2 ] = rtB . lssgckg42l .
g0oikhinbf [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot -> lbz5rkxaei [ i ]
= rtB . b20p2q3lgq . ovkgcdutyp [ i ] ; _rtXdot -> hlfemejl1b [ i ] = rtB .
c1eq5vcpx4 . koxsf3yz0i [ i ] ; _rtXdot -> pxyjcvvevd [ i ] = rtB .
ofvqlpwckb . jomd12grfe [ i ] ; _rtXdot -> kctrjublf0 [ i ] = rtB .
co5vre2gwb . lsn2ixkb43 [ i ] ; } memcpy ( & _rtXdot -> g0dx10c2um [ 0 ] , &
rtB . jjieidn0fp . oizdxburtj [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy ( &
_rtXdot -> djovh5b3kq [ 0 ] , & rtB . fbh4dqoyov . lgflny3vaf [ 0 ] , 36U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot -> e2pcsiol3y [
i ] = rtB . fay2vqnghf . awuha2csho [ i ] ; _rtXdot -> egalmcbuqp [ i ] = rtB
. jvph4vnkr4 . j50ump3tqb [ i ] ; } memcpy ( & _rtXdot -> mxr42d2wl0 [ 0 ] ,
& rtB . nbfgabjloh . dokc3h5z1d [ 0 ] , 36U * sizeof ( real_T ) ) ; memcpy (
& _rtXdot -> j32sa5rgd2 [ 0 ] , & rtB . eda2vxrff0 . do3vqytzlr [ 0 ] , 15U *
sizeof ( real_T ) ) ; memcpy ( & _rtXdot -> cpltwh23xe [ 0 ] , & rtB .
aue1vbpmvj . dwzefkbt4i [ 0 ] , 15U * sizeof ( real_T ) ) ; _rtXdot ->
pnhbys003g [ 0 ] = rtB . aruhpddimh . iu3foypmzb [ 0 ] ; _rtXdot ->
lqaehp4prm [ 0 ] = rtB . kc2ijyeu0y . g0oikhinbf [ 0 ] ; _rtXdot ->
pnhbys003g [ 1 ] = rtB . aruhpddimh . iu3foypmzb [ 1 ] ; _rtXdot ->
lqaehp4prm [ 1 ] = rtB . kc2ijyeu0y . g0oikhinbf [ 1 ] ; _rtXdot ->
pnhbys003g [ 2 ] = rtB . aruhpddimh . iu3foypmzb [ 2 ] ; _rtXdot ->
lqaehp4prm [ 2 ] = rtB . kc2ijyeu0y . g0oikhinbf [ 2 ] ; for ( i = 0 ; i < 6
; i ++ ) { _rtXdot -> cqdcvy2yck [ i ] = rtB . hiuzcdovtx . ovkgcdutyp [ i ]
; _rtXdot -> b4wxud2s5x [ i ] = rtB . bf440oddgu . koxsf3yz0i [ i ] ; _rtXdot
-> bopvre4od1 [ i ] = rtB . dnfgeeso11 . jomd12grfe [ i ] ; _rtXdot ->
it5wbajlge [ i ] = rtB . majmcadfuu . lsn2ixkb43 [ i ] ; } memcpy ( & _rtXdot
-> jefvdqfjy5 [ 0 ] , & rtB . gb4iihhqdp . oizdxburtj [ 0 ] , 36U * sizeof (
real_T ) ) ; memcpy ( & _rtXdot -> dratvy31am [ 0 ] , & rtB . pffczfadw0 .
lgflny3vaf [ 0 ] , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtXdot -> l3ttobdsfe [ i ] = rtB . ouqutwqspm . awuha2csho [ i ] ; } _rtXdot
-> jjw13zegrz = 0.0 ; _rtXdot -> jjw13zegrz += rtP . TransferFcn4_A * rtX .
jjw13zegrz ; _rtXdot -> jjw13zegrz += rtP . Constant1_Value ; _rtXdot ->
igwlihe1d5 = 0.0 ; _rtXdot -> igwlihe1d5 += rtP . TransferFcn3_A_ijhjp45drc *
rtX . igwlihe1d5 ; _rtXdot -> igwlihe1d5 += rtP . Constant5_Value ; } void
MdlProjection ( void ) { } void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ;
_rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV ->
p5v2brn3uf = rtB . jbtx2pjet0 ; _rtZCSV -> luebmxypw4 = rtB . o5hqdwcanp ;
_rtZCSV -> fqgzb20oic = rtB . fjuaz0z3oj - rtP . Switch_Threshold ; _rtZCSV
-> g0iewxprv5 = rtB . fswysouih3 - rtP . Switch2_Threshold ; _rtZCSV ->
pkzlkjqucv = rtB . b5uou53b4t - rtP . Switch3_Threshold ; } void MdlTerminate
( void ) { rt_FREE ( rtDW . i1wwy5n5rc . RSimInfoPtr ) ; if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 1019 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 432 ) ; ssSetNumBlockIO ( rtS , 205 ) ;
ssSetNumBlockParams ( rtS , 2764 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 4104019630U ) ;
ssSetChecksumVal ( rtS , 1 , 3045784979U ) ; ssSetChecksumVal ( rtS , 2 ,
3358501291U ) ; ssSetChecksumVal ( rtS , 3 , 2260817830U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 19 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
CAMFC2_Quad_New_02_Payload_01_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"CAMFC2_Quad_New_02_Payload_01" ) ; ssSetPath ( rtS ,
"CAMFC2_Quad_New_02_Payload_01" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
rtS , 200.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } {
{ static int_T rt_LoggedStateWidths [ ] = { 36 , 15 , 12 , 12 , 12 , 12 , 1 ,
1 , 1 , 6 , 36 , 3 , 3 , 15 , 15 , 3 , 3 , 6 , 3 , 3 , 6 , 3 , 6 , 6 , 6 , 36
, 36 , 6 , 15 , 15 , 15 , 1 , 1 , 1 , 3 , 3 , 3 , 3 , 3 , 3 , 36 , 36 , 36 ,
6 , 36 , 15 , 15 , 6 , 3 , 3 , 6 , 6 , 6 , 36 , 36 , 6 , 6 , 36 , 15 , 15 , 6
, 3 , 3 , 6 , 6 , 6 , 36 , 36 , 6 , 6 , 36 , 15 , 15 , 6 , 3 , 3 , 6 , 6 , 6
, 36 , 36 , 6 , 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 36 , 15
, 12 , 12 , 12 , 12 , 1 , 1 , 1 , 6 , 36 , 3 , 3 , 15 , 15 , 3 , 3 , 6 , 3 ,
3 , 6 , 3 , 6 , 6 , 6 , 36 , 36 , 6 , 15 , 15 , 15 , 1 , 1 , 1 , 3 , 3 , 3 ,
3 , 3 , 3 , 36 , 36 , 36 , 6 , 36 , 15 , 15 , 6 , 3 , 3 , 6 , 6 , 6 , 36 , 36
, 6 , 6 , 36 , 15 , 15 , 6 , 3 , 3 , 6 , 6 , 6 , 36 , 36 , 6 , 6 , 36 , 15 ,
15 , 6 , 3 , 3 , 6 , 6 , 6 , 36 , 36 , 6 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Integrator4"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative \nObservers #1/Integrator5"
, "CAMFC2_Quad_New_02_Payload_01/Agent #1/Plant #1/Integrator" ,
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Plant #2/Integrator" ,
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Plant #3/Integrator" ,
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Plant #4/Integrator" ,
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn3"
,
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn2"
,
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Subsystem/Transfer Fcn1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Integrator1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Integrator3"
,
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Differentiator0/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Differentiator0/Integrator1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative \nObservers #1/Differentiator2/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative \nObservers #1/Differentiator2/Integrator1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative \nObservers #1/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Cooperative \nObservers #1/Integrator6"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Integrator2"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Differentiator1/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Translational #1/Differentiator1/Integrator1"
, "CAMFC2_Quad_New_02_Payload_01/Payload/Plant/Integrator" ,
"CAMFC2_Quad_New_02_Payload_01/Payload/Controller /Integrator" ,
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Integrator3"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Differentiator/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Differentiator/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Integrator"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #1/Controller #1/Rotational/Integrator2"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative \nObservers #2/Integrator5"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative \nObservers #3/Integrator5"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative \nObservers #1/Integrator5"
,
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn1"
,
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn2"
,
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn5"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative \nObservers #2/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative \nObservers #3/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative \nObservers #1/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative \nObservers #2/Integrator6"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative \nObservers #3/Integrator6"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative \nObservers #1/Integrator6"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Integrator4"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Integrator4"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Integrator4"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Integrator1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Integrator3"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative \nObservers #2/Differentiator2/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Cooperative \nObservers #2/Differentiator2/Integrator1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Integrator2"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Differentiator1/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Translational #2/Differentiator1/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Integrator3"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Differentiator/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Differentiator/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Integrator"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #2/Controller #2/Rotational/Integrator2"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Integrator1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Integrator3"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative \nObservers #3/Differentiator2/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Cooperative \nObservers #3/Differentiator2/Integrator1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Integrator2"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Differentiator1/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Translational #3/Differentiator1/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Integrator3"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Differentiator/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Differentiator/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Integrator"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #3/Controller #3/Rotational/Integrator2"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Integrator1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Integrator3"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative \nObservers #1/Differentiator2/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Cooperative \nObservers #1/Differentiator2/Integrator1"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Integrator2"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Differentiator1/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Translational #4/Differentiator1/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Integrator3"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Differentiator/Integrator"
,
 "CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Differentiator/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Integrator1"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Integrator"
,
"CAMFC2_Quad_New_02_Payload_01/Agent #4/Controller #4/Rotational/Integrator2"
,
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn4"
,
"CAMFC2_Quad_New_02_Payload_01/Data Bus /Reference Trajectory/Transfer Fcn3"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0
, SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 84 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 84 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . filapmf4cs [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . dkf0xcw1to [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . oweh1cvpwb [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . hyrtgzkn1j [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . lnyqg3gjey [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . pet0sahf2n [ 0 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . ajjwc4eanm ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . oaqvw1cmmj ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . lp3durdr4l ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . ohuimt1kj1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . cn4y1idp3t [ 0 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . jhtu45vxt4 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . nytonewnkc [ 0 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . ku4bbglgq2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . kdpp4uug5y [ 0 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . nzmi3egeno [ 0 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . iju3hejemb [ 0 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . jgaq55ujqb [ 0 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . pqorbdh2sp [ 0 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . lacvtmifen [ 0 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . ncicpbmtkr [ 0 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . ntzccs4iix [ 0 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . lzogr0v4zv [ 0 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . hcwdtblhkw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . irj1jq1t3z [ 0 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . pteyqc24bu [ 0 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . gaxneeplm1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . bir1ggdein [ 0 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . f20hsrwsbu [ 0 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . brw5ncjp0j [ 0 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . bktfffzsqn [ 0 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . ivgcimcucj ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . addj05wge0 ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . mvx4m5pboe ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . e024iaip1v [ 0 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . a1515hp3gw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . pf5zjr3mp2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . jno5haxgvz [ 0 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . dzhvipaz2k [ 0 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . micy5ovmck [ 0 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . dv53n1gvyw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . aawca0xb2d [ 0 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . jbl2zb4c4m [ 0 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . ljhpwq5usb [ 0 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . kg0ugkqytj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . naxi5vltsi [ 0 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . ew3cughtjj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . a1k30snvq0 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . fzkicub43y [ 0 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . o30rzpjaco [ 0 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . cimgd544vu [ 0 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . ccnwggclyg [ 0 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . eo3jeu2u13 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . g2nqcuil3a [ 0 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . cy42njcpkh [ 0 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . fdenftcp5x [ 0 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . ic3q3cbrlg [ 0 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . ddymkn2sup [ 0 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . e0j4zo50kw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . ocwmo4ag2m [ 0 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . lbz5rkxaei [ 0 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . ljpgz2iakn [ 0 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtX . ehwg0uvmnb [ 0 ] ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtX . hlfemejl1b [ 0 ] ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtX . pxyjcvvevd [ 0 ] ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtX . kctrjublf0 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtX . g0dx10c2um [ 0 ] ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtX . djovh5b3kq [ 0 ] ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtX . e2pcsiol3y [ 0 ] ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtX . egalmcbuqp [ 0 ] ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtX . mxr42d2wl0 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtX . j32sa5rgd2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtX . cpltwh23xe [ 0 ] ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtX . cqdcvy2yck [ 0 ] ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtX . pnhbys003g [ 0 ] ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtX . lqaehp4prm [ 0 ] ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtX . b4wxud2s5x [ 0 ] ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtX . bopvre4od1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtX . it5wbajlge [ 0 ] ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtX . jefvdqfjy5 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtX . dratvy31am [ 0 ] ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtX . l3ttobdsfe [ 0 ] ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtX . jjw13zegrz ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtX . igwlihe1d5 ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 1019 ] ; static
real_T absTol [ 1019 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T
absTolControl [ 1019 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U } ; static uint8_T zcAttributes [ 5 ] = { ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ;
static ssNonContDerivSigInfo nonContDerivSigInfo [ 20 ] = { { 1 * sizeof (
epsilon_bus ) , ( char * ) ( & rtB . lnnr0iw0cn ) , ( NULL ) } , { 6 * sizeof
( real_T ) , ( char * ) ( & rtB . jsxfpjxi0q [ 0 ] ) , ( NULL ) } , { 1 *
sizeof ( epsilon_bus ) , ( char * ) ( & rtB . nhbjfwwdjl ) , ( NULL ) } , { 6
* sizeof ( real_T ) , ( char * ) ( & rtB . l4y53aslys [ 0 ] ) , ( NULL ) } ,
{ 1 * sizeof ( epsilon_bus ) , ( char * ) ( & rtB . ptv2m3ufnc ) , ( NULL ) }
, { 6 * sizeof ( real_T ) , ( char * ) ( & rtB . afgqiftecc [ 0 ] ) , ( NULL
) } , { 6 * sizeof ( real_T ) , ( char * ) ( & rtB . hokah0t1ey [ 0 ] ) , (
NULL ) } , { 6 * sizeof ( real_T ) , ( char * ) ( & rtB . ptdcd1mp3v [ 0 ] )
, ( NULL ) } , { 6 * sizeof ( real_T ) , ( char * ) ( & rtB . g5dxvtvvft [ 0
] ) , ( NULL ) } , { 3 * sizeof ( real_T ) , ( char * ) ( & rtB . mythggah1g
[ 0 ] ) , ( NULL ) } , { 3 * sizeof ( real_T ) , ( char * ) ( & rtB .
okuh0wfpjd [ 0 ] ) , ( NULL ) } , { 3 * sizeof ( real_T ) , ( char * ) ( &
rtB . htdjvfkvx0 [ 0 ] ) , ( NULL ) } , { 3 * sizeof ( real_T ) , ( char * )
( & rtB . cvpsjp1xqu [ 0 ] ) , ( NULL ) } , { 3 * sizeof ( real_T ) , ( char
* ) ( & rtB . nfvj4bpva5 [ 0 ] ) , ( NULL ) } , { 3 * sizeof ( real_T ) , (
char * ) ( & rtB . j2pscqeale [ 0 ] ) , ( NULL ) } , { 3 * sizeof ( real_T )
, ( char * ) ( & rtB . ow20kwohpt [ 0 ] ) , ( NULL ) } , { 3 * sizeof (
real_T ) , ( char * ) ( & rtB . asu0f2ijbr [ 0 ] ) , ( NULL ) } , { 1 *
sizeof ( epsilon_bus ) , ( char * ) ( & rtB . n5xztpmvdo ) , ( NULL ) } , { 6
* sizeof ( real_T ) , ( char * ) ( & rtB . mixz2kbbzd [ 0 ] ) , ( NULL ) } ,
{ 6 * sizeof ( real_T ) , ( char * ) ( & rtB . o1w4cyxkr0 [ 0 ] ) , ( NULL )
} } ; ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 4.0 ) ;
ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 20 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode45" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelLogDataIfInInterval ( rtS ,
rt_UpdateTXXFYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib (
rtS , zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 5 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 5 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 4104019630U ) ; ssSetChecksumVal ( rtS , 1 ,
3045784979U ) ; ssSetChecksumVal ( rtS , 2 , 3358501291U ) ; ssSetChecksumVal
( rtS , 3 , 2260817830U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 119 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ;
systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ;
systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = & rtAlwaysEnabled ;
systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [ 17 ] = & rtAlwaysEnabled ;
systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan [ 19 ] = & rtAlwaysEnabled ;
systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan [ 21 ] = & rtAlwaysEnabled ;
systemRan [ 22 ] = & rtAlwaysEnabled ; systemRan [ 23 ] = & rtAlwaysEnabled ;
systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan [ 25 ] = & rtAlwaysEnabled ;
systemRan [ 26 ] = & rtAlwaysEnabled ; systemRan [ 27 ] = & rtAlwaysEnabled ;
systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan [ 29 ] = & rtAlwaysEnabled ;
systemRan [ 30 ] = & rtAlwaysEnabled ; systemRan [ 31 ] = & rtAlwaysEnabled ;
systemRan [ 32 ] = & rtAlwaysEnabled ; systemRan [ 33 ] = & rtAlwaysEnabled ;
systemRan [ 34 ] = & rtAlwaysEnabled ; systemRan [ 35 ] = & rtAlwaysEnabled ;
systemRan [ 36 ] = & rtAlwaysEnabled ; systemRan [ 37 ] = & rtAlwaysEnabled ;
systemRan [ 38 ] = & rtAlwaysEnabled ; systemRan [ 39 ] = & rtAlwaysEnabled ;
systemRan [ 40 ] = & rtAlwaysEnabled ; systemRan [ 41 ] = & rtAlwaysEnabled ;
systemRan [ 42 ] = & rtAlwaysEnabled ; systemRan [ 43 ] = & rtAlwaysEnabled ;
systemRan [ 44 ] = & rtAlwaysEnabled ; systemRan [ 45 ] = & rtAlwaysEnabled ;
systemRan [ 46 ] = & rtAlwaysEnabled ; systemRan [ 47 ] = & rtAlwaysEnabled ;
systemRan [ 48 ] = & rtAlwaysEnabled ; systemRan [ 49 ] = & rtAlwaysEnabled ;
systemRan [ 50 ] = & rtAlwaysEnabled ; systemRan [ 51 ] = & rtAlwaysEnabled ;
systemRan [ 52 ] = & rtAlwaysEnabled ; systemRan [ 53 ] = & rtAlwaysEnabled ;
systemRan [ 54 ] = & rtAlwaysEnabled ; systemRan [ 55 ] = & rtAlwaysEnabled ;
systemRan [ 56 ] = & rtAlwaysEnabled ; systemRan [ 57 ] = & rtAlwaysEnabled ;
systemRan [ 58 ] = & rtAlwaysEnabled ; systemRan [ 59 ] = & rtAlwaysEnabled ;
systemRan [ 60 ] = & rtAlwaysEnabled ; systemRan [ 61 ] = & rtAlwaysEnabled ;
systemRan [ 62 ] = & rtAlwaysEnabled ; systemRan [ 63 ] = & rtAlwaysEnabled ;
systemRan [ 64 ] = & rtAlwaysEnabled ; systemRan [ 65 ] = & rtAlwaysEnabled ;
systemRan [ 66 ] = & rtAlwaysEnabled ; systemRan [ 67 ] = & rtAlwaysEnabled ;
systemRan [ 68 ] = & rtAlwaysEnabled ; systemRan [ 69 ] = & rtAlwaysEnabled ;
systemRan [ 70 ] = & rtAlwaysEnabled ; systemRan [ 71 ] = & rtAlwaysEnabled ;
systemRan [ 72 ] = & rtAlwaysEnabled ; systemRan [ 73 ] = & rtAlwaysEnabled ;
systemRan [ 74 ] = & rtAlwaysEnabled ; systemRan [ 75 ] = & rtAlwaysEnabled ;
systemRan [ 76 ] = & rtAlwaysEnabled ; systemRan [ 77 ] = & rtAlwaysEnabled ;
systemRan [ 78 ] = & rtAlwaysEnabled ; systemRan [ 79 ] = & rtAlwaysEnabled ;
systemRan [ 80 ] = & rtAlwaysEnabled ; systemRan [ 81 ] = & rtAlwaysEnabled ;
systemRan [ 82 ] = & rtAlwaysEnabled ; systemRan [ 83 ] = & rtAlwaysEnabled ;
systemRan [ 84 ] = & rtAlwaysEnabled ; systemRan [ 85 ] = & rtAlwaysEnabled ;
systemRan [ 86 ] = & rtAlwaysEnabled ; systemRan [ 87 ] = & rtAlwaysEnabled ;
systemRan [ 88 ] = & rtAlwaysEnabled ; systemRan [ 89 ] = & rtAlwaysEnabled ;
systemRan [ 90 ] = & rtAlwaysEnabled ; systemRan [ 91 ] = & rtAlwaysEnabled ;
systemRan [ 92 ] = & rtAlwaysEnabled ; systemRan [ 93 ] = & rtAlwaysEnabled ;
systemRan [ 94 ] = & rtAlwaysEnabled ; systemRan [ 95 ] = & rtAlwaysEnabled ;
systemRan [ 96 ] = & rtAlwaysEnabled ; systemRan [ 97 ] = & rtAlwaysEnabled ;
systemRan [ 98 ] = & rtAlwaysEnabled ; systemRan [ 99 ] = & rtAlwaysEnabled ;
systemRan [ 100 ] = & rtAlwaysEnabled ; systemRan [ 101 ] = & rtAlwaysEnabled
; systemRan [ 102 ] = & rtAlwaysEnabled ; systemRan [ 103 ] = &
rtAlwaysEnabled ; systemRan [ 104 ] = & rtAlwaysEnabled ; systemRan [ 105 ] =
& rtAlwaysEnabled ; systemRan [ 106 ] = & rtAlwaysEnabled ; systemRan [ 107 ]
= & rtAlwaysEnabled ; systemRan [ 108 ] = & rtAlwaysEnabled ; systemRan [ 109
] = & rtAlwaysEnabled ; systemRan [ 110 ] = & rtAlwaysEnabled ; systemRan [
111 ] = & rtAlwaysEnabled ; systemRan [ 112 ] = & rtAlwaysEnabled ; systemRan
[ 113 ] = & rtAlwaysEnabled ; systemRan [ 114 ] = & rtAlwaysEnabled ;
systemRan [ 115 ] = & rtAlwaysEnabled ; systemRan [ 116 ] = & rtAlwaysEnabled
; systemRan [ 117 ] = & rtAlwaysEnabled ; systemRan [ 118 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
