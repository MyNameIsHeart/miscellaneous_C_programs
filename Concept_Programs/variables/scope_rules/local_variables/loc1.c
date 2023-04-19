/*
Variables that are declared inside a function or block are called local variables. They can be used only by statements that are inside that function or block of code. Local variables are not known to functions outside their own. The following example shows how local variables are used. Here all the variables a, b, and c are local to main() function.
*/

#include <stdio.h>
 
int main () {

	/* local variable declaration */
	int a, b;
	int c;

	/* actual initialization */
	a = 10;
	b = 20;
	c = a + b;

	printf ("value of a = %d, b = %d and c = %d\n", a, b, c);

	return 0;
}
