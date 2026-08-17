#define S_FUNCTION_NAME sf_sfun
#include "covrt.h"
#include "cgxert.h"
#include "emlrt.h"
#include "sfrtif/sfc_sf.h"
#include "sfrtif/MessageServiceLayer.h"
#include "sfrtif/DebuggerRuntimeInterface.h"
#include "sfrtif/sfc_mex.h"
#include "sfrtif/sf_runtime_errors.h"
#include "sfrtif/sf_partitioning_execution_bridge.h"
#include "rtwtypes.h"
#include "simtarget/slSimTgtClientServerAPIBridge.h"
#include "sfrtif/sfc_sdi.h"
#include "sfrtif/sf_test_language.h"
#include "simlogCIntrf.h"
#include "half_type.h"
#include "multiword_types.h"
#include "sfrtif/sfc_messages.h"
#include "slccrt.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"
#include "mwstringutil.h"
#include "blas.h"
#include "lapacke.h"
#include "s1OAEGsPvK2NvefBhDWzoP.h"
#include <time.h>

#define rtInf (mxGetInf())
#define rtMinusInf (-(mxGetInf()))
#define rtNaN (mxGetNaN())
#define rtInfF ((real32_T)mxGetInf())
#define rtMinusInfF (-(real32_T)mxGetInf())
#define rtNaNF ((real32_T)mxGetNaN())
#define rtIsNaN(X) ((int)mxIsNaN(X))
#define rtIsInf(X) ((int)mxIsInf(X))
#ifdef utFree
#undef utFree
#endif
#ifdef utMalloc
#undef utMalloc
#endif
#ifdef __cplusplus
extern "C" void* utMalloc(size_t size);
extern "C" void utFree(void*);
#else
extern void* utMalloc(size_t size);
extern void utFree(void*);
#endif


/* Type Definitions */
#ifndef c3_struct_c3_tag_IXZbk4aPjQFR6fO0q1hmvH
#define c3_struct_c3_tag_IXZbk4aPjQFR6fO0q1hmvH
struct c3_tag_IXZbk4aPjQFR6fO0q1hmvH
{
    int32_T __dummy;
};
#endif /* c3_struct_c3_tag_IXZbk4aPjQFR6fO0q1hmvH */
#ifndef c3_typedef_c3_rtString_1
#define c3_typedef_c3_rtString_1
typedef struct c3_tag_IXZbk4aPjQFR6fO0q1hmvH c3_rtString_1;
#endif /* c3_typedef_c3_rtString_1 */
#ifndef c3_struct_c3_tag_s7x1Wx46WFovLWMRmX2SU0C
#define c3_struct_c3_tag_s7x1Wx46WFovLWMRmX2SU0C
struct c3_tag_s7x1Wx46WFovLWMRmX2SU0C
{
    char_T struct_tm[7];
    char_T struct_timespec[13];
};
#endif /* c3_struct_c3_tag_s7x1Wx46WFovLWMRmX2SU0C */
#ifndef c3_typedef_c3_s7x1Wx46WFovLWMRmX2SU0C
#define c3_typedef_c3_s7x1Wx46WFovLWMRmX2SU0C
typedef struct c3_tag_s7x1Wx46WFovLWMRmX2SU0C c3_s7x1Wx46WFovLWMRmX2SU0C;
#endif /* c3_typedef_c3_s7x1Wx46WFovLWMRmX2SU0C */
#ifndef c3_struct_c3_tag_f0FJd1n2NNMv9YVafSuVeE
#define c3_struct_c3_tag_f0FJd1n2NNMv9YVafSuVeE
struct c3_tag_f0FJd1n2NNMv9YVafSuVeE
{
    char_T Value[7];
};
#endif /* c3_struct_c3_tag_f0FJd1n2NNMv9YVafSuVeE */
#ifndef c3_typedef_c3_s_f0FJd1n2NNMv9YVafSuVeE
#define c3_typedef_c3_s_f0FJd1n2NNMv9YVafSuVeE
typedef struct c3_tag_f0FJd1n2NNMv9YVafSuVeE c3_s_f0FJd1n2NNMv9YVafSuVeE;
#endif /* c3_typedef_c3_s_f0FJd1n2NNMv9YVafSuVeE */
#ifndef c3_struct_c3_tag_n3SDPft8LycMqfcEsfJVBB
#define c3_struct_c3_tag_n3SDPft8LycMqfcEsfJVBB
struct c3_tag_n3SDPft8LycMqfcEsfJVBB
{
    char_T f1[6];
    char_T f2[6];
    char_T f3[7];
    char_T f4[7];
    char_T f5[6];
    char_T f6[7];
};
#endif /* c3_struct_c3_tag_n3SDPft8LycMqfcEsfJVBB */
#ifndef c3_typedef_c3_cell_0
#define c3_typedef_c3_cell_0
typedef struct c3_tag_n3SDPft8LycMqfcEsfJVBB c3_cell_0;
#endif /* c3_typedef_c3_cell_0 */
#ifndef c3_struct_c3_tag_KzDXXxjSf4pssDuUTLtuSD
#define c3_struct_c3_tag_KzDXXxjSf4pssDuUTLtuSD
struct c3_tag_KzDXXxjSf4pssDuUTLtuSD
{
    char_T Value[48];
};
#endif /* c3_struct_c3_tag_KzDXXxjSf4pssDuUTLtuSD */
#ifndef c3_typedef_c3_s_KzDXXxjSf4pssDuUTLtuSD
#define c3_typedef_c3_s_KzDXXxjSf4pssDuUTLtuSD
typedef struct c3_tag_KzDXXxjSf4pssDuUTLtuSD c3_s_KzDXXxjSf4pssDuUTLtuSD;
#endif /* c3_typedef_c3_s_KzDXXxjSf4pssDuUTLtuSD */
#ifndef c3_struct_c3_tag_wvzWMLKjXp7EJVnnMvwbTC
#define c3_struct_c3_tag_wvzWMLKjXp7EJVnnMvwbTC
struct c3_tag_wvzWMLKjXp7EJVnnMvwbTC
{
    c3_cell_0 _data;
};
#endif /* c3_struct_c3_tag_wvzWMLKjXp7EJVnnMvwbTC */
#ifndef c3_typedef_c3_s_wvzWMLKjXp7EJVnnMvwbTC
#define c3_typedef_c3_s_wvzWMLKjXp7EJVnnMvwbTC
typedef struct c3_tag_wvzWMLKjXp7EJVnnMvwbTC c3_s_wvzWMLKjXp7EJVnnMvwbTC;
#endif /* c3_typedef_c3_s_wvzWMLKjXp7EJVnnMvwbTC */

/* Named Constants */
#define CALL_EVENT (-1)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void initialize_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    sim_mode_is_external(S);
    ptr_gvar_instance->c3_waypoints_not_empty = false;
    ptr_gvar_instance->c3_seed_not_empty = false;
    ptr_gvar_instance->c3_method_not_empty = false;
    ptr_gvar_instance->c3_state_not_empty = false;
    ptr_gvar_instance->c3_b_state_not_empty = false;
    ptr_gvar_instance->c3_c_state_not_empty = false;
    ptr_gvar_instance->c3_b_method_not_empty = false;
    ptr_gvar_instance->c3_d_state_not_empty = false;
    sf_get_time(S);
}

void initialize_params_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

