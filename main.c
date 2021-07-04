#include <stdio.h> 
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "freertos/freeRTOS.h"
#include "freertos/task.h"

  void app_main(void) {
      gpio_set_direction(GPIO_NUM_21,GPIO_MODE_OUTPUT);
      gpio_set_direction(GPIO_NUM_22,GPIO_MODE_OUTPUT);
      gpio_set_direction(GPIO_NUM_23,GPIO_MODE_OUTPUT);
      
      while(true){
        
        timer(GPIO_NUM_21);
        timer(GPIO_NUM_22);
        timer(GPIO_NUM_23);






      }
     }

     void timer(int gp){
         gpio_set_level(gp,1);
         vTaskDelay(10000/portTick_PERIOD_MS);
       
       gpio_set_level(gp,0);
     }
     

     return 0;
      }
