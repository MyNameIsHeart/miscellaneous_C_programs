#include <stdio.h>

int main() {
	// declare a, b an object of type 'int'
	int a = 1, b;
 
	a + 1 = b;
	// Error, left expression is not a variable(a + 1)
 
	// declare pointer variable 'p', and 'q'
	int *p, *q; // *p, *q are lvalue
 
	*p = 1; // valid l-value assignment
 
	// below is invalid - "p + 2" is not an l-value 
	// p + 2 = 18; 
 
	q = p + 5; // valid - "p + 5" is an r-value
	 
	// Below is valid - dereferencing pointer
	// expression gives an l-value
	*(p + 2) = 18;
 
	p = &b; 
 
	int arr[20]; // arr[12] is an lvalue; equivalent
              // to *(arr+12)
              // Note: arr itself is also an lvalue
 
	struct S { int m; };
 
	struct S obj; // obj and obj.m are lvalues
 
	// ptr-> is an lvalue; equivalent to (*ptr).m
	// Note: ptr and *ptr are also lvalues
	struct S* ptr = &obj;
   
   return 0;
}

