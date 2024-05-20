/**
 * \file IfxAsclin_PinMap.h
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
 * \defgroup IfxLld_Asclin_pinmap ASCLIN Pin Mapping
 * \ingroup IfxLld_Asclin
 */

#ifndef IFXASCLIN_PINMAP_H
#define IFXASCLIN_PINMAP_H

#include <IfxAsclin_reg.h>
#include <_Impl/IfxAsclin_cfg.h>
#include <Port/Std/IfxPort.h>

/** \addtogroup IfxLld_Asclin_pinmap
 * \{ */

/** \brief CTS pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxAsclin_Cts_In;

/** \brief RX pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxAsclin_Rx_In;

/** \brief RTS pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxAsclin_Rts_Out;

/** \brief SCLK pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxAsclin_Sclk_Out;

/** \brief SLSO pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxAsclin_Slso_Out;

/** \brief TX pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxAsclin_Tx_Out;

IFX_EXTERN IfxAsclin_Cts_In IfxAsclin0_CTSA_P14_9_IN;  /**< \brief Clear to send input */
IFX_EXTERN IfxAsclin_Cts_In IfxAsclin1_CTSA_P20_7_IN;  /**< \brief Clear to send input */
IFX_EXTERN IfxAsclin_Cts_In IfxAsclin1_CTSB_P32_4_IN;  /**< \brief Clear to send input */
IFX_EXTERN IfxAsclin_Cts_In IfxAsclin2_CTSA_P10_7_IN;  /**< \brief Clear to send input */
IFX_EXTERN IfxAsclin_Cts_In IfxAsclin2_CTSB_P33_5_IN;  /**< \brief Clear to send input */
IFX_EXTERN IfxAsclin_Cts_In IfxAsclin3_CTSA_P00_12_IN;  /**< \brief Clear to send input */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin0_RTS_P14_7_OUT;  /**< \brief Ready to send output */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin1_RTS_P20_6_OUT;  /**< \brief Ready to send output */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin1_RTS_P23_1_OUT;  /**< \brief Ready to send output */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin2_RTS_P10_8_OUT;  /**< \brief Ready to send output */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin2_RTS_P33_4_OUT;  /**< \brief Ready to send output */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin3_RTS_P00_9_OUT;  /**< \brief Ready to send output */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin0_RXA_P14_1_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin0_RXB_P15_3_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin0_RXC_P01_8_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin0_RXD_P33_10_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin0_RXE_P13_11_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin10_RXA_P00_4_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin10_RXB_P00_8_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin10_RXC_P13_0_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin10_RXD_P13_1_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin11_RXA_P10_0_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin11_RXB_P10_4_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin11_RXC_P21_0_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin11_RXD_P21_1_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin11_RXE_P21_2_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin11_RXF_P21_5_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXA_P15_1_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXB_P15_5_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXC_P20_9_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXD_P14_8_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXE_P11_10_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXF_P33_13_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXG_P02_3_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin2_RXA_P14_3_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin2_RXB_P02_1_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin2_RXC_P02_10_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin2_RXD_P10_6_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin2_RXE_P33_8_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin2_RXF_P32_6_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin2_RXG_P02_0_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin3_RXA_P15_7_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin3_RXB_P11_0_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin3_RXC_P20_3_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin3_RXD_P32_2_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin3_RXE_P00_1_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin3_RXF_P21_6_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin3_RXG_P21_2_IN;  /**< \brief Differential Receive input (low active) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin3_RXG_P21_3_IN;  /**< \brief Differential Receive input (high active) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin3_RXH_P13_12_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin4_RXA_P00_12_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin4_RXB_P34_2_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin4_RXC_P22_6_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin4_RXD_P22_9_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin5_RXA_P00_6_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin5_RXB_P33_4_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin5_RXC_P22_3_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin5_RXD_P14_15_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin6_RXA_P23_3_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin6_RXB_P01_0_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin6_RXC_P32_6_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin6_RXD_P10_9_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin6_RXE_P22_0_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin6_RXF_P23_1_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin7_RXA_P14_15_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin7_RXB_P01_8_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin7_RXC_P23_2_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin7_RXD_P13_11_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin7_RXE_P22_1_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin7_RXF_P22_4_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin8_RXA_P02_9_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin8_RXB_P02_10_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin8_RXC_P33_1_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin8_RXD_P33_6_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin8_RXE_P34_5_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin9_RXA_P01_5_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin9_RXB_P01_7_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin9_RXC_P14_7_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin9_RXD_P14_9_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin9_RXE_P20_6_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin9_RXF_P20_7_IN;  /**< \brief Receive input */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P14_0_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P15_2_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin10_SCLK_P13_2_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin11_SCLK_P21_3_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P15_0_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P20_10_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P33_11_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P33_12_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P02_4_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P10_6_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P14_2_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P33_7_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin2_SCLK_P33_9_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P00_0_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P00_2_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P11_1_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P11_4_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P15_6_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P15_8_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P20_0_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P21_5_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P21_7_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P32_3_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin3_SCLK_P33_2_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin4_SCLK_P00_10_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin4_SCLK_P22_7_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin4_SCLK_P34_3_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin5_SCLK_P14_12_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin5_SCLK_P22_8_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin5_SCLK_P33_3_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin6_SCLK_P02_14_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin6_SCLK_P10_11_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin6_SCLK_P23_1_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin7_SCLK_P01_10_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin7_SCLK_P13_13_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin7_SCLK_P14_12_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin8_SCLK_P02_8_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin9_SCLK_P01_6_OUT;  /**< \brief Shift clock output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin10_SLSO_P13_3_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin11_SLSO_P21_4_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin1_SLSO_P14_3_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin1_SLSO_P20_8_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin1_SLSO_P33_10_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin2_SLSO_P02_3_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin2_SLSO_P10_5_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin2_SLSO_P33_6_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin3_SLSO_P00_3_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin3_SLSO_P12_1_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin3_SLSO_P14_3_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin3_SLSO_P21_2_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin3_SLSO_P21_6_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin3_SLSO_P33_1_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin4_SLSO_P00_11_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin4_SLSO_P22_11_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin4_SLSO_P22_4_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin4_SLSO_P34_4_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin5_SLSO_P14_8_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin5_SLSO_P33_5_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin6_SLSO_P02_12_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin6_SLSO_P10_13_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin6_SLSO_P23_4_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin7_SLSO_P01_11_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin7_SLSO_P13_15_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin7_SLSO_P14_8_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin8_SLSO_P02_11_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin9_SLSO_P01_4_OUT;  /**< \brief Slave select signal output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P01_13_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P13_10_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P14_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P14_1_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P15_2_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P15_3_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P33_9_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin10_TX_P00_8_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin10_TX_P13_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin11_TX_P10_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin11_TX_P21_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin11_TX_P21_5_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P02_2_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P11_12_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P14_10_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P14_15_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P15_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P15_1_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P15_4_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P15_5_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P20_10_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P33_12_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P33_13_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin2_TX_P02_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin2_TX_P02_9_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin2_TX_P10_5_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin2_TX_P14_2_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin2_TX_P14_3_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin2_TX_P32_5_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin2_TX_P33_8_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin2_TX_P33_9_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P00_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P00_1_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P11_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P11_1_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P13_9_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P15_6_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P15_7_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P20_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P20_3_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P21_7_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P22_0_OUT;  /**< \brief Differential Transmit output (low active) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P22_1_OUT;  /**< \brief Differential Transmit output (high active) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P32_2_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin3_TX_P32_3_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin4_TX_P00_9_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin4_TX_P22_10_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin4_TX_P22_5_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin4_TX_P34_1_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin5_TX_P00_7_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin5_TX_P14_14_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin5_TX_P22_2_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin5_TX_P33_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin6_TX_P01_1_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin6_TX_P02_15_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin6_TX_P10_10_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin6_TX_P22_0_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin6_TX_P23_5_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin6_TX_P32_7_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin7_TX_P01_12_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin7_TX_P01_9_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin7_TX_P13_12_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin7_TX_P14_14_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin7_TX_P22_1_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin7_TX_P23_3_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin8_TX_P02_9_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin8_TX_P33_7_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin8_TX_P34_5_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin9_TX_P01_7_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin9_TX_P14_7_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin9_TX_P20_7_OUT;  /**< \brief Transmit output */

