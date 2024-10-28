int main(void) {
	stdio_init_all();
	gpio_init(20);
	gpio_set_dir(20,false);
	gpio_init(21);
	gpio_set_dir(21,false);
	gpio_init(22);
	gpio_set_dir(22,false);

	gpio_init(6);
	gpio_set_dir(6,true);
	gpio_init(7);
	gpio_set_dir(7,true);
	gpio_init(8);
	gpio_set_dir(8,true);


	while (1) {

	if (gpio_get(20)==false){
	gpio_put(6,true);
	}
	else
	{
		gpio_put(6,false);
		sleep_ms(100);
	}
	if (gpio_get(21)==false){
		gpio_put(7, true);
	if (gpio_get(21)==false _AND gpio_get(7)==true){
		gpio_put(7,false);
		}
		}
	if (gpio_get(22)==false){
		gpio_put(8,true);
	if (gpio_get(22)==false _AND gpio_get(8)==true){
		gpio_put(8,false);
		sleep_ms(500);}
		}
		}
	return 0;
}