void mdl_start_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)ptr_gvar_instance;
    sim_mode_is_external(S);
}

void mdl_terminate_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

void mdl_setup_runtime_resources_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    sfSetAnimationVectors(S, &ptr_gvar_instance->c3_JITStateAnimation[0], &ptr_gvar_instance->c3_JITTransitionAnimation[0]);
}

void mdl_cleanup_runtime_resources_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

void enable_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)ptr_gvar_instance;
    sf_get_time(S);
}

void disable_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)ptr_gvar_instance;
    sf_get_time(S);
}

void sf_gateway_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    static uint32_T c3_c[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U, 1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U, 2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U, 951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U, 1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U, 1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U, 3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U, 1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U, 761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U, 3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U, 699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U, 1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U, 4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U, 3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U, 4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U, 170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U, 1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U, 1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U, 1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U, 3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U, 501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U, 1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U, 2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U, 2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U, 4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U, 2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U, 2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U, 3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U, 733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U, 1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U, 627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U, 3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U, 3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U, 3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U, 354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U, 1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U, 1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U, 3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U, 2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U, 2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U, 548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U, 1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U, 3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U, 2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U, 191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U, 3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U, 396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U, 3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U, 2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U, 3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U, 1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U, 1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U, 976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U, 2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U, 766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U, 3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U, 1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U, 607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U, 3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U, 1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U, 2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U, 4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U, 551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U, 3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U, 1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U, 552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U, 181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U, 3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U, 4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U, 478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U, 3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U, 786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U, 2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U, 4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U, 4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U, 3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U, 3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U, 370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U, 3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U, 1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U, 2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U, 2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U, 4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U, 1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U, 506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U, 138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U, 3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U, 1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U, 2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U, 643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U, 1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U, 4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U, 4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U, 1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U, 3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U, 3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U, 3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U, 190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U, 2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U, 453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U, 4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U, 2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U, 363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U, 1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U, 2844269403U, 79981964U, 624U };
    static char_T c3_b[22] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'n', 'g', ':', 'b', 'a', 'd', 'S', 'e', 't', 't', 'i', 'n', 'g', 's' };
    time_t c3_b_eTime;
    time_t c3_eTime;
    emlrtStack c3_b_st;
    emlrtStack c3_c_st;
    emlrtStack c3_st = { NULL,     /* site */
NULL,     /* tls */
NULL    /* prev */
 };
    const mxArray *c3_b_y = NULL;
    const mxArray *c3_y = NULL;
    real_T c3_s;
    real_T c3_s0;
    int32_T c3_mti;
    int32_T exitg1;
    uint32_T c3_r;
    c3_st.tls = ptr_gvar_instance->c3_fEmlrtCtx;
    c3_b_st.prev = &c3_st;
    c3_b_st.tls = c3_st.tls;
    c3_c_st.prev = &c3_b_st;
    c3_c_st.tls = c3_b_st.tls;
    sf_get_time(S);
    ptr_gvar_instance->c3_JITTransitionAnimation[0] = 0U;
    if (!ptr_gvar_instance->c3_waypoints_not_empty) {
        if (*ptr_gvar_instance->c3_b_seed >= 0.0) {
            c3_b_st.site = &ptr_gvar_instance->c3_emlrtRSI;
            if (!ptr_gvar_instance->c3_seed_not_empty) {
                ptr_gvar_instance->c3_seed = 0U;
                ptr_gvar_instance->c3_seed_not_empty = true;
            }
            if (!ptr_gvar_instance->c3_method_not_empty) {
                ptr_gvar_instance->c3_method = 7U;
                ptr_gvar_instance->c3_method_not_empty = true;
            }
            c3_s0 = *ptr_gvar_instance->c3_b_seed;
            if (c3_s0 < 4.294967296E+9) {
                if (c3_s0 >= 0.0) {
                    c3_r = (uint32_T)c3_s0;
                } else {
                    c3_r = 0U;
                }
            } else if (c3_s0 >= 4.294967296E+9) {
                c3_r = MAX_uint32_T;
            } else {
                c3_r = 0U;
            }
            ptr_gvar_instance->c3_seed = c3_r;
            if (ptr_gvar_instance->c3_method == 7U) {
                if (ptr_gvar_instance->c3_seed == 0U) {
                    ptr_gvar_instance->c3_seed = 5489U;
                }
                if (!ptr_gvar_instance->c3_state_not_empty) {
                    for (c3_mti = 0; c3_mti < 625; c3_mti++) {
                        ptr_gvar_instance->c3_state[c3_mti] = c3_c[c3_mti];
                    }
                    ptr_gvar_instance->c3_state_not_empty = true;
                }
                c3_r = ptr_gvar_instance->c3_seed;
                ptr_gvar_instance->c3_state[0] = ptr_gvar_instance->c3_seed;
                for (c3_mti = 0; c3_mti < 623; c3_mti++) {
                    c3_r = ((c3_r ^ c3_r >> 30U) * 1812433253U + (uint32_T)c3_mti) + 1U;
                    ptr_gvar_instance->c3_state[c3_mti + 1] = c3_r;
                }
                ptr_gvar_instance->c3_state[624] = 624U;
            } else if (ptr_gvar_instance->c3_method == 5U) {
                if (!ptr_gvar_instance->c3_b_state_not_empty) {
                    for (c3_mti = 0; c3_mti < 2; c3_mti++) {
                        ptr_gvar_instance->c3_b_state[c3_mti] = 158852560U * (uint32_T)c3_mti + 362436069U;
                    }
                    ptr_gvar_instance->c3_b_state_not_empty = true;
                }
                ptr_gvar_instance->c3_b_state[0] = 362436069U;
                ptr_gvar_instance->c3_b_state[1] = ptr_gvar_instance->c3_seed;
                if (ptr_gvar_instance->c3_b_state[1] == 0U) {
                    ptr_gvar_instance->c3_b_state[1] = 521288629U;
                }
            } else {
                c3_eml_rand_mcg16807_stateful(S, ptr_gvar_instance, ptr_gvar_instance->c3_seed);
            }
            if (!ptr_gvar_instance->c3_b_method_not_empty) {
                ptr_gvar_instance->c3_b_method = 0U;
                ptr_gvar_instance->c3_b_method_not_empty = true;
                for (c3_mti = 0; c3_mti < 2; c3_mti++) {
                    ptr_gvar_instance->c3_d_state[c3_mti] = 158852560U * (uint32_T)c3_mti + 362436069U;
                }
                ptr_gvar_instance->c3_d_state_not_empty = true;
            }
            ptr_gvar_instance->c3_b_method = 0U;
        } else {
            c3_b_st.site = &ptr_gvar_instance->c3_b_emlrtRSI;
            c3_c_st.site = &ptr_gvar_instance->c3_j_emlrtRSI;
            c3_rand(S, ptr_gvar_instance, &c3_c_st);
            c3_b_st.site = &ptr_gvar_instance->c3_c_emlrtRSI;
            if (!ptr_gvar_instance->c3_seed_not_empty) {
                ptr_gvar_instance->c3_seed = 0U;
                ptr_gvar_instance->c3_seed_not_empty = true;
            }
            if (!ptr_gvar_instance->c3_method_not_empty) {
                ptr_gvar_instance->c3_method = 7U;
                ptr_gvar_instance->c3_method_not_empty = true;
            }
            c3_s0 = c3_now(S, ptr_gvar_instance) * 8.64E+6;
            c3_s0 = muDoubleScalarFloor(c3_s0);
            if (muDoubleScalarIsNaN(c3_s0) || muDoubleScalarIsInf(c3_s0)) {
                c3_s = rtNaN;
            } else {
                c3_s = muDoubleScalarRem(c3_s0, 2.147483647E+9);
                if (c3_s == 0.0) {
                    c3_s = 0.0;
                } else if (c3_s < 0.0) {
                    c3_s += 2.147483647E+9;
                }
            }
            c3_eTime = time(NULL);
            do {
                exitg1 = 0;
                c3_b_eTime = time(NULL);
                if ((int32_T)c3_b_eTime <= (int32_T)c3_eTime + 1) {
                    c3_s0 = c3_now(S, ptr_gvar_instance) * 8.64E+6;
                    c3_s0 = muDoubleScalarFloor(c3_s0);
                    if (muDoubleScalarIsNaN(c3_s0) || muDoubleScalarIsInf(c3_s0)) {
                        c3_s0 = rtNaN;
                    } else {
                        c3_s0 = muDoubleScalarRem(c3_s0, 2.147483647E+9);
                        if (c3_s0 == 0.0) {
                            c3_s0 = 0.0;
                        } else if (c3_s0 < 0.0) {
                            c3_s0 += 2.147483647E+9;
                        }
                    }
                    if (c3_s != c3_s0) {
                        exitg1 = 1;
                    }
                } else {
                    exitg1 = 1;
                }
            } while (exitg1 == 0);
            ptr_gvar_instance->c3_seed = (uint32_T)c3_s;
            if (!ptr_gvar_instance->c3_method_not_empty) {
                ptr_gvar_instance->c3_method = 7U;
                ptr_gvar_instance->c3_method_not_empty = true;
            }
            if (ptr_gvar_instance->c3_method == 7U) {
                if (!ptr_gvar_instance->c3_state_not_empty) {
                    for (c3_mti = 0; c3_mti < 625; c3_mti++) {
                        ptr_gvar_instance->c3_state[c3_mti] = c3_c[c3_mti];
                    }
                    ptr_gvar_instance->c3_state_not_empty = true;
                }
                c3_r = ptr_gvar_instance->c3_seed;
                ptr_gvar_instance->c3_state[0] = ptr_gvar_instance->c3_seed;
                for (c3_mti = 0; c3_mti < 623; c3_mti++) {
                    c3_r = ((c3_r ^ c3_r >> 30U) * 1812433253U + (uint32_T)c3_mti) + 1U;
                    ptr_gvar_instance->c3_state[c3_mti + 1] = c3_r;
                }
                ptr_gvar_instance->c3_state[624] = 624U;
            } else if (ptr_gvar_instance->c3_method == 5U) {
                if (!ptr_gvar_instance->c3_b_state_not_empty) {
                    for (c3_mti = 0; c3_mti < 2; c3_mti++) {
                        ptr_gvar_instance->c3_b_state[c3_mti] = 158852560U * (uint32_T)c3_mti + 362436069U;
                    }
                    ptr_gvar_instance->c3_b_state_not_empty = true;
                }
                ptr_gvar_instance->c3_b_state[0] = 362436069U;
                ptr_gvar_instance->c3_b_state[1] = ptr_gvar_instance->c3_seed;
                if (ptr_gvar_instance->c3_b_state[1] == 0U) {
                    ptr_gvar_instance->c3_b_state[1] = 521288629U;
                }
            } else if (ptr_gvar_instance->c3_method == 4U) {
                c3_eml_rand_mcg16807_stateful(S, ptr_gvar_instance, ptr_gvar_instance->c3_seed);
            } else {
                c3_y = NULL;
                sf_mex_assign(&c3_y, sf_mex_create("y", c3_b, 10, 0U, 1, 0U, 2, 1, 22), false);
                c3_b_y = NULL;
                sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_b, 10, 0U, 1, 0U, 2, 1, 22), false);
                sf_mex_call(&c3_b_st, &ptr_gvar_instance->c3_b_emlrtMCI, "error", 0U, 2U, 14, c3_y, 14, sf_mex_call(&c3_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call(&c3_b_st, NULL, "message", 1U, 1U, 14, c3_b_y)));
            }
        }
        c3_b_st.site = &ptr_gvar_instance->c3_d_emlrtRSI;
        c3_c_st.site = &ptr_gvar_instance->c3_j_emlrtRSI;
        c3_b_rand(S, ptr_gvar_instance, &c3_c_st, ptr_gvar_instance->c3_waypoints);
        for (c3_mti = 0; c3_mti < 20; c3_mti++) {
            ptr_gvar_instance->c3_waypoints[c3_mti] = muDoubleScalarFloor(ptr_gvar_instance->c3_waypoints[c3_mti] * 201.0) - 100.0;
        }
        ptr_gvar_instance->c3_waypoints_not_empty = true;
    }
    for (c3_mti = 0; c3_mti < 20; c3_mti++) {
        (*ptr_gvar_instance->c3_waypoint_matrix)[c3_mti] = ptr_gvar_instance->c3_waypoints[c3_mti];
    }
}

