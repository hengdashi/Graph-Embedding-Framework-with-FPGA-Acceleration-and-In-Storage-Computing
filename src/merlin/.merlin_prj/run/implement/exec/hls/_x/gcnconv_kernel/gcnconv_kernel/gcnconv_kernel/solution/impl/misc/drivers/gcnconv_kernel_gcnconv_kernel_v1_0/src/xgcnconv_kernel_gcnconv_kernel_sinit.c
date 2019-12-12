// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.op (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xgcnconv_kernel_gcnconv_kernel.h"

extern XGcnconv_kernel_gcnconv_kernel_Config XGcnconv_kernel_gcnconv_kernel_ConfigTable[];

XGcnconv_kernel_gcnconv_kernel_Config *XGcnconv_kernel_gcnconv_kernel_LookupConfig(u16 DeviceId) {
	XGcnconv_kernel_gcnconv_kernel_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XGCNCONV_KERNEL_GCNCONV_KERNEL_NUM_INSTANCES; Index++) {
		if (XGcnconv_kernel_gcnconv_kernel_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XGcnconv_kernel_gcnconv_kernel_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XGcnconv_kernel_gcnconv_kernel_Initialize(XGcnconv_kernel_gcnconv_kernel *InstancePtr, u16 DeviceId) {
	XGcnconv_kernel_gcnconv_kernel_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XGcnconv_kernel_gcnconv_kernel_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XGcnconv_kernel_gcnconv_kernel_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

