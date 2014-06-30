#include <stdio.h>
#include "gpio_api.h"

int main(int argc, char *argv[])
{
	int ret = 0;
	switch( argv[1][0] ){
		case 'f':
			// free gpio
			gpio_free(WMT_GPIO_2);
			break;
		case 'r':
			// check if this gpio is used
			if (gpio_request(WMT_GPIO_2))
				printf("this gpio is using\n");
			else
				printf("this gpio can be used\n");
			break;
		case 'l':
			// set gpio2 to low
			gpio_direction(WMT_GPIO_2, DIRECTION_OUTPUT);
			gpio_direction_output(WMT_GPIO_2, GPIO_LOW);
			break;
		case 'h':
			// set gpio3 to high
			gpio_direction(WMT_GPIO_2, DIRECTION_OUTPUT);
			gpio_direction_output(WMT_GPIO_2, GPIO_HIGH);
			break;
		case 'i':
			// get gpio2 input data
			gpio_direction(WMT_GPIO_2, DIRECTION_INPUT);
			ret = gpio_direction_input(WMT_GPIO_2);
			printf("input data is %d\n", ret);
			break;
		default:
			printf("Invaild argument.\n\n");

			printf("====gpio_sample ver 1.2 usage:====\n");
			printf("  h: set gpio2 high\n");
			printf("  l: set gpio2 low\n");
			printf("  i: get gpio2 input value\n");
			printf("  f: free gpio2\n");
			printf("  r: check if gpio2 was used\n");
			printf("==================================\n");
			break;
	}

	return 0;
}