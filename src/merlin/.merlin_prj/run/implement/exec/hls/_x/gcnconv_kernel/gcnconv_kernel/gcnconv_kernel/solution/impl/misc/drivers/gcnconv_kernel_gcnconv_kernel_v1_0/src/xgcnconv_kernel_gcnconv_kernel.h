// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.op (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XGCNCONV_KERNEL_GCNCONV_KERNEL_H
#define XGCNCONV_KERNEL_GCNCONV_KERNEL_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xgcnconv_kernel_gcnconv_kernel_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_BaseAddress;
} XGcnconv_kernel_gcnconv_kernel_Config;
#endif

typedef struct {
    u32 Control_BaseAddress;
    u32 IsReady;
} XGcnconv_kernel_gcnconv_kernel;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XGcnconv_kernel_gcnconv_kernel_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XGcnconv_kernel_gcnconv_kernel_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XGcnconv_kernel_gcnconv_kernel_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XGcnconv_kernel_gcnconv_kernel_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XGcnconv_kernel_gcnconv_kernel_Initialize(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u16 DeviceId);
XGcnconv_kernel_gcnconv_kernel_Config* XGcnconv_kernel_gcnconv_kernel_LookupConfig(u16 DeviceId);
int XGcnconv_kernel_gcnconv_kernel_CfgInitialize(XGcnconv_kernel_gcnconv_kernel *InstancePtr, XGcnconv_kernel_gcnconv_kernel_Config *ConfigPtr);
#else
int XGcnconv_kernel_gcnconv_kernel_Initialize(XGcnconv_kernel_gcnconv_kernel *InstancePtr, const char* InstanceName);
int XGcnconv_kernel_gcnconv_kernel_Release(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
#endif

void XGcnconv_kernel_gcnconv_kernel_Start(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
u32 XGcnconv_kernel_gcnconv_kernel_IsDone(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
u32 XGcnconv_kernel_gcnconv_kernel_IsIdle(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
u32 XGcnconv_kernel_gcnconv_kernel_IsReady(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
void XGcnconv_kernel_gcnconv_kernel_EnableAutoRestart(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
void XGcnconv_kernel_gcnconv_kernel_DisableAutoRestart(XGcnconv_kernel_gcnconv_kernel *InstancePtr);

void XGcnconv_kernel_gcnconv_kernel_Set_x_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u64 Data);
u64 XGcnconv_kernel_gcnconv_kernel_Get_x_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
void XGcnconv_kernel_gcnconv_kernel_Set_weight_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u64 Data);
u64 XGcnconv_kernel_gcnconv_kernel_Get_weight_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
void XGcnconv_kernel_gcnconv_kernel_Set_edge_index(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u64 Data);
u64 XGcnconv_kernel_gcnconv_kernel_Get_edge_index(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
void XGcnconv_kernel_gcnconv_kernel_Set_result_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u64 Data);
u64 XGcnconv_kernel_gcnconv_kernel_Get_result_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr);

void XGcnconv_kernel_gcnconv_kernel_InterruptGlobalEnable(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
void XGcnconv_kernel_gcnconv_kernel_InterruptGlobalDisable(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
void XGcnconv_kernel_gcnconv_kernel_InterruptEnable(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u32 Mask);
void XGcnconv_kernel_gcnconv_kernel_InterruptDisable(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u32 Mask);
void XGcnconv_kernel_gcnconv_kernel_InterruptClear(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u32 Mask);
u32 XGcnconv_kernel_gcnconv_kernel_InterruptGetEnabled(XGcnconv_kernel_gcnconv_kernel *InstancePtr);
u32 XGcnconv_kernel_gcnconv_kernel_InterruptGetStatus(XGcnconv_kernel_gcnconv_kernel *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
