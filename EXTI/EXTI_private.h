/*
 * EXTI_private.h
 *
 *  Created on: Mar 11, 2016
 *      Author: Home
 */

#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_


#define EXTIx_STATE 	CONC(EXTI_0_STATE,EXTI_1_STATE,EXTI_2_STATE,EXTI_3_STATE,EXTI_4_STATE,EXTI_5_STATE,EXTI_6_STATE,EXTI_7_STATE,EXTI_8_STATE,EXTI_9_STATE,EXTI_10_STATE,EXTI_11_STATE,EXTI_12_STATE,EXTI_13_STATE,EXTI_14_STATE,EXTI_15_STATE,EXTI_16_STATE,EXTI_17_STATE,EXTI_18_STATE,EXTI_19_STATE,EXTI_20_STATE,EXTI_21_STATE,EXTI_22_STATE)
#define CONC(EXTI_0_STATE,EXTI_1_STATE,EXTI_2_STATE,EXTI_3_STATE,EXTI_4_STATE,EXTI_5_STATE,EXTI_6_STATE,EXTI_7_STATE,EXTI_8_STATE,EXTI_9_STATE,EXTI_10_STATE,EXTI_11_STATE,EXTI_12_STATE,EXTI_13_STATE,EXTI_14_STATE,EXTI_15_STATE,EXTI_16_STATE,EXTI_17_STATE,EXTI_18_STATE,EXTI_19_STATE,EXTI_20_STATE,EXTI_21_STATE,EXTI_22_STATE)  CONC_HELP(EXTI_0_STATE,EXTI_1_STATE,EXTI_2_STATE,EXTI_3_STATE,EXTI_4_STATE,EXTI_5_STATE,EXTI_6_STATE,EXTI_7_STATE,EXTI_8_STATE,EXTI_9_STATE,EXTI_10_STATE,EXTI_11_STATE,EXTI_12_STATE,EXTI_13_STATE,EXTI_14_STATE,EXTI_15_STATE,EXTI_16_STATE,EXTI_17_STATE,EXTI_18_STATE,EXTI_19_STATE,EXTI_20_STATE,EXTI_21_STATE,EXTI_22_STATE)
#define CONC_HELP(EXTI_0_STATE,EXTI_1_STATE,EXTI_2_STATE,EXTI_3_STATE,EXTI_4_STATE,EXTI_5_STATE,EXTI_6_STATE,EXTI_7_STATE,EXTI_8_STATE,EXTI_9_STATE,EXTI_10_STATE,EXTI_11_STATE,EXTI_12_STATE,EXTI_13_STATE,EXTI_14_STATE,EXTI_15_STATE,EXTI_16_STATE,EXTI_17_STATE,EXTI_18_STATE,EXTI_19_STATE,EXTI_20_STATE,EXTI_21_STATE,EXTI_22_STATE)		0b##EXTI_22_STATE##EXTI_21_STATE##EXTI_20_STATE##EXTI_19_STATE##EXTI_18_STATE##EXTI_17_STATE##EXTI_16_STATE##EXTI_15_STATE##EXTI_14_STATE##EXTI_13_STATE##EXTI_12_STATE##EXTI_11_STATE##EXTI_10_STATE##EXTI_9_STATE##EXTI_8_STATE##EXTI_7_STATE##EXTI_6_STATE##EXTI_5_STATE##EXTI_4_STATE##EXTI_3_STATE##EXTI_2_STATE##EXTI_1_STATE##EXTI_0_STATE


#define EXTIx_EGDEDETECT	CONC(EXTI_0_EDGE,EXTI_1_EDGE,EXTI_2_EDGE,EXTI_3_EDGE,EXTI_4_EDGE,EXTI_5_EDGE,EXTI_6_EDGE,EXTI_7_EDGE,EXTI_8_EDGE,EXTI_9_EDGE,EXTI_10_EDGE,EXTI_11_EDGE,EXTI_12_EDGE,EXTI_13_EDGE,EXTI_14_EDGE,EXTI_15_EDGE,EXTI_16_EDGE,EXTI_17_EDGE,EXTI_18_EDGE,EXTI_19_EDGE,EXTI_20_EDGE,EXTI_21_EDGE,EXTI_22_EDGE)
#define CONC(EXTI_0_EDGE,EXTI_1_EDGE,EXTI_2_EDGE,EXTI_3_EDGE,EXTI_4_EDGE,EXTI_5_EDGE,EXTI_6_EDGE,EXTI_7_EDGE,EXTI_8_EDGE,EXTI_9_EDGE,EXTI_10_EDGE,EXTI_11_EDGE,EXTI_12_EDGE,EXTI_13_EDGE,EXTI_14_EDGE,EXTI_15_EDGE,EXTI_16_EDGE,EXTI_17_EDGE,EXTI_18_EDGE,EXTI_19_EDGE,EXTI_20_EDGE,EXTI_21_EDGE,EXTI_22_EDGE)  CONC_HELP(EXTI_0_EDGE,EXTI_1_EDGE,EXTI_2_EDGE,EXTI_3_EDGE,EXTI_4_EDGE,EXTI_5_EDGE,EXTI_6_EDGE,EXTI_7_EDGE,EXTI_8_EDGE,EXTI_9_EDGE,EXTI_10_EDGE,EXTI_11_EDGE,EXTI_12_EDGE,EXTI_13_EDGE,EXTI_14_EDGE,EXTI_15_EDGE,EXTI_16_EDGE,EXTI_17_EDGE,EXTI_18_EDGE,EXTI_19_EDGE,EXTI_20_EDGE,EXTI_21_EDGE,EXTI_22_EDGE)
#define CONC_HELP(EXTI_0_EDGE,EXTI_1_EDGE,EXTI_2_EDGE,EXTI_3_EDGE,EXTI_4_EDGE,EXTI_5_EDGE,EXTI_6_EDGE,EXTI_7_EDGE,EXTI_8_EDGE,EXTI_9_EDGE,EXTI_10_EDGE,EXTI_11_EDGE,EXTI_12_EDGE,EXTI_13_EDGE,EXTI_14_EDGE,EXTI_15_EDGE,EXTI_16_EDGE,EXTI_17_EDGE,EXTI_18_EDGE,EXTI_19_EDGE,EXTI_20_EDGE,EXTI_21_EDGE,EXTI_22_EDGE)		0b##EXTI_22_EDGE##EXTI_21_EDGE##EXTI_20_EDGE##EXTI_19_EDGE##EXTI_18_EDGE##EXTI_17_EDGE##EXTI_16_EDGE##EXTI_15_EDGE##EXTI_14_EDGE##EXTI_13_EDGE##EXTI_12_EDGE##EXTI_11_EDGE##EXTI_10_EDGE##EXTI_9_EDGE##EXTI_8_EDGE##EXTI_7_EDGE##EXTI_6_EDGE##EXTI_5_EDGE##EXTI_4_EDGE##EXTI_3_EDGE##EXTI_2_EDGE##EXTI_1_EDGE##EXTI_0_EDGE

/*************************ADDRESSES**************************/
#define EXTI_u32IMR  ((volatile u32*)(0xE000E100))
#define EXTI_u32RTSR ((volatile u32*)(0xE000E100))
#define EXTI_u32FTSR ((volatile u32*)(0xE000E100))
#define EXTI_u32PR   ((volatile u32*)(0xE000E100))
#endif /* EXTI_PRIVATE_H_ */