void ext_mode_exec_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

const mxArray *get_sim_state_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    const mxArray *c3_b_y = NULL;
    const mxArray *c3_c_y = NULL;
    const mxArray *c3_d_y = NULL;
    const mxArray *c3_e_y = NULL;
    const mxArray *c3_f_y = NULL;
    const mxArray *c3_g_y = NULL;
    const mxArray *c3_h_y = NULL;
    const mxArray *c3_i_y = NULL;
    const mxArray *c3_j_y = NULL;
    const mxArray *c3_st;
    const mxArray *c3_y = NULL;
    (void)S;
    c3_st = NULL;
    c3_y = NULL;
    sf_mex_assign(&c3_y, sf_mex_createcellmatrix(9, 1), false);
    c3_b_y = NULL;
    sf_mex_assign(&c3_b_y, sf_mex_create("y", *ptr_gvar_instance->c3_waypoint_matrix, 0, 0U, 1, 0U, 2, 10, 2), false);
    sf_mex_setcell(c3_y, 0, c3_b_y);
    c3_c_y = NULL;
    if (!ptr_gvar_instance->c3_method_not_empty) {
        sf_mex_assign(&c3_c_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0), false);
    } else {
        sf_mex_assign(&c3_c_y, sf_mex_create("y", &ptr_gvar_instance->c3_method, 7, 0U, 0, 0U, 0), false);
    }
    sf_mex_setcell(c3_y, 1, c3_c_y);
    c3_d_y = NULL;
    if (!ptr_gvar_instance->c3_method_not_empty) {
        sf_mex_assign(&c3_d_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0), false);
    } else {
        sf_mex_assign(&c3_d_y, sf_mex_create("y", &ptr_gvar_instance->c3_b_method, 7, 0U, 0, 0U, 0), false);
    }
    sf_mex_setcell(c3_y, 2, c3_d_y);
    c3_e_y = NULL;
    if (!ptr_gvar_instance->c3_method_not_empty) {
        sf_mex_assign(&c3_e_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0), false);
    } else {
        sf_mex_assign(&c3_e_y, sf_mex_create("y", &ptr_gvar_instance->c3_seed, 7, 0U, 0, 0U, 0), false);
    }
    sf_mex_setcell(c3_y, 3, c3_e_y);
    c3_f_y = NULL;
    if (!ptr_gvar_instance->c3_method_not_empty) {
        sf_mex_assign(&c3_f_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0), false);
    } else {
        sf_mex_assign(&c3_f_y, sf_mex_create("y", &ptr_gvar_instance->c3_c_state, 7, 0U, 0, 0U, 0), false);
    }
    sf_mex_setcell(c3_y, 4, c3_f_y);
    c3_g_y = NULL;
    if (!ptr_gvar_instance->c3_state_not_empty) {
        sf_mex_assign(&c3_g_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0), false);
    } else {
        sf_mex_assign(&c3_g_y, sf_mex_create("y", ptr_gvar_instance->c3_state, 7, 0U, 1, 0U, 1, 625), false);
    }
    sf_mex_setcell(c3_y, 5, c3_g_y);
    c3_h_y = NULL;
    if (!ptr_gvar_instance->c3_b_state_not_empty) {
        sf_mex_assign(&c3_h_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0), false);
    } else {
        sf_mex_assign(&c3_h_y, sf_mex_create("y", ptr_gvar_instance->c3_b_state, 7, 0U, 1, 0U, 1, 2), false);
    }
    sf_mex_setcell(c3_y, 6, c3_h_y);
    c3_i_y = NULL;
    if (!ptr_gvar_instance->c3_b_state_not_empty) {
        sf_mex_assign(&c3_i_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0), false);
    } else {
        sf_mex_assign(&c3_i_y, sf_mex_create("y", ptr_gvar_instance->c3_d_state, 7, 0U, 1, 0U, 1, 2), false);
    }
    sf_mex_setcell(c3_y, 7, c3_i_y);
    c3_j_y = NULL;
    if (!ptr_gvar_instance->c3_waypoints_not_empty) {
        sf_mex_assign(&c3_j_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0), false);
    } else {
        sf_mex_assign(&c3_j_y, sf_mex_create("y", ptr_gvar_instance->c3_waypoints, 0, 0U, 1, 0U, 2, 10, 2), false);
    }
    sf_mex_setcell(c3_y, 8, c3_j_y);
    sf_mex_assign(&c3_st, c3_y, false);
    return c3_st;
}

