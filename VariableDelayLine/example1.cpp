#include <iostream>
#include <string.h>
#include "VDL_INQNET.h"

int main(){
  
  VDL device;
  //device.stop();
  device.setDelay(200);//ps
  device.lisent();
  //device.stop();

  return 0;
}
