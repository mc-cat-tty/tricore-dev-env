/**
 * \file IfxAgbt_reg.h
 * \brief
 * \copyright Copyright (c) 2020 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC33XED_UM_V1.5.0
 * Specification: TC3xx User Manual.V1.5.0
 * MAY BE CHANGED BY USER [yes/no]: No
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
 * \defgroup IfxSfr_Agbt_Registers_Cfg Agbt address
 * \ingroup IfxSfr_Agbt_Registers
 * 
 * \defgroup IfxSfr_Agbt_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Agbt_Registers_Cfg
 *
 * \defgroup IfxSfr_Agbt_Registers_Cfg_Agbt 2-AGBT
 * \ingroup IfxSfr_Agbt_Registers_Cfg
 *
 *
 */
#ifndef IFXAGBT_REG_H
#define IFXAGBT_REG_H 1
/******************************************************************************/
#include "IfxAgbt_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Agbt_Registers_Cfg_BaseAddress
 * \{  */

/** \brief AGBT object */
#define MODULE_AGBT /*lint --e(923, 9078)*/ ((*(Ifx_AGBT*)0xFA001000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Agbt_Registers_Cfg_Agbt
 * \{  */
/** \brief 0, Clock Control Register */
#define AGBT_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_CLC*)0xFA001000u)

/** \brief 8, Module Identification Register */
#define AGBT_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_ID*)0xFA001008u)

/** \brief 10, Trace Control Register */
#define AGBT_TCR /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_TCR*)0xFA001010u)

/** \brief 14, Trace Status Register */
#define AGBT_TSR /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_TSR*)0xFA001014u)

/** \brief 18, FIFO Control Register */
#define AGBT_FCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_FCTRL*)0xFA001018u)

/** \brief 1C, Trace Auto Channel UP */
#define AGBT_TACU /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_TACU*)0xFA00101Cu)

/** \brief 20, FIFO Block Fill Level */
#define AGBT_FBFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_FBFLV*)0xFA001020u)

/** \brief 24, Interrupt Status Register */
#define AGBT_IRS /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_IRS*)0xFA001024u)

/** \brief 28, Interrupt enable register */
#define AGBT_IRE /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_IRE*)0xFA001028u)

/** \brief 30, Physical layer Control Register 1 */
#define AGBT_PYCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_PYCR1*)0xFA001030u)

/** \brief 34, Physical layer Control Register 2 */
#define AGBT_PYCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_PYCR2*)0xFA001034u)

/** \brief 38, PLL analog part, Control Register 1 */
#define AGBT_PACR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_PACR1*)0xFA001038u)

/** \brief 3C, PLL analog part, Control Register 2 */
#define AGBT_PACR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_PACR2*)0xFA00103Cu)

/** \brief 40, PLL digital part, Control Register 1 */
#define AGBT_PDCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_PDCR1*)0xFA001040u)

/** \brief 4C, PLL digital part, status Register 1 */
#define AGBT_PDST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_PDST1*)0xFA00104Cu)

/** \brief EC, Kernel Reset Status Clear Register */
#define AGBT_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_KRSTCLR*)0xFA0010ECu)

/** \brief F0, Kernel Reset Register 1 */
#define AGBT_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_KRST1*)0xFA0010F0u)

/** \brief F4, Kernel Reset Register 0 */
#define AGBT_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_KRST0*)0xFA0010F4u)

/** \brief F8, Access Enable Register 1 */
#define AGBT_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_ACCEN1*)0xFA0010F8u)

/** \brief FC, Access Enable Register 0 */
#define AGBT_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_AGBT_ACCEN0*)0xFA0010FCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXAGBT_REG_H */
