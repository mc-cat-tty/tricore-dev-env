/**
 * \file IfxEdsadc_PinMap.h
 * \brief EDSADC I/O map
 * \ingroup IfxLld_Edsadc
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
 * \defgroup IfxLld_Edsadc_pinmap EDSADC Pin Mapping
 * \ingroup IfxLld_Edsadc
 */

#ifndef IFXEDSADC_PINMAP_H
#define IFXEDSADC_PINMAP_H

#include <IfxEdsadc_reg.h>
#include <_Impl/IfxEdsadc_cfg.h>
#include <Port/Std/IfxPort.h>

/** \addtogroup IfxLld_Edsadc_pinmap
 * \{ */

/** \brief DS negative pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;    /**< \brief Base address */
    IfxEdsadc_ChannelId channel;   /**< \brief Channel number */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    Ifx_RxSel         select;    /**< \brief Input multiplexer value */
} IfxEdsadc_Dsn_In;

/** \brief DS positive pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxEdsadc_ChannelId channel;  /**< \brief Channel number */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxEdsadc_Dsp_In;

/** \brief CIN pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxEdsadc_ChannelId channel;   /**< \brief Channel number */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxEdsadc_Cin_In;

/** \brief DIN pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxEdsadc_ChannelId channel;   /**< \brief Channel number */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxEdsadc_Din_In;

/** \brief DIN pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxEdsadc_ChannelId channel;   /**< \brief Channel number */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxEdsadc_Dscin_In;

/** \brief DIN pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxEdsadc_ChannelId channel;   /**< \brief Channel number */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxEdsadc_Dsdin_In;

/** \brief ITR pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxEdsadc_ChannelId channel;   /**< \brief Channel number */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxEdsadc_Itr_In;

/** \brief CGPWM pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxEdsadc_Cgpwm_Out;

/** \brief SG pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxEdsadc_Sg_In;

/** \brief COUT pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxEdsadc_ChannelId channel;  /**< \brief Channel number */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxEdsadc_Dscout_Out;

