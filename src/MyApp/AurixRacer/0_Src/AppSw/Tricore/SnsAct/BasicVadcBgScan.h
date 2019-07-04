/**
 * \file BasicVadcBgScan.h
 * \brief  BasicVadcBgScan
 *
 */

#ifndef BASICVADCBGSCAN_H
#define BASICVADCBGSCAN_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include <Vadc/Std/IfxVadc.h>
#include <Vadc/Adc/IfxVadc_Adc.h>
/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/
#define IR_getUsrAdcChn0()	IR_AdcResult[0]
#define IR_getUsrAdcChn1()	IR_AdcResult[1]
#define IR_getUsrAdcChn2()	IR_AdcResult[2]
#define IR_getUsrAdcChn3()	IR_AdcResult[3]
/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*------------------------------Global variables------------------------------*/
/******************************************************************************/
IFX_EXTERN float32 IR_AdcResult[];
IFX_EXTERN float32 IR_Distance[];

	/* Usage: IR_AdcResult[USR_ADC_CHN_15_IDX] */

/******************************************************************************/
/*-------------------------Function Prototypes--------------------------------*/
/******************************************************************************/
IFX_EXTERN void BasicVadcBgScan_init(void);
IFX_EXTERN void BasicVadcBgScan_run(void);
IFX_EXTERN void V2Distance(void);

#endif