void set_sim_state_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_st)
{
    const mxArray *c3_u;
    real_T c3_b[20];
    int32_T c3_c;
    c3_u = sf_mex_dup(c3_st);
    c3_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(sf_mex_getcell(c3_u, 0)), "waypoint_matrix", c3_b);
    for (c3_c = 0; c3_c < 20; c3_c++) {
        (*ptr_gvar_instance->c3_waypoint_matrix)[c3_c] = c3_b[c3_c];
    }
    ptr_gvar_instance->c3_method = c3_c_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(sf_mex_getcell(c3_u, 1)), "method", &ptr_gvar_instance->c3_method_not_empty);
    ptr_gvar_instance->c3_b_method = c3_c_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(sf_mex_getcell(c3_u, 2)), "method", &ptr_gvar_instance->c3_b_method_not_empty);
    ptr_gvar_instance->c3_seed = c3_c_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(sf_mex_getcell(c3_u, 3)), "seed", &ptr_gvar_instance->c3_seed_not_empty);
    ptr_gvar_instance->c3_c_state = c3_c_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(sf_mex_getcell(c3_u, 4)), "state", &ptr_gvar_instance->c3_c_state_not_empty);
    c3_e_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(sf_mex_getcell(c3_u, 5)), "state", &ptr_gvar_instance->c3_state_not_empty, ptr_gvar_instance->c3_state);
    c3_g_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(sf_mex_getcell(c3_u, 6)), "state", &ptr_gvar_instance->c3_b_state_not_empty, ptr_gvar_instance->c3_b_state);
    c3_g_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(sf_mex_getcell(c3_u, 7)), "state", &ptr_gvar_instance->c3_d_state_not_empty, ptr_gvar_instance->c3_d_state);
    c3_i_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(sf_mex_getcell(c3_u, 8)), "waypoints", &ptr_gvar_instance->c3_waypoints_not_empty, ptr_gvar_instance->c3_waypoints);
    sf_mex_destroy(&c3_u);
    sf_mex_destroy(&c3_st);
}

void c3_eml_rand_mcg16807_stateful(SimStruct *S, gvar_instance *ptr_gvar_instance, uint32_T c3_varargin_1)
{
    uint32_T c3_r;
    uint32_T c3_t;
    (void)S;
    if (!ptr_gvar_instance->c3_c_state_not_empty) {
        ptr_gvar_instance->c3_c_state = 1144108930U;
        ptr_gvar_instance->c3_c_state_not_empty = true;
    }
    c3_r = c3_varargin_1 >> 16U;
    c3_t = c3_varargin_1 & 32768U;
    ptr_gvar_instance->c3_c_state = c3_r << 16U;
    ptr_gvar_instance->c3_c_state = c3_varargin_1 - ptr_gvar_instance->c3_c_state;
    ptr_gvar_instance->c3_c_state -= c3_t;
    ptr_gvar_instance->c3_c_state <<= 16U;
    ptr_gvar_instance->c3_c_state += c3_t;
    ptr_gvar_instance->c3_c_state += c3_r;
    if (ptr_gvar_instance->c3_c_state < 1U) {
        ptr_gvar_instance->c3_c_state = 1144108930U;
    } else if (ptr_gvar_instance->c3_c_state > 2147483646U) {
        ptr_gvar_instance->c3_c_state = 2147483646U;
    }
}

