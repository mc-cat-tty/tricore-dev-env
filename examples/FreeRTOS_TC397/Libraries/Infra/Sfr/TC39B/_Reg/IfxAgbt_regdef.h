/**
 * \file IfxAgbt_regdef.h
 * \brief
 * \copyright Copyright (c) 2020 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC39XB_UM_V1.5.0
 * Specification: TC3xx User Manual V1.5.0
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
 * \defgroup IfxSfr_Agbt_Registers Agbt Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Agbt_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Agbt_Registers
 * 
 * \defgroup IfxSfr_Agbt_Registers_union Register unions
 * \ingroup IfxSfr_Agbt_Registers
 * 
 * \defgroup IfxSfr_Agbt_Registers_struct Memory map
 * \ingroup IfxSfr_Agbt_Registers
 */
#ifndef IFXAGBT_REGDEF_H
#define IFXAGBT_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Agbt_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_AGBT_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID 0 - EN0 (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID 1 - EN1 (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID 2 - EN2 (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID 3 - EN3 (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID 4 - EN4 (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID 5 - EN5 (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID 6 - EN6 (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID 7 - EN7 (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID 8 - EN8 (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID 9 - EN9 (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID 10 - EN10 (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID 11 - EN11 (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID 12 - EN12 (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID 13 - EN13 (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID 14 - EN14 (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID 15 - EN15 (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID 16 - EN16 (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID 17 - EN17 (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID 18 - EN18 (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID 19 - EN19 (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID 20 - EN20 (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID 21 - EN21 (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID 22 - EN22 (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID 23 - EN23 (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID 24 - EN24 (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID 25 - EN25 (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID 26 - EN26 (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID 27 - EN27 (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID 28 - EN28 (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID 29 - EN29 (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID 30 - EN30 (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID 31 - EN31 (rw) */
} Ifx_AGBT_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_AGBT_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_AGBT_ACCEN1_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_AGBT_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_AGBT_CLC_Bits;

