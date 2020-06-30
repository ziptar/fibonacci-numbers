/*
 ============================================================================
 Name        : fibonacci.c
 Author      : Said TALEB ALI
 Version     : 1.0
 Copyright   : MIT
 Description : Use recursion to make a function use itself: the Fibonacci numbers.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main(void) {

	int n = 0;

	printf("Enter a positive number : ");
	scanf("%d", &n);

	if (n < 0) {
		printf("%d is not a positive number. Aborting!\n", n);
	} else {
		printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
	}

	return EXIT_SUCCESS;
}

int fibonacci(int n) {
	if (n > 1) return fibonacci(n - 1) + fibonacci(n - 2);
	if (n == 1) return 1;
	return 0;
}