real_T c3_rand(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c3_sp)
{
    static uint32_T c3_c[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U, 1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U, 2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U, 951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U, 1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U, 1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U, 3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U, 1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U, 761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U, 3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U, 699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U, 1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U, 4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U, 3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U, 4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U, 170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U, 1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U, 1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U, 1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U, 3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U, 501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U, 1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U, 2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U, 2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U, 4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U, 2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U, 2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U, 3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U, 733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U, 1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U, 627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U, 3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U, 3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U, 3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U, 354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U, 1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U, 1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U, 3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U, 2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U, 2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U, 548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U, 1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U, 3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U, 2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U, 191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U, 3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U, 396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U, 3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U, 2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U, 3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U, 1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U, 1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U, 976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U, 2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U, 766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U, 3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U, 1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U, 607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U, 3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U, 1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U, 2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U, 4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U, 551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U, 3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U, 1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U, 552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U, 181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U, 3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U, 4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U, 478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U, 3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U, 786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U, 2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U, 4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U, 4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U, 3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U, 3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U, 370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U, 3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U, 1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U, 2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U, 2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U, 4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U, 1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U, 506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U, 138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U, 3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U, 1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U, 2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U, 643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U, 1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U, 4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U, 4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U, 1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U, 3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U, 3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U, 3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U, 190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U, 2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U, 453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U, 4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U, 2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U, 363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U, 1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U, 2844269403U, 79981964U, 624U };
    emlrtStack c3_b_st;
    emlrtStack c3_c_st;
    emlrtStack c3_st;
    real_T c3_r;
    int32_T c3_d;
    uint32_T c3_f_state[2];
    uint32_T c3_b;
    uint32_T c3_e_state;
    c3_st.prev = c3_sp;
    c3_st.tls = c3_sp->tls;
    c3_b_st.prev = &c3_st;
    c3_b_st.tls = c3_st.tls;
    c3_c_st.prev = &c3_b_st;
    c3_c_st.tls = c3_b_st.tls;
    c3_st.site = &ptr_gvar_instance->c3_k_emlrtRSI;
    if (!ptr_gvar_instance->c3_method_not_empty) {
        ptr_gvar_instance->c3_method = 7U;
        ptr_gvar_instance->c3_method_not_empty = true;
    }
    if (ptr_gvar_instance->c3_method == 4U) {
        c3_b_st.site = &ptr_gvar_instance->c3_l_emlrtRSI;
        if (!ptr_gvar_instance->c3_c_state_not_empty) {
            ptr_gvar_instance->c3_c_state = 1144108930U;
            ptr_gvar_instance->c3_c_state_not_empty = true;
        }
        c3_e_state = ptr_gvar_instance->c3_c_state;
        c3_r = c3_eml_rand_mcg16807(S, ptr_gvar_instance, &c3_e_state);
        ptr_gvar_instance->c3_c_state = c3_e_state;
    } else if (ptr_gvar_instance->c3_method == 5U) {
        c3_b_st.site = &ptr_gvar_instance->c3_m_emlrtRSI;
        if (!ptr_gvar_instance->c3_b_state_not_empty) {
            for (c3_d = 0; c3_d < 2; c3_d++) {
                ptr_gvar_instance->c3_b_state[c3_d] = 158852560U * (uint32_T)c3_d + 362436069U;
            }
            ptr_gvar_instance->c3_b_state_not_empty = true;
        }
        c3_e_state = 69069U * ptr_gvar_instance->c3_b_state[0] + 1234567U;
        c3_b = ptr_gvar_instance->c3_b_state[1] ^ ptr_gvar_instance->c3_b_state[1] << 13;
        c3_b ^= c3_b >> 17;
        c3_b ^= c3_b << 5;
        c3_f_state[0] = c3_e_state;
        c3_f_state[1] = c3_b;
        c3_r = (real_T)(c3_e_state + c3_b) * 2.328306436538696E-10;
        for (c3_d = 0; c3_d < 2; c3_d++) {
            ptr_gvar_instance->c3_b_state[c3_d] = c3_f_state[c3_d];
        }
    } else {
        c3_b_st.site = &ptr_gvar_instance->c3_n_emlrtRSI;
        if (!ptr_gvar_instance->c3_state_not_empty) {
            for (c3_d = 0; c3_d < 625; c3_d++) {
                ptr_gvar_instance->c3_state[c3_d] = c3_c[c3_d];
            }
            ptr_gvar_instance->c3_state_not_empty = true;
        }
        c3_c_st.site = &ptr_gvar_instance->c3_o_emlrtRSI;
        c3_r = c3_eml_rand_mt19937ar(S, ptr_gvar_instance, &c3_c_st, ptr_gvar_instance->c3_state);
    }
    return c3_r;
}

real_T c3_now(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    time_t c3_rawtime;
    struct tm c3_expl_temp;
    real_T c3_dDateNum;
    int32_T c3_r;
    int16_T c3_cDaysMonthWise[12];
    boolean_T guard1;
    (void)S;
    (void)ptr_gvar_instance;
    c3_cDaysMonthWise[0] = 0;
    c3_cDaysMonthWise[1] = 31;
    c3_cDaysMonthWise[2] = 59;
    c3_cDaysMonthWise[3] = 90;
    c3_cDaysMonthWise[4] = 120;
    c3_cDaysMonthWise[5] = 151;
    c3_cDaysMonthWise[6] = 181;
    c3_cDaysMonthWise[7] = 212;
    c3_cDaysMonthWise[8] = 243;
    c3_cDaysMonthWise[9] = 273;
    c3_cDaysMonthWise[10] = 304;
    c3_cDaysMonthWise[11] = 334;
    time(&c3_rawtime);
    c3_expl_temp = *localtime(&c3_rawtime);
    c3_dDateNum = ((((365.0 * (real_T)(c3_expl_temp.tm_year + 1900) + muDoubleScalarCeil((real_T)(c3_expl_temp.tm_year + 1900) / 4.0)) - muDoubleScalarCeil((real_T)(c3_expl_temp.tm_year + 1900) / 100.0)) + muDoubleScalarCeil((real_T)(c3_expl_temp.tm_year + 1900) / 400.0)) + (real_T)c3_cDaysMonthWise[c3_expl_temp.tm_mon]) + (real_T)c3_expl_temp.tm_mday;
    if (c3_expl_temp.tm_mon + 1 > 2) {
        c3_r = (int32_T)muDoubleScalarRem((real_T)(c3_expl_temp.tm_year + 1900), 4.0);
        if (c3_r == 0) {
            c3_r = 0;
        } else if (c3_r < 0) {
            c3_r += 4;
        }
        guard1 = false;
        if (c3_r == 0) {
            c3_r = (int32_T)muDoubleScalarRem((real_T)(c3_expl_temp.tm_year + 1900), 100.0);
            if (c3_r == 0) {
                c3_r = 0;
            } else if (c3_r < 0) {
                c3_r += 100;
            }
            if (c3_r != 0) {
                c3_dDateNum++;
            } else {
                guard1 = true;
            }
        } else {
            guard1 = true;
        }
        if (guard1) {
            c3_r = (int32_T)muDoubleScalarRem((real_T)(c3_expl_temp.tm_year + 1900), 400.0);
            if (c3_r == 0) {
                c3_r = 0;
            } else if (c3_r < 0) {
                c3_r += 400;
            }
            if (c3_r == 0) {
                c3_dDateNum++;
            }
        }
    }
    return c3_dDateNum + (((real_T)c3_expl_temp.tm_hour * 3600.0 + (real_T)c3_expl_temp.tm_min * 60.0) + (real_T)c3_expl_temp.tm_sec) / 86400.0;
}

