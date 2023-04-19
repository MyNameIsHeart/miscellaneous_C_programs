/*
A program can have the same name for local and global variables but the value of the local variable inside a function will take preference. Here is an example −
*/

#include <stdio.h>
 
/* global variable declaration */
int g = 20;

int main () {

	/* local variable declaration */
	int g = 10;

	printf ("value of g = %d\n",  g);

	return 0;
}
