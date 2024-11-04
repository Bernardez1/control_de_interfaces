#include <stdio.h>
#include "pico/stdlib.h"
/**
* Funcion que se llama cada vez que se cumple el tiempo del Timer
*/
bool timer_callback(repeating_timer_t *timer) {
gpio_put(0,true);
delay(200);
gpio_put(0,false);
gpio_put(1,true);
delay(200);
gpio_put(1,false);
gpio_put(2,true);
delay(200);
gpio_put(2,false);
gpio_put(3,true);
delay(200);
gpio_put(3,false);
gpio_put(4,true);
delay(200);
gpio_put(4,false);
// Resolver el LED shifting
}
bool timer_callback(repeating_timer_t *tiempo) {
gpio_put(4,true);
delay(200);
gpio_put(4,false);
gpio_put(3,true);
delay(200);
gpio_put(3,false);
gpio_put(2,true);
delay(200);
gpio_put(2,false);
gpio_put(1,true);
delay(200);
gpio_put(1,false);
gpio_put(0,true);
delay(200);
gpio_put(0,false);
}
bool timer_callback(repeating_timer_t *coso) {
gpio_put(0,true);
gpio_put(1,true);
gpio_put(2,true);
gpio_put(3,true);
gpio_put(4,true);
delay(200);
gpio_put(0,false);
gpio_put(1,false);
gpio_put(2,false);
gpio_put(3,false);
gpio_put(4,false);
}
/**
* @brief Programa principal
*/
int main(void) {
// Inicializo el USB
stdio_init_all();
// Demora para esperar la conexion
sleep_ms(1000);
// Inicializacion de GPIO con gpio_init()
gpio_init(0);
gpio_init(1);
gpio_init(2);
gpio_init(3);
gpio_init(4);
gpio_init(20);
gpio_init(21);
gpio_init(22);
// Configuracion de entrada/salida con gpio_set_dir()
gpio_set_dir(0,true);
gpio_set_dir(1,true);
gpio_set_dir(2,true);
gpio_set_dir(3,true);
gpio_set_dir(4,true);
gpio_set_dir(20,false);
gpio_set_dir(21,false);
gpio_set_dir(22,false);
// Inicializacion del Timer
repeating_timer_t timer;
repeating_timer_t tiempo;
repeating_timer_t coso;
if(gpio_get(20)==false){
add_repeating_timer_ms(200, repeating_timer_callback, NULL, &timer);
}
if(gpio_get(21)==false){
add_repeating_timer_ms(200, repeating_timer_callback, NULL, &tiempo);
}
if(gpio_get(22)==false){
add_repeating_timer_ms(200, repeating_timer_callback, NULL, &coso);