void c3_b_rand(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c3_sp, real_T c3_r[20])
{
    static uint32_T c3_c[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U, 1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U, 2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U, 951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U, 1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U, 1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U, 3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U, 1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U, 761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U, 3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U, 699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U, 1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U, 4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U, 3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U, 4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U, 170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U, 1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U, 1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U, 1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U, 3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U, 501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U, 1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U, 2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U, 2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U, 4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U, 2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U, 2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U, 3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U, 733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U, 1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U, 627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U, 3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U, 3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U, 3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U, 354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U, 1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U, 1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U, 3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U, 2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U, 2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U, 548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U, 1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U, 3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U, 2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U, 191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U, 3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U, 396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U, 3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U, 2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U, 3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U, 1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U, 1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U, 976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U, 2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U, 766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U, 3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U, 1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U, 607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U, 3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U, 1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U, 2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U, 4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U, 551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U, 3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U, 1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U, 552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U, 181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U, 3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U, 4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U, 478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U, 3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U, 786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U, 2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U, 4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U, 4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U, 3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U, 3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U, 370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U, 3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U, 1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U, 2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U, 2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U, 4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U, 1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U, 506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U, 138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U, 3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U, 1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U, 2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U, 643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U, 1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U, 4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U, 4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U, 1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U, 3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U, 3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U, 3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U, 190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U, 2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U, 453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U, 4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U, 2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U, 363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U, 1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U, 2844269403U, 79981964U, 624U };
    emlrtStack c3_b_st;
    emlrtStack c3_c_st;
    emlrtStack c3_st;
    int32_T c3_d;
    int32_T c3_k;
    uint32_T c3_f_state[2];
    uint32_T c3_b;
    uint32_T c3_e_state;
    c3_st.prev = c3_sp;
    c3_st.tls = c3_sp->tls;
    c3_b_st.prev = &c3_st;
    c3_b_st.tls = c3_st.tls;
    c3_c_st.prev = &c3_b_st;
    c3_c_st.tls = c3_b_st.tls;
    c3_st.site = &ptr_gvar_instance->c3_k_emlrtRSI;
    if (!ptr_gvar_instance->c3_method_not_empty) {
        ptr_gvar_instance->c3_method = 7U;
        ptr_gvar_instance->c3_method_not_empty = true;
    }
    if (ptr_gvar_instance->c3_method == 4U) {
        c3_b_st.site = &ptr_gvar_instance->c3_l_emlrtRSI;
        if (!ptr_gvar_instance->c3_c_state_not_empty) {
            ptr_gvar_instance->c3_c_state = 1144108930U;
            ptr_gvar_instance->c3_c_state_not_empty = true;
        }
        c3_e_state = ptr_gvar_instance->c3_c_state;
        for (c3_k = 0; c3_k < 20; c3_k++) {
            c3_r[c3_k] = c3_eml_rand_mcg16807(S, ptr_gvar_instance, &c3_e_state);
        }
        ptr_gvar_instance->c3_c_state = c3_e_state;
    } else if (ptr_gvar_instance->c3_method == 5U) {
        c3_b_st.site = &ptr_gvar_instance->c3_m_emlrtRSI;
        if (!ptr_gvar_instance->c3_b_state_not_empty) {
            for (c3_d = 0; c3_d < 2; c3_d++) {
                ptr_gvar_instance->c3_b_state[c3_d] = 158852560U * (uint32_T)c3_d + 362436069U;
            }
            ptr_gvar_instance->c3_b_state_not_empty = true;
        }
        for (c3_k = 0; c3_k < 20; c3_k++) {
            c3_e_state = 69069U * ptr_gvar_instance->c3_b_state[0] + 1234567U;
            c3_b = ptr_gvar_instance->c3_b_state[1] ^ ptr_gvar_instance->c3_b_state[1] << 13;
            c3_b ^= c3_b >> 17;
            c3_b ^= c3_b << 5;
            c3_f_state[0] = c3_e_state;
            c3_f_state[1] = c3_b;
            c3_r[c3_k] = (real_T)(c3_e_state + c3_b) * 2.328306436538696E-10;
            for (c3_d = 0; c3_d < 2; c3_d++) {
                ptr_gvar_instance->c3_b_state[c3_d] = c3_f_state[c3_d];
            }
        }
    } else {
        c3_b_st.site = &ptr_gvar_instance->c3_n_emlrtRSI;
        if (!ptr_gvar_instance->c3_state_not_empty) {
            for (c3_d = 0; c3_d < 625; c3_d++) {
                ptr_gvar_instance->c3_state[c3_d] = c3_c[c3_d];
            }
            ptr_gvar_instance->c3_state_not_empty = true;
        }
        for (c3_k = 0; c3_k < 20; c3_k++) {
            c3_c_st.site = &ptr_gvar_instance->c3_o_emlrtRSI;
            c3_r[c3_k] = c3_eml_rand_mt19937ar(S, ptr_gvar_instance, &c3_c_st, ptr_gvar_instance->c3_state);
        }
    }
}

void c3_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, real_T c3_y[20])
{
    emlrtMsgIdentifier c3_thisId;
    c3_thisId.fIdentifier = (const char_T *)c3_identifier;
    c3_thisId.fParent = NULL;
    c3_thisId.bParentIsCell = false;
    c3_b_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(c3_nullptr), &c3_thisId, c3_y);
    sf_mex_destroy(&c3_nullptr);
}

void c3_b_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[20])
{
    real_T c3_b[20];
    int32_T c3_c;
    (void)S;
    (void)ptr_gvar_instance;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_b, 1, 0, 0U, 1, 0U, 2, 10, 2);
    for (c3_c = 0; c3_c < 20; c3_c++) {
        c3_y[c3_c] = c3_b[c3_c];
    }
    sf_mex_destroy(&c3_u);
}

uint32_T c3_c_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, boolean_T *c3_svPtr)
{
    emlrtMsgIdentifier c3_thisId;
    uint32_T c3_y;
    c3_thisId.fIdentifier = (const char_T *)c3_identifier;
    c3_thisId.fParent = NULL;
    c3_thisId.bParentIsCell = false;
    c3_y = c3_d_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(c3_nullptr), &c3_thisId, c3_svPtr);
    sf_mex_destroy(&c3_nullptr);
    return c3_y;
}

uint32_T c3_d_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T *c3_svPtr)
{
    uint32_T c3_b;
    uint32_T c3_y;
    (void)S;
    (void)ptr_gvar_instance;
    if (mxIsEmpty(c3_u)) {
        *c3_svPtr = false;
    } else {
        *c3_svPtr = true;
        sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b, 1, 7, 0U, 0, 0U, 0);
        c3_y = c3_b;
    }
    sf_mex_destroy(&c3_u);
    return c3_y;
}

void c3_e_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, boolean_T *c3_svPtr, uint32_T c3_y[625])
{
    emlrtMsgIdentifier c3_thisId;
    c3_thisId.fIdentifier = (const char_T *)c3_identifier;
    c3_thisId.fParent = NULL;
    c3_thisId.bParentIsCell = false;
    c3_f_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(c3_nullptr), &c3_thisId, c3_svPtr, c3_y);
    sf_mex_destroy(&c3_nullptr);
}

void c3_f_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T *c3_svPtr, uint32_T c3_y[625])
{
    int32_T c3_c;
    uint32_T c3_b[625];
    (void)S;
    (void)ptr_gvar_instance;
    if (mxIsEmpty(c3_u)) {
        *c3_svPtr = false;
    } else {
        *c3_svPtr = true;
        sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_b, 1, 7, 0U, 1, 0U, 1, 625);
        for (c3_c = 0; c3_c < 625; c3_c++) {
            c3_y[c3_c] = c3_b[c3_c];
        }
    }
    sf_mex_destroy(&c3_u);
}

void c3_g_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, boolean_T *c3_svPtr, uint32_T c3_y[2])
{
    emlrtMsgIdentifier c3_thisId;
    c3_thisId.fIdentifier = (const char_T *)c3_identifier;
    c3_thisId.fParent = NULL;
    c3_thisId.bParentIsCell = false;
    c3_h_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(c3_nullptr), &c3_thisId, c3_svPtr, c3_y);
    sf_mex_destroy(&c3_nullptr);
}

void c3_h_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T *c3_svPtr, uint32_T c3_y[2])
{
    int32_T c3_c;
    uint32_T c3_b[2];
    (void)S;
    (void)ptr_gvar_instance;
    if (mxIsEmpty(c3_u)) {
        *c3_svPtr = false;
    } else {
        *c3_svPtr = true;
        sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_b, 1, 7, 0U, 1, 0U, 1, 2);
        for (c3_c = 0; c3_c < 2; c3_c++) {
            c3_y[c3_c] = c3_b[c3_c];
        }
    }
    sf_mex_destroy(&c3_u);
}

