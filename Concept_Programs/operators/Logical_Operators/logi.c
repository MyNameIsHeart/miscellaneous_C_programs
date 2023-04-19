#include <stdio.h>

#define END_OF_MAIN 0

int main() {

	int a = 5;
	int b = 20;

	if ( a && b ) {
		printf("Line 1 - Condition is true\n" );
	} else {
		printf("Line 1 - Condition is not true\n" );
	}

	if ( a || b ) {
		printf("Line 2 - Condition is true\n" );
	} else {
		printf("Line 2 - Condition is not true\n" );
	}

	/* lets change the value of a and b */
	a = 0;
	b = 10;

	if ( a && b ) {
		printf("Line 3 - Condition is true\n" );
	} else {
		printf("Line 3 - Condition is not true\n" );
	}

	if ( !(a && b) ) {
		printf("Line 4 - Condition is true\n" );
	} else {
		printf("Line 4 - Condition is not true\n" );
	}
	
	if ( a || b ) {
		printf("Line 5 - Condition is true\n" );
	} else {
		printf("Line 5 - Condition is not true\n" );
	}
	
	if ( !(a || b) ) {
		printf("Line 6 - Condition is true\n" );
	} else {
		printf("Line 6 - Condition is not true\n" );
	}

	return END_OF_MAIN;
	
}
