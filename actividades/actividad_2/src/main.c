#include "pico/stdlib.h"
#include <stdio.h>

int main (void){        

    gpio_init(6);
    gpio_init(20);
    gpio_init(21);
    gpio_init(7);
    gpio_set_dir(20, false);
    gpio_set_dir(6,true);
    gpio_set_dir(21, false);
    gpio_set_dir(7, true);

    while(true) {
        if(gpio_get (20)==0){
            gpio_put(6,true);
        }
        if(gpio_get (21)==0){
            gpio_put(7,true);
        }
        else{
            gpio_put(7, false);
            gpio_put(6, false);
    }
}
}
