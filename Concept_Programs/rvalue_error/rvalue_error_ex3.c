#include <stdio.h>

int main() {
	// declare a as int variable and
	// 'p' as pointer variable
	int a, *p;
	 
	p = &a; // ok, assignment of address
		// at l-value
	 
	&a = p;    // error: &a is an r-value
	 
	int x, y;
	 
	(  x < y ? y : x) = 0; // It's valid because the ternary
                  // expression preserves the "lvalue-ness"
                 // of both its possible return values
   
   return 0;
}

