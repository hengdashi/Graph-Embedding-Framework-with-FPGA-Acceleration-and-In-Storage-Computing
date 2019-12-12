// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.op (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xgcnconv_kernel_gcnconv_kernel.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XGcnconv_kernel_gcnconv_kernel_CfgInitialize(XGcnconv_kernel_gcnconv_kernel *InstancePtr, XGcnconv_kernel_gcnconv_kernel_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XGcnconv_kernel_gcnconv_kernel_Start(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_AP_CTRL) & 0x80;
    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XGcnconv_kernel_gcnconv_kernel_IsDone(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XGcnconv_kernel_gcnconv_kernel_IsIdle(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XGcnconv_kernel_gcnconv_kernel_IsReady(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XGcnconv_kernel_gcnconv_kernel_EnableAutoRestart(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XGcnconv_kernel_gcnconv_kernel_DisableAutoRestart(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_AP_CTRL, 0);
}

void XGcnconv_kernel_gcnconv_kernel_Set_x_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_X_DATA_DATA, (u32)(Data));
    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_X_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XGcnconv_kernel_gcnconv_kernel_Get_x_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_X_DATA_DATA);
    Data += (u64)XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_X_DATA_DATA + 4) << 32;
    return Data;
}

void XGcnconv_kernel_gcnconv_kernel_Set_weight_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_WEIGHT_DATA_DATA, (u32)(Data));
    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_WEIGHT_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XGcnconv_kernel_gcnconv_kernel_Get_weight_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_WEIGHT_DATA_DATA);
    Data += (u64)XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_WEIGHT_DATA_DATA + 4) << 32;
    return Data;
}

void XGcnconv_kernel_gcnconv_kernel_Set_edge_index(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_EDGE_INDEX_DATA, (u32)(Data));
    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_EDGE_INDEX_DATA + 4, (u32)(Data >> 32));
}

u64 XGcnconv_kernel_gcnconv_kernel_Get_edge_index(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_EDGE_INDEX_DATA);
    Data += (u64)XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_EDGE_INDEX_DATA + 4) << 32;
    return Data;
}

void XGcnconv_kernel_gcnconv_kernel_Set_result_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_RESULT_DATA_DATA, (u32)(Data));
    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_RESULT_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XGcnconv_kernel_gcnconv_kernel_Get_result_data(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_RESULT_DATA_DATA);
    Data += (u64)XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_RESULT_DATA_DATA + 4) << 32;
    return Data;
}

void XGcnconv_kernel_gcnconv_kernel_InterruptGlobalEnable(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_GIE, 1);
}

void XGcnconv_kernel_gcnconv_kernel_InterruptGlobalDisable(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_GIE, 0);
}

void XGcnconv_kernel_gcnconv_kernel_InterruptEnable(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_IER);
    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_IER, Register | Mask);
}

void XGcnconv_kernel_gcnconv_kernel_InterruptDisable(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_IER);
    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_IER, Register & (~Mask));
}

void XGcnconv_kernel_gcnconv_kernel_InterruptClear(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcnconv_kernel_gcnconv_kernel_WriteReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_ISR, Mask);
}

u32 XGcnconv_kernel_gcnconv_kernel_InterruptGetEnabled(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_IER);
}

u32 XGcnconv_kernel_gcnconv_kernel_InterruptGetStatus(XGcnconv_kernel_gcnconv_kernel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XGcnconv_kernel_gcnconv_kernel_ReadReg(InstancePtr->Control_BaseAddress, XGCNCONV_KERNEL_GCNCONV_KERNEL_CONTROL_ADDR_ISR);
}

