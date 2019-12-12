set moduleName gcnconv_kernel
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 1
set StallSigGenFlag 1
set isEnableWaveformDebug 1
set C_modelName {gcnconv_kernel}
set C_modelType { void 0 }
set C_modelArgList {
	{ gmem int 512 regular {axi_master 2}  }
	{ x_data int 64 regular {axi_slave 0}  }
	{ weight_data int 64 regular {axi_slave 0}  }
	{ edge_index int 64 regular {axi_slave 0}  }
	{ result_data int 64 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "gmem", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 216720,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":8,"up":15,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 1,"up" : 1,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 1,"up" : 1,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 216720,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":16,"up":23,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 2,"up" : 2,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 2,"up" : 2,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 216720,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":24,"up":31,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 3,"up" : 3,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 3,"up" : 3,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 216720,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]},{"low":32,"up":39,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 4,"up" : 4,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 4,"up" : 4,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 1,"up" : 216721,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]},{"low":40,"up":47,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 5,"up" : 5,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 5,"up" : 5,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 1,"up" : 216721,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]},{"low":48,"up":55,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 6,"up" : 6,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 6,"up" : 6,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 1,"up" : 216721,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]},{"low":56,"up":63,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 7,"up" : 7,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 7,"up" : 7,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 1,"up" : 216721,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]},{"low":64,"up":71,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 8,"up" : 8,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 8,"up" : 8,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 2,"up" : 216722,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]},{"low":72,"up":79,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 9,"up" : 9,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 9,"up" : 9,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 2,"up" : 216722,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]},{"low":80,"up":87,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 10,"up" : 10,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 10,"up" : 10,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 2,"up" : 216722,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]},{"low":88,"up":95,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 11,"up" : 11,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 11,"up" : 11,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 2,"up" : 216722,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]},{"low":96,"up":103,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 12,"up" : 12,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 12,"up" : 12,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 3,"up" : 216723,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 12,"up" : 12,"step" : 2}]}]},{"low":104,"up":111,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 13,"up" : 13,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 13,"up" : 13,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 3,"up" : 216723,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 13,"up" : 13,"step" : 2}]}]},{"low":112,"up":119,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 14,"up" : 14,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 14,"up" : 14,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 3,"up" : 216723,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 14,"up" : 14,"step" : 2}]}]},{"low":120,"up":127,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 15,"up" : 15,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 15,"up" : 15,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 3,"up" : 216723,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 15,"up" : 15,"step" : 2}]}]},{"low":128,"up":135,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 16,"up" : 16,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 16,"up" : 16,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 4,"up" : 216724,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 16,"up" : 16,"step" : 2}]}]},{"low":136,"up":143,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 17,"up" : 17,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 17,"up" : 17,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 4,"up" : 216724,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 17,"up" : 17,"step" : 2}]}]},{"low":144,"up":151,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 18,"up" : 18,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 18,"up" : 18,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 4,"up" : 216724,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 18,"up" : 18,"step" : 2}]}]},{"low":152,"up":159,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 19,"up" : 19,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 19,"up" : 19,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 4,"up" : 216724,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 19,"up" : 19,"step" : 2}]}]},{"low":160,"up":167,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 20,"up" : 20,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 20,"up" : 20,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 5,"up" : 216725,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 20,"up" : 20,"step" : 2}]}]},{"low":168,"up":175,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 21,"up" : 21,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 21,"up" : 21,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 5,"up" : 216725,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 21,"up" : 21,"step" : 2}]}]},{"low":176,"up":183,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 22,"up" : 22,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 22,"up" : 22,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 5,"up" : 216725,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 22,"up" : 22,"step" : 2}]}]},{"low":184,"up":191,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 23,"up" : 23,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 23,"up" : 23,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 5,"up" : 216725,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 23,"up" : 23,"step" : 2}]}]},{"low":192,"up":199,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 24,"up" : 24,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 24,"up" : 24,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 6,"up" : 216726,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 24,"up" : 24,"step" : 2}]}]},{"low":200,"up":207,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 25,"up" : 25,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 25,"up" : 25,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 6,"up" : 216726,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 25,"up" : 25,"step" : 2}]}]},{"low":208,"up":215,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 26,"up" : 26,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 26,"up" : 26,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 6,"up" : 216726,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 26,"up" : 26,"step" : 2}]}]},{"low":216,"up":223,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 27,"up" : 27,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 27,"up" : 27,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 6,"up" : 216726,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 27,"up" : 27,"step" : 2}]}]},{"low":224,"up":231,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 28,"up" : 28,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 28,"up" : 28,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 7,"up" : 216727,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 28,"up" : 28,"step" : 2}]}]},{"low":232,"up":239,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 29,"up" : 29,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 29,"up" : 29,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 7,"up" : 216727,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 29,"up" : 29,"step" : 2}]}]},{"low":240,"up":247,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 30,"up" : 30,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 30,"up" : 30,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 7,"up" : 216727,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 30,"up" : 30,"step" : 2}]}]},{"low":248,"up":255,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 31,"up" : 31,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 31,"up" : 31,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 7,"up" : 216727,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 31,"up" : 31,"step" : 2}]}]},{"low":256,"up":263,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 32,"up" : 32,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 32,"up" : 32,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 8,"up" : 216728,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 32,"up" : 32,"step" : 2}]}]},{"low":264,"up":271,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 33,"up" : 33,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 33,"up" : 33,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 8,"up" : 216728,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 33,"up" : 33,"step" : 2}]}]},{"low":272,"up":279,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 34,"up" : 34,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 34,"up" : 34,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 8,"up" : 216728,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 34,"up" : 34,"step" : 2}]}]},{"low":280,"up":287,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 35,"up" : 35,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 35,"up" : 35,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 8,"up" : 216728,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 35,"up" : 35,"step" : 2}]}]},{"low":288,"up":295,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 36,"up" : 36,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 36,"up" : 36,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 9,"up" : 216729,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 36,"up" : 36,"step" : 2}]}]},{"low":296,"up":303,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 37,"up" : 37,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 37,"up" : 37,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 9,"up" : 216729,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 37,"up" : 37,"step" : 2}]}]},{"low":304,"up":311,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 38,"up" : 38,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 38,"up" : 38,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 9,"up" : 216729,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 38,"up" : 38,"step" : 2}]}]},{"low":312,"up":319,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "x_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 39,"up" : 39,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "weight_data","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 39,"up" : 39,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"offset": { "type": "dynamic","port_name": "edge_index","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 9,"up" : 216729,"step" : 16}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "result_data","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 39,"up" : 39,"step" : 2}]}]},{"low":320,"up":327,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 40,"up" : 40,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 40,"up" : 40,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 10,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 40,"up" : 40,"step" : 2}]}]},{"low":328,"up":335,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 41,"up" : 41,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 41,"up" : 41,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 10,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 41,"up" : 41,"step" : 2}]}]},{"low":336,"up":343,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 42,"up" : 42,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 42,"up" : 42,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 10,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 42,"up" : 42,"step" : 2}]}]},{"low":344,"up":351,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 43,"up" : 43,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 43,"up" : 43,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 10,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 43,"up" : 43,"step" : 2}]}]},{"low":352,"up":359,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 44,"up" : 44,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 44,"up" : 44,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 11,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 44,"up" : 44,"step" : 2}]}]},{"low":360,"up":367,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 45,"up" : 45,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 45,"up" : 45,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 11,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 45,"up" : 45,"step" : 2}]}]},{"low":368,"up":375,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 46,"up" : 46,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 46,"up" : 46,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 11,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 46,"up" : 46,"step" : 2}]}]},{"low":376,"up":383,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 47,"up" : 47,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 47,"up" : 47,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 11,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 47,"up" : 47,"step" : 2}]}]},{"low":384,"up":391,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 48,"up" : 48,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 48,"up" : 48,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 12,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 48,"up" : 48,"step" : 2}]}]},{"low":392,"up":399,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 49,"up" : 49,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 49,"up" : 49,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 12,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 49,"up" : 49,"step" : 2}]}]},{"low":400,"up":407,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 50,"up" : 50,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 50,"up" : 50,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 12,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 50,"up" : 50,"step" : 2}]}]},{"low":408,"up":415,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 51,"up" : 51,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 51,"up" : 51,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 12,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 51,"up" : 51,"step" : 2}]}]},{"low":416,"up":423,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 52,"up" : 52,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 52,"up" : 52,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 13,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 52,"up" : 52,"step" : 2}]}]},{"low":424,"up":431,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 53,"up" : 53,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 53,"up" : 53,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 13,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 53,"up" : 53,"step" : 2}]}]},{"low":432,"up":439,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 54,"up" : 54,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 54,"up" : 54,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 13,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 54,"up" : 54,"step" : 2}]}]},{"low":440,"up":447,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 55,"up" : 55,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 55,"up" : 55,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 13,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 55,"up" : 55,"step" : 2}]}]},{"low":448,"up":455,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 56,"up" : 56,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 56,"up" : 56,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 14,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 56,"up" : 56,"step" : 2}]}]},{"low":456,"up":463,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 57,"up" : 57,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 57,"up" : 57,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 14,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 57,"up" : 57,"step" : 2}]}]},{"low":464,"up":471,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 58,"up" : 58,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 58,"up" : 58,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 14,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 58,"up" : 58,"step" : 2}]}]},{"low":472,"up":479,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 59,"up" : 59,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 59,"up" : 59,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 14,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 59,"up" : 59,"step" : 2}]}]},{"low":480,"up":487,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 60,"up" : 60,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 60,"up" : 60,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 15,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 60,"up" : 60,"step" : 2}]}]},{"low":488,"up":495,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 61,"up" : 61,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 61,"up" : 61,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 15,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 8,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 61,"up" : 61,"step" : 2}]}]},{"low":496,"up":503,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 62,"up" : 62,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 62,"up" : 62,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 15,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 16,"up": 23},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 62,"up" : 62,"step" : 2}]}]},{"low":504,"up":511,"cElement": [{"cName": "x.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 63,"up" : 63,"step" : 2}]},{"cName": "weight.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 63,"up" : 63,"step" : 2}]},{"cName": "edge_index","cData": "int","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 15,"up" : 216729,"step" : 16}]},{"cName": "","cData": "","bit_use": { "low": 24,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "result.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 63,"up" : 63,"step" : 2}]}]}]} , 
 	{ "Name" : "x_data", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":27}} , 
 	{ "Name" : "weight_data", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":28}, "offset_end" : {"in":39}} , 
 	{ "Name" : "edge_index", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":51}} , 
 	{ "Name" : "result_data", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":52}, "offset_end" : {"in":63}} ]}
# RTL Port declarations: 
set portNum 73
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ event_done sc_out sc_logic 1 signal -1 } 
	{ m_axi_gmem_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_WDATA sc_out sc_lv 512 signal 0 } 
	{ m_axi_gmem_WSTRB sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_RDATA sc_in sc_lv 512 signal 0 } 
	{ m_axi_gmem_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_BUSER sc_in sc_lv 1 signal 0 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_control_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_control_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_control_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
	{ event_start sc_out sc_logic 1 signal -1 } 
	{ stall_start_ext sc_out sc_logic 1 signal -1 } 
	{ stall_done_ext sc_out sc_logic 1 signal -1 } 
	{ stall_start_str sc_out sc_logic 1 signal -1 } 
	{ stall_done_str sc_out sc_logic 1 signal -1 } 
	{ stall_start_int sc_out sc_logic 1 signal -1 } 
	{ stall_done_int sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"gcnconv_kernel","role":"start","value":"0","valid_bit":"0"},{"name":"gcnconv_kernel","role":"continue","value":"0","valid_bit":"4"},{"name":"gcnconv_kernel","role":"auto_start","value":"0","valid_bit":"7"},{"name":"x_data","role":"data","value":"16"},{"name":"weight_data","role":"data","value":"28"},{"name":"edge_index","role":"data","value":"40"},{"name":"result_data","role":"data","value":"52"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"gcnconv_kernel","role":"start","value":"0","valid_bit":"0"},{"name":"gcnconv_kernel","role":"done","value":"0","valid_bit":"1"},{"name":"gcnconv_kernel","role":"idle","value":"0","valid_bit":"2"},{"name":"gcnconv_kernel","role":"ready","value":"0","valid_bit":"3"},{"name":"gcnconv_kernel","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARVALID" } },
	{ "name": "s_axi_control_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARREADY" } },
	{ "name": "s_axi_control_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RVALID" } },
	{ "name": "s_axi_control_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RREADY" } },
	{ "name": "s_axi_control_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "RDATA" } },
	{ "name": "s_axi_control_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "RRESP" } },
	{ "name": "s_axi_control_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BVALID" } },
	{ "name": "s_axi_control_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BREADY" } },
	{ "name": "s_axi_control_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "event_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "event_done", "role": "default" }} , 
 	{ "name": "m_axi_gmem_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWVALID" }} , 
 	{ "name": "m_axi_gmem_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWREADY" }} , 
 	{ "name": "m_axi_gmem_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "AWADDR" }} , 
 	{ "name": "m_axi_gmem_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWID" }} , 
 	{ "name": "m_axi_gmem_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "AWLEN" }} , 
 	{ "name": "m_axi_gmem_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_gmem_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWBURST" }} , 
 	{ "name": "m_axi_gmem_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_gmem_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_gmem_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWPROT" }} , 
 	{ "name": "m_axi_gmem_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWQOS" }} , 
 	{ "name": "m_axi_gmem_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWREGION" }} , 
 	{ "name": "m_axi_gmem_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWUSER" }} , 
 	{ "name": "m_axi_gmem_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WVALID" }} , 
 	{ "name": "m_axi_gmem_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WREADY" }} , 
 	{ "name": "m_axi_gmem_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "gmem", "role": "WDATA" }} , 
 	{ "name": "m_axi_gmem_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "WSTRB" }} , 
 	{ "name": "m_axi_gmem_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WLAST" }} , 
 	{ "name": "m_axi_gmem_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WID" }} , 
 	{ "name": "m_axi_gmem_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WUSER" }} , 
 	{ "name": "m_axi_gmem_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARVALID" }} , 
 	{ "name": "m_axi_gmem_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARREADY" }} , 
 	{ "name": "m_axi_gmem_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "ARADDR" }} , 
 	{ "name": "m_axi_gmem_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARID" }} , 
 	{ "name": "m_axi_gmem_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "ARLEN" }} , 
 	{ "name": "m_axi_gmem_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_gmem_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARBURST" }} , 
 	{ "name": "m_axi_gmem_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_gmem_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_gmem_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARPROT" }} , 
 	{ "name": "m_axi_gmem_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARQOS" }} , 
 	{ "name": "m_axi_gmem_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARREGION" }} , 
 	{ "name": "m_axi_gmem_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARUSER" }} , 
 	{ "name": "m_axi_gmem_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RVALID" }} , 
 	{ "name": "m_axi_gmem_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RREADY" }} , 
 	{ "name": "m_axi_gmem_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "gmem", "role": "RDATA" }} , 
 	{ "name": "m_axi_gmem_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RLAST" }} , 
 	{ "name": "m_axi_gmem_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RID" }} , 
 	{ "name": "m_axi_gmem_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RUSER" }} , 
 	{ "name": "m_axi_gmem_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "RRESP" }} , 
 	{ "name": "m_axi_gmem_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BVALID" }} , 
 	{ "name": "m_axi_gmem_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BREADY" }} , 
 	{ "name": "m_axi_gmem_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "BRESP" }} , 
 	{ "name": "m_axi_gmem_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BID" }} , 
 	{ "name": "m_axi_gmem_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BUSER" }} , 
 	{ "name": "event_start", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "event_start", "role": "default" }} , 
 	{ "name": "stall_start_ext", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "stall_start_ext", "role": "default" }} , 
 	{ "name": "stall_done_ext", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "stall_done_ext", "role": "default" }} , 
 	{ "name": "stall_start_str", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "stall_start_str", "role": "default" }} , 
 	{ "name": "stall_done_str", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "stall_done_str", "role": "default" }} , 
 	{ "name": "stall_start_int", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "stall_start_int", "role": "default" }} , 
 	{ "name": "stall_done_int", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "stall_done_int", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69"],
		"CDFG" : "gcnconv_kernel",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1118936106", "EstimateLatencyMax" : "1119291012",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state52", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_merlin_memcpy_1_0_0_fu_2470"},
			{"State" : "ap_ST_fsm_state49", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_merlin_memcpy_0_0_fu_2478"},
			{"State" : "ap_ST_fsm_state85", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_merlin_memcpy_3_0_fu_2486"},
			{"State" : "ap_ST_fsm_state99", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_merlin_memcpy_4_0_fu_2494"},
			{"State" : "ap_ST_fsm_state55", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_merlin_memcpy_2_0_fu_2502"}],
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_merlin_memcpy_1_0_0_fu_2470", "Port" : "dst"},
					{"ID" : "44", "SubInstance" : "grp_merlin_memcpy_0_0_fu_2478", "Port" : "src"},
					{"ID" : "45", "SubInstance" : "grp_merlin_memcpy_3_0_fu_2486", "Port" : "src"},
					{"ID" : "47", "SubInstance" : "grp_merlin_memcpy_2_0_fu_2502", "Port" : "src"},
					{"ID" : "46", "SubInstance" : "grp_merlin_memcpy_4_0_fu_2494", "Port" : "src"}]},
			{"Name" : "x_data", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_data", "Type" : "None", "Direction" : "I"},
			{"Name" : "edge_index", "Type" : "None", "Direction" : "I"},
			{"Name" : "result_data", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_control_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_gmem_m_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_0_0_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_0_1_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_0_2_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_0_3_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_0_4_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_0_5_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_0_6_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_0_7_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.edge_index_buf_3_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.edge_index_buf_2_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.edge_index_buf_1_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.edge_index_buf_0_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.edge_weight_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_0_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_1_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_2_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_3_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_4_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_5_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_6_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_7_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_8_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_9_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_10_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_11_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_12_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_13_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_14_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_mul_15_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.deg_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.deg_inv_sqrt_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.norm_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_buf_0_0_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_buf_0_1_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_buf_0_2_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_buf_0_3_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_buf_0_4_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_buf_0_5_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_buf_0_6_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_buf_0_7_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_merlin_memcpy_1_0_0_fu_2470", "Parent" : "0",
		"CDFG" : "merlin_memcpy_1_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1921232", "EstimateLatencyMax" : "1921232",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dst", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "dst_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "dst_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "dst_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "dst_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "dst_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "dst_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "src", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_merlin_memcpy_0_0_fu_2478", "Parent" : "0",
		"CDFG" : "merlin_memcpy_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "128092", "EstimateLatencyMax" : "128092",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dst", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "src", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "src_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "src_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "src_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_merlin_memcpy_3_0_fu_2486", "Parent" : "0",
		"CDFG" : "merlin_memcpy_3_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "216740", "EstimateLatencyMax" : "216740",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dst", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "src", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "src_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "src_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "src_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_merlin_memcpy_4_0_fu_2494", "Parent" : "0",
		"CDFG" : "merlin_memcpy_4_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "216740", "EstimateLatencyMax" : "216740",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dst", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "src", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "src_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "src_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "src_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_merlin_memcpy_2_0_fu_2502", "Parent" : "0",
		"CDFG" : "merlin_memcpy_2_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "108375", "EstimateLatencyMax" : "108375",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dst", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "src", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "src_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "src_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "src_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U16", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U17", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U18", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U19", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U20", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U21", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U22", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U23", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U24", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U25", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U26", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U27", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U28", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U29", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U30", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fadd_32ns_32ns_32_7_full_dsp_1_U31", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fmul_32ns_32ns_32_4_max_dsp_1_U32", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fmul_32ns_32ns_32_4_max_dsp_1_U33", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fmul_32ns_32ns_32_4_max_dsp_1_U34", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_fmul_32ns_32ns_32_4_max_dsp_1_U35", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_frsqrt_32ns_32ns_32_13_full_dsp_1_U36", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gcnconv_kernel_mux_832_32_1_1_U37", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	gcnconv_kernel {
		gmem {Type IO LastRead 44 FirstWrite -1}
		x_data {Type I LastRead 0 FirstWrite -1}
		weight_data {Type I LastRead 0 FirstWrite -1}
		edge_index {Type I LastRead 0 FirstWrite -1}
		result_data {Type I LastRead 0 FirstWrite -1}}
	merlin_memcpy_1_0_0 {
		dst {Type IO LastRead 12 FirstWrite 11}
		dst_offset {Type I LastRead 0 FirstWrite -1}
		src {Type I LastRead 1 FirstWrite -1}}
	merlin_memcpy_0_0 {
		dst {Type O LastRead -1 FirstWrite 10}
		src {Type I LastRead 9 FirstWrite -1}
		src_offset {Type I LastRead 0 FirstWrite -1}}
	merlin_memcpy_3_0 {
		dst {Type O LastRead -1 FirstWrite 10}
		src {Type I LastRead 9 FirstWrite -1}
		src_offset {Type I LastRead 0 FirstWrite -1}}
	merlin_memcpy_4_0 {
		dst {Type O LastRead -1 FirstWrite 10}
		src {Type I LastRead 9 FirstWrite -1}
		src_offset {Type I LastRead 0 FirstWrite -1}}
	merlin_memcpy_2_0 {
		dst {Type O LastRead -1 FirstWrite 10}
		src {Type I LastRead 9 FirstWrite -1}
		src_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1118936106", "Max" : "1119291012"}
	, {"Name" : "Interval", "Min" : "1118936107", "Max" : "1119291013"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
	{"Pipeline" : "6", "EnableSignal" : "ap_enable_pp6"}
	{"Pipeline" : "7", "EnableSignal" : "ap_enable_pp7"}
	{"Pipeline" : "8", "EnableSignal" : "ap_enable_pp8"}
]}

set Spec2ImplPortList { 
	gmem { m_axi {  { m_axi_gmem_AWVALID VALID 1 1 }  { m_axi_gmem_AWREADY READY 0 1 }  { m_axi_gmem_AWADDR ADDR 1 64 }  { m_axi_gmem_AWID ID 1 1 }  { m_axi_gmem_AWLEN LEN 1 8 }  { m_axi_gmem_AWSIZE SIZE 1 3 }  { m_axi_gmem_AWBURST BURST 1 2 }  { m_axi_gmem_AWLOCK LOCK 1 2 }  { m_axi_gmem_AWCACHE CACHE 1 4 }  { m_axi_gmem_AWPROT PROT 1 3 }  { m_axi_gmem_AWQOS QOS 1 4 }  { m_axi_gmem_AWREGION REGION 1 4 }  { m_axi_gmem_AWUSER USER 1 1 }  { m_axi_gmem_WVALID VALID 1 1 }  { m_axi_gmem_WREADY READY 0 1 }  { m_axi_gmem_WDATA DATA 1 512 }  { m_axi_gmem_WSTRB STRB 1 64 }  { m_axi_gmem_WLAST LAST 1 1 }  { m_axi_gmem_WID ID 1 1 }  { m_axi_gmem_WUSER USER 1 1 }  { m_axi_gmem_ARVALID VALID 1 1 }  { m_axi_gmem_ARREADY READY 0 1 }  { m_axi_gmem_ARADDR ADDR 1 64 }  { m_axi_gmem_ARID ID 1 1 }  { m_axi_gmem_ARLEN LEN 1 8 }  { m_axi_gmem_ARSIZE SIZE 1 3 }  { m_axi_gmem_ARBURST BURST 1 2 }  { m_axi_gmem_ARLOCK LOCK 1 2 }  { m_axi_gmem_ARCACHE CACHE 1 4 }  { m_axi_gmem_ARPROT PROT 1 3 }  { m_axi_gmem_ARQOS QOS 1 4 }  { m_axi_gmem_ARREGION REGION 1 4 }  { m_axi_gmem_ARUSER USER 1 1 }  { m_axi_gmem_RVALID VALID 0 1 }  { m_axi_gmem_RREADY READY 1 1 }  { m_axi_gmem_RDATA DATA 0 512 }  { m_axi_gmem_RLAST LAST 0 1 }  { m_axi_gmem_RID ID 0 1 }  { m_axi_gmem_RUSER USER 0 1 }  { m_axi_gmem_RRESP RESP 0 2 }  { m_axi_gmem_BVALID VALID 0 1 }  { m_axi_gmem_BREADY READY 1 1 }  { m_axi_gmem_BRESP RESP 0 2 }  { m_axi_gmem_BID ID 0 1 }  { m_axi_gmem_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ gmem { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ gmem 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ gmem 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
