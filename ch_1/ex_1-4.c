#include <stdio.h>

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	printf("=============================================\n");
	printf("Temperature Conversion: Celsius to Fahrenheit \n");
	printf("=============================================\n");
	printf("  C\t     F\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0 * celsius)+32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
