/*
Global variables are defined outside a function, usually on top of the program. Global variables hold their values throughout the lifetime of your program and they can be accessed inside any of the functions defined for the program.

A global variable can be accessed by any function. That is, a global variable is available for use throughout your entire program after its declaration. The following program shows how global variables are used in a program.
*/

#include <stdio.h>
 
/* global variable declaration */
int g;

int main ()
{

	/* local variable declaration */
	int a, b;

	/* actual initialization */
	a = 10;
	b = 20;
	g = a + b;

	printf ("value of a = %d, b = %d and g = %d\n", a, b, g);

	return 0;
}