void c3_i_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, boolean_T *c3_svPtr, real_T c3_y[20])
{
    emlrtMsgIdentifier c3_thisId;
    c3_thisId.fIdentifier = (const char_T *)c3_identifier;
    c3_thisId.fParent = NULL;
    c3_thisId.bParentIsCell = false;
    c3_j_emlrt_marshallIn(S, ptr_gvar_instance, sf_mex_dup(c3_nullptr), &c3_thisId, c3_svPtr, c3_y);
    sf_mex_destroy(&c3_nullptr);
}

void c3_j_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T *c3_svPtr, real_T c3_y[20])
{
    real_T c3_b[20];
    int32_T c3_c;
    (void)S;
    (void)ptr_gvar_instance;
    if (mxIsEmpty(c3_u)) {
        *c3_svPtr = false;
    } else {
        *c3_svPtr = true;
        sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_b, 1, 0, 0U, 1, 0U, 2, 10, 2);
        for (c3_c = 0; c3_c < 20; c3_c++) {
            c3_y[c3_c] = c3_b[c3_c];
        }
    }
    sf_mex_destroy(&c3_u);
}

real_T c3_eml_rand_mcg16807(SimStruct *S, gvar_instance *ptr_gvar_instance, uint32_T *c3_e_state)
{
    uint32_T c3_a;
    uint32_T c3_hi;
    (void)S;
    (void)ptr_gvar_instance;
    c3_hi = *c3_e_state / 127773U;
    c3_a = 16807U * (*c3_e_state - c3_hi * 127773U);
    c3_hi *= 2836U;
    if (c3_a < c3_hi) {
        *c3_e_state = ~(c3_hi - c3_a) & 2147483647U;
    } else {
        *c3_e_state = c3_a - c3_hi;
    }
    return (real_T)*c3_e_state * 4.6566128752457969E-10;
}

real_T c3_eml_rand_mt19937ar(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c3_sp, uint32_T c3_e_state[625])
{
    static char_T c3_b[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };
    emlrtStack c3_st;
    const mxArray *c3_b_y = NULL;
    const mxArray *c3_y = NULL;
    int32_T c3_k;
    int32_T c3_kk;
    int32_T exitg1;
    uint32_T c3_u[2];
    uint32_T c3_mti;
    uint32_T c3_u_idx_1;
    boolean_T c3_isvalid;
    boolean_T exitg2;
    (void)S;
    c3_st.prev = c3_sp;
    c3_st.tls = c3_sp->tls;
    c3_st.site = &ptr_gvar_instance->c3_p_emlrtRSI;
    /* <LEGAL>========================= COPYRIGHT NOTICE ============================ */
    /* <LEGAL> This is a uniform (0,1) pseudorandom number generator based on: */
    /* <LEGAL> */
    /* <LEGAL> A C-program for MT19937, with initialization improved 2002/1/26. */
    /* <LEGAL> Coded by Takuji Nishimura and Makoto Matsumoto. */
    /* <LEGAL> */
    /* <LEGAL> Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
    /* <LEGAL> All rights reserved. */
    /* <LEGAL> */
    /* <LEGAL> Redistribution and use in source and binary forms, with or without */
    /* <LEGAL> modification, are permitted provided that the following conditions */
    /* <LEGAL> are met: */
    /* <LEGAL> */
    /* <LEGAL>   1. Redistributions of source code must retain the above copyright */
    /* <LEGAL>      notice, this list of conditions and the following disclaimer. */
    /* <LEGAL> */
    /* <LEGAL>   2. Redistributions in binary form must reproduce the above copyright */
    /* <LEGAL>      notice, this list of conditions and the following disclaimer */
    /* <LEGAL>      in the documentation and/or other materials provided with the */
    /* <LEGAL>      distribution. */
    /* <LEGAL> */
    /* <LEGAL>   3. The names of its contributors may not be used to endorse or */
    /* <LEGAL>      promote products derived from this software without specific */
    /* <LEGAL>      prior written permission. */
    /* <LEGAL> */
    /* <LEGAL> THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
    /* <LEGAL> "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
    /* <LEGAL> LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
    /* <LEGAL> A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
    /* <LEGAL> OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
    /* <LEGAL> SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
    /* <LEGAL> LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
    /* <LEGAL> DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
    /* <LEGAL> THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
    /* <LEGAL> (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
    /* <LEGAL> OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
    /* <LEGAL> */
    /* <LEGAL>=============================   END   ================================= */
    do {
        exitg1 = 0;
        for (c3_k = 0; c3_k < 2; c3_k++) {
            c3_mti = c3_e_state[624] + 1U;
            if (c3_mti >= 625U) {
                for (c3_kk = 0; c3_kk < 227; c3_kk++) {
                    c3_u_idx_1 = (c3_e_state[c3_kk] & 2147483648U) | (c3_e_state[c3_kk + 1] & 2147483647U);
                    if ((c3_u_idx_1 & 1U) == 0U) {
                        c3_u_idx_1 >>= 1U;
                    } else {
                        c3_u_idx_1 = c3_u_idx_1 >> 1U ^ 2567483615U;
                    }
                    c3_e_state[c3_kk] = c3_e_state[c3_kk + 397] ^ c3_u_idx_1;
                }
                for (c3_kk = 0; c3_kk < 396; c3_kk++) {
                    c3_u_idx_1 = (c3_e_state[c3_kk + 227] & 2147483648U) | (c3_e_state[c3_kk + 228] & 2147483647U);
                    if ((c3_u_idx_1 & 1U) == 0U) {
                        c3_u_idx_1 >>= 1U;
                    } else {
                        c3_u_idx_1 = c3_u_idx_1 >> 1U ^ 2567483615U;
                    }
                    c3_e_state[c3_kk + 227] = c3_e_state[c3_kk] ^ c3_u_idx_1;
                }
                c3_u_idx_1 = (c3_e_state[623] & 2147483648U) | (c3_e_state[0] & 2147483647U);
                if ((c3_u_idx_1 & 1U) == 0U) {
                    c3_u_idx_1 >>= 1U;
                } else {
                    c3_u_idx_1 = c3_u_idx_1 >> 1U ^ 2567483615U;
                }
                c3_e_state[623] = c3_e_state[396] ^ c3_u_idx_1;
                c3_mti = 1U;
            }
            c3_u_idx_1 = c3_e_state[(int32_T)c3_mti - 1];
            c3_e_state[624] = c3_mti;
            c3_u_idx_1 ^= c3_u_idx_1 >> 11U;
            c3_u_idx_1 ^= c3_u_idx_1 << 7U & 2636928640U;
            c3_u_idx_1 ^= c3_u_idx_1 << 15U & 4022730752U;
            c3_u[c3_k] = c3_u_idx_1 ^ c3_u_idx_1 >> 18U;
        }
        c3_mti = c3_u[0] >> 5U;
        c3_u_idx_1 = c3_u[1] >> 6U;
        if ((c3_mti == 0U) && (c3_u_idx_1 == 0U)) {
            if ((c3_e_state[624] >= 1U) && (c3_e_state[624] < 625U)) {
                c3_isvalid = true;
            } else {
                c3_isvalid = false;
            }
            if (c3_isvalid) {
                c3_isvalid = false;
                c3_k = 1;
                exitg2 = false;
                while ((!exitg2) && (c3_k < 625)) {
                    if (c3_e_state[c3_k - 1] == 0U) {
                        c3_k++;
                    } else {
                        c3_isvalid = true;
                        exitg2 = true;
                    }
                }
            }
            if (!c3_isvalid) {
                c3_y = NULL;
                sf_mex_assign(&c3_y, sf_mex_create("y", c3_b, 10, 0U, 1, 0U, 2, 1, 37), false);
                c3_b_y = NULL;
                sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_b, 10, 0U, 1, 0U, 2, 1, 37), false);
                sf_mex_call(&c3_st, &ptr_gvar_instance->c3_emlrtMCI, "error", 0U, 2U, 14, c3_y, 14, sf_mex_call(&c3_st, NULL, "getString", 1U, 1U, 14, sf_mex_call(&c3_st, NULL, "message", 1U, 1U, 14, c3_b_y)));
            }
        } else {
            exitg1 = 1;
        }
    } while (exitg1 == 0);
    return 1.1102230246251565E-16 * ((real_T)c3_mti * 6.7108864E+7 + (real_T)c3_u_idx_1);
}

