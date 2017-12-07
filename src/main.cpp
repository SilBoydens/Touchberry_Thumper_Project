#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
#include "Touchberry.h"

using namespace touchberry;

int main(void) {

    Touchberry touchberry;

    while(true){
      for(int i = 0;i<5;i++){
        touchberry.set_led_color(200,100,50);
      }
      touchberry.set_led_intensity(255);
    }
     /*if(touchberry.read_buttons()){
       touchberry.set_led_color()
     }*/

  return 0;
}
