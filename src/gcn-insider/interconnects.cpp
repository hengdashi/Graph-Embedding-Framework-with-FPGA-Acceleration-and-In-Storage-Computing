#include <insider_itc.h>

#include "constant.h"
#include "structure.h"

#include "app_gcn.cpp"

// describe the interconnection
void interconnects() {
  ST_Queue<APP_gcn_in_data> app_data_in(970141);
  ST_Queue<APP_gcn_out_data> app_data_out(2708);
  ST_Queue<APP_gcn_in_data> app_data_config(16);
  app_gcn(app_data_in, app_data_out, app_data_config);
}
