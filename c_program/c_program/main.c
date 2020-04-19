#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/* print Celsius-Farenheit table for 
celsius = 0, 20, ..., 300; floating-point version */
void CelsiusFahrenheit() {
	float fahr, celsius;
	celsius = LOWER;

	printf("===Celsius-Farenheit table===\n");
	printf("Celsius Farenheit\n");
	while (celsius <= UPPER) {
		fahr = (9.0 / 5.0) * celsius + 32.0;

		printf("%7.0f %9.1f\n", celsius, fahr);
		celsius += STEP;
	}
}

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
void FahrenheitCelsius() {
	float fahr, celsius;
	fahr = LOWER;
	
	printf("===Farenheit-Celsius table===\n");
	printf("Farenheit Celsius\n");
	while (fahr <= UPPER) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%9.0f %7.1f\n", fahr, celsius);
		fahr += STEP;
	}
}

/* print Celsius-Farenheit table for
celsius = 300, 280, ..., 0; reverse version */
void CelsiusFahrenheitReverse() {
	float fahr, celsius;

	printf("===Celsius-Farenheit table===\n");
	printf("Celsius Farenheit\n");
	for (celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%7.0f %9.1f\n", celsius, fahr);
	}
}

/* print Fahrenheit-Celsius table
for fahr = 300, 280, ..., 0; reverse version */
void FahrenheitCelsiusReverse() {
	float fahr, celsius;

	printf("===Farenheit-Celsius table===\n");
	printf("Farenheit Celsius\n");
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)  {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%9.0f %7.1f\n", fahr, celsius);
	}
}

main() {
	CelsiusFahrenheitReverse();
	printf("\n");
	FahrenheitCelsiusReverse();
}