/** \brief FIFO Block Fill Level */
typedef struct _Ifx_AGBT_FBFLV_Bits
{
    Ifx_UReg_32Bit CURLVL:8;          /**< \brief [7:0] Current FIFO Fill Level - CURLVL (rh) */
    Ifx_UReg_32Bit MAXLVL:8;          /**< \brief [15:8] Maximum FIFO Fill Level - MAXLVL (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_AGBT_FBFLV_Bits;

/** \brief FIFO Control Register */
typedef struct _Ifx_AGBT_FCTRL_Bits
{
    Ifx_UReg_32Bit WMLVL:8;           /**< \brief [7:0] Watermark Level - WMLVL (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_AGBT_FCTRL_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_AGBT_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUM:16;        /**< \brief [31:16] Module Number - MOD_NUM (r) */
} Ifx_AGBT_ID_Bits;

/** \brief Interrupt enable register */
typedef struct _Ifx_AGBT_IRE_Bits
{
    Ifx_UReg_32Bit OFWE:1;            /**< \brief [0:0] FIFO overflow enable - OFWE (rw) */
    Ifx_UReg_32Bit WME:1;             /**< \brief [1:1] Watermark interrupt enable - WME (rw) */
    Ifx_UReg_32Bit HWE:1;             /**< \brief [2:2] Hardware error indication interrupt enable - HWE (rw) */
    Ifx_UReg_32Bit FERE:1;            /**< \brief [3:3] Truncated Frame error interrupt enable - FERE (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_AGBT_IRE_Bits;

/** \brief Interrupt Status Register */
typedef struct _Ifx_AGBT_IRS_Bits
{
    Ifx_UReg_32Bit OFW:1;             /**< \brief [0:0] FIFO overflow - OFW (rwh) */
    Ifx_UReg_32Bit WM:1;              /**< \brief [1:1] FIFO watermark interrupt - WM (rwh) */
    Ifx_UReg_32Bit HW:1;              /**< \brief [2:2] Hardware error indication interrupt - HW (rwh) */
    Ifx_UReg_32Bit FER:1;             /**< \brief [3:3] Truncated Frame - FER (rwh) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_AGBT_IRS_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_AGBT_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_AGBT_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_AGBT_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_AGBT_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_AGBT_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_AGBT_KRSTCLR_Bits;

/** \brief PLL analog part, Control Register 1 */
typedef struct _Ifx_AGBT_PACR1_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit RBUF2G5:4;         /**< \brief [11:8] RBUF2G5 - RBUF2G5 (rw) */
    Ifx_UReg_32Bit IBUF2G5:2;         /**< \brief [13:12] IBUF2G5 - IBUF2G5 (rw) */
    Ifx_UReg_32Bit IBUFDCO:2;         /**< \brief [15:14] IBUFDCO - IBUFDCO (rw) */
    Ifx_UReg_32Bit IDIV2F5G:2;        /**< \brief [17:16] IDIV2F5G - IDIV2F5G (rw) */
    Ifx_UReg_32Bit IDIV4F5G:2;        /**< \brief [19:18] IDIV4F5G - IDIV4F5G (rw) */
    Ifx_UReg_32Bit IDCOLDO:2;         /**< \brief [21:20] IDCOLDO - IDCOLDO (rw) */
    Ifx_UReg_32Bit IPICOND:2;         /**< \brief [23:22] IPICOND - IPICOND (rw) */
    Ifx_UReg_32Bit IPI:2;             /**< \brief [25:24] IPI - IPI (rw) */
    Ifx_UReg_32Bit BETALKD:4;         /**< \brief [29:26] BETALKD - BETALKD (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_AGBT_PACR1_Bits;

/** \brief PLL analog part, Control Register 2 */
typedef struct _Ifx_AGBT_PACR2_Bits
{
    Ifx_UReg_32Bit RDIV2F5G:4;        /**< \brief [3:0] RDIV2F5G - RDIV2F5G (rw) */
    Ifx_UReg_32Bit RDIV4F5G:4;        /**< \brief [7:4] RDIV4F5G - RDIV4F5G (rw) */
    Ifx_UReg_32Bit DCLKDEN:1;         /**< \brief [8:8] DCLKDEN - DCLKDEN (rw) */
    Ifx_UReg_32Bit DCLKIEN:1;         /**< \brief [9:9] DCLKIEN - DCLKIEN (rw) */
    Ifx_UReg_32Bit FRACMEN:1;         /**< \brief [10:10] FRACMEN - FRACMEN (rw) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit LDOVREFS:3;        /**< \brief [14:12] LDOVREFS - LDOVREFS (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit MMDSEL:7;          /**< \brief [22:16] MMDSEL - MMDSEL (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit PICAPSEL:3;        /**< \brief [26:24] PICAPSEL - PICAPSEL (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_AGBT_PACR2_Bits;

/** \brief PLL digital part, Control Register 1 */
typedef struct _Ifx_AGBT_PDCR1_Bits
{
    Ifx_UReg_32Bit ALPHAP:4;          /**< \brief [3:0] ALPHAP - ALPHAP (rw) */
    Ifx_UReg_32Bit GAMMAP:4;          /**< \brief [7:4] GAMMAP - GAMMAP (rw) */
    Ifx_UReg_32Bit reserved_8:7;      /**< \brief [14:8] \internal Reserved */
    Ifx_UReg_32Bit ACCFACQ:1;         /**< \brief [15:15] ACCFACQ - ACCFACQ (rw) */
    Ifx_UReg_32Bit LFWACCM:4;         /**< \brief [19:16] LFWACCM - LFWACCM (rw) */
    Ifx_UReg_32Bit UDCW:4;            /**< \brief [23:20] UDCW - UDCW (rw) */
    Ifx_UReg_32Bit ENBYCAL:1;         /**< \brief [24:24] ENBYCAL - ENBYCAL (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_AGBT_PDCR1_Bits;

/** \brief PLL digital part, status Register 1 */
typedef struct _Ifx_AGBT_PDST1_Bits
{
    Ifx_UReg_32Bit PDST12:1;          /**< \brief [0:0] PDST12 - PDST12 (r) */
    Ifx_UReg_32Bit PDST13:1;          /**< \brief [1:1] PDST13 - PDST13 (r) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_AGBT_PDST1_Bits;

/** \brief Physical layer Control Register 1 */
typedef struct _Ifx_AGBT_PYCR1_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit IPLL25U:2;         /**< \brief [3:2] IPLL25U - IPLL25U (rw) */
    Ifx_UReg_32Bit reserved_4:12;     /**< \brief [15:4] \internal Reserved */
    Ifx_UReg_32Bit ITXOCD25:2;        /**< \brief [17:16] ITXOCD25 - ITXOCD25 (rw) */
    Ifx_UReg_32Bit ITXOCD50:2;        /**< \brief [19:18] ITXOCD50 - ITXOCD50 (rw) */
    Ifx_UReg_32Bit ITXOCDVR:2;        /**< \brief [21:20] ITXOCDVR - ITXOCDVR (rw) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_AGBT_PYCR1_Bits;

/** \brief Physical layer Control Register 2 */
typedef struct _Ifx_AGBT_PYCR2_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit TXLDOVS:3;         /**< \brief [6:4] TXLDOVS - TXLDOVS (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit TXOCDSLE:5;        /**< \brief [12:8] TXOCDSLE - TXOCDSLE (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit TXOCDSL:3;         /**< \brief [18:16] TXOCDSL - TXOCDSL (rw) */
    Ifx_UReg_32Bit TXDEEMPH:1;        /**< \brief [19:19] TXDEEMPH - TXDEEMPH (rw) */
    Ifx_UReg_32Bit TXSERRST:1;        /**< \brief [20:20] TXSERRST - TXSERRST (rwh) */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit CKRXDIV2:1;        /**< \brief [22:22] CKRXDIV2 - CKRXDIV2 (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit CKRXTERM:3;        /**< \brief [26:24] CKRXTERM - CKRXTERM (rw) */
    Ifx_UReg_32Bit TXSRINVC:1;        /**< \brief [27:27] TXSRINVC - TXSRINVC (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_AGBT_PYCR2_Bits;

/** \brief Trace Auto Channel UP */
typedef struct _Ifx_AGBT_TACU_Bits
{
    Ifx_UReg_32Bit ACIC:31;           /**< \brief [30:0] Automatic Channel Initialization Counter - ACIC (rw) */
    Ifx_UReg_32Bit ACIEN:1;           /**< \brief [31:31] Automatic Channel Initialization enable - ACIEN (rw) */
} Ifx_AGBT_TACU_Bits;

/** \brief Trace Control Register */
typedef struct _Ifx_AGBT_TCR_Bits
{
    Ifx_UReg_32Bit TE:1;              /**< \brief [0:0] Trace Enable - TE (rwh) */
    Ifx_UReg_32Bit PLLE:1;            /**< \brief [1:1] PLL reset - PLLE (rw) */
    Ifx_UReg_32Bit TXA:1;             /**< \brief [2:2] Initialized - TXA (rwh) */
    Ifx_UReg_32Bit PON:1;             /**< \brief [3:3] Power On - PON (rw) */
    Ifx_UReg_32Bit TPV:1;             /**< \brief [4:4] Trace Port Verified - TPV (rwh) */
    Ifx_UReg_32Bit BD:3;              /**< \brief [7:5] Baud rate selection/availability - BD (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit AGBTON:1;          /**< \brief [16:16] AGBT on - AGBTON (rw) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit CRCON:1;           /**< \brief [18:18] CRC append at the end of a data block on. - CRCON (rw) */
    Ifx_UReg_32Bit ATPMON:1;          /**< \brief [19:19] Aurora Test Pattern Mode - ATPMON (rw) */
    Ifx_UReg_32Bit ARDT:2;            /**< \brief [21:20] ADAS Raw Data Transfer - ARDT (rw) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_AGBT_TCR_Bits;

/** \brief Trace Status Register */
typedef struct _Ifx_AGBT_TSR_Bits
{
    Ifx_UReg_32Bit TXLNUP:1;          /**< \brief [0:0] TX lane up - TXLNUP (rh) */
    Ifx_UReg_32Bit FBE:1;             /**< \brief [1:1] FIFO Buffer empty indication - FBE (rh) */
    Ifx_UReg_32Bit PLK:1;             /**< \brief [2:2] PLL lock status - PLK (rh) */
    Ifx_UReg_32Bit ATBS:2;            /**< \brief [4:3] AGBT Trace Buffer Size - ATBS (rh) */
    Ifx_UReg_32Bit reserved_5:26;     /**< \brief [30:5] \internal Reserved */
    Ifx_UReg_32Bit CHUP:1;            /**< \brief [31:31] Channel up - CHUP (rh) */
} Ifx_AGBT_TSR_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_agbt_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_AGBT_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_AGBT_ACCEN1;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_AGBT_CLC;

/** \brief FIFO Block Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_FBFLV_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_FBFLV;

/** \brief FIFO Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_FCTRL_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_FCTRL;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_AGBT_ID;

/** \brief Interrupt enable register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_IRE_Bits B;              /**< \brief Bitfield access */
} Ifx_AGBT_IRE;

/** \brief Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_IRS_Bits B;              /**< \brief Bitfield access */
} Ifx_AGBT_IRS;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_KRST0_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_KRST1_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_KRSTCLR_Bits B;          /**< \brief Bitfield access */
} Ifx_AGBT_KRSTCLR;

/** \brief PLL analog part, Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_PACR1_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_PACR1;

/** \brief PLL analog part, Control Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_PACR2_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_PACR2;

/** \brief PLL digital part, Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_PDCR1_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_PDCR1;

/** \brief PLL digital part, status Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_PDST1_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_PDST1;

/** \brief Physical layer Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_PYCR1_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_PYCR1;

/** \brief Physical layer Control Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_PYCR2_Bits B;            /**< \brief Bitfield access */
} Ifx_AGBT_PYCR2;

/** \brief Trace Auto Channel UP   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_TACU_Bits B;             /**< \brief Bitfield access */
} Ifx_AGBT_TACU;

/** \brief Trace Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_TCR_Bits B;              /**< \brief Bitfield access */
} Ifx_AGBT_TCR;

/** \brief Trace Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AGBT_TSR_Bits B;              /**< \brief Bitfield access */
} Ifx_AGBT_TSR;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Agbt_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief AGBT object */
typedef volatile struct _Ifx_AGBT
{
       Ifx_AGBT_CLC                        CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_AGBT_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_AGBT_TCR                        TCR;                    /**< \brief 10, Trace Control Register*/
       Ifx_AGBT_TSR                        TSR;                    /**< \brief 14, Trace Status Register*/
       Ifx_AGBT_FCTRL                      FCTRL;                  /**< \brief 18, FIFO Control Register*/
       Ifx_AGBT_TACU                       TACU;                   /**< \brief 1C, Trace Auto Channel UP*/
       Ifx_AGBT_FBFLV                      FBFLV;                  /**< \brief 20, FIFO Block Fill Level*/
       Ifx_AGBT_IRS                        IRS;                    /**< \brief 24, Interrupt Status Register*/
       Ifx_AGBT_IRE                        IRE;                    /**< \brief 28, Interrupt enable register*/
       Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, \internal Reserved */
       Ifx_AGBT_PYCR1                      PYCR1;                  /**< \brief 30, Physical layer Control Register 1*/
       Ifx_AGBT_PYCR2                      PYCR2;                  /**< \brief 34, Physical layer Control Register 2*/
       Ifx_AGBT_PACR1                      PACR1;                  /**< \brief 38, PLL analog part, Control Register 1*/
       Ifx_AGBT_PACR2                      PACR2;                  /**< \brief 3C, PLL analog part, Control Register 2*/
       Ifx_AGBT_PDCR1                      PDCR1;                  /**< \brief 40, PLL digital part, Control Register 1*/
       Ifx_UReg_8Bit                       reserved_44[8];         /**< \brief 44, \internal Reserved */
       Ifx_AGBT_PDST1                      PDST1;                  /**< \brief 4C, PLL digital part, status Register 1*/
       Ifx_UReg_8Bit                       reserved_50[156];       /**< \brief 50, \internal Reserved */
       Ifx_AGBT_KRSTCLR                    KRSTCLR;                /**< \brief EC, Kernel Reset Status Clear Register*/
       Ifx_AGBT_KRST1                      KRST1;                  /**< \brief F0, Kernel Reset Register 1*/
       Ifx_AGBT_KRST0                      KRST0;                  /**< \brief F4, Kernel Reset Register 0*/
       Ifx_AGBT_ACCEN1                     ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_AGBT_ACCEN0                     ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
} Ifx_AGBT;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXAGBT_REGDEF_H */