void init_dsm_address_info(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

void init_simulink_io_address(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    ptr_gvar_instance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(S);
    ptr_gvar_instance->c3_b_seed = (real_T *)ssGetInputPortSignal_wrapper(S, 0);
    ptr_gvar_instance->c3_waypoint_matrix = (real_T (*)[20])ssGetOutputPortSignal_wrapper(S, 1);
}

void JIT_release_mem_fcn(gvar_instance *ptr_gvar_instance)
{
    free(ptr_gvar_instance);
}

gvar_instance *JIT_init_mem_fcn(void)
{
    gvar_instance *ptr_gvar_instance;
    ptr_gvar_instance = (gvar_instance *)calloc((size_t)1U, sizeof(gvar_instance));
    ptr_gvar_instance->c3_b_emlrtMCI.lineNo = 141;
    ptr_gvar_instance->c3_b_emlrtMCI.colNo = 13;
    ptr_gvar_instance->c3_b_emlrtMCI.fName = "rng";
    ptr_gvar_instance->c3_b_emlrtMCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_b_emlrtRSI.lineNo = 15;
    ptr_gvar_instance->c3_b_emlrtRSI.fcnName = "Waypoint Matrix  Generator";
    ptr_gvar_instance->c3_b_emlrtRSI.pathName = "#sl_groundvehicleDynamics:5845";
    ptr_gvar_instance->c3_c_emlrtRSI.lineNo = 16;
    ptr_gvar_instance->c3_c_emlrtRSI.fcnName = "Waypoint Matrix  Generator";
    ptr_gvar_instance->c3_c_emlrtRSI.pathName = "#sl_groundvehicleDynamics:5845";
    ptr_gvar_instance->c3_d_emlrtRSI.lineNo = 20;
    ptr_gvar_instance->c3_d_emlrtRSI.fcnName = "Waypoint Matrix  Generator";
    ptr_gvar_instance->c3_d_emlrtRSI.pathName = "#sl_groundvehicleDynamics:5845";
    ptr_gvar_instance->c3_e_emlrtRSI.lineNo = 71;
    ptr_gvar_instance->c3_e_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_e_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_emlrtMCI.lineNo = 125;
    ptr_gvar_instance->c3_emlrtMCI.colNo = 13;
    ptr_gvar_instance->c3_emlrtMCI.fName = "eml_rand_mt19937ar";
    ptr_gvar_instance->c3_emlrtMCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m";
    ptr_gvar_instance->c3_emlrtRSI.lineNo = 13;
    ptr_gvar_instance->c3_emlrtRSI.fcnName = "Waypoint Matrix  Generator";
    ptr_gvar_instance->c3_emlrtRSI.pathName = "#sl_groundvehicleDynamics:5845";
    ptr_gvar_instance->c3_f_emlrtRSI.lineNo = 157;
    ptr_gvar_instance->c3_f_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_f_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_g_emlrtRSI.lineNo = 159;
    ptr_gvar_instance->c3_g_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_g_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_h_emlrtRSI.lineNo = 161;
    ptr_gvar_instance->c3_h_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_h_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_i_emlrtRSI.lineNo = 164;
    ptr_gvar_instance->c3_i_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_i_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_j_emlrtRSI.lineNo = 74;
    ptr_gvar_instance->c3_j_emlrtRSI.fcnName = "randi";
    ptr_gvar_instance->c3_j_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m";
    ptr_gvar_instance->c3_k_emlrtRSI.lineNo = 107;
    ptr_gvar_instance->c3_k_emlrtRSI.fcnName = "rand";
    ptr_gvar_instance->c3_k_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m";
    ptr_gvar_instance->c3_l_emlrtRSI.lineNo = 41;
    ptr_gvar_instance->c3_l_emlrtRSI.fcnName = "eml_rand";
    ptr_gvar_instance->c3_l_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m";
    ptr_gvar_instance->c3_m_emlrtRSI.lineNo = 43;
    ptr_gvar_instance->c3_m_emlrtRSI.fcnName = "eml_rand";
    ptr_gvar_instance->c3_m_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m";
    ptr_gvar_instance->c3_n_emlrtRSI.lineNo = 45;
    ptr_gvar_instance->c3_n_emlrtRSI.fcnName = "eml_rand";
    ptr_gvar_instance->c3_n_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m";
    ptr_gvar_instance->c3_o_emlrtRSI.lineNo = 23;
    ptr_gvar_instance->c3_o_emlrtRSI.fcnName = "eml_rand_mt19937ar_stateful";
    ptr_gvar_instance->c3_o_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m";
    ptr_gvar_instance->c3_p_emlrtRSI.lineNo = 51;
    ptr_gvar_instance->c3_p_emlrtRSI.fcnName = "eml_rand_mt19937ar";
    ptr_gvar_instance->c3_p_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m";
    ptr_gvar_instance->c3_q_emlrtRSI.lineNo = 132;
    ptr_gvar_instance->c3_q_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_q_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_r_emlrtRSI.lineNo = 133;
    ptr_gvar_instance->c3_r_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_r_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_s_emlrtRSI.lineNo = 135;
    ptr_gvar_instance->c3_s_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_s_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_t_emlrtRSI.lineNo = 137;
    ptr_gvar_instance->c3_t_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_t_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_u_emlrtRSI.lineNo = 139;
    ptr_gvar_instance->c3_u_emlrtRSI.fcnName = "rng";
    ptr_gvar_instance->c3_u_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m";
    ptr_gvar_instance->c3_v_emlrtRSI.lineNo = 9;
    ptr_gvar_instance->c3_v_emlrtRSI.fcnName = "shuffleSeed";
    ptr_gvar_instance->c3_v_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\shuffleSeed.m";
    ptr_gvar_instance->c3_w_emlrtRSI.lineNo = 11;
    ptr_gvar_instance->c3_w_emlrtRSI.fcnName = "shuffleSeed";
    ptr_gvar_instance->c3_w_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\shuffleSeed.m";
    ptr_gvar_instance->c3_x_emlrtRSI.lineNo = 13;
    ptr_gvar_instance->c3_x_emlrtRSI.fcnName = "shuffleSeed";
    ptr_gvar_instance->c3_x_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\shuffleSeed.m";
    ptr_gvar_instance->c3_y_emlrtRSI.lineNo = 14;
    ptr_gvar_instance->c3_y_emlrtRSI.fcnName = "shuffleSeed";
    ptr_gvar_instance->c3_y_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\shuffleSeed.m";
    return ptr_gvar_instance;
}