/** \brief COUT pin mapping structure */
typedef const struct
{
    Ifx_EDSADC*       module;   /**< \brief Base address */
    IfxEdsadc_ChannelId channel;   /**< \brief Channel number */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxEdsadc_Cout_Out;

IFX_EXTERN IfxEdsadc_Cgpwm_Out IfxEdsadc_CGPWMN_P00_5_OUT;  /**< \brief Negative carrier generator output */
IFX_EXTERN IfxEdsadc_Cgpwm_Out IfxEdsadc_CGPWMN_P02_0_OUT;  /**< \brief Negative carrier generator output */
IFX_EXTERN IfxEdsadc_Cgpwm_Out IfxEdsadc_CGPWMN_P33_11_OUT;  /**< \brief Negative carrier generator output */
IFX_EXTERN IfxEdsadc_Cgpwm_Out IfxEdsadc_CGPWMP_P00_6_OUT;  /**< \brief Positive carrier generator output */
IFX_EXTERN IfxEdsadc_Cgpwm_Out IfxEdsadc_CGPWMP_P02_1_OUT;  /**< \brief Positive carrier generator output */
IFX_EXTERN IfxEdsadc_Cgpwm_Out IfxEdsadc_CGPWMP_P33_12_OUT;  /**< \brief Positive carrier generator output */
IFX_EXTERN IfxEdsadc_Dscin_In IfxEdsadc_DSCIN0A_P00_11_IN;  /**< \brief Modulator clock input, channel 0 */
IFX_EXTERN IfxEdsadc_Dscin_In IfxEdsadc_DSCIN0B_P33_5_IN;  /**< \brief Modulator clock input, channel 0 */
IFX_EXTERN IfxEdsadc_Dscin_In IfxEdsadc_DSCIN1A_P00_9_IN;  /**< \brief Modulator clock input, channel 1 */
IFX_EXTERN IfxEdsadc_Dscin_In IfxEdsadc_DSCIN1B_P33_3_IN;  /**< \brief Modulator clock input, channel 1 */
IFX_EXTERN IfxEdsadc_Dscin_In IfxEdsadc_DSCIN2A_P00_5_IN;  /**< \brief Modulator clock input, channel 2 */
IFX_EXTERN IfxEdsadc_Dscin_In IfxEdsadc_DSCIN2B_P33_1_IN;  /**< \brief Modulator clock input, channel 2 */
IFX_EXTERN IfxEdsadc_Dscin_In IfxEdsadc_DSCIN3A_P00_3_IN;  /**< \brief Modulator clock input, channel 3 */
IFX_EXTERN IfxEdsadc_Dscin_In IfxEdsadc_DSCIN3B_P02_7_IN;  /**< \brief Modulator clock input, channel 3 */
IFX_EXTERN IfxEdsadc_Dscout_Out IfxEdsadc_DSCOUT0_P00_11_OUT;  /**< \brief Modulator clock output */
IFX_EXTERN IfxEdsadc_Dscout_Out IfxEdsadc_DSCOUT0_P33_5_OUT;  /**< \brief Modulator clock output */
IFX_EXTERN IfxEdsadc_Dscout_Out IfxEdsadc_DSCOUT1_P00_9_OUT;  /**< \brief Modulator clock output */
IFX_EXTERN IfxEdsadc_Dscout_Out IfxEdsadc_DSCOUT1_P33_3_OUT;  /**< \brief Modulator clock output */
IFX_EXTERN IfxEdsadc_Dscout_Out IfxEdsadc_DSCOUT2_P00_5_OUT;  /**< \brief Modulator clock output */
IFX_EXTERN IfxEdsadc_Dscout_Out IfxEdsadc_DSCOUT2_P33_1_OUT;  /**< \brief Modulator clock output */
IFX_EXTERN IfxEdsadc_Dscout_Out IfxEdsadc_DSCOUT3_P00_3_OUT;  /**< \brief Modulator clock output */
IFX_EXTERN IfxEdsadc_Dscout_Out IfxEdsadc_DSCOUT3_P02_7_OUT;  /**< \brief Modulator clock output */
IFX_EXTERN IfxEdsadc_Dsdin_In IfxEdsadc_DSDIN0A_P00_12_IN;  /**< \brief Digital datastream input, channel 0 */
IFX_EXTERN IfxEdsadc_Dsdin_In IfxEdsadc_DSDIN0B_P33_6_IN;  /**< \brief Digital datastream input, channel 0 */
IFX_EXTERN IfxEdsadc_Dsdin_In IfxEdsadc_DSDIN1A_P00_10_IN;  /**< \brief Digital datastream input, channel 1 */
IFX_EXTERN IfxEdsadc_Dsdin_In IfxEdsadc_DSDIN1B_P33_4_IN;  /**< \brief Digital datastream input, channel 1 */
IFX_EXTERN IfxEdsadc_Dsdin_In IfxEdsadc_DSDIN2A_P00_6_IN;  /**< \brief Digital datastream input, channel 2 */
IFX_EXTERN IfxEdsadc_Dsdin_In IfxEdsadc_DSDIN2B_P33_2_IN;  /**< \brief Digital datastream input, channel 2 */
IFX_EXTERN IfxEdsadc_Dsdin_In IfxEdsadc_DSDIN3A_P00_4_IN;  /**< \brief Digital datastream input, channel 3 */
IFX_EXTERN IfxEdsadc_Dsdin_In IfxEdsadc_DSDIN3B_P02_8_IN;  /**< \brief Digital datastream input, channel 3 */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS0NA_AN3_IN;  /**< \brief Negative analog input channel 0, pin A */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS0NB_AN13_IN;  /**< \brief Negative analog input channel 0, pin B */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS1NA_P40_7_IN;  /**< \brief Negative analog input channel 1, pin A */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS1NB_P40_9_IN;  /**< \brief Negative analog input channel 1, pin B */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS1NC_AN45_IN;  /**< \brief Negative analog input channel 1, pin C */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS1ND_AN47_IN;  /**< \brief Negative analog input channel 1, pin D */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS2NA_AN21_IN;  /**< \brief Negative analog input channel 2, pin A */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS2NB_P40_1_IN;  /**< \brief Negative analog input channel 2, pin B */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS3NA_AN1_IN;  /**< \brief Negative analog input channel 3, pin A */
IFX_EXTERN IfxEdsadc_Dsn_In IfxEdsadc_DS3NB_AN15_IN;  /**< \brief Negative analog input channel 3, pin N */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS0PA_AN2_IN;  /**< \brief Positive analog input channel 0, pin A */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS0PB_AN12_IN;  /**< \brief Positive analog input channel 0, pin B */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS1PA_P40_6_IN;  /**< \brief Positive analog input channel 1, pin A */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS1PB_P40_8_IN;  /**< \brief Positive analog input channel 1, pin B */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS1PC_AN44_IN;  /**< \brief Positive analog input channel 1, pin C */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS1PD_AN46_IN;  /**< \brief Positive analog input channel 1, pin D */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS2PA_AN20_IN;  /**< \brief Positive analog input channel 2, pin A */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS2PB_P40_0_IN;  /**< \brief Positive analog input channel 2, pin B */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS3PA_AN0_IN;  /**< \brief Positive analog input channel 3, pin A */
IFX_EXTERN IfxEdsadc_Dsp_In IfxEdsadc_DS3PB_AN14_IN;  /**< \brief Positive analog input channel 3, pin B */
IFX_EXTERN IfxEdsadc_Itr_In IfxEdsadc_ITR0E_P33_0_IN;  /**< \brief Trigger/Gate input, channel 0 */
IFX_EXTERN IfxEdsadc_Itr_In IfxEdsadc_ITR0F_P33_4_IN;  /**< \brief Trigger/Gate input, channel 0 */
IFX_EXTERN IfxEdsadc_Itr_In IfxEdsadc_ITR1E_P33_1_IN;  /**< \brief Trigger/Gate input, channel 1 */
IFX_EXTERN IfxEdsadc_Itr_In IfxEdsadc_ITR1F_P33_5_IN;  /**< \brief Trigger/Gate input, channel 1 */
IFX_EXTERN IfxEdsadc_Itr_In IfxEdsadc_ITR2E_P33_2_IN;  /**< \brief Trigger/Gate input, channel 2 */
IFX_EXTERN IfxEdsadc_Itr_In IfxEdsadc_ITR2F_P33_6_IN;  /**< \brief Trigger/Gate input, channel 2 */
IFX_EXTERN IfxEdsadc_Itr_In IfxEdsadc_ITR3E_P02_8_IN;  /**< \brief Trigger/Gate input, channel 3 */
IFX_EXTERN IfxEdsadc_Itr_In IfxEdsadc_ITR3F_P00_9_IN;  /**< \brief Trigger/Gate input, channel 3 */
IFX_EXTERN IfxEdsadc_Sg_In IfxEdsadc_SGNA_P00_4_IN;  /**< \brief Carrier sign signal input */
IFX_EXTERN IfxEdsadc_Sg_In IfxEdsadc_SGNB_P33_13_IN;  /**< \brief Carrier sign signal input */

/** \brief Table dimensions */
#define IFXEDSADC_PINMAP_NUM_MODULES 1
#define IFXEDSADC_PINMAP_NUM_CHANNELS 4
#define IFXEDSADC_PINMAP_CGPWM_OUT_NUM_ITEMS 6
#define IFXEDSADC_PINMAP_DSCIN_IN_NUM_ITEMS 2
#define IFXEDSADC_PINMAP_DSCOUT_OUT_NUM_ITEMS 2
#define IFXEDSADC_PINMAP_DSDIN_IN_NUM_ITEMS 2
#define IFXEDSADC_PINMAP_DSN_IN_NUM_ITEMS 4
#define IFXEDSADC_PINMAP_DSP_IN_NUM_ITEMS 4
#define IFXEDSADC_PINMAP_ITR_IN_NUM_ITEMS 6
#define IFXEDSADC_PINMAP_SG_IN_NUM_ITEMS 2


/** \brief IfxEdsadc_Cgpwm_Out table */
IFX_EXTERN const IfxEdsadc_Cgpwm_Out *IfxEdsadc_Cgpwm_Out_pinTable[IFXEDSADC_PINMAP_NUM_MODULES][IFXEDSADC_PINMAP_CGPWM_OUT_NUM_ITEMS];

/** \brief IfxEdsadc_Dscin_In table */
IFX_EXTERN const IfxEdsadc_Dscin_In *IfxEdsadc_Dscin_In_pinTable[IFXEDSADC_PINMAP_NUM_MODULES][IFXEDSADC_PINMAP_NUM_CHANNELS][IFXEDSADC_PINMAP_DSCIN_IN_NUM_ITEMS];

/** \brief IfxEdsadc_Dscout_Out table */
IFX_EXTERN const IfxEdsadc_Dscout_Out *IfxEdsadc_Dscout_Out_pinTable[IFXEDSADC_PINMAP_NUM_MODULES][IFXEDSADC_PINMAP_NUM_CHANNELS][IFXEDSADC_PINMAP_DSCOUT_OUT_NUM_ITEMS];

/** \brief IfxEdsadc_Dsdin_In table */
IFX_EXTERN const IfxEdsadc_Dsdin_In *IfxEdsadc_Dsdin_In_pinTable[IFXEDSADC_PINMAP_NUM_MODULES][IFXEDSADC_PINMAP_NUM_CHANNELS][IFXEDSADC_PINMAP_DSDIN_IN_NUM_ITEMS];

/** \brief IfxEdsadc_Dsn_In table */
IFX_EXTERN const IfxEdsadc_Dsn_In *IfxEdsadc_Dsn_In_pinTable[IFXEDSADC_PINMAP_NUM_MODULES][IFXEDSADC_PINMAP_NUM_CHANNELS][IFXEDSADC_PINMAP_DSN_IN_NUM_ITEMS];

/** \brief IfxEdsadc_Dsp_In table */
IFX_EXTERN const IfxEdsadc_Dsp_In *IfxEdsadc_Dsp_In_pinTable[IFXEDSADC_PINMAP_NUM_MODULES][IFXEDSADC_PINMAP_NUM_CHANNELS][IFXEDSADC_PINMAP_DSP_IN_NUM_ITEMS];

/** \brief IfxEdsadc_Itr_In table */
IFX_EXTERN const IfxEdsadc_Itr_In *IfxEdsadc_Itr_In_pinTable[IFXEDSADC_PINMAP_NUM_MODULES][IFXEDSADC_PINMAP_NUM_CHANNELS][IFXEDSADC_PINMAP_ITR_IN_NUM_ITEMS];

/** \brief IfxEdsadc_Sg_In table */
IFX_EXTERN const IfxEdsadc_Sg_In *IfxEdsadc_Sg_In_pinTable[IFXEDSADC_PINMAP_NUM_MODULES][IFXEDSADC_PINMAP_SG_IN_NUM_ITEMS];

/** \} */

#endif /* IFXEDSADC_PINMAP_H */
