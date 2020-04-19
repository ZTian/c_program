#include <stdio.h>

/* print Celsius-Farenheit table for 
celsius = 0, 20, ..., 300; floating-point version */
void CelsiusFahrenheit() {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /* lower limit of temperatuire scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	celsius = lower;

	printf("===Celsius-Farenheit table===\n");
	printf("Celsius Farenheit\n");
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;

		printf("%7.0f %9.1f\n", celsius, fahr);
		celsius += step;
	}
}

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
void FahrenheitCelsius() {
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0; /* lower limit of temperatuire scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;
	
	printf("===Farenheit-Celsius table===\n");
	printf("Farenheit Celsius\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%9.0f %7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

main() {
	CelsiusFahrenheit();
	printf("\n");
	FahrenheitCelsius();
}