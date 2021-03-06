#ifndef SAM_UTILITYRATE3_H_
#define SAM_UTILITYRATE3_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// Utilityrate3 Technology Model
	//

	/** 
	 * Create a Utilityrate3 variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_Utilityrate3;

	SAM_EXPORT SAM_Utilityrate3 SAM_Utilityrate3_construct(const char* def, SAM_error* err);

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_Utilityrate3_execute(SAM_Utilityrate3 data, int verbosity, SAM_error* err);

	SAM_EXPORT void SAM_Utilityrate3_destruct(SAM_Utilityrate3 system);


	//
	// Common parameters
	//

	/**
	 * Set analysis_period: Number of years in analysis [years]
	 * options: None
	 * constraints: INTEGER,POSITIVE
	 * required if: *
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_analysis_period_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set load_escalation: Annual load escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_load_escalation_aset(SAM_Utilityrate3 ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set rate_escalation: Annual utility rate escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_rate_escalation_aset(SAM_Utilityrate3 ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set system_use_lifetime_output: Lifetime hourly system outputs [0/1]
	 * options: 0=hourly first year,1=hourly lifetime
	 * constraints: INTEGER,MIN=0,MAX=1
	 * required if: *
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_system_use_lifetime_output_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_annual_min_charge: Annual minimum charge [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_annual_min_charge_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t1_dc: April Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t1_ub: April Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t2_dc: April Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t2_ub: April Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t3_dc: April Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t3_ub: April Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t4_dc: April Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t4_ub: April Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t5_dc: April Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t5_ub: April Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t6_dc: April Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_apr_t6_ub: April Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_apr_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t1_dc: August Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t1_ub: August Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t2_dc: August Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t2_ub: August Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t3_dc: August Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t3_ub: August Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t4_dc: August Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t4_ub: August Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t5_dc: August Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t5_ub: August Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t6_dc: August Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_aug_t6_ub: August Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_aug_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t1_dc: December Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t1_ub: December Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t2_dc: December Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t2_ub: December Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t3_dc: December Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t3_ub: December Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t4_dc: December Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t4_ub: December Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t5_dc: December Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t5_ub: December Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t6_dc: December Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_dec_t6_ub: December Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_dec_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_enable: Enable Demand Charge [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_enable_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t1_dc: February Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t1_ub: February Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t2_dc: February Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t2_ub: February Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t3_dc: February Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t3_ub: February Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t4_dc: February Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t4_ub: February Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t5_dc: February Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t5_ub: February Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t6_dc: February Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_feb_t6_ub: February Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_feb_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t1_dc: January Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t1_ub: January Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t2_dc: January Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t2_ub: January Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t3_dc: January Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t3_ub: January Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t4_dc: January Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t4_ub: January Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t5_dc: January Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t5_ub: January Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t6_dc: January Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jan_t6_ub: January Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jan_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t1_dc: July Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t1_ub: July Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t2_dc: July Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t2_ub: July Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t3_dc: July Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t3_ub: July Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t4_dc: July Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t4_ub: July Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t5_dc: July Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t5_ub: July Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t6_dc: July Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jul_t6_ub: July Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jul_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t1_dc: June Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t1_ub: June Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t2_dc: June Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t2_ub: June Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t3_dc: June Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t3_ub: June Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t4_dc: June Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t4_ub: June Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t5_dc: June Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t5_ub: June Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t6_dc: June Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_jun_t6_ub: June Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_jun_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t1_dc: March Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t1_ub: March Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t2_dc: March Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t2_ub: March Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t3_dc: March Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t3_ub: March Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t4_dc: March Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t4_ub: March Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t5_dc: March Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t5_ub: March Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t6_dc: March Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_mar_t6_ub: March Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_mar_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t1_dc: May Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t1_ub: May Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t2_dc: May Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t2_ub: May Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t3_dc: May Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t3_ub: May Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t4_dc: May Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t4_ub: May Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t5_dc: May Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t5_ub: May Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t6_dc: May Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_may_t6_ub: May Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_may_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t1_dc: November Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t1_ub: November Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t2_dc: November Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t2_ub: November Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t3_dc: November Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t3_ub: November Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t4_dc: November Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t4_ub: November Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t5_dc: November Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t5_ub: November Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t6_dc: November Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_nov_t6_ub: November Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_nov_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t1_dc: October Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t1_ub: October Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t2_dc: October Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t2_ub: October Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t3_dc: October Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t3_ub: October Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t4_dc: October Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t4_ub: October Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t5_dc: October Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t5_ub: October Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t6_dc: October Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_oct_t6_ub: October Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_oct_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t1_dc: Period 10 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t1_ub: Period 10 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t2_dc: Period 10 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t2_ub: Period 10 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t3_dc: Period 10 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t3_ub: Period 10 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t4_dc: Period 10 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t4_ub: Period 10 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t5_dc: Period 10 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t5_ub: Period 10 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t6_dc: Period 10 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p10_t6_ub: Period 10 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p10_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t1_dc: Period 11 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t1_ub: Period 11 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t2_dc: Period 11 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t2_ub: Period 11 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t3_dc: Period 11 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t3_ub: Period 11 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t4_dc: Period 11 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t4_ub: Period 11 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t5_dc: Period 11 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t5_ub: Period 11 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t6_dc: Period 11 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p11_t6_ub: Period 11 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p11_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t1_dc: Period 12 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t1_ub: Period 12 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t2_dc: Period 12 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t2_ub: Period 12 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t3_dc: Period 12 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t3_ub: Period 12 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t4_dc: Period 12 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t4_ub: Period 12 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t5_dc: Period 12 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t5_ub: Period 12 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t6_dc: Period 12 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p12_t6_ub: Period 12 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p12_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t1_dc: Period 1 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t1_ub: Period 1 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t2_dc: Period 1 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t2_ub: Period 1 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t3_dc: Period 1 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t3_ub: Period 1 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t4_dc: Period 1 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t4_ub: Period 1 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t5_dc: Period 1 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t5_ub: Period 1 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t6_dc: Period 1 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p1_t6_ub: Period 1 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p1_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t1_dc: Period 2 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t1_ub: Period 2 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t2_dc: Period 2 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t2_ub: Period 2 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t3_dc: Period 2 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t3_ub: Period 2 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t4_dc: Period 2 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t4_ub: Period 2 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t5_dc: Period 2 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t5_ub: Period 2 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t6_dc: Period 2 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p2_t6_ub: Period 2 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p2_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t1_dc: Period 3 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t1_ub: Period 3 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t2_dc: Period 3 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t2_ub: Period 3 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t3_dc: Period 3 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t3_ub: Period 3 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t4_dc: Period 3 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t4_ub: Period 3 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t5_dc: Period 3 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t5_ub: Period 3 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t6_dc: Period 3 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p3_t6_ub: Period 3 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p3_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t1_dc: Period 4 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t1_ub: Period 4 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t2_dc: Period 4 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t2_ub: Period 4 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t3_dc: Period 4 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t3_ub: Period 4 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t4_dc: Period 4 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t4_ub: Period 4 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t5_dc: Period 4 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t5_ub: Period 4 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t6_dc: Period 4 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p4_t6_ub: Period 4 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p4_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t1_dc: Period 5 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t1_ub: Period 5 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t2_dc: Period 5 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t2_ub: Period 5 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t3_dc: Period 5 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t3_ub: Period 5 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t4_dc: Period 5 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t4_ub: Period 5 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t5_dc: Period 5 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t5_ub: Period 5 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t6_dc: Period 5 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p5_t6_ub: Period 5 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p5_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t1_dc: Period 6 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t1_ub: Period 6 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t2_dc: Period 6 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t2_ub: Period 6 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t3_dc: Period 6 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t3_ub: Period 6 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t4_dc: Period 6 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t4_ub: Period 6 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t5_dc: Period 6 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t5_ub: Period 6 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t6_dc: Period 6 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p6_t6_ub: Period 6 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p6_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t1_dc: Period 7 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t1_ub: Period 7 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t2_dc: Period 7 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t2_ub: Period 7 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t3_dc: Period 7 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t3_ub: Period 7 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t4_dc: Period 7 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t4_ub: Period 7 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t5_dc: Period 7 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t5_ub: Period 7 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t6_dc: Period 7 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p7_t6_ub: Period 7 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p7_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t1_dc: Period 8 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t1_ub: Period 8 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t2_dc: Period 8 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t2_ub: Period 8 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t3_dc: Period 8 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t3_ub: Period 8 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t4_dc: Period 8 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t4_ub: Period 8 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t5_dc: Period 8 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t5_ub: Period 8 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t6_dc: Period 8 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p8_t6_ub: Period 8 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p8_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t1_dc: Period 9 Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t1_ub: Period 9 Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t2_dc: Period 9 Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t2_ub: Period 9 Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t3_dc: Period 9 Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t3_ub: Period 9 Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t4_dc: Period 9 Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t4_ub: Period 9 Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t5_dc: Period 9 Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t5_ub: Period 9 Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t6_dc: Period 9 Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_p9_t6_ub: Period 9 Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_p9_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sched_weekday: Demend Charge Weekday Schedule
	 * options: 12x24
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sched_weekday_mset(SAM_Utilityrate3 ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set ur_dc_sched_weekend: Demend Charge Weekend Schedule
	 * options: 12x24
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sched_weekend_mset(SAM_Utilityrate3 ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set ur_dc_sep_t1_dc: September Tier 1 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t1_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t1_ub: September Tier 1 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t2_dc: September Tier 2 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t2_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t2_ub: September Tier 2 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t3_dc: September Tier 3 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t3_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t3_ub: September Tier 3 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t4_dc: September Tier 4 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t4_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t4_ub: September Tier 4 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t5_dc: September Tier 5 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t5_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t5_ub: September Tier 5 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t6_dc: September Tier 6 Demand Charge [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t6_dc_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_dc_sep_t6_ub: September Tier 6 Peak Demand [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_dc_sep_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_enable: Enable energy charge [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_enable_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t1_br: Period 10 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t1_sr: Period 10 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t1_ub: Period 10 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t2_br: Period 10 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t2_sr: Period 10 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t2_ub: Period 10 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t3_br: Period 10 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t3_sr: Period 10 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t3_ub: Period 10 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t4_br: Period 10 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t4_sr: Period 10 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t4_ub: Period 10 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t5_br: Period 10 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t5_sr: Period 10 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t5_ub: Period 10 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t6_br: Period 10 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t6_sr: Period 10 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p10_t6_ub: Period 10 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p10_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t1_br: Period 11 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t1_sr: Period 11 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t1_ub: Period 11 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t2_br: Period 11 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t2_sr: Period 11 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t2_ub: Period 11 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t3_br: Period 11 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t3_sr: Period 11 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t3_ub: Period 11 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t4_br: Period 11 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t4_sr: Period 11 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t4_ub: Period 11 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t5_br: Period 11 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t5_sr: Period 11 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t5_ub: Period 11 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t6_br: Period 11 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t6_sr: Period 11 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p11_t6_ub: Period 11 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p11_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t1_br: Period 12 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t1_sr: Period 12 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t1_ub: Period 12 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t2_br: Period 12 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t2_sr: Period 12 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t2_ub: Period 12 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t3_br: Period 12 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t3_sr: Period 12 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t3_ub: Period 12 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t4_br: Period 12 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t4_sr: Period 12 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t4_ub: Period 12 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t5_br: Period 12 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t5_sr: Period 12 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t5_ub: Period 12 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t6_br: Period 12 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t6_sr: Period 12 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p12_t6_ub: Period 12 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p12_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t1_br: Period 1 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t1_sr: Period 1 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t1_ub: Period 1 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t2_br: Period 1 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t2_sr: Period 1 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t2_ub: Period 1 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t3_br: Period 1 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t3_sr: Period 1 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t3_ub: Period 1 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t4_br: Period 1 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t4_sr: Period 1 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t4_ub: Period 1 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t5_br: Period 1 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t5_sr: Period 1 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t5_ub: Period 1 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t6_br: Period 1 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t6_sr: Period 1 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p1_t6_ub: Period 1 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p1_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t1_br: Period 2 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t1_sr: Period 2 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t1_ub: Period 2 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t2_br: Period 2 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t2_sr: Period 2 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t2_ub: Period 2 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t3_br: Period 2 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t3_sr: Period 2 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t3_ub: Period 2 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t4_br: Period 2 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t4_sr: Period 2 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t4_ub: Period 2 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t5_br: Period 2 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t5_sr: Period 2 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t5_ub: Period 2 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t6_br: Period 2 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t6_sr: Period 2 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p2_t6_ub: Period 2 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p2_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t1_br: Period 3 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t1_sr: Period 3 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t1_ub: Period 3 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t2_br: Period 3 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t2_sr: Period 3 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t2_ub: Period 3 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t3_br: Period 3 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t3_sr: Period 3 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t3_ub: Period 3 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t4_br: Period 3 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t4_sr: Period 3 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t4_ub: Period 3 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t5_br: Period 3 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t5_sr: Period 3 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t5_ub: Period 3 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t6_br: Period 3 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t6_sr: Period 3 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p3_t6_ub: Period 3 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p3_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t1_br: Period 4 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t1_sr: Period 4 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t1_ub: Period 4 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t2_br: Period 4 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t2_sr: Period 4 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t2_ub: Period 4 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t3_br: Period 4 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t3_sr: Period 4 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t3_ub: Period 4 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t4_br: Period 4 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t4_sr: Period 4 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t4_ub: Period 4 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t5_br: Period 4 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t5_sr: Period 4 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t5_ub: Period 4 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t6_br: Period 4 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t6_sr: Period 4 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p4_t6_ub: Period 4 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p4_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t1_br: Period 5 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t1_sr: Period 5 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t1_ub: Period 5 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t2_br: Period 5 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t2_sr: Period 5 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t2_ub: Period 5 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t3_br: Period 5 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t3_sr: Period 5 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t3_ub: Period 5 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t4_br: Period 5 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t4_sr: Period 5 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t4_ub: Period 5 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t5_br: Period 5 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t5_sr: Period 5 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t5_ub: Period 5 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t6_br: Period 5 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t6_sr: Period 5 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p5_t6_ub: Period 5 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p5_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t1_br: Period 6 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t1_sr: Period 6 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t1_ub: Period 6 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t2_br: Period 6 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t2_sr: Period 6 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t2_ub: Period 6 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t3_br: Period 6 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t3_sr: Period 6 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t3_ub: Period 6 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t4_br: Period 6 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t4_sr: Period 6 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t4_ub: Period 6 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t5_br: Period 6 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t5_sr: Period 6 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t5_ub: Period 6 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t6_br: Period 6 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t6_sr: Period 6 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p6_t6_ub: Period 6 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p6_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t1_br: Period 7 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t1_sr: Period 7 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t1_ub: Period 7 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t2_br: Period 7 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t2_sr: Period 7 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t2_ub: Period 7 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t3_br: Period 7 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t3_sr: Period 7 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t3_ub: Period 7 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t4_br: Period 7 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t4_sr: Period 7 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t4_ub: Period 7 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t5_br: Period 7 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t5_sr: Period 7 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t5_ub: Period 7 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t6_br: Period 7 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t6_sr: Period 7 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p7_t6_ub: Period 7 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p7_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t1_br: Period 8 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t1_sr: Period 8 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t1_ub: Period 8 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t2_br: Period 8 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t2_sr: Period 8 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t2_ub: Period 8 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t3_br: Period 8 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t3_sr: Period 8 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t3_ub: Period 8 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t4_br: Period 8 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t4_sr: Period 8 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t4_ub: Period 8 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t5_br: Period 8 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t5_sr: Period 8 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t5_ub: Period 8 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t6_br: Period 8 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t6_sr: Period 8 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p8_t6_ub: Period 8 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p8_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t1_br: Period 9 Tier 1 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t1_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t1_sr: Period 9 Tier 1 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t1_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t1_ub: Period 9 Tier 1 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t1_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t2_br: Period 9 Tier 2 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t2_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t2_sr: Period 9 Tier 2 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t2_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t2_ub: Period 9 Tier 2 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t2_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t3_br: Period 9 Tier 3 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t3_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t3_sr: Period 9 Tier 3 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t3_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t3_ub: Period 9 Tier 3 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t3_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t4_br: Period 9 Tier 4 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t4_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t4_sr: Period 9 Tier 4 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t4_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t4_ub: Period 9 Tier 4 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t4_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t5_br: Period 9 Tier 5 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t5_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t5_sr: Period 9 Tier 5 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t5_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t5_ub: Period 9 Tier 5 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t5_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t6_br: Period 9 Tier 6 Energy Buy Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t6_br_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t6_sr: Period 9 Tier 6 Energy Sell Rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t6_sr_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_p9_t6_ub: Period 9 Tier 6 Maximum Energy Usage [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_p9_t6_ub_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_ec_sched_weekday: Energy Charge Weekday Schedule
	 * options: 12x24
	 * constraints: None
	 * required if: ur_ec_enable=1
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_sched_weekday_mset(SAM_Utilityrate3 ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set ur_ec_sched_weekend: Energy Charge Weekend Schedule
	 * options: 12x24
	 * constraints: None
	 * required if: ur_ec_enable=1
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_ec_sched_weekend_mset(SAM_Utilityrate3 ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set ur_enable_net_metering: Enable net metering [0/1]
	 * options: Enforce net metering
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_enable_net_metering_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_excess_monthly_energy_or_dollars: Net metering handling of monthly excess [0=Rollover energy,1=Rollover dollars]
	 * options: Net metering monthly excess
	 * constraints: INTEGER
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_excess_monthly_energy_or_dollars_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_flat_buy_rate: Flat rate (buy) [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_flat_buy_rate_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_flat_sell_rate: Flat rate (sell) [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_flat_sell_rate_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_monthly_fixed_charge: Monthly fixed charge [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_monthly_fixed_charge_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_monthly_min_charge: Monthly minimum charge [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_monthly_min_charge_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);

	/**
	 * Set ur_nm_yearend_sell_rate: Year end sell rate [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Utilityrate3_Common_ur_nm_yearend_sell_rate_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);


	//
	// TimeSeries parameters
	//

	/**
	 * Set gen: System power generated [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Utilityrate3_TimeSeries_gen_aset(SAM_Utilityrate3 ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set load: Electricity load (year 1) [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Utilityrate3_TimeSeries_load_aset(SAM_Utilityrate3 ptr, double* arr, int length, SAM_error *err);


	//
	// Financials parameters
	//

	/**
	 * Set inflation_rate: Inflation rate [%]
	 * options: None
	 * constraints: MIN=-99
	 * required if: *
	 */
	SAM_EXPORT void SAM_Utilityrate3_Financials_inflation_rate_nset(SAM_Utilityrate3 ptr, double number, SAM_error *err);


	//
	// AnnualOutput parameters
	//

	/**
	 * Set degradation: Annual energy degradation [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Utilityrate3_AnnualOutput_degradation_aset(SAM_Utilityrate3 ptr, double* arr, int length, SAM_error *err);


	/**
	 * Common Getters
	 */

	SAM_EXPORT double SAM_Utilityrate3_Common_analysis_period_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Common_load_escalation_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Common_rate_escalation_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_system_use_lifetime_output_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_annual_min_charge_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_apr_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_aug_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_dec_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_enable_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_feb_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jan_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jul_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_jun_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_mar_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_may_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_nov_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_oct_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p10_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p11_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p12_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p1_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p2_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p3_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p4_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p5_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p6_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p7_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p8_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_p9_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Common_ur_dc_sched_weekday_mget(SAM_Utilityrate3 ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Common_ur_dc_sched_weekend_mget(SAM_Utilityrate3 ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t1_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t2_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t3_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t4_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t5_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t6_dc_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_dc_sep_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_enable_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p10_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p11_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p12_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p1_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p2_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p3_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p4_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p5_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p6_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p7_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p8_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t1_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t1_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t1_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t2_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t2_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t2_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t3_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t3_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t3_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t4_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t4_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t4_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t5_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t5_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t5_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t6_br_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t6_sr_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_ec_p9_t6_ub_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Common_ur_ec_sched_weekday_mget(SAM_Utilityrate3 ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Common_ur_ec_sched_weekend_mget(SAM_Utilityrate3 ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_enable_net_metering_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_excess_monthly_energy_or_dollars_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_flat_buy_rate_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_flat_sell_rate_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_monthly_fixed_charge_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_monthly_min_charge_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Common_ur_nm_yearend_sell_rate_nget(SAM_Utilityrate3 ptr, SAM_error *err);


	/**
	 * TimeSeries Getters
	 */

	SAM_EXPORT double* SAM_Utilityrate3_TimeSeries_gen_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_TimeSeries_load_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);


	/**
	 * Financials Getters
	 */

	SAM_EXPORT double SAM_Utilityrate3_Financials_inflation_rate_nget(SAM_Utilityrate3 ptr, SAM_error *err);


	/**
	 * AnnualOutput Getters
	 */

	SAM_EXPORT double* SAM_Utilityrate3_AnnualOutput_degradation_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_annual_electric_load_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_annual_energy_value_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_fixed_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_dc_tou_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_apr_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_aug_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_dec_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_feb_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_flat_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jan_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jul_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_jun_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_mar_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_may_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_nov_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_oct_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_ec_sep_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_fixed_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_w_sys_minimum_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_fixed_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_dc_tou_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_apr_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_aug_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_dec_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_feb_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_flat_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jan_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jul_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_jun_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_mar_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_may_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_nov_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_oct_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_ec_sep_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_fixed_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_charge_wo_sys_minimum_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_elec_cost_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Outputs_elec_cost_with_system_year1_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_elec_cost_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Outputs_elec_cost_without_system_year1_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_apr_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_aug_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_dec_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_feb_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jan_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jul_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_jun_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_mar_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_may_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_nov_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_oct_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_w_sys_ec_sep_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_apr_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_aug_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_dec_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_feb_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jan_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jul_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_jun_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_mar_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_may_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_nov_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_oct_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p1_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p10_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p11_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p12_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p2_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p3_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p4_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p5_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p6_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p7_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p8_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_energy_wo_sys_ec_sep_p9_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_lifetime_load_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Outputs_savings_year1_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_w_sys_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_apr_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_aug_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_dec_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_feb_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_jan_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_jul_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_jun_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_mar_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_may_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_nov_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_oct_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_utility_bill_wo_sys_sep_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Utilityrate3_Outputs_year1_electric_load_nget(SAM_Utilityrate3 ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_dc_peak_per_period_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_dc_tou_schedule_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_dc_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_dc_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_e_tofromgrid_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_ec_tou_schedule_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_ec_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_ec_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_load_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_p_system_to_load_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_p_tofromgrid_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_salespurchases_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_hourly_salespurchases_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_cumulative_excess_dollars_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_cumulative_excess_generation_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_dc_fixed_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_dc_fixed_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_dc_tou_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_dc_tou_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_ec_charge_flat_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_ec_charge_flat_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_ec_charge_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_ec_charge_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_electricity_to_grid_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_fixed_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_fixed_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_load_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_minimum_with_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_minimum_without_system_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_utility_bill_w_sys_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Utilityrate3_Outputs_year1_monthly_utility_bill_wo_sys_aget(SAM_Utilityrate3 ptr, int* length, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif