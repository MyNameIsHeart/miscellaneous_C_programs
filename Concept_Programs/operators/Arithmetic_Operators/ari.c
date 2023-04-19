#include <stdio.h>

#define END_OF_MAIN 0

int main() {

	int A = 10;
	int B = 20;
	
	printf("A = %d, B = %d\n", A, B);
	printf("A + B = %d\n", A+B);
	printf("A - B = %d\n", A-B);
	printf("A * B = %d\n", A*B);
	printf("B / A = %d\n", B/A);
	printf("B %% A = %d\n", B%A);
	printf("A++ = %d\n", A++);
	printf("A-- = %d\n", A--);
	printf("++B = %d\n", ++B);
	printf("--B = %d\n", --B);
	printf("A = %d, B = %d\n", A, B);
   
	return END_OF_MAIN;
}