/** \brief Table dimensions */
#define IFXASCLIN_PINMAP_NUM_MODULES 12
#define IFXASCLIN_PINMAP_CTS_IN_NUM_ITEMS 2
#define IFXASCLIN_PINMAP_RTS_OUT_NUM_ITEMS 2
#define IFXASCLIN_PINMAP_RX_IN_NUM_ITEMS 8
#define IFXASCLIN_PINMAP_SCLK_OUT_NUM_ITEMS 11
#define IFXASCLIN_PINMAP_SLSO_OUT_NUM_ITEMS 6
#define IFXASCLIN_PINMAP_TX_OUT_NUM_ITEMS 14


/** \brief IfxAsclin_Cts_In table */
IFX_EXTERN const IfxAsclin_Cts_In *IfxAsclin_Cts_In_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_CTS_IN_NUM_ITEMS];

/** \brief IfxAsclin_Rts_Out table */
IFX_EXTERN const IfxAsclin_Rts_Out *IfxAsclin_Rts_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_RTS_OUT_NUM_ITEMS];

/** \brief IfxAsclin_Rx_In table */
IFX_EXTERN const IfxAsclin_Rx_In *IfxAsclin_Rx_In_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_RX_IN_NUM_ITEMS];

/** \brief IfxAsclin_Sclk_Out table */
IFX_EXTERN const IfxAsclin_Sclk_Out *IfxAsclin_Sclk_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_SCLK_OUT_NUM_ITEMS];

/** \brief IfxAsclin_Slso_Out table */
IFX_EXTERN const IfxAsclin_Slso_Out *IfxAsclin_Slso_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_SLSO_OUT_NUM_ITEMS];

/** \brief IfxAsclin_Tx_Out table */
IFX_EXTERN const IfxAsclin_Tx_Out *IfxAsclin_Tx_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_TX_OUT_NUM_ITEMS];

/** \} */

#endif /* IFXASCLIN_PINMAP_H */
