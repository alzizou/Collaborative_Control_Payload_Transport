#include "__cf_CAMFC2_Quad_New_02_Payload_01.h"
#ifndef RTW_HEADER_CAMFC2_Quad_New_02_Payload_01_h_
#define RTW_HEADER_CAMFC2_Quad_New_02_Payload_01_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef CAMFC2_Quad_New_02_Payload_01_COMMON_INCLUDES_
#define CAMFC2_Quad_New_02_Payload_01_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "CAMFC2_Quad_New_02_Payload_01_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#define MODEL_NAME CAMFC2_Quad_New_02_Payload_01
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (205) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (1019)   
#elif NCSTATES != 1019
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T psgobcrgrf ; real_T kh3hogern0 [ 3 ] ; } dnxczn3dnn ;
typedef struct { real_T nnix5btgdj [ 4 ] ; } pix5xwdmn4 ; typedef struct {
real_T dwzefkbt4i [ 15 ] ; } e31aom0tez ; typedef struct { real_T do3vqytzlr
[ 15 ] ; } pa1jyfyqnc ; typedef struct { real_T h5nzmu35n2 [ 15 ] ; real_T
h4qfg23klo [ 15 ] ; } lu0vsdjkvp ; typedef struct { real_T oizdxburtj [ 36 ]
; } hqx3jg054o ; typedef struct { real_T lsn2ixkb43 [ 6 ] ; } fxcaggpt2g ;
typedef struct { real_T jomd12grfe [ 6 ] ; } eq5cp5blsh ; typedef struct {
real_T awuha2csho [ 6 ] ; } dm2tzdbcgz ; typedef struct { real_T lgflny3vaf [
36 ] ; } cwfhnd541o ; typedef struct { real_T ceslw2bcsd [ 6 ] ; } j3tg11tzyf
; typedef struct { real_T p0sifpbcra [ 6 ] ; real_T okla4d4php [ 6 ] ; real_T
koxsf3yz0i [ 6 ] ; } hgdkpbfvpv ; typedef struct { real_T dokc3h5z1d [ 36 ] ;
} oxhaxmnvep ; typedef struct { real_T ovkgcdutyp [ 6 ] ; } giihdnwpjj ;
typedef struct { real_T ertj4nm0qu [ 36 ] ; } lkn5opn3wh ; typedef struct {
real_T g0oikhinbf [ 3 ] ; } j3teq4qctc ; typedef struct { real_T iu3foypmzb [
3 ] ; } mae1jzyb5r ; typedef struct { real_T iqrledjweq [ 6 ] ; } pc3asbr0tb
; typedef struct { real_T j50ump3tqb [ 6 ] ; } mdnaam41iv ; typedef struct {
real_T lfrnaagn2k [ 12 ] ; } lvtfhbh3ww ; typedef struct { real_T lsl2hmd5f3
[ 15 ] ; } ao2lyclpb5 ; typedef struct { real_T mwv442a0wi [ 36 ] ; }
l41nytie0l ; typedef struct { epsilon_bus n5xztpmvdo ; epsilon_bus ptv2m3ufnc
; epsilon_bus nhbjfwwdjl ; epsilon_bus lnnr0iw0cn ; real_T lbn4luqpfw [ 12 ]
; real_T fdipzybztz [ 12 ] ; real_T gi1v4dqyzv [ 12 ] ; real_T nbziqu4k4i [
12 ] ; real_T jbtx2pjet0 ; real_T o5hqdwcanp ; real_T gikzhfrh2r ; real_T
o1w4cyxkr0 [ 6 ] ; real_T ittv15bcsa [ 3 ] ; real_T pdfkmj3akd [ 3 ] ; real_T
itgoh1hxqp [ 6 ] ; real_T hngud44kjo [ 3 ] ; real_T o5fje2j3te [ 6 ] ; real_T
lf5t1r3q3k [ 3 ] ; real_T mixz2kbbzd [ 6 ] ; real_T lpfnz5a2xn [ 6 ] ; real_T
h01ja14scr [ 6 ] ; real_T gqx5b5eit1 [ 6 ] ; real_T pxebxuyzlv [ 15 ] ;
real_T asu0f2ijbr [ 3 ] ; real_T ow20kwohpt [ 3 ] ; real_T ktynx515e0 [ 3 ] ;
real_T gcxmhwbhns [ 3 ] ; real_T e2i3atu3ac [ 3 ] ; real_T j2pscqeale [ 3 ] ;
real_T nfvj4bpva5 [ 3 ] ; real_T cvpsjp1xqu [ 3 ] ; real_T myxakcrmqb [ 3 ] ;
real_T ozfculoppj [ 3 ] ; real_T btqsez3icc [ 3 ] ; real_T htdjvfkvx0 [ 3 ] ;
real_T okuh0wfpjd [ 3 ] ; real_T mythggah1g [ 3 ] ; real_T g5dxvtvvft [ 6 ] ;
real_T ptdcd1mp3v [ 6 ] ; real_T hokah0t1ey [ 6 ] ; real_T incdyqesqd [ 6 ] ;
real_T afgqiftecc [ 6 ] ; real_T mcgappzh0a [ 6 ] ; real_T pm3zcgsze2 [ 6 ] ;
real_T kzomkkaldu [ 6 ] ; real_T gmpoamd1yl [ 6 ] ; real_T l4y53aslys [ 6 ] ;
real_T oca1yeauge [ 6 ] ; real_T duuk0gubye [ 6 ] ; real_T ajig4v24ce [ 6 ] ;
real_T fdryynjim2 [ 6 ] ; real_T jsxfpjxi0q [ 6 ] ; real_T ki3bbacr2g [ 6 ] ;
real_T nd5m5e34h4 [ 6 ] ; real_T ievgosfumo [ 6 ] ; real_T fswysouih3 ;
real_T b5uou53b4t ; real_T fjuaz0z3oj ; real_T oycm4jbgim ; real_T pzwszwmdnd
; real_T hozlr0pwk1 ; real_T d4hj01c1vg ; real_T jeeth114rb ; real_T
kg1nnjy4y0 [ 6 ] ; real_T lk5bwa3fu5 [ 3 ] ; real_T o2hi21fjpg ; real_T
pqzidfucir [ 15 ] ; real_T hcmtphgh1v [ 3 ] ; real_T g3205b3ehz [ 3 ] ;
real_T ctx14gz0mc [ 3 ] ; real_T axhl1ytdq1 [ 3 ] ; real_T b0oya0sorf [ 3 ] ;
real_T fxo2ztmqiq [ 3 ] ; real_T nc5l5ompcr [ 3 ] ; real_T odtp4k5ik4 [ 3 ] ;
real_T oxqbz15e3l [ 3 ] ; real_T d234fos3qo [ 3 ] ; real_T onz3z4vedl [ 3 ] ;
real_T dmj2b1er01 [ 3 ] ; real_T eko0owjdui [ 3 ] ; real_T jgni5sqhom [ 3 ] ;
real_T kjivth4tcr [ 3 ] ; real_T m3bgszen3q [ 3 ] ; real_T mwunt1htil [ 3 ] ;
l41nytie0l oxm0qdhvd1 ; l41nytie0l newkwtnnyb ; l41nytie0l eume1su52i ;
l41nytie0l bcakaosdk3 ; l41nytie0l hzg1zx3v41 ; l41nytie0l ltofzehbyr ;
l41nytie0l axfkml5ixh ; l41nytie0l bra5bscetp ; l41nytie0l idrbq1s50x ;
l41nytie0l kku1cld2tf ; l41nytie0l e5ut0spxgg ; l41nytie0l nvxpjyra3b ;
l41nytie0l bmskov3xln ; l41nytie0l b2dgeus3id ; l41nytie0l kxpjd1a3pi ;
l41nytie0l dwv0b3nbpt ; mae1jzyb5r nk3dg1co2i ; ao2lyclpb5 fdngayugtw ;
ao2lyclpb5 c0oxtpeizm ; ao2lyclpb5 phayf32gqx ; ao2lyclpb5 cqfsohgyr0 ;
ao2lyclpb5 hewtmlrb4i ; ao2lyclpb5 eu5twy3xqi ; ao2lyclpb5 e3fsepjhu3 ;
ao2lyclpb5 oor4lambv3 ; lvtfhbh3ww okynqnkfux ; mdnaam41iv jvph4vnkr4 ;
pc3asbr0tb adhekhczer ; mae1jzyb5r aruhpddimh ; j3teq4qctc kc2ijyeu0y ;
lkn5opn3wh dtqe2jyuyw ; giihdnwpjj hiuzcdovtx ; oxhaxmnvep nbfgabjloh ;
hgdkpbfvpv bf440oddgu ; j3tg11tzyf cdm1uy5lwx ; cwfhnd541o pffczfadw0 ;
dm2tzdbcgz ouqutwqspm ; eq5cp5blsh dnfgeeso11 ; fxcaggpt2g majmcadfuu ;
hqx3jg054o gb4iihhqdp ; lu0vsdjkvp m2rbsbdny1 ; pa1jyfyqnc eda2vxrff0 ;
e31aom0tez aue1vbpmvj ; pix5xwdmn4 h5potfgoew ; dnxczn3dnn idhvdfhluc ;
lvtfhbh3ww jwexpeel5j ; mdnaam41iv iief32edxg ; pc3asbr0tb m3u1mc53xu ;
mae1jzyb5r i2taelcq5m ; j3teq4qctc lssgckg42l ; lkn5opn3wh ex1zkqtfgv ;
giihdnwpjj b20p2q3lgq ; oxhaxmnvep b44jbvl1vq ; hgdkpbfvpv c1eq5vcpx4 ;
j3tg11tzyf cxm1w1zufa ; cwfhnd541o fbh4dqoyov ; dm2tzdbcgz fay2vqnghf ;
eq5cp5blsh ofvqlpwckb ; fxcaggpt2g co5vre2gwb ; hqx3jg054o jjieidn0fp ;
lu0vsdjkvp dm0iynorl1 ; pa1jyfyqnc bg42xqoh1c ; e31aom0tez k1qsnregiz ;
pix5xwdmn4 n2gxek1ysk ; dnxczn3dnn li222mg0tu ; lvtfhbh3ww mtut1sc5t2 ;
mdnaam41iv oeqeegnqph ; pc3asbr0tb psbegwgczo ; mae1jzyb5r ftxqlzmaxy ;
j3teq4qctc aeorekhod3 ; lkn5opn3wh avlxughyns ; giihdnwpjj du2lrvbx5h ;
oxhaxmnvep d2q5qnt0b3 ; hgdkpbfvpv jbgetkuxaj ; j3tg11tzyf dhlomykkky ;
cwfhnd541o htfczxwbqt ; dm2tzdbcgz f251a30bl5 ; eq5cp5blsh hdtx0qvcg5 ;
fxcaggpt2g evhpd5pqdh ; hqx3jg054o odecv1tkpq ; lu0vsdjkvp frmzupx0zv ;
pa1jyfyqnc f20gcf5hzy ; e31aom0tez d3xq0g2bn4 ; pix5xwdmn4 l2ylxix2y4 ;
dnxczn3dnn bbinms31xh ; lvtfhbh3ww oa3j2mackf ; mdnaam41iv koohydnldu ;
pc3asbr0tb or1qu0lbxa ; mae1jzyb5r d0b2e2tbom ; j3teq4qctc geh5ssntfp ;
lkn5opn3wh kv2bmipsop ; giihdnwpjj oqlntds35a ; oxhaxmnvep gnq3tqucqn ;
hgdkpbfvpv ejm1xz1i3s ; j3tg11tzyf aoni3btcrm ; cwfhnd541o br1bl3k0ub ;
dm2tzdbcgz czp4tvzurt ; eq5cp5blsh bx3nl12y2l ; fxcaggpt2g etbc3ao3mx ;
hqx3jg054o a2ww44jm1e ; lu0vsdjkvp by50irynec ; pa1jyfyqnc khvlym1mbm ;
e31aom0tez ounrqp0kqp ; pix5xwdmn4 ndp0ayzs4j ; dnxczn3dnn kqhftxu5gq ; } B ;
typedef struct { real_T kstiocozka [ 6 ] ; real_T f0c002qbsv ; real_T
pqpmtevv2j [ 3 ] ; real_T mv5h2lqtxu ; real_T dr2fd4czo0 [ 3 ] ; real_T
j2jsulvdm1 ; real_T ekpr5jhh05 [ 3 ] ; real_T pjv2r5rhzy ; real_T it1tzyqmx3
[ 3 ] ; real_T hwmovhfzf2 [ 6 ] ; real_T be0imqxqro [ 15 ] ; real_T
mx4qqpknqe [ 15 ] ; real_T cbxnmjiv35 [ 15 ] ; real_T j3sy2mrawp [ 15 ] ;
real_T ha4pdvtcus [ 3 ] ; real_T coqd1tvx1u [ 3 ] ; real_T jof3zfdlkv [ 3 ] ;
real_T pkkl0tyrak [ 3 ] ; real_T ps4xa0zgh4 [ 3 ] ; real_T ndbjd515lt [ 3 ] ;
real_T d4dmyhlqbm [ 3 ] ; real_T kuepayhel0 [ 3 ] ; real_T idvr4rh4mu [ 6 ] ;
real_T fztt0z3pyb [ 6 ] ; real_T lmomxeodsu [ 6 ] ; real_T lgcgglfpr5 [ 6 ] ;
real_T ofcsp2xnjt [ 6 ] ; real_T ktoqhjnspo [ 6 ] ; struct { void *
LoggedData ; } bfeqkoqnt0 ; struct { void * LoggedData ; } dfy0trg5d3 ;
struct { void * LoggedData ; } m1lw4tfunw ; struct { void * LoggedData ; }
jsn4enjaye ; struct { void * LoggedData ; } pefmvwipw1 ; struct { void *
LoggedData ; } dlnw4t3lpd ; struct { void * LoggedData ; } mehswlvtgm ;
struct { void * LoggedData ; } e0q5csdiqq ; struct { void * LoggedData ; }
ow3bgvrozh ; struct { void * LoggedData ; } htmtyfuajr ; struct { void *
LoggedData ; } ivtbksha2x ; struct { void * LoggedData ; } d1f1pxq0cv ;
struct { void * LoggedData ; } cacxxwupgo ; struct { void * LoggedData ; }
npkprrtqrd ; struct { void * LoggedData ; } iq2uo11o1r ; struct { void *
LoggedData ; } ptospcrjav ; struct { void * LoggedData ; } iuen3vwhwf ;
struct { void * LoggedData ; } k1i2cgujxx ; struct { void * LoggedData ; }
o1qmdgtcqs ; struct { void * LoggedData ; } ahgn3ni2nd ; struct { void *
LoggedData ; } ftsenby5we ; struct { void * LoggedData ; } axnhqeg3ue ;
struct { void * LoggedData ; } jyofunjeyz ; struct { void * LoggedData ; }
hv1dj310ft ; struct { void * LoggedData ; } kmcrsn1rom ; struct { void *
LoggedData [ 3 ] ; } pjf4td5nr0 ; struct { void * LoggedData [ 3 ] ; }
ijkymdxn5s ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} i1wwy5n5rc ; struct { void * LoggedData ; } hzwyeasm43 ; struct { void *
LoggedData ; } j4nrepcgpu ; struct { void * LoggedData ; } camjz1utpm ;
struct { void * LoggedData ; } h34d0dz1tx ; struct { void * LoggedData ; }
eqqgpwzsvq ; struct { void * LoggedData ; } dgeamk1wo2 ; struct { void *
LoggedData ; } lhreu3iook ; struct { void * LoggedData ; } du1u11a542 ;
struct { void * LoggedData ; } hdz014mlxm ; struct { void * LoggedData ; }
givugmca51 ; struct { void * LoggedData ; } atjwpkepvl ; struct { void *
LoggedData ; } lmit2h4t34 ; struct { void * LoggedData ; } kczpusi2s1 ;
struct { void * LoggedData ; } ij1bjq2pp1 ; struct { void * LoggedData ; }
n0iqt32sfp ; struct { void * LoggedData ; } kljv1hxyju ; struct { void *
LoggedData ; } kn41ewqeq3 ; struct { void * LoggedData ; } hhoqznvhi3 ;
struct { void * LoggedData ; } agu3biksdl ; struct { void * LoggedData ; }
lnkqhumnxa ; struct { void * LoggedData ; } ecdze0zcrs ; struct { void *
LoggedData ; } ntjqns0oae ; struct { void * LoggedData ; } nzjvtx2drp ;
struct { void * LoggedData ; } ludcryuovc ; struct { void * LoggedData ; }
jhug4f4fnn ; struct { void * LoggedData ; } peyk0za1jj ; struct { void *
LoggedData ; } nmnsqs0foz ; struct { void * LoggedData ; } lunjbjcbzb ;
struct { void * LoggedData ; } lpq1kb1sjr ; struct { void * LoggedData ; }
l4tovimwan ; struct { void * LoggedData ; } kwk1qgvysg ; struct { void *
LoggedData ; } bkcvxpj14h ; struct { void * LoggedData ; } fq2moqhx1k ;
struct { void * LoggedData ; } nkzxvnpzaq ; struct { void * LoggedData ; }
phclb1hosq ; struct { void * LoggedData ; } hlltd51e5p ; struct { void *
LoggedData ; } kjead5tgs4 ; struct { void * LoggedData ; } mbjldeeb4d ;
struct { void * LoggedData ; } lnpvpj0cx3 ; struct { void * LoggedData ; }
jcai3h0pvz ; struct { void * LoggedData ; } cxb5ckleoa ; struct { void *
LoggedData ; } oapfejjykt ; struct { void * LoggedData ; } orsxbm3qij ;
struct { void * LoggedData ; } cn2rx14hit ; struct { void * LoggedData ; }
bnzftshx34 ; struct { void * LoggedData ; } b3h2bgfvmf ; struct { void *
LoggedData ; } ovnjs4iqgp ; struct { void * LoggedData ; } c0vkh1nckw ;
struct { void * LoggedData ; } lzksfbzheq ; struct { void * LoggedData ; }
bm3qbtlsvl ; struct { void * LoggedData ; } lbh2v4cxsw ; struct { void *
LoggedData ; } gngxoqyce2 ; struct { void * LoggedData ; } j4t5utnqsu ;
struct { void * LoggedData ; } ohhdayxsqf ; struct { void * LoggedData ; }
hw5kuuf0zz ; struct { void * LoggedData ; } flmxkmsuse ; struct { void *
LoggedData ; } dnfwnpgyjn ; struct { void * LoggedData ; } nnpouilxcu ;
struct { void * LoggedData ; } hr2cuewb1d ; struct { void * LoggedData ; }
mnpnnxmz24 ; struct { void * LoggedData ; } g1kahszp5p ; struct { void *
LoggedData ; } mi4rj5pvhr ; struct { int_T PrevIndex ; } abl3fffzqi ; int_T
m1udjgpeyw ; int_T bjfbg3j4bh ; boolean_T cjep00xofb ; boolean_T er0mumta3j ;
boolean_T cyoxgzoski ; } DW ; typedef struct { real_T filapmf4cs [ 36 ] ;
real_T dkf0xcw1to [ 15 ] ; real_T oweh1cvpwb [ 12 ] ; real_T hyrtgzkn1j [ 12
] ; real_T lnyqg3gjey [ 12 ] ; real_T pet0sahf2n [ 12 ] ; real_T ajjwc4eanm ;
real_T oaqvw1cmmj ; real_T lp3durdr4l ; real_T ohuimt1kj1 [ 6 ] ; real_T
cn4y1idp3t [ 36 ] ; real_T jhtu45vxt4 [ 3 ] ; real_T nytonewnkc [ 3 ] ;
real_T ku4bbglgq2 [ 15 ] ; real_T kdpp4uug5y [ 15 ] ; real_T nzmi3egeno [ 3 ]
; real_T iju3hejemb [ 3 ] ; real_T jgaq55ujqb [ 6 ] ; real_T pqorbdh2sp [ 3 ]
; real_T lacvtmifen [ 3 ] ; real_T ncicpbmtkr [ 6 ] ; real_T ntzccs4iix [ 3 ]
; real_T lzogr0v4zv [ 6 ] ; real_T hcwdtblhkw [ 6 ] ; real_T irj1jq1t3z [ 6 ]
; real_T pteyqc24bu [ 36 ] ; real_T gaxneeplm1 [ 36 ] ; real_T bir1ggdein [ 6
] ; real_T f20hsrwsbu [ 15 ] ; real_T brw5ncjp0j [ 15 ] ; real_T bktfffzsqn [
15 ] ; real_T ivgcimcucj ; real_T addj05wge0 ; real_T mvx4m5pboe ; real_T
e024iaip1v [ 3 ] ; real_T a1515hp3gw [ 3 ] ; real_T pf5zjr3mp2 [ 3 ] ; real_T
jno5haxgvz [ 3 ] ; real_T dzhvipaz2k [ 3 ] ; real_T micy5ovmck [ 3 ] ; real_T
dv53n1gvyw [ 36 ] ; real_T aawca0xb2d [ 36 ] ; real_T jbl2zb4c4m [ 36 ] ;
real_T ljhpwq5usb [ 6 ] ; real_T kg0ugkqytj [ 36 ] ; real_T naxi5vltsi [ 15 ]
; real_T ew3cughtjj [ 15 ] ; real_T a1k30snvq0 [ 6 ] ; real_T fzkicub43y [ 3
] ; real_T o30rzpjaco [ 3 ] ; real_T cimgd544vu [ 6 ] ; real_T ccnwggclyg [ 6
] ; real_T eo3jeu2u13 [ 6 ] ; real_T g2nqcuil3a [ 36 ] ; real_T cy42njcpkh [
36 ] ; real_T fdenftcp5x [ 6 ] ; real_T ic3q3cbrlg [ 6 ] ; real_T ddymkn2sup
[ 36 ] ; real_T e0j4zo50kw [ 15 ] ; real_T ocwmo4ag2m [ 15 ] ; real_T
lbz5rkxaei [ 6 ] ; real_T ljpgz2iakn [ 3 ] ; real_T ehwg0uvmnb [ 3 ] ; real_T
hlfemejl1b [ 6 ] ; real_T pxyjcvvevd [ 6 ] ; real_T kctrjublf0 [ 6 ] ; real_T
g0dx10c2um [ 36 ] ; real_T djovh5b3kq [ 36 ] ; real_T e2pcsiol3y [ 6 ] ;
real_T egalmcbuqp [ 6 ] ; real_T mxr42d2wl0 [ 36 ] ; real_T j32sa5rgd2 [ 15 ]
; real_T cpltwh23xe [ 15 ] ; real_T cqdcvy2yck [ 6 ] ; real_T pnhbys003g [ 3
] ; real_T lqaehp4prm [ 3 ] ; real_T b4wxud2s5x [ 6 ] ; real_T bopvre4od1 [ 6
] ; real_T it5wbajlge [ 6 ] ; real_T jefvdqfjy5 [ 36 ] ; real_T dratvy31am [
36 ] ; real_T l3ttobdsfe [ 6 ] ; real_T jjw13zegrz ; real_T igwlihe1d5 ; } X
; typedef struct { real_T filapmf4cs [ 36 ] ; real_T dkf0xcw1to [ 15 ] ;
real_T oweh1cvpwb [ 12 ] ; real_T hyrtgzkn1j [ 12 ] ; real_T lnyqg3gjey [ 12
] ; real_T pet0sahf2n [ 12 ] ; real_T ajjwc4eanm ; real_T oaqvw1cmmj ; real_T
lp3durdr4l ; real_T ohuimt1kj1 [ 6 ] ; real_T cn4y1idp3t [ 36 ] ; real_T
jhtu45vxt4 [ 3 ] ; real_T nytonewnkc [ 3 ] ; real_T ku4bbglgq2 [ 15 ] ;
real_T kdpp4uug5y [ 15 ] ; real_T nzmi3egeno [ 3 ] ; real_T iju3hejemb [ 3 ]
; real_T jgaq55ujqb [ 6 ] ; real_T pqorbdh2sp [ 3 ] ; real_T lacvtmifen [ 3 ]
; real_T ncicpbmtkr [ 6 ] ; real_T ntzccs4iix [ 3 ] ; real_T lzogr0v4zv [ 6 ]
; real_T hcwdtblhkw [ 6 ] ; real_T irj1jq1t3z [ 6 ] ; real_T pteyqc24bu [ 36
] ; real_T gaxneeplm1 [ 36 ] ; real_T bir1ggdein [ 6 ] ; real_T f20hsrwsbu [
15 ] ; real_T brw5ncjp0j [ 15 ] ; real_T bktfffzsqn [ 15 ] ; real_T
ivgcimcucj ; real_T addj05wge0 ; real_T mvx4m5pboe ; real_T e024iaip1v [ 3 ]
; real_T a1515hp3gw [ 3 ] ; real_T pf5zjr3mp2 [ 3 ] ; real_T jno5haxgvz [ 3 ]
; real_T dzhvipaz2k [ 3 ] ; real_T micy5ovmck [ 3 ] ; real_T dv53n1gvyw [ 36
] ; real_T aawca0xb2d [ 36 ] ; real_T jbl2zb4c4m [ 36 ] ; real_T ljhpwq5usb [
6 ] ; real_T kg0ugkqytj [ 36 ] ; real_T naxi5vltsi [ 15 ] ; real_T ew3cughtjj
[ 15 ] ; real_T a1k30snvq0 [ 6 ] ; real_T fzkicub43y [ 3 ] ; real_T
o30rzpjaco [ 3 ] ; real_T cimgd544vu [ 6 ] ; real_T ccnwggclyg [ 6 ] ; real_T
eo3jeu2u13 [ 6 ] ; real_T g2nqcuil3a [ 36 ] ; real_T cy42njcpkh [ 36 ] ;
real_T fdenftcp5x [ 6 ] ; real_T ic3q3cbrlg [ 6 ] ; real_T ddymkn2sup [ 36 ]
; real_T e0j4zo50kw [ 15 ] ; real_T ocwmo4ag2m [ 15 ] ; real_T lbz5rkxaei [ 6
] ; real_T ljpgz2iakn [ 3 ] ; real_T ehwg0uvmnb [ 3 ] ; real_T hlfemejl1b [ 6
] ; real_T pxyjcvvevd [ 6 ] ; real_T kctrjublf0 [ 6 ] ; real_T g0dx10c2um [
36 ] ; real_T djovh5b3kq [ 36 ] ; real_T e2pcsiol3y [ 6 ] ; real_T egalmcbuqp
[ 6 ] ; real_T mxr42d2wl0 [ 36 ] ; real_T j32sa5rgd2 [ 15 ] ; real_T
cpltwh23xe [ 15 ] ; real_T cqdcvy2yck [ 6 ] ; real_T pnhbys003g [ 3 ] ;
real_T lqaehp4prm [ 3 ] ; real_T b4wxud2s5x [ 6 ] ; real_T bopvre4od1 [ 6 ] ;
real_T it5wbajlge [ 6 ] ; real_T jefvdqfjy5 [ 36 ] ; real_T dratvy31am [ 36 ]
; real_T l3ttobdsfe [ 6 ] ; real_T jjw13zegrz ; real_T igwlihe1d5 ; } XDot ;
typedef struct { boolean_T filapmf4cs [ 36 ] ; boolean_T dkf0xcw1to [ 15 ] ;
boolean_T oweh1cvpwb [ 12 ] ; boolean_T hyrtgzkn1j [ 12 ] ; boolean_T
lnyqg3gjey [ 12 ] ; boolean_T pet0sahf2n [ 12 ] ; boolean_T ajjwc4eanm ;
boolean_T oaqvw1cmmj ; boolean_T lp3durdr4l ; boolean_T ohuimt1kj1 [ 6 ] ;
boolean_T cn4y1idp3t [ 36 ] ; boolean_T jhtu45vxt4 [ 3 ] ; boolean_T
nytonewnkc [ 3 ] ; boolean_T ku4bbglgq2 [ 15 ] ; boolean_T kdpp4uug5y [ 15 ]
; boolean_T nzmi3egeno [ 3 ] ; boolean_T iju3hejemb [ 3 ] ; boolean_T
jgaq55ujqb [ 6 ] ; boolean_T pqorbdh2sp [ 3 ] ; boolean_T lacvtmifen [ 3 ] ;
boolean_T ncicpbmtkr [ 6 ] ; boolean_T ntzccs4iix [ 3 ] ; boolean_T
lzogr0v4zv [ 6 ] ; boolean_T hcwdtblhkw [ 6 ] ; boolean_T irj1jq1t3z [ 6 ] ;
boolean_T pteyqc24bu [ 36 ] ; boolean_T gaxneeplm1 [ 36 ] ; boolean_T
bir1ggdein [ 6 ] ; boolean_T f20hsrwsbu [ 15 ] ; boolean_T brw5ncjp0j [ 15 ]
; boolean_T bktfffzsqn [ 15 ] ; boolean_T ivgcimcucj ; boolean_T addj05wge0 ;
boolean_T mvx4m5pboe ; boolean_T e024iaip1v [ 3 ] ; boolean_T a1515hp3gw [ 3
] ; boolean_T pf5zjr3mp2 [ 3 ] ; boolean_T jno5haxgvz [ 3 ] ; boolean_T
dzhvipaz2k [ 3 ] ; boolean_T micy5ovmck [ 3 ] ; boolean_T dv53n1gvyw [ 36 ] ;
boolean_T aawca0xb2d [ 36 ] ; boolean_T jbl2zb4c4m [ 36 ] ; boolean_T
ljhpwq5usb [ 6 ] ; boolean_T kg0ugkqytj [ 36 ] ; boolean_T naxi5vltsi [ 15 ]
; boolean_T ew3cughtjj [ 15 ] ; boolean_T a1k30snvq0 [ 6 ] ; boolean_T
fzkicub43y [ 3 ] ; boolean_T o30rzpjaco [ 3 ] ; boolean_T cimgd544vu [ 6 ] ;
boolean_T ccnwggclyg [ 6 ] ; boolean_T eo3jeu2u13 [ 6 ] ; boolean_T
g2nqcuil3a [ 36 ] ; boolean_T cy42njcpkh [ 36 ] ; boolean_T fdenftcp5x [ 6 ]
; boolean_T ic3q3cbrlg [ 6 ] ; boolean_T ddymkn2sup [ 36 ] ; boolean_T
e0j4zo50kw [ 15 ] ; boolean_T ocwmo4ag2m [ 15 ] ; boolean_T lbz5rkxaei [ 6 ]
; boolean_T ljpgz2iakn [ 3 ] ; boolean_T ehwg0uvmnb [ 3 ] ; boolean_T
hlfemejl1b [ 6 ] ; boolean_T pxyjcvvevd [ 6 ] ; boolean_T kctrjublf0 [ 6 ] ;
boolean_T g0dx10c2um [ 36 ] ; boolean_T djovh5b3kq [ 36 ] ; boolean_T
e2pcsiol3y [ 6 ] ; boolean_T egalmcbuqp [ 6 ] ; boolean_T mxr42d2wl0 [ 36 ] ;
boolean_T j32sa5rgd2 [ 15 ] ; boolean_T cpltwh23xe [ 15 ] ; boolean_T
cqdcvy2yck [ 6 ] ; boolean_T pnhbys003g [ 3 ] ; boolean_T lqaehp4prm [ 3 ] ;
boolean_T b4wxud2s5x [ 6 ] ; boolean_T bopvre4od1 [ 6 ] ; boolean_T
it5wbajlge [ 6 ] ; boolean_T jefvdqfjy5 [ 36 ] ; boolean_T dratvy31am [ 36 ]
; boolean_T l3ttobdsfe [ 6 ] ; boolean_T jjw13zegrz ; boolean_T igwlihe1d5 ;
} XDis ; typedef struct { real_T filapmf4cs [ 36 ] ; real_T dkf0xcw1to [ 15 ]
; real_T oweh1cvpwb [ 12 ] ; real_T hyrtgzkn1j [ 12 ] ; real_T lnyqg3gjey [
12 ] ; real_T pet0sahf2n [ 12 ] ; real_T ajjwc4eanm ; real_T oaqvw1cmmj ;
real_T lp3durdr4l ; real_T ohuimt1kj1 [ 6 ] ; real_T cn4y1idp3t [ 36 ] ;
real_T jhtu45vxt4 [ 3 ] ; real_T nytonewnkc [ 3 ] ; real_T ku4bbglgq2 [ 15 ]
; real_T kdpp4uug5y [ 15 ] ; real_T nzmi3egeno [ 3 ] ; real_T iju3hejemb [ 3
] ; real_T jgaq55ujqb [ 6 ] ; real_T pqorbdh2sp [ 3 ] ; real_T lacvtmifen [ 3
] ; real_T ncicpbmtkr [ 6 ] ; real_T ntzccs4iix [ 3 ] ; real_T lzogr0v4zv [ 6
] ; real_T hcwdtblhkw [ 6 ] ; real_T irj1jq1t3z [ 6 ] ; real_T pteyqc24bu [
36 ] ; real_T gaxneeplm1 [ 36 ] ; real_T bir1ggdein [ 6 ] ; real_T f20hsrwsbu
[ 15 ] ; real_T brw5ncjp0j [ 15 ] ; real_T bktfffzsqn [ 15 ] ; real_T
ivgcimcucj ; real_T addj05wge0 ; real_T mvx4m5pboe ; real_T e024iaip1v [ 3 ]
; real_T a1515hp3gw [ 3 ] ; real_T pf5zjr3mp2 [ 3 ] ; real_T jno5haxgvz [ 3 ]
; real_T dzhvipaz2k [ 3 ] ; real_T micy5ovmck [ 3 ] ; real_T dv53n1gvyw [ 36
] ; real_T aawca0xb2d [ 36 ] ; real_T jbl2zb4c4m [ 36 ] ; real_T ljhpwq5usb [
6 ] ; real_T kg0ugkqytj [ 36 ] ; real_T naxi5vltsi [ 15 ] ; real_T ew3cughtjj
[ 15 ] ; real_T a1k30snvq0 [ 6 ] ; real_T fzkicub43y [ 3 ] ; real_T
o30rzpjaco [ 3 ] ; real_T cimgd544vu [ 6 ] ; real_T ccnwggclyg [ 6 ] ; real_T
eo3jeu2u13 [ 6 ] ; real_T g2nqcuil3a [ 36 ] ; real_T cy42njcpkh [ 36 ] ;
real_T fdenftcp5x [ 6 ] ; real_T ic3q3cbrlg [ 6 ] ; real_T ddymkn2sup [ 36 ]
; real_T e0j4zo50kw [ 15 ] ; real_T ocwmo4ag2m [ 15 ] ; real_T lbz5rkxaei [ 6
] ; real_T ljpgz2iakn [ 3 ] ; real_T ehwg0uvmnb [ 3 ] ; real_T hlfemejl1b [ 6
] ; real_T pxyjcvvevd [ 6 ] ; real_T kctrjublf0 [ 6 ] ; real_T g0dx10c2um [
36 ] ; real_T djovh5b3kq [ 36 ] ; real_T e2pcsiol3y [ 6 ] ; real_T egalmcbuqp
[ 6 ] ; real_T mxr42d2wl0 [ 36 ] ; real_T j32sa5rgd2 [ 15 ] ; real_T
cpltwh23xe [ 15 ] ; real_T cqdcvy2yck [ 6 ] ; real_T pnhbys003g [ 3 ] ;
real_T lqaehp4prm [ 3 ] ; real_T b4wxud2s5x [ 6 ] ; real_T bopvre4od1 [ 6 ] ;
real_T it5wbajlge [ 6 ] ; real_T jefvdqfjy5 [ 36 ] ; real_T dratvy31am [ 36 ]
; real_T l3ttobdsfe [ 6 ] ; real_T jjw13zegrz ; real_T igwlihe1d5 ; }
CStateAbsTol ; typedef struct { real_T p5v2brn3uf ; real_T luebmxypw4 ;
real_T fqgzb20oic ; real_T g0iewxprv5 ; real_T pkzlkjqucv ; } ZCV ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T AN
[ 16 ] ; real_T B [ 36 ] ; real_T BBT_inv [ 36 ] ; real_T BN [ 16 ] ; real_T
H [ 16 ] ; real_T J [ 9 ] ; real_T K [ 36 ] ; real_T Ka ; real_T Kd ; real_T
Kf ; real_T Kt ; real_T Lq ; real_T M ; real_T Observer_Gain ; real_T
Observer_Gain1 ; real_T Q [ 36 ] ; real_T QR [ 36 ] ; real_T R [ 36 ] ;
real_T RM_1 [ 16 ] ; real_T U_dot0_M [ 3 ] ; real_T Upsilon_M [ 3 ] ; real_T
X_M [ 3 ] ; real_T alpha ; real_T gamma_0 [ 36 ] ; real_T gamma_1 [ 36 ] ;
real_T ge ; real_T k1 ; real_T k2 ; real_T r_formX ; real_T r_formY ; real_T
r_formZ ; real_T rho_0 ; real_T rho_1 ; real_T Gain2_Gain ; real_T
Agent_Value ; real_T Integrator4_IC [ 36 ] ; real_T Integrator5_IC [ 15 ] ;
real_T Integrator_IC [ 12 ] ; real_T Integrator_IC_ll5yvtvr3k [ 12 ] ; real_T
Integrator_IC_j4cpqfdea5 [ 12 ] ; real_T Integrator_IC_bhnfxbuaak [ 12 ] ;
real_T TransferFcn3_A ; real_T TransferFcn3_C ; real_T TransferFcn2_A ;
real_T TransferFcn2_C ; real_T TransferFcn1_A ; real_T TransferFcn1_C ;
real_T Memory2_InitialCondition [ 6 ] ; real_T Integrator1_IC [ 6 ] ; real_T
Integrator3_IC [ 36 ] ; real_T Integrator_IC_fvooay02cq [ 3 ] ; real_T
Integrator1_IC_gvc4lbz4zt [ 3 ] ; real_T formationoftheleader_Value [ 3 ] ;
real_T Integrator_IC_dxdefvbqqz [ 15 ] ; real_T Integrator1_IC_dhvfmby03k [
15 ] ; real_T Integrator_IC_hkn1g5z50u [ 3 ] ; real_T Integrator6_IC [ 3 ] ;
real_T Integrator2_IC [ 6 ] ; real_T Integrator_IC_m5trwyg02m [ 3 ] ; real_T
Integrator1_IC_o1x1rfxplt [ 3 ] ; real_T Integrator_IC_br54vzkuoj [ 6 ] ;
real_T Integrator_IC_eqgi5u5j2i ; real_T Gain_Gain ; real_T
Integrator3_IC_cqn1tixb11 [ 6 ] ; real_T Memory_InitialCondition [ 6 ] ;
real_T Integrator_IC_ak45y034mz [ 6 ] ; real_T Integrator1_IC_lwsrxvv1dn [ 6
] ; real_T Integrator1_IC_kch0jyq4l1 [ 36 ] ; real_T Integrator_IC_m2wkiw3enz
[ 36 ] ; real_T Integrator2_IC_gzbylzelej [ 6 ] ; real_T
Integrator5_IC_hdhhn35ras [ 15 ] ; real_T Integrator5_IC_nwcrjrmntz [ 15 ] ;
real_T Integrator5_IC_bdphhlsjj4 [ 15 ] ; real_T Memory3_InitialCondition [
15 ] ; real_T Memory3_InitialCondition_odrfcddzo2 [ 15 ] ; real_T
Memory3_InitialCondition_a0irr1iih0 [ 15 ] ; real_T
Memory3_InitialCondition_e4520jnbi2 [ 15 ] ; real_T
Memory_InitialCondition_kfc1wjzym5 [ 3 ] ; real_T Memory5_InitialCondition [
3 ] ; real_T TransferFcn1_A_nujdlcbjyt ; real_T TransferFcn1_C_cmxvg3m0j5 ;
real_T TransferFcn2_A_begbkhkapk ; real_T TransferFcn2_C_nzmool04r2 ; real_T
TransferFcn5_A ; real_T TransferFcn5_C ; real_T Integrator_IC_dv2mdr05ix [ 3
] ; real_T Integrator_IC_lea510ieom [ 3 ] ; real_T Integrator_IC_b2z2fy5xzx [
3 ] ; real_T Memory_InitialCondition_a15umzwd5d [ 3 ] ; real_T
Memory_InitialCondition_fdpfscth32 [ 3 ] ; real_T
Memory_InitialCondition_pnqhyj4v2u [ 3 ] ; real_T Integrator6_IC_pn0cggvpg5 [
3 ] ; real_T Integrator6_IC_oyuxsjsyrt [ 3 ] ; real_T
Integrator6_IC_llwvnjivrz [ 3 ] ; real_T Memory5_InitialCondition_omczlhgywm
[ 3 ] ; real_T Memory5_InitialCondition_krghwgtwzz [ 3 ] ; real_T
Memory5_InitialCondition_hwmjgecp2p [ 3 ] ; real_T Integrator4_IC_bqwjoax0yj
[ 36 ] ; real_T Integrator4_IC_hsxa2r15rn [ 36 ] ; real_T
Integrator4_IC_llpsksryx3 [ 36 ] ; real_T Agent_Value_ixja5dv44z ; real_T
Memory2_InitialCondition_ixkbydzld5 [ 6 ] ; real_T Agent_Value_axqasj4p0a ;
real_T Memory2_InitialCondition_opuvtlyd5u [ 6 ] ; real_T
Agent_Value_osrr3ginzy ; real_T Memory2_InitialCondition_ozc5y51w41 [ 6 ] ;
real_T Integrator1_IC_ix2kdurm0a [ 6 ] ; real_T Integrator3_IC_pl55dsru54 [
36 ] ; real_T Integrator_IC_alj3l4jksp [ 15 ] ; real_T
Integrator1_IC_e434obmerv [ 15 ] ; real_T Integrator2_IC_dlogixgno1 [ 6 ] ;
real_T Integrator_IC_aqhpgobmia [ 3 ] ; real_T Integrator1_IC_d2gz3itgvv [ 3
] ; real_T Integrator3_IC_irlb5jed0u [ 6 ] ; real_T
Memory_InitialCondition_a1f4f1efjn [ 6 ] ; real_T Integrator_IC_f4jweekbgj [
6 ] ; real_T Integrator1_IC_dggkktknfv [ 6 ] ; real_T
Integrator1_IC_ovoo50kpue [ 36 ] ; real_T Integrator_IC_asfyyakemt [ 36 ] ;
real_T Integrator2_IC_cpeckpugec [ 6 ] ; real_T Integrator1_IC_fmopbs2ypa [ 6
] ; real_T Integrator3_IC_fagx4trrvf [ 36 ] ; real_T Integrator_IC_ontqyxzrde
[ 15 ] ; real_T Integrator1_IC_hl1b0vrylw [ 15 ] ; real_T
Integrator2_IC_k5gg2bqqkf [ 6 ] ; real_T Integrator_IC_ayfhthp0v4 [ 3 ] ;
real_T Integrator1_IC_koasodr4as [ 3 ] ; real_T Integrator3_IC_jiozsrcxii [ 6
] ; real_T Memory_InitialCondition_az54btma51 [ 6 ] ; real_T
Integrator_IC_ghhpktks14 [ 6 ] ; real_T Integrator1_IC_fyphguyldl [ 6 ] ;
real_T Integrator1_IC_mdknrruii3 [ 36 ] ; real_T Integrator_IC_kpzn5be1yb [
36 ] ; real_T Integrator2_IC_l5f4ire3yt [ 6 ] ; real_T
Integrator1_IC_fvtztp1tml [ 6 ] ; real_T Integrator3_IC_okmfayw4p2 [ 36 ] ;
real_T Integrator_IC_cyubkmsog4 [ 15 ] ; real_T Integrator1_IC_kh4niuf2a4 [
15 ] ; real_T Integrator2_IC_k5nghiidw3 [ 6 ] ; real_T
Integrator_IC_cfnxz4nui1 [ 3 ] ; real_T Integrator1_IC_dtwgjipyua [ 3 ] ;
real_T Integrator3_IC_pzwcjpn3kt [ 6 ] ; real_T
Memory_InitialCondition_iflgyxbk0d [ 6 ] ; real_T Integrator_IC_c1yketrjdu [
6 ] ; real_T Integrator1_IC_gjuqacamsk [ 6 ] ; real_T
Integrator1_IC_jokakqqnqr [ 36 ] ; real_T Integrator_IC_jhbgz2gwkd [ 36 ] ;
real_T Integrator2_IC_dgk30gjhwf [ 6 ] ; real_T DesiredPosition4_Value ;
real_T DesiredPosition4_Value_pidnqqr40v ; real_T FromWorkspace3_Time0 [ 601
] ; real_T FromWorkspace3_Data0 [ 601 ] ; real_T Gain_Gain_a5iekrgwtt ;
real_T Gain1_Gain ; real_T Switch_Threshold ; real_T Switch2_Threshold ;
real_T Switch3_Threshold ; real_T Constant1_Value ; real_T TransferFcn4_A ;
real_T TransferFcn4_C ; real_T Constant5_Value ; real_T
TransferFcn3_A_ijhjp45drc ; real_T TransferFcn3_C_g24adbbwia ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
CAMFC2_Quad_New_02_Payload_01_GetCAPIStaticMap ( void ) ; extern SimStruct *
const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
