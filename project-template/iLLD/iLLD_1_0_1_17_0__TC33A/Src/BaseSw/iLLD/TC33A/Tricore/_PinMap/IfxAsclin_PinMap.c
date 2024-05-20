/**
 * \file IfxAsclin_PinMap.c
 * \brief ASCLIN I/O map
 * \ingroup IfxLld_Asclin
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

#include "IfxAsclin_PinMap.h"

IfxAsclin_Cts_In IfxAsclin0_CTSA_P14_9_IN = {&MODULE_ASCLIN0, {&MODULE_P14, 9}, Ifx_RxSel_a};
IfxAsclin_Cts_In IfxAsclin1_CTSA_P20_7_IN = {&MODULE_ASCLIN1, {&MODULE_P20, 7}, Ifx_RxSel_a};
IfxAsclin_Cts_In IfxAsclin1_CTSB_P32_4_IN = {&MODULE_ASCLIN1, {&MODULE_P32, 4}, Ifx_RxSel_b};
IfxAsclin_Cts_In IfxAsclin2_CTSA_P10_7_IN = {&MODULE_ASCLIN2, {&MODULE_P10, 7}, Ifx_RxSel_a};
IfxAsclin_Cts_In IfxAsclin2_CTSB_P33_5_IN = {&MODULE_ASCLIN2, {&MODULE_P33, 5}, Ifx_RxSel_b};
IfxAsclin_Cts_In IfxAsclin3_CTSA_P00_12_IN = {&MODULE_ASCLIN3, {&MODULE_P00,12}, Ifx_RxSel_a};
IfxAsclin_Rts_Out IfxAsclin0_RTS_P14_7_OUT = {&MODULE_ASCLIN0, {&MODULE_P14, 7}, IfxPort_OutputIdx_alt2};
IfxAsclin_Rts_Out IfxAsclin1_RTS_P20_6_OUT = {&MODULE_ASCLIN1, {&MODULE_P20, 6}, IfxPort_OutputIdx_alt2};
IfxAsclin_Rts_Out IfxAsclin1_RTS_P23_1_OUT = {&MODULE_ASCLIN1, {&MODULE_P23, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Rts_Out IfxAsclin2_RTS_P10_8_OUT = {&MODULE_ASCLIN2, {&MODULE_P10, 8}, IfxPort_OutputIdx_alt2};
IfxAsclin_Rts_Out IfxAsclin2_RTS_P33_4_OUT = {&MODULE_ASCLIN2, {&MODULE_P33, 4}, IfxPort_OutputIdx_alt2};
IfxAsclin_Rts_Out IfxAsclin3_RTS_P00_9_OUT = {&MODULE_ASCLIN3, {&MODULE_P00, 9}, IfxPort_OutputIdx_alt3};
IfxAsclin_Rx_In IfxAsclin0_RXA_P14_1_IN = {&MODULE_ASCLIN0, {&MODULE_P14, 1}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin0_RXB_P15_3_IN = {&MODULE_ASCLIN0, {&MODULE_P15, 3}, Ifx_RxSel_b};
IfxAsclin_Rx_In IfxAsclin0_RXD_P33_10_IN = {&MODULE_ASCLIN0, {&MODULE_P33,10}, Ifx_RxSel_d};
IfxAsclin_Rx_In IfxAsclin10_RXA_P00_4_IN = {&MODULE_ASCLIN10, {&MODULE_P00, 4}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin10_RXB_P00_8_IN = {&MODULE_ASCLIN10, {&MODULE_P00, 8}, Ifx_RxSel_b};
IfxAsclin_Rx_In IfxAsclin10_RXC_P13_0_IN = {&MODULE_ASCLIN10, {&MODULE_P13, 0}, Ifx_RxSel_c};
IfxAsclin_Rx_In IfxAsclin10_RXD_P13_1_IN = {&MODULE_ASCLIN10, {&MODULE_P13, 1}, Ifx_RxSel_d};
IfxAsclin_Rx_In IfxAsclin11_RXA_P10_0_IN = {&MODULE_ASCLIN11, {&MODULE_P10, 0}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin11_RXB_P10_4_IN = {&MODULE_ASCLIN11, {&MODULE_P10, 4}, Ifx_RxSel_b};
IfxAsclin_Rx_In IfxAsclin11_RXC_P21_0_IN = {&MODULE_ASCLIN11, {&MODULE_P21, 0}, Ifx_RxSel_c};
IfxAsclin_Rx_In IfxAsclin11_RXD_P21_1_IN = {&MODULE_ASCLIN11, {&MODULE_P21, 1}, Ifx_RxSel_d};
IfxAsclin_Rx_In IfxAsclin11_RXE_P21_2_IN = {&MODULE_ASCLIN11, {&MODULE_P21, 2}, Ifx_RxSel_e};
IfxAsclin_Rx_In IfxAsclin11_RXF_P21_5_IN = {&MODULE_ASCLIN11, {&MODULE_P21, 5}, Ifx_RxSel_f};
IfxAsclin_Rx_In IfxAsclin1_RXA_P15_1_IN = {&MODULE_ASCLIN1, {&MODULE_P15, 1}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin1_RXB_P15_5_IN = {&MODULE_ASCLIN1, {&MODULE_P15, 5}, Ifx_RxSel_b};
IfxAsclin_Rx_In IfxAsclin1_RXC_P20_9_IN = {&MODULE_ASCLIN1, {&MODULE_P20, 9}, Ifx_RxSel_c};
IfxAsclin_Rx_In IfxAsclin1_RXD_P14_8_IN = {&MODULE_ASCLIN1, {&MODULE_P14, 8}, Ifx_RxSel_d};
IfxAsclin_Rx_In IfxAsclin1_RXE_P11_10_IN = {&MODULE_ASCLIN1, {&MODULE_P11,10}, Ifx_RxSel_e};
IfxAsclin_Rx_In IfxAsclin1_RXG_P02_3_IN = {&MODULE_ASCLIN1, {&MODULE_P02, 3}, Ifx_RxSel_g};
IfxAsclin_Rx_In IfxAsclin2_RXA_P14_3_IN = {&MODULE_ASCLIN2, {&MODULE_P14, 3}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin2_RXB_P02_1_IN = {&MODULE_ASCLIN2, {&MODULE_P02, 1}, Ifx_RxSel_b};
IfxAsclin_Rx_In IfxAsclin2_RXD_P10_6_IN = {&MODULE_ASCLIN2, {&MODULE_P10, 6}, Ifx_RxSel_d};
IfxAsclin_Rx_In IfxAsclin2_RXE_P33_8_IN = {&MODULE_ASCLIN2, {&MODULE_P33, 8}, Ifx_RxSel_e};
IfxAsclin_Rx_In IfxAsclin2_RXG_P02_0_IN = {&MODULE_ASCLIN2, {&MODULE_P02, 0}, Ifx_RxSel_g};
IfxAsclin_Rx_In IfxAsclin3_RXA_P15_7_IN = {&MODULE_ASCLIN3, {&MODULE_P15, 7}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin3_RXC_P20_3_IN = {&MODULE_ASCLIN3, {&MODULE_P20, 3}, Ifx_RxSel_c};
IfxAsclin_Rx_In IfxAsclin3_RXE_P00_1_IN = {&MODULE_ASCLIN3, {&MODULE_P00, 1}, Ifx_RxSel_e};
IfxAsclin_Rx_In IfxAsclin3_RXF_P21_6_IN = {&MODULE_ASCLIN3, {&MODULE_P21, 6}, Ifx_RxSel_f};
IfxAsclin_Rx_In IfxAsclin4_RXA_P00_12_IN = {&MODULE_ASCLIN4, {&MODULE_P00,12}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin4_RXB_P34_2_IN = {&MODULE_ASCLIN4, {&MODULE_P34, 2}, Ifx_RxSel_b};
IfxAsclin_Rx_In IfxAsclin5_RXA_P00_6_IN = {&MODULE_ASCLIN5, {&MODULE_P00, 6}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin5_RXB_P33_4_IN = {&MODULE_ASCLIN5, {&MODULE_P33, 4}, Ifx_RxSel_b};
IfxAsclin_Rx_In IfxAsclin5_RXC_P22_3_IN = {&MODULE_ASCLIN5, {&MODULE_P22, 3}, Ifx_RxSel_c};
IfxAsclin_Rx_In IfxAsclin6_RXE_P22_0_IN = {&MODULE_ASCLIN6, {&MODULE_P22, 0}, Ifx_RxSel_e};
IfxAsclin_Rx_In IfxAsclin6_RXF_P23_1_IN = {&MODULE_ASCLIN6, {&MODULE_P23, 1}, Ifx_RxSel_f};
IfxAsclin_Rx_In IfxAsclin7_RXE_P22_1_IN = {&MODULE_ASCLIN7, {&MODULE_P22, 1}, Ifx_RxSel_e};
IfxAsclin_Rx_In IfxAsclin7_RXF_P22_4_IN = {&MODULE_ASCLIN7, {&MODULE_P22, 4}, Ifx_RxSel_f};
IfxAsclin_Rx_In IfxAsclin8_RXC_P33_1_IN = {&MODULE_ASCLIN8, {&MODULE_P33, 1}, Ifx_RxSel_c};
IfxAsclin_Rx_In IfxAsclin8_RXD_P33_6_IN = {&MODULE_ASCLIN8, {&MODULE_P33, 6}, Ifx_RxSel_d};
IfxAsclin_Rx_In IfxAsclin9_RXC_P14_7_IN = {&MODULE_ASCLIN9, {&MODULE_P14, 7}, Ifx_RxSel_c};
IfxAsclin_Rx_In IfxAsclin9_RXD_P14_9_IN = {&MODULE_ASCLIN9, {&MODULE_P14, 9}, Ifx_RxSel_d};
IfxAsclin_Rx_In IfxAsclin9_RXE_P20_6_IN = {&MODULE_ASCLIN9, {&MODULE_P20, 6}, Ifx_RxSel_e};
IfxAsclin_Rx_In IfxAsclin9_RXF_P20_7_IN = {&MODULE_ASCLIN9, {&MODULE_P20, 7}, Ifx_RxSel_f};
IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P14_0_OUT = {&MODULE_ASCLIN0, {&MODULE_P14, 0}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P15_2_OUT = {&MODULE_ASCLIN0, {&MODULE_P15, 2}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin10_SCLK_P13_2_OUT = {&MODULE_ASCLIN10, {&MODULE_P13, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin11_SCLK_P21_3_OUT = {&MODULE_ASCLIN11, {&MODULE_P21, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P15_0_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 0}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P20_10_OUT = {&MODULE_ASCLIN1, {&MODULE_P20,10}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P33_11_OUT = {&MODULE_ASCLIN1, {&MODULE_P33,11}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P33_12_OUT = {&MODULE_ASCLIN1, {&MODULE_P33,12}, IfxPort_OutputIdx_alt4};
IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P02_4_OUT = {&MODULE_ASCLIN2, {&MODULE_P02, 4}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P10_6_OUT = {&MODULE_ASCLIN2, {&MODULE_P10, 6}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P14_2_OUT = {&MODULE_ASCLIN2, {&MODULE_P14, 2}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P33_7_OUT = {&MODULE_ASCLIN2, {&MODULE_P33, 7}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P33_9_OUT = {&MODULE_ASCLIN2, {&MODULE_P33, 9}, IfxPort_OutputIdx_alt4};
IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P00_0_OUT = {&MODULE_ASCLIN3, {&MODULE_P00, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P00_2_OUT = {&MODULE_ASCLIN3, {&MODULE_P00, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P15_6_OUT = {&MODULE_ASCLIN3, {&MODULE_P15, 6}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P15_8_OUT = {&MODULE_ASCLIN3, {&MODULE_P15, 8}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P20_0_OUT = {&MODULE_ASCLIN3, {&MODULE_P20, 0}, IfxPort_OutputIdx_alt3};
IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P21_5_OUT = {&MODULE_ASCLIN3, {&MODULE_P21, 5}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P21_7_OUT = {&MODULE_ASCLIN3, {&MODULE_P21, 7}, IfxPort_OutputIdx_alt3};
IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P33_2_OUT = {&MODULE_ASCLIN3, {&MODULE_P33, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin4_SCLK_P00_10_OUT = {&MODULE_ASCLIN4, {&MODULE_P00,10}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin4_SCLK_P34_3_OUT = {&MODULE_ASCLIN4, {&MODULE_P34, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin5_SCLK_P33_3_OUT = {&MODULE_ASCLIN5, {&MODULE_P33, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin6_SCLK_P23_1_OUT = {&MODULE_ASCLIN6, {&MODULE_P23, 1}, IfxPort_OutputIdx_alt7};
IfxAsclin_Sclk_Out IfxAsclin8_SCLK_P02_8_OUT = {&MODULE_ASCLIN8, {&MODULE_P02, 8}, IfxPort_OutputIdx_alt3};
IfxAsclin_Slso_Out IfxAsclin10_SLSO_P13_3_OUT = {&MODULE_ASCLIN10, {&MODULE_P13, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin11_SLSO_P21_4_OUT = {&MODULE_ASCLIN11, {&MODULE_P21, 4}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin1_SLSO_P14_3_OUT = {&MODULE_ASCLIN1, {&MODULE_P14, 3}, IfxPort_OutputIdx_alt4};
IfxAsclin_Slso_Out IfxAsclin1_SLSO_P20_8_OUT = {&MODULE_ASCLIN1, {&MODULE_P20, 8}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin1_SLSO_P33_10_OUT = {&MODULE_ASCLIN1, {&MODULE_P33,10}, IfxPort_OutputIdx_alt4};
IfxAsclin_Slso_Out IfxAsclin2_SLSO_P02_3_OUT = {&MODULE_ASCLIN2, {&MODULE_P02, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin2_SLSO_P10_5_OUT = {&MODULE_ASCLIN2, {&MODULE_P10, 5}, IfxPort_OutputIdx_alt6};
IfxAsclin_Slso_Out IfxAsclin2_SLSO_P33_6_OUT = {&MODULE_ASCLIN2, {&MODULE_P33, 6}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin3_SLSO_P00_3_OUT = {&MODULE_ASCLIN3, {&MODULE_P00, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin3_SLSO_P14_3_OUT = {&MODULE_ASCLIN3, {&MODULE_P14, 3}, IfxPort_OutputIdx_alt5};
IfxAsclin_Slso_Out IfxAsclin3_SLSO_P21_2_OUT = {&MODULE_ASCLIN3, {&MODULE_P21, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin3_SLSO_P21_6_OUT = {&MODULE_ASCLIN3, {&MODULE_P21, 6}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin3_SLSO_P33_1_OUT = {&MODULE_ASCLIN3, {&MODULE_P33, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin4_SLSO_P00_11_OUT = {&MODULE_ASCLIN4, {&MODULE_P00,11}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin4_SLSO_P22_4_OUT = {&MODULE_ASCLIN4, {&MODULE_P22, 4}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin5_SLSO_P14_8_OUT = {&MODULE_ASCLIN5, {&MODULE_P14, 8}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin5_SLSO_P33_5_OUT = {&MODULE_ASCLIN5, {&MODULE_P33, 5}, IfxPort_OutputIdx_alt7};
IfxAsclin_Slso_Out IfxAsclin7_SLSO_P14_8_OUT = {&MODULE_ASCLIN7, {&MODULE_P14, 8}, IfxPort_OutputIdx_alt3};
IfxAsclin_Tx_Out IfxAsclin0_TX_P14_0_OUT = {&MODULE_ASCLIN0, {&MODULE_P14, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin0_TX_P14_1_OUT = {&MODULE_ASCLIN0, {&MODULE_P14, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin0_TX_P15_2_OUT = {&MODULE_ASCLIN0, {&MODULE_P15, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin0_TX_P15_3_OUT = {&MODULE_ASCLIN0, {&MODULE_P15, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin0_TX_P33_9_OUT = {&MODULE_ASCLIN0, {&MODULE_P33, 9}, IfxPort_OutputIdx_alt6};
IfxAsclin_Tx_Out IfxAsclin10_TX_P00_8_OUT = {&MODULE_ASCLIN10, {&MODULE_P00, 8}, IfxPort_OutputIdx_alt3};
IfxAsclin_Tx_Out IfxAsclin10_TX_P13_0_OUT = {&MODULE_ASCLIN10, {&MODULE_P13, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin11_TX_P10_0_OUT = {&MODULE_ASCLIN11, {&MODULE_P10, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin11_TX_P21_0_OUT = {&MODULE_ASCLIN11, {&MODULE_P21, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin11_TX_P21_5_OUT = {&MODULE_ASCLIN11, {&MODULE_P21, 5}, IfxPort_OutputIdx_alt3};
IfxAsclin_Tx_Out IfxAsclin1_TX_P02_2_OUT = {&MODULE_ASCLIN1, {&MODULE_P02, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P11_12_OUT = {&MODULE_ASCLIN1, {&MODULE_P11,12}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P14_10_OUT = {&MODULE_ASCLIN1, {&MODULE_P14,10}, IfxPort_OutputIdx_alt4};
IfxAsclin_Tx_Out IfxAsclin1_TX_P15_0_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P15_1_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P15_4_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 4}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P15_5_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 5}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P20_10_OUT = {&MODULE_ASCLIN1, {&MODULE_P20,10}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P33_12_OUT = {&MODULE_ASCLIN1, {&MODULE_P33,12}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin2_TX_P02_0_OUT = {&MODULE_ASCLIN2, {&MODULE_P02, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin2_TX_P10_5_OUT = {&MODULE_ASCLIN2, {&MODULE_P10, 5}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin2_TX_P14_2_OUT = {&MODULE_ASCLIN2, {&MODULE_P14, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin2_TX_P14_3_OUT = {&MODULE_ASCLIN2, {&MODULE_P14, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin2_TX_P33_8_OUT = {&MODULE_ASCLIN2, {&MODULE_P33, 8}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin2_TX_P33_9_OUT = {&MODULE_ASCLIN2, {&MODULE_P33, 9}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin3_TX_P00_0_OUT = {&MODULE_ASCLIN3, {&MODULE_P00, 0}, IfxPort_OutputIdx_alt3};
IfxAsclin_Tx_Out IfxAsclin3_TX_P00_1_OUT = {&MODULE_ASCLIN3, {&MODULE_P00, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin3_TX_P15_6_OUT = {&MODULE_ASCLIN3, {&MODULE_P15, 6}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin3_TX_P15_7_OUT = {&MODULE_ASCLIN3, {&MODULE_P15, 7}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin3_TX_P20_0_OUT = {&MODULE_ASCLIN3, {&MODULE_P20, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin3_TX_P20_3_OUT = {&MODULE_ASCLIN3, {&MODULE_P20, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin3_TX_P21_7_OUT = {&MODULE_ASCLIN3, {&MODULE_P21, 7}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin4_TX_P00_9_OUT = {&MODULE_ASCLIN4, {&MODULE_P00, 9}, IfxPort_OutputIdx_alt5};
IfxAsclin_Tx_Out IfxAsclin4_TX_P34_1_OUT = {&MODULE_ASCLIN4, {&MODULE_P34, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin5_TX_P00_7_OUT = {&MODULE_ASCLIN5, {&MODULE_P00, 7}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin5_TX_P22_2_OUT = {&MODULE_ASCLIN5, {&MODULE_P22, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin5_TX_P33_0_OUT = {&MODULE_ASCLIN5, {&MODULE_P33, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin6_TX_P22_0_OUT = {&MODULE_ASCLIN6, {&MODULE_P22, 0}, IfxPort_OutputIdx_alt7};
IfxAsclin_Tx_Out IfxAsclin6_TX_P23_5_OUT = {&MODULE_ASCLIN6, {&MODULE_P23, 5}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin7_TX_P22_1_OUT = {&MODULE_ASCLIN7, {&MODULE_P22, 1}, IfxPort_OutputIdx_alt7};
IfxAsclin_Tx_Out IfxAsclin8_TX_P33_7_OUT = {&MODULE_ASCLIN8, {&MODULE_P33, 7}, IfxPort_OutputIdx_alt4};
IfxAsclin_Tx_Out IfxAsclin9_TX_P14_7_OUT = {&MODULE_ASCLIN9, {&MODULE_P14, 7}, IfxPort_OutputIdx_alt4};
IfxAsclin_Tx_Out IfxAsclin9_TX_P20_7_OUT = {&MODULE_ASCLIN9, {&MODULE_P20, 7}, IfxPort_OutputIdx_alt2};


const IfxAsclin_Cts_In *IfxAsclin_Cts_In_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_CTS_IN_NUM_ITEMS] = {
    {
        &IfxAsclin0_CTSA_P14_9_IN,
        NULL_PTR
    },
    {
        &IfxAsclin1_CTSA_P20_7_IN,
        &IfxAsclin1_CTSB_P32_4_IN
    },
    {
        &IfxAsclin2_CTSA_P10_7_IN,
        &IfxAsclin2_CTSB_P33_5_IN
    },
    {
        &IfxAsclin3_CTSA_P00_12_IN,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    }
};

const IfxAsclin_Rts_Out *IfxAsclin_Rts_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_RTS_OUT_NUM_ITEMS] = {
    {
        &IfxAsclin0_RTS_P14_7_OUT,
        NULL_PTR
    },
    {
        &IfxAsclin1_RTS_P20_6_OUT,
        &IfxAsclin1_RTS_P23_1_OUT
    },
    {
        &IfxAsclin2_RTS_P10_8_OUT,
        &IfxAsclin2_RTS_P33_4_OUT
    },
    {
        &IfxAsclin3_RTS_P00_9_OUT,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR
    }
};

const IfxAsclin_Rx_In *IfxAsclin_Rx_In_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_RX_IN_NUM_ITEMS] = {
    {
        &IfxAsclin0_RXA_P14_1_IN,
        &IfxAsclin0_RXB_P15_3_IN,
        NULL_PTR,
        &IfxAsclin0_RXD_P33_10_IN,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin1_RXA_P15_1_IN,
        &IfxAsclin1_RXB_P15_5_IN,
        &IfxAsclin1_RXC_P20_9_IN,
        &IfxAsclin1_RXD_P14_8_IN,
        &IfxAsclin1_RXE_P11_10_IN,
        NULL_PTR,
        &IfxAsclin1_RXG_P02_3_IN
    },
    {
        &IfxAsclin2_RXA_P14_3_IN,
        &IfxAsclin2_RXB_P02_1_IN,
        NULL_PTR,
        &IfxAsclin2_RXD_P10_6_IN,
        &IfxAsclin2_RXE_P33_8_IN,
        NULL_PTR,
        &IfxAsclin2_RXG_P02_0_IN
    },
    {
        &IfxAsclin3_RXA_P15_7_IN,
        NULL_PTR,
        &IfxAsclin3_RXC_P20_3_IN,
        NULL_PTR,
        &IfxAsclin3_RXE_P00_1_IN,
        &IfxAsclin3_RXF_P21_6_IN,
        NULL_PTR
    },
    {
        &IfxAsclin4_RXA_P00_12_IN,
        &IfxAsclin4_RXB_P34_2_IN,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin5_RXA_P00_6_IN,
        &IfxAsclin5_RXB_P33_4_IN,
        &IfxAsclin5_RXC_P22_3_IN,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        &IfxAsclin6_RXE_P22_0_IN,
        &IfxAsclin6_RXF_P23_1_IN,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        &IfxAsclin7_RXE_P22_1_IN,
        &IfxAsclin7_RXF_P22_4_IN,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR,
        &IfxAsclin8_RXC_P33_1_IN,
        &IfxAsclin8_RXD_P33_6_IN,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR,
        &IfxAsclin9_RXC_P14_7_IN,
        &IfxAsclin9_RXD_P14_9_IN,
        &IfxAsclin9_RXE_P20_6_IN,
        &IfxAsclin9_RXF_P20_7_IN,
        NULL_PTR
    },
    {
        &IfxAsclin10_RXA_P00_4_IN,
        &IfxAsclin10_RXB_P00_8_IN,
        &IfxAsclin10_RXC_P13_0_IN,
        &IfxAsclin10_RXD_P13_1_IN,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin11_RXA_P10_0_IN,
        &IfxAsclin11_RXB_P10_4_IN,
        &IfxAsclin11_RXC_P21_0_IN,
        &IfxAsclin11_RXD_P21_1_IN,
        &IfxAsclin11_RXE_P21_2_IN,
        &IfxAsclin11_RXF_P21_5_IN,
        NULL_PTR
    }
};

const IfxAsclin_Sclk_Out *IfxAsclin_Sclk_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_SCLK_OUT_NUM_ITEMS] = {
    {
        &IfxAsclin0_SCLK_P14_0_OUT,
        &IfxAsclin0_SCLK_P15_2_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin1_SCLK_P15_0_OUT,
        &IfxAsclin1_SCLK_P20_10_OUT,
        &IfxAsclin1_SCLK_P33_11_OUT,
        &IfxAsclin1_SCLK_P33_12_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin2_SCLK_P02_4_OUT,
        &IfxAsclin2_SCLK_P10_6_OUT,
        &IfxAsclin2_SCLK_P14_2_OUT,
        &IfxAsclin2_SCLK_P33_7_OUT,
        &IfxAsclin2_SCLK_P33_9_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin3_SCLK_P00_0_OUT,
        &IfxAsclin3_SCLK_P00_2_OUT,
        &IfxAsclin3_SCLK_P15_6_OUT,
        &IfxAsclin3_SCLK_P15_8_OUT,
        &IfxAsclin3_SCLK_P20_0_OUT,
        &IfxAsclin3_SCLK_P21_5_OUT,
        &IfxAsclin3_SCLK_P21_7_OUT,
        &IfxAsclin3_SCLK_P33_2_OUT
    },
    {
        &IfxAsclin4_SCLK_P00_10_OUT,
        &IfxAsclin4_SCLK_P34_3_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin5_SCLK_P33_3_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin6_SCLK_P23_1_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin8_SCLK_P02_8_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin10_SCLK_P13_2_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin11_SCLK_P21_3_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    }
};

const IfxAsclin_Slso_Out *IfxAsclin_Slso_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_SLSO_OUT_NUM_ITEMS] = {
    {
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin1_SLSO_P14_3_OUT,
        &IfxAsclin1_SLSO_P20_8_OUT,
        &IfxAsclin1_SLSO_P33_10_OUT,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin2_SLSO_P02_3_OUT,
        &IfxAsclin2_SLSO_P10_5_OUT,
        &IfxAsclin2_SLSO_P33_6_OUT,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin3_SLSO_P00_3_OUT,
        &IfxAsclin3_SLSO_P14_3_OUT,
        &IfxAsclin3_SLSO_P21_2_OUT,
        &IfxAsclin3_SLSO_P21_6_OUT,
        &IfxAsclin3_SLSO_P33_1_OUT
    },
    {
        &IfxAsclin4_SLSO_P00_11_OUT,
        &IfxAsclin4_SLSO_P22_4_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin5_SLSO_P14_8_OUT,
        &IfxAsclin5_SLSO_P33_5_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin7_SLSO_P14_8_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin10_SLSO_P13_3_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin11_SLSO_P21_4_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    }
};

const IfxAsclin_Tx_Out *IfxAsclin_Tx_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_TX_OUT_NUM_ITEMS] = {
    {
        &IfxAsclin0_TX_P14_0_OUT,
        &IfxAsclin0_TX_P14_1_OUT,
        &IfxAsclin0_TX_P15_2_OUT,
        &IfxAsclin0_TX_P15_3_OUT,
        &IfxAsclin0_TX_P33_9_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin1_TX_P02_2_OUT,
        &IfxAsclin1_TX_P11_12_OUT,
        &IfxAsclin1_TX_P14_10_OUT,
        &IfxAsclin1_TX_P15_0_OUT,
        &IfxAsclin1_TX_P15_1_OUT,
        &IfxAsclin1_TX_P15_4_OUT,
        &IfxAsclin1_TX_P15_5_OUT,
        &IfxAsclin1_TX_P20_10_OUT,
        &IfxAsclin1_TX_P33_12_OUT
    },
    {
        &IfxAsclin2_TX_P02_0_OUT,
        &IfxAsclin2_TX_P10_5_OUT,
        &IfxAsclin2_TX_P14_2_OUT,
        &IfxAsclin2_TX_P14_3_OUT,
        &IfxAsclin2_TX_P33_8_OUT,
        &IfxAsclin2_TX_P33_9_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin3_TX_P00_0_OUT,
        &IfxAsclin3_TX_P00_1_OUT,
        &IfxAsclin3_TX_P15_6_OUT,
        &IfxAsclin3_TX_P15_7_OUT,
        &IfxAsclin3_TX_P20_0_OUT,
        &IfxAsclin3_TX_P20_3_OUT,
        &IfxAsclin3_TX_P21_7_OUT,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin4_TX_P00_9_OUT,
        &IfxAsclin4_TX_P34_1_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin5_TX_P00_7_OUT,
        &IfxAsclin5_TX_P22_2_OUT,
        &IfxAsclin5_TX_P33_0_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin6_TX_P22_0_OUT,
        &IfxAsclin6_TX_P23_5_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin7_TX_P22_1_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin8_TX_P33_7_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin9_TX_P14_7_OUT,
        &IfxAsclin9_TX_P20_7_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin10_TX_P00_8_OUT,
        &IfxAsclin10_TX_P13_0_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin11_TX_P10_0_OUT,
        &IfxAsclin11_TX_P21_0_OUT,
        &IfxAsclin11_TX_P21_5_OUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    }
};
