/**
 * \file IfxCcu6_PinMap.c
 * \brief CCU6 I/O map
 * \ingroup IfxLld_Ccu6
 *
 * \version iLLD_1_0_1_17_0
 * \copyright Copyright (c) 2017 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such terms
 * of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

#include "IfxCcu6_PinMap.h"

IfxCcu6_Cc60_Out IfxCcu60_CC60_P02_0_OUT = {&MODULE_CCU60, {&MODULE_P02, 0}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc60_Out IfxCcu60_CC60_P02_6_OUT = {&MODULE_CCU60, {&MODULE_P02, 6}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc60_Out IfxCcu60_CC60_P11_12_OUT = {&MODULE_CCU60, {&MODULE_P11,12}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc60_Out IfxCcu60_CC60_P15_6_OUT = {&MODULE_CCU60, {&MODULE_P15, 6}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc60_Out IfxCcu61_CC60_P00_1_OUT = {&MODULE_CCU61, {&MODULE_P00, 1}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc60_Out IfxCcu61_CC60_P00_7_OUT = {&MODULE_CCU61, {&MODULE_P00, 7}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc60_Out IfxCcu61_CC60_P20_8_OUT = {&MODULE_CCU61, {&MODULE_P20, 8}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc60_Out IfxCcu61_CC60_P33_13_OUT = {&MODULE_CCU61, {&MODULE_P33,13}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc60in_In IfxCcu60_CC60INA_P02_0_IN = {&MODULE_CCU60, {&MODULE_P02, 0}, Ifx_RxSel_a};
IfxCcu6_Cc60in_In IfxCcu60_CC60INB_P00_1_IN = {&MODULE_CCU60, {&MODULE_P00, 1}, Ifx_RxSel_b};
IfxCcu6_Cc60in_In IfxCcu60_CC60INC_P02_6_IN = {&MODULE_CCU60, {&MODULE_P02, 6}, Ifx_RxSel_c};
IfxCcu6_Cc60in_In IfxCcu61_CC60INA_P00_1_IN = {&MODULE_CCU61, {&MODULE_P00, 1}, Ifx_RxSel_a};
IfxCcu6_Cc60in_In IfxCcu61_CC60INB_P02_0_IN = {&MODULE_CCU61, {&MODULE_P02, 0}, Ifx_RxSel_b};
IfxCcu6_Cc60in_In IfxCcu61_CC60INC_P00_7_IN = {&MODULE_CCU61, {&MODULE_P00, 7}, Ifx_RxSel_c};
IfxCcu6_Cc61_Out IfxCcu60_CC61_P02_2_OUT = {&MODULE_CCU60, {&MODULE_P02, 2}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc61_Out IfxCcu60_CC61_P02_7_OUT = {&MODULE_CCU60, {&MODULE_P02, 7}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc61_Out IfxCcu60_CC61_P11_11_OUT = {&MODULE_CCU60, {&MODULE_P11,11}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc61_Out IfxCcu60_CC61_P15_5_OUT = {&MODULE_CCU60, {&MODULE_P15, 5}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc61_Out IfxCcu61_CC61_P00_3_OUT = {&MODULE_CCU61, {&MODULE_P00, 3}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc61_Out IfxCcu61_CC61_P00_8_OUT = {&MODULE_CCU61, {&MODULE_P00, 8}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc61_Out IfxCcu61_CC61_P20_9_OUT = {&MODULE_CCU61, {&MODULE_P20, 9}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc61_Out IfxCcu61_CC61_P33_11_OUT = {&MODULE_CCU61, {&MODULE_P33,11}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc61in_In IfxCcu60_CC61INA_P02_2_IN = {&MODULE_CCU60, {&MODULE_P02, 2}, Ifx_RxSel_a};
IfxCcu6_Cc61in_In IfxCcu60_CC61INB_P00_3_IN = {&MODULE_CCU60, {&MODULE_P00, 3}, Ifx_RxSel_b};
IfxCcu6_Cc61in_In IfxCcu60_CC61INC_P02_7_IN = {&MODULE_CCU60, {&MODULE_P02, 7}, Ifx_RxSel_c};
IfxCcu6_Cc61in_In IfxCcu61_CC61INA_P00_3_IN = {&MODULE_CCU61, {&MODULE_P00, 3}, Ifx_RxSel_a};
IfxCcu6_Cc61in_In IfxCcu61_CC61INB_P02_2_IN = {&MODULE_CCU61, {&MODULE_P02, 2}, Ifx_RxSel_b};
IfxCcu6_Cc61in_In IfxCcu61_CC61INC_P00_8_IN = {&MODULE_CCU61, {&MODULE_P00, 8}, Ifx_RxSel_c};
IfxCcu6_Cc62_Out IfxCcu60_CC62_P02_4_OUT = {&MODULE_CCU60, {&MODULE_P02, 4}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc62_Out IfxCcu60_CC62_P02_8_OUT = {&MODULE_CCU60, {&MODULE_P02, 8}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc62_Out IfxCcu60_CC62_P11_10_OUT = {&MODULE_CCU60, {&MODULE_P11,10}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc62_Out IfxCcu60_CC62_P15_4_OUT = {&MODULE_CCU60, {&MODULE_P15, 4}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc62_Out IfxCcu61_CC62_P00_5_OUT = {&MODULE_CCU61, {&MODULE_P00, 5}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc62_Out IfxCcu61_CC62_P00_9_OUT = {&MODULE_CCU61, {&MODULE_P00, 9}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc62_Out IfxCcu61_CC62_P20_10_OUT = {&MODULE_CCU61, {&MODULE_P20,10}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc62_Out IfxCcu61_CC62_P33_9_OUT = {&MODULE_CCU61, {&MODULE_P33, 9}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cc62in_In IfxCcu60_CC62INA_P02_4_IN = {&MODULE_CCU60, {&MODULE_P02, 4}, Ifx_RxSel_a};
IfxCcu6_Cc62in_In IfxCcu60_CC62INB_P00_5_IN = {&MODULE_CCU60, {&MODULE_P00, 5}, Ifx_RxSel_b};
IfxCcu6_Cc62in_In IfxCcu60_CC62INC_P02_8_IN = {&MODULE_CCU60, {&MODULE_P02, 8}, Ifx_RxSel_c};
IfxCcu6_Cc62in_In IfxCcu61_CC62INA_P00_5_IN = {&MODULE_CCU61, {&MODULE_P00, 5}, Ifx_RxSel_a};
IfxCcu6_Cc62in_In IfxCcu61_CC62INB_P02_4_IN = {&MODULE_CCU61, {&MODULE_P02, 4}, Ifx_RxSel_b};
IfxCcu6_Cc62in_In IfxCcu61_CC62INC_P00_9_IN = {&MODULE_CCU61, {&MODULE_P00, 9}, Ifx_RxSel_c};
IfxCcu6_Ccpos0_In IfxCcu60_CCPOS0A_P02_6_IN = {&MODULE_CCU60, {&MODULE_P02, 6}, Ifx_RxSel_a};
IfxCcu6_Ccpos0_In IfxCcu60_CCPOS0C_P10_4_IN = {&MODULE_CCU60, {&MODULE_P10, 4}, Ifx_RxSel_c};
IfxCcu6_Ccpos0_In IfxCcu60_CCPOS0D_P40_0_IN = {&MODULE_CCU60, {&MODULE_P40, 0}, Ifx_RxSel_d};
IfxCcu6_Ccpos0_In IfxCcu61_CCPOS0A_P00_7_IN = {&MODULE_CCU61, {&MODULE_P00, 7}, Ifx_RxSel_a};
IfxCcu6_Ccpos0_In IfxCcu61_CCPOS0C_P33_7_IN = {&MODULE_CCU61, {&MODULE_P33, 7}, Ifx_RxSel_c};
IfxCcu6_Ccpos0_In IfxCcu61_CCPOS0D_P40_5_IN = {&MODULE_CCU61, {&MODULE_P40, 5}, Ifx_RxSel_d};
IfxCcu6_Ccpos1_In IfxCcu60_CCPOS1A_P02_7_IN = {&MODULE_CCU60, {&MODULE_P02, 7}, Ifx_RxSel_a};
IfxCcu6_Ccpos1_In IfxCcu60_CCPOS1B_P40_1_IN = {&MODULE_CCU60, {&MODULE_P40, 1}, Ifx_RxSel_b};
IfxCcu6_Ccpos1_In IfxCcu60_CCPOS1C_P10_7_IN = {&MODULE_CCU60, {&MODULE_P10, 7}, Ifx_RxSel_c};
IfxCcu6_Ccpos1_In IfxCcu60_CCPOS1D_P40_2_IN = {&MODULE_CCU60, {&MODULE_P40, 2}, Ifx_RxSel_d};
IfxCcu6_Ccpos1_In IfxCcu61_CCPOS1A_P00_8_IN = {&MODULE_CCU61, {&MODULE_P00, 8}, Ifx_RxSel_a};
IfxCcu6_Ccpos1_In IfxCcu61_CCPOS1B_P40_6_IN = {&MODULE_CCU61, {&MODULE_P40, 6}, Ifx_RxSel_b};
IfxCcu6_Ccpos1_In IfxCcu61_CCPOS1C_P33_6_IN = {&MODULE_CCU61, {&MODULE_P33, 6}, Ifx_RxSel_c};
IfxCcu6_Ccpos1_In IfxCcu61_CCPOS1D_P40_7_IN = {&MODULE_CCU61, {&MODULE_P40, 7}, Ifx_RxSel_d};
IfxCcu6_Ccpos2_In IfxCcu60_CCPOS2A_P02_8_IN = {&MODULE_CCU60, {&MODULE_P02, 8}, Ifx_RxSel_a};
IfxCcu6_Ccpos2_In IfxCcu60_CCPOS2B_P40_3_IN = {&MODULE_CCU60, {&MODULE_P40, 3}, Ifx_RxSel_b};
IfxCcu6_Ccpos2_In IfxCcu60_CCPOS2C_P10_8_IN = {&MODULE_CCU60, {&MODULE_P10, 8}, Ifx_RxSel_c};
IfxCcu6_Ccpos2_In IfxCcu60_CCPOS2D_P40_4_IN = {&MODULE_CCU60, {&MODULE_P40, 4}, Ifx_RxSel_d};
IfxCcu6_Ccpos2_In IfxCcu61_CCPOS2A_P00_9_IN = {&MODULE_CCU61, {&MODULE_P00, 9}, Ifx_RxSel_a};
IfxCcu6_Ccpos2_In IfxCcu61_CCPOS2B_P40_8_IN = {&MODULE_CCU61, {&MODULE_P40, 8}, Ifx_RxSel_b};
IfxCcu6_Ccpos2_In IfxCcu61_CCPOS2C_P33_5_IN = {&MODULE_CCU61, {&MODULE_P33, 5}, Ifx_RxSel_c};
IfxCcu6_Ccpos2_In IfxCcu61_CCPOS2D_P40_9_IN = {&MODULE_CCU61, {&MODULE_P40, 9}, Ifx_RxSel_d};
IfxCcu6_Cout60_Out IfxCcu60_COUT60_P02_1_OUT = {&MODULE_CCU60, {&MODULE_P02, 1}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout60_Out IfxCcu60_COUT60_P11_9_OUT = {&MODULE_CCU60, {&MODULE_P11, 9}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout60_Out IfxCcu60_COUT60_P15_7_OUT = {&MODULE_CCU60, {&MODULE_P15, 7}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout60_Out IfxCcu61_COUT60_P00_2_OUT = {&MODULE_CCU61, {&MODULE_P00, 2}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout60_Out IfxCcu61_COUT60_P20_11_OUT = {&MODULE_CCU61, {&MODULE_P20,11}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout60_Out IfxCcu61_COUT60_P33_12_OUT = {&MODULE_CCU61, {&MODULE_P33,12}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout61_Out IfxCcu60_COUT61_P02_3_OUT = {&MODULE_CCU60, {&MODULE_P02, 3}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout61_Out IfxCcu60_COUT61_P11_6_OUT = {&MODULE_CCU60, {&MODULE_P11, 6}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout61_Out IfxCcu60_COUT61_P15_8_OUT = {&MODULE_CCU60, {&MODULE_P15, 8}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout61_Out IfxCcu61_COUT61_P00_4_OUT = {&MODULE_CCU61, {&MODULE_P00, 4}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout61_Out IfxCcu61_COUT61_P20_12_OUT = {&MODULE_CCU61, {&MODULE_P20,12}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout61_Out IfxCcu61_COUT61_P33_10_OUT = {&MODULE_CCU61, {&MODULE_P33,10}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout62_Out IfxCcu60_COUT62_P02_5_OUT = {&MODULE_CCU60, {&MODULE_P02, 5}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout62_Out IfxCcu60_COUT62_P11_3_OUT = {&MODULE_CCU60, {&MODULE_P11, 3}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout62_Out IfxCcu60_COUT62_P14_0_OUT = {&MODULE_CCU60, {&MODULE_P14, 0}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout62_Out IfxCcu61_COUT62_P00_6_OUT = {&MODULE_CCU61, {&MODULE_P00, 6}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout62_Out IfxCcu61_COUT62_P20_13_OUT = {&MODULE_CCU61, {&MODULE_P20,13}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout62_Out IfxCcu61_COUT62_P33_8_OUT = {&MODULE_CCU61, {&MODULE_P33, 8}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout63_Out IfxCcu60_COUT63_P00_0_OUT = {&MODULE_CCU60, {&MODULE_P00, 0}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout63_Out IfxCcu60_COUT63_P11_2_OUT = {&MODULE_CCU60, {&MODULE_P11, 2}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout63_Out IfxCcu60_COUT63_P14_1_OUT = {&MODULE_CCU60, {&MODULE_P14, 1}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout63_Out IfxCcu60_COUT63_P32_4_OUT = {&MODULE_CCU60, {&MODULE_P32, 4}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout63_Out IfxCcu61_COUT63_P00_10_OUT = {&MODULE_CCU61, {&MODULE_P00,10}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout63_Out IfxCcu61_COUT63_P00_12_OUT = {&MODULE_CCU61, {&MODULE_P00,12}, IfxPort_OutputIdx_alt7};
IfxCcu6_Cout63_Out IfxCcu61_COUT63_P20_7_OUT = {&MODULE_CCU61, {&MODULE_P20, 7}, IfxPort_OutputIdx_alt7};
IfxCcu6_Ctrap_In IfxCcu60_CTRAPA_P00_11_IN = {&MODULE_CCU60, {&MODULE_P00,11}, Ifx_RxSel_a};
IfxCcu6_Ctrap_In IfxCcu61_CTRAPA_P00_0_IN = {&MODULE_CCU61, {&MODULE_P00, 0}, Ifx_RxSel_a};
IfxCcu6_Ctrap_In IfxCcu61_CTRAPC_P33_4_IN = {&MODULE_CCU61, {&MODULE_P33, 4}, Ifx_RxSel_c};
IfxCcu6_T12hr_In IfxCcu60_T12HRB_P00_7_IN = {&MODULE_CCU60, {&MODULE_P00, 7}, Ifx_RxSel_b};
IfxCcu6_T12hr_In IfxCcu60_T12HRC_P00_9_IN = {&MODULE_CCU60, {&MODULE_P00, 9}, Ifx_RxSel_c};
IfxCcu6_T12hr_In IfxCcu60_T12HRE_P00_0_IN = {&MODULE_CCU60, {&MODULE_P00, 0}, Ifx_RxSel_e};
IfxCcu6_T12hr_In IfxCcu61_T12HRB_P02_6_IN = {&MODULE_CCU61, {&MODULE_P02, 6}, Ifx_RxSel_b};
IfxCcu6_T12hr_In IfxCcu61_T12HRC_P02_8_IN = {&MODULE_CCU61, {&MODULE_P02, 8}, Ifx_RxSel_c};
IfxCcu6_T12hr_In IfxCcu61_T12HRE_P00_11_IN = {&MODULE_CCU61, {&MODULE_P00,11}, Ifx_RxSel_e};
IfxCcu6_T13hr_In IfxCcu60_T13HRB_P00_8_IN = {&MODULE_CCU60, {&MODULE_P00, 8}, Ifx_RxSel_b};
IfxCcu6_T13hr_In IfxCcu60_T13HRC_P00_9_IN = {&MODULE_CCU60, {&MODULE_P00, 9}, Ifx_RxSel_c};
IfxCcu6_T13hr_In IfxCcu61_T13HRB_P02_7_IN = {&MODULE_CCU61, {&MODULE_P02, 7}, Ifx_RxSel_b};
IfxCcu6_T13hr_In IfxCcu61_T13HRC_P02_8_IN = {&MODULE_CCU61, {&MODULE_P02, 8}, Ifx_RxSel_c};


const IfxCcu6_Cc60_Out *IfxCcu6_Cc60_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC60_OUT_NUM_ITEMS] = {
    {
        &IfxCcu60_CC60_P02_0_OUT,
        &IfxCcu60_CC60_P02_6_OUT,
        &IfxCcu60_CC60_P11_12_OUT,
        &IfxCcu60_CC60_P15_6_OUT
    },
    {
        &IfxCcu61_CC60_P00_1_OUT,
        &IfxCcu61_CC60_P00_7_OUT,
        &IfxCcu61_CC60_P20_8_OUT,
        &IfxCcu61_CC60_P33_13_OUT
    }
};

const IfxCcu6_Cc60in_In *IfxCcu6_Cc60in_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC60IN_IN_NUM_ITEMS] = {
    {
        &IfxCcu60_CC60INA_P02_0_IN,
        &IfxCcu60_CC60INB_P00_1_IN,
        &IfxCcu60_CC60INC_P02_6_IN
    },
    {
        &IfxCcu61_CC60INA_P00_1_IN,
        &IfxCcu61_CC60INB_P02_0_IN,
        &IfxCcu61_CC60INC_P00_7_IN
    }
};

const IfxCcu6_Cc61_Out *IfxCcu6_Cc61_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC61_OUT_NUM_ITEMS] = {
    {
        &IfxCcu60_CC61_P02_2_OUT,
        &IfxCcu60_CC61_P02_7_OUT,
        &IfxCcu60_CC61_P11_11_OUT,
        &IfxCcu60_CC61_P15_5_OUT
    },
    {
        &IfxCcu61_CC61_P00_3_OUT,
        &IfxCcu61_CC61_P00_8_OUT,
        &IfxCcu61_CC61_P20_9_OUT,
        &IfxCcu61_CC61_P33_11_OUT
    }
};

const IfxCcu6_Cc61in_In *IfxCcu6_Cc61in_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC61IN_IN_NUM_ITEMS] = {
    {
        &IfxCcu60_CC61INA_P02_2_IN,
        &IfxCcu60_CC61INB_P00_3_IN,
        &IfxCcu60_CC61INC_P02_7_IN
    },
    {
        &IfxCcu61_CC61INA_P00_3_IN,
        &IfxCcu61_CC61INB_P02_2_IN,
        &IfxCcu61_CC61INC_P00_8_IN
    }
};

const IfxCcu6_Cc62_Out *IfxCcu6_Cc62_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC62_OUT_NUM_ITEMS] = {
    {
        &IfxCcu60_CC62_P02_4_OUT,
        &IfxCcu60_CC62_P02_8_OUT,
        &IfxCcu60_CC62_P11_10_OUT,
        &IfxCcu60_CC62_P15_4_OUT
    },
    {
        &IfxCcu61_CC62_P00_5_OUT,
        &IfxCcu61_CC62_P00_9_OUT,
        &IfxCcu61_CC62_P20_10_OUT,
        &IfxCcu61_CC62_P33_9_OUT
    }
};

const IfxCcu6_Cc62in_In *IfxCcu6_Cc62in_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC62IN_IN_NUM_ITEMS] = {
    {
        &IfxCcu60_CC62INA_P02_4_IN,
        &IfxCcu60_CC62INB_P00_5_IN,
        &IfxCcu60_CC62INC_P02_8_IN
    },
    {
        &IfxCcu61_CC62INA_P00_5_IN,
        &IfxCcu61_CC62INB_P02_4_IN,
        &IfxCcu61_CC62INC_P00_9_IN
    }
};

const IfxCcu6_Ccpos0_In *IfxCcu6_Ccpos0_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CCPOS0_IN_NUM_ITEMS] = {
    {
        &IfxCcu60_CCPOS0A_P02_6_IN,
        NULL_PTR,
        &IfxCcu60_CCPOS0C_P10_4_IN,
        &IfxCcu60_CCPOS0D_P40_0_IN
    },
    {
        &IfxCcu61_CCPOS0A_P00_7_IN,
        NULL_PTR,
        &IfxCcu61_CCPOS0C_P33_7_IN,
        &IfxCcu61_CCPOS0D_P40_5_IN
    }
};

const IfxCcu6_Ccpos1_In *IfxCcu6_Ccpos1_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CCPOS1_IN_NUM_ITEMS] = {
    {
        &IfxCcu60_CCPOS1A_P02_7_IN,
        &IfxCcu60_CCPOS1B_P40_1_IN,
        &IfxCcu60_CCPOS1C_P10_7_IN,
        &IfxCcu60_CCPOS1D_P40_2_IN
    },
    {
        &IfxCcu61_CCPOS1A_P00_8_IN,
        &IfxCcu61_CCPOS1B_P40_6_IN,
        &IfxCcu61_CCPOS1C_P33_6_IN,
        &IfxCcu61_CCPOS1D_P40_7_IN
    }
};

const IfxCcu6_Ccpos2_In *IfxCcu6_Ccpos2_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CCPOS2_IN_NUM_ITEMS] = {
    {
        &IfxCcu60_CCPOS2A_P02_8_IN,
        &IfxCcu60_CCPOS2B_P40_3_IN,
        &IfxCcu60_CCPOS2C_P10_8_IN,
        &IfxCcu60_CCPOS2D_P40_4_IN
    },
    {
        &IfxCcu61_CCPOS2A_P00_9_IN,
        &IfxCcu61_CCPOS2B_P40_8_IN,
        &IfxCcu61_CCPOS2C_P33_5_IN,
        &IfxCcu61_CCPOS2D_P40_9_IN
    }
};

const IfxCcu6_Cout60_Out *IfxCcu6_Cout60_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_COUT60_OUT_NUM_ITEMS] = {
    {
        &IfxCcu60_COUT60_P02_1_OUT,
        &IfxCcu60_COUT60_P11_9_OUT,
        &IfxCcu60_COUT60_P15_7_OUT
    },
    {
        &IfxCcu61_COUT60_P00_2_OUT,
        &IfxCcu61_COUT60_P20_11_OUT,
        &IfxCcu61_COUT60_P33_12_OUT
    }
};

const IfxCcu6_Cout61_Out *IfxCcu6_Cout61_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_COUT61_OUT_NUM_ITEMS] = {
    {
        &IfxCcu60_COUT61_P02_3_OUT,
        &IfxCcu60_COUT61_P11_6_OUT,
        &IfxCcu60_COUT61_P15_8_OUT
    },
    {
        &IfxCcu61_COUT61_P00_4_OUT,
        &IfxCcu61_COUT61_P20_12_OUT,
        &IfxCcu61_COUT61_P33_10_OUT
    }
};

const IfxCcu6_Cout62_Out *IfxCcu6_Cout62_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_COUT62_OUT_NUM_ITEMS] = {
    {
        &IfxCcu60_COUT62_P02_5_OUT,
        &IfxCcu60_COUT62_P11_3_OUT,
        &IfxCcu60_COUT62_P14_0_OUT
    },
    {
        &IfxCcu61_COUT62_P00_6_OUT,
        &IfxCcu61_COUT62_P20_13_OUT,
        &IfxCcu61_COUT62_P33_8_OUT
    }
};

const IfxCcu6_Cout63_Out *IfxCcu6_Cout63_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_COUT63_OUT_NUM_ITEMS] = {
    {
        &IfxCcu60_COUT63_P00_0_OUT,
        &IfxCcu60_COUT63_P11_2_OUT,
        &IfxCcu60_COUT63_P14_1_OUT,
        &IfxCcu60_COUT63_P32_4_OUT
    },
    {
        &IfxCcu61_COUT63_P00_10_OUT,
        &IfxCcu61_COUT63_P00_12_OUT,
        &IfxCcu61_COUT63_P20_7_OUT,
        NULL_PTR
    }
};

const IfxCcu6_Ctrap_In *IfxCcu6_Ctrap_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CTRAP_IN_NUM_ITEMS] = {
    {
        &IfxCcu60_CTRAPA_P00_11_IN,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxCcu61_CTRAPA_P00_0_IN,
        NULL_PTR,
        &IfxCcu61_CTRAPC_P33_4_IN
    }
};

const IfxCcu6_T12hr_In *IfxCcu6_T12hr_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_T12HR_IN_NUM_ITEMS] = {
    {
        NULL_PTR,
        &IfxCcu60_T12HRB_P00_7_IN,
        &IfxCcu60_T12HRC_P00_9_IN,
        NULL_PTR,
        &IfxCcu60_T12HRE_P00_0_IN
    },
    {
        NULL_PTR,
        &IfxCcu61_T12HRB_P02_6_IN,
        &IfxCcu61_T12HRC_P02_8_IN,
        NULL_PTR,
        &IfxCcu61_T12HRE_P00_11_IN
    }
};

const IfxCcu6_T13hr_In *IfxCcu6_T13hr_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_T13HR_IN_NUM_ITEMS] = {
    {
        NULL_PTR,
        &IfxCcu60_T13HRB_P00_8_IN,
        &IfxCcu60_T13HRC_P00_9_IN
    },
    {
        NULL_PTR,
        &IfxCcu61_T13HRB_P02_7_IN,
        &IfxCcu61_T13HRC_P02_8_IN
    }
};
