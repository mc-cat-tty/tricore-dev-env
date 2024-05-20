/**
 * \file IfxEmem.c
 * \brief EMEM  basic functionality
 *
 * \version iLLD_1_0_1_17_0
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
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

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxEmem.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

IfxEmem_LockedState IfxEmem_getLockedState(void)
{
    return (IfxEmem_LockedState)MODULE_EMEM.SBRCTR.B.STBLOCK;
}


void IfxEmem_setClockEnableState(const IfxEmem_State state)
{
    /* bit is inverted */
    if (IfxEmem_State_enabled == state)
    {
        MODULE_EMEM.CLC.B.DISR = 0;
    }
    else
    {
        MODULE_EMEM.CLC.B.DISR = 1;
    }

    /* wait one cycle for module to be enabled */
    __nop();
}


void IfxEmem_setUnlockMode(Ifx_EMEM *ememCore)
{
    ememCore->SBRCTR.U = 0x2;
    ememCore->SBRCTR.U = 0x6;
    ememCore->SBRCTR.U = 0xE;
}


void IfxEmem_enableModule(Ifx_EMEM *ememCore)
{
    uint16 psw = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(psw); // clears the endinit protection
    ememCore->CLC.B.DISR = 0;       // enables the module
    IfxScuWdt_setCpuEndinit(psw);   // sets the endinit protection back on
}


void IfxEmem_disableModule(Ifx_EMEM *ememCore)
{
    uint16 psw = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(psw); // clears the endinit protection
    ememCore->CLC.B.DISR = 1;       // disables the module
    IfxScuWdt_setCpuEndinit(psw);   // sets the endinit protection back on
}


void IfxEmem_disableEccErrorReporting(IfxEmem_MpuIndex mpuIndex)
{
    uint16        psw = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(psw); // clears the endinit protection

    Ifx_EMEM_MPU *ememMpu = IfxEmem_getAddress(mpuIndex);

    ememMpu->MEMCON.U = ((ememMpu->MEMCON.U & ~(3 << 8)) | ((1 << 8) | (1 << 9)));

    IfxScuWdt_setCpuEndinit(psw);   // sets the endinit protection back on
}


void IfxEmem_enableEccErrorReporting(IfxEmem_MpuIndex mpuIndex)
{
    uint16        psw = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(psw); // clears the endinit protection

    Ifx_EMEM_MPU *ememMpu = IfxEmem_getAddress(mpuIndex);

    ememMpu->MEMCON.U = ((ememMpu->MEMCON.U & ~(3 << 8)) | (1 << 8));

    IfxScuWdt_setCpuEndinit(psw);   // sets the endinit protection back on
}


IfxEmem_MpuIndex IfxEmem_getIndex(Ifx_EMEM_MPU *ememMpu)
{
    uint32           index = 0;
    IfxEmem_MpuIndex result;

    result = IfxEmem_MpuIndex_none;

    for (index = 0; index < IFXEMEM_NUM_MPU_MODULES; index++)
    {
        if (IfxEmem_cfg_indexMap[index].module == ememMpu)
        {
            result = (IfxEmem_MpuIndex)IfxEmem_cfg_indexMap[index].index;
            break;
        }
    }

    return result;
}


Ifx_EMEM_MPU *IfxEmem_getAddress(IfxEmem_MpuIndex ememMpu)
{
    Ifx_EMEM_MPU *module = NULL_PTR;

    if (ememMpu < IFXEMEM_NUM_MPU_MODULES)
    {
        module = (Ifx_EMEM_MPU *)IfxEmem_cfg_indexMap[ememMpu].module;
    }
    else
    {
        module = NULL_PTR;
    }

    return module;
}
