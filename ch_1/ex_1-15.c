#include <stdio.h>

float convert_to_celsius(float f, float c);

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = convert_to_celsius(fahr, celsius);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

float convert_to_celsius(float fahr, float celsius)
{
	return (5.0/9.0) * (fahr-32.0);
}
