#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

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

/* Copy input to output; 1st version */
void FileCopy() {
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}

/* Count characters in input; 2nd version */
void CountChar() {
	double nc;
	nc = 0;

	while (getchar() != EOF)
		++nc;
	printf("%.0f\n", nc);
}

/* Count lines, tabs, spaces in input */
void CountLines() {
	int c, nl;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			++nl;
		}
	}

	printf("%d\n", nl);
}

/* Replace one or more spaces with one space */
void TrimString() {
	int c, has_space;

	has_space = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (has_space == 0) {
				has_space = 1;
				putchar(c);
			}
		} else {
			has_space = 0;
			putchar(c);
		}
	}
}

/* Replace tab by \t, backspace by \b, backslash by \\ */
void CharReplacement() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\t");
		} else if (c == '\b') {
			printf("\\b");
		} else if (c == '\\') {
			printf("\\\\");
		} else {
			putchar(c);
		}
	}
}

/* count lines, words, and characters in input */
void wc() {
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf("%d %d %d\n", nl, nw, nc);
}

main() {
	wc();
}