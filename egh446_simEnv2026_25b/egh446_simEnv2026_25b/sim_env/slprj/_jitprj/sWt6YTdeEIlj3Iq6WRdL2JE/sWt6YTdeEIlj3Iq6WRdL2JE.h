#pragma once

#ifdef __cplusplus
#define EXTERN_C_CC extern "C"
#else
#define EXTERN_C_CC
#endif

#if defined _WIN32
#define DLL_EXPORT_CC EXTERN_C_CC __declspec(dllexport)
#elif __GNUC__ >= 4
#define DLL_EXPORT_CC EXTERN_C_CC  __attribute__ ((visibility ("default")))
#else
#define DLL_EXPORT_CC EXTERN_C_CC
#endif


/* Custom Headers */
#include "mwmathutil.h"

/* Type Definitions */
#include <time.h>
#include <time.h>
#ifndef typedef_gvar_instance
#define typedef_gvar_instance
typedef struct
{
    uint8_T c3_JITStateAnimation[1];
    real_T *c3_b_seed;
    real_T (*c3_waypoint_matrix)[20];
    uint8_T c3_JITTransitionAnimation[1];
    emlrtMCInfo c3_b_emlrtMCI;
    emlrtRSInfo c3_b_emlrtRSI;
    uint32_T c3_b_method;
    boolean_T c3_b_method_not_empty;
    uint32_T c3_b_state[2];
    boolean_T c3_b_state_not_empty;
    emlrtRSInfo c3_c_emlrtRSI;
    uint32_T c3_c_state;
    boolean_T c3_c_state_not_empty;
    emlrtRSInfo c3_d_emlrtRSI;
    uint32_T c3_d_state[2];
    boolean_T c3_d_state_not_empty;
    emlrtRSInfo c3_e_emlrtRSI;
    emlrtMCInfo c3_emlrtMCI;
    emlrtRSInfo c3_emlrtRSI;
    void *c3_fEmlrtCtx;
    emlrtRSInfo c3_f_emlrtRSI;
    emlrtRSInfo c3_g_emlrtRSI;
    emlrtRSInfo c3_h_emlrtRSI;
    emlrtRSInfo c3_i_emlrtRSI;
    emlrtRSInfo c3_j_emlrtRSI;
    emlrtRSInfo c3_k_emlrtRSI;
    emlrtRSInfo c3_l_emlrtRSI;
    emlrtRSInfo c3_m_emlrtRSI;
    uint32_T c3_method;
    boolean_T c3_method_not_empty;
    emlrtRSInfo c3_n_emlrtRSI;
    emlrtRSInfo c3_o_emlrtRSI;
    emlrtRSInfo c3_p_emlrtRSI;
    emlrtRSInfo c3_q_emlrtRSI;
    emlrtRSInfo c3_r_emlrtRSI;
    emlrtRSInfo c3_s_emlrtRSI;
    uint32_T c3_seed;
    boolean_T c3_seed_not_empty;
    uint32_T c3_state[625];
    boolean_T c3_state_not_empty;
    emlrtRSInfo c3_t_emlrtRSI;
    emlrtRSInfo c3_u_emlrtRSI;
    emlrtRSInfo c3_v_emlrtRSI;
    emlrtRSInfo c3_w_emlrtRSI;
    real_T c3_waypoints[20];
    boolean_T c3_waypoints_not_empty;
    emlrtRSInfo c3_x_emlrtRSI;
} gvar_instance;
#endif /* typedef_gvar_instance */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
DLL_EXPORT_CC void initialize_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void initialize_params_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void mdl_start_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void mdl_terminate_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void mdl_setup_runtime_resources_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void mdl_cleanup_runtime_resources_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void enable_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void disable_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void sf_gateway_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void ext_mode_exec_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC const mxArray *get_sim_state_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void set_sim_state_c3_sl_groundvehicleDynamics(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_st);
DLL_EXPORT_CC void c3_eml_rand_mcg16807_stateful(SimStruct *S, gvar_instance *ptr_gvar_instance, uint32_T c3_varargin_1);
DLL_EXPORT_CC real_T c3_now(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void c3_rand(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c3_sp, real_T c3_r[20]);
DLL_EXPORT_CC void c3_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, real_T c3_y[20]);
DLL_EXPORT_CC void c3_b_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[20]);
DLL_EXPORT_CC uint32_T c3_c_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, boolean_T *c3_svPtr);
DLL_EXPORT_CC uint32_T c3_d_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T *c3_svPtr);
DLL_EXPORT_CC void c3_e_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, boolean_T *c3_svPtr, uint32_T c3_y[625]);
DLL_EXPORT_CC void c3_f_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T *c3_svPtr, uint32_T c3_y[625]);
DLL_EXPORT_CC void c3_g_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, boolean_T *c3_svPtr, uint32_T c3_y[2]);
DLL_EXPORT_CC void c3_h_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T *c3_svPtr, uint32_T c3_y[2]);
DLL_EXPORT_CC void c3_i_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_nullptr, const char_T *c3_identifier, boolean_T *c3_svPtr, real_T c3_y[20]);
DLL_EXPORT_CC void c3_j_emlrt_marshallIn(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T *c3_svPtr, real_T c3_y[20]);
DLL_EXPORT_CC void init_dsm_address_info(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void init_simulink_io_address(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void JIT_release_mem_fcn(gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC gvar_instance *JIT_init_mem_fcn(void);

/* Function Definitions */

