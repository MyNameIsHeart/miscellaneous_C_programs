#include <stdio.h>
#include <stdlib.h>

/*
An integer literal can be a decimal, octal, or hexadecimal constant. A prefix specifies the base or radix: 0x or 0X for hexadecimal, 0 for octal, and nothing for decimal.

An integer literal can also have a suffix that is a combination of U and L, for unsigned and long, respectively. The suffix can be uppercase or lowercase and can be in any order.
*/

void print_binary(unsigned int);
void reverse_print_str(char *, unsigned int);

int main() {
   
	const int ex1 = 212;
	const int ex2 = 215u;
	const int ex3 = 0xFeeL;
	const int ex4 = 85;
	const int ex5 = 0213;
	const int ex6 = 0x4b;
	const int ex7 = 30;
	const int ex8 = 30u;
	const int ex9 = 30l;
	const int ex10 = 30ul;

	printf("Printed using %%d:\n\n");
	printf("ex1 = %d\n", ex1);
	printf("ex2 = %d\n", ex2);
	printf("ex3 = %d\n", ex3);
	printf("ex4 = %d\n", ex4);
	printf("ex5 = %d\n", ex5);
	printf("ex6 = %d\n", ex6);
	printf("ex7 = %d\n", ex7);
	printf("ex8 = %d\n", ex8);
	printf("ex9 = %d\n", ex9);
	printf("ex10 = %d\n", ex10);
	printf("\n\n");

	printf("Printed using a print_binary function:\n\n");
	print_binary(ex1);
	print_binary(ex2);
	print_binary(ex3);
	print_binary(ex4);
	print_binary(ex5);
	print_binary(ex6);
	print_binary(ex7);
	print_binary(ex8);
	print_binary(ex9);
	print_binary(ex10);
	printf("\n\n");
	
	printf("Memory addresses:\n\n");
	printf("%p\n",(void*)&ex1);
	printf("%p\n",(void*)&ex2);
	printf("%p\n",(void*)&ex3);
	printf("%p\n",(void*)&ex4);
	printf("%p\n",(void*)&ex5);
	printf("%p\n",(void*)&ex6);
	printf("%p\n",(void*)&ex7);
	printf("%p\n",(void*)&ex8);
	printf("%p\n",(void*)&ex9);
	printf("%p\n",(void*)&ex10);
	printf("\n\n");
	
	/*
	const int ex1 = 212;	decimal
	const int ex2 = 215u;	unsigned decimal
	const int ex3 = 0xFeeL;	hexadecimal long
	const int ex4 = 85;	decimal
	const int ex5 = 0213;	octal
	const int ex6 = 0x4b;	hexadecimal
	const int ex7 = 30;	hexadecimal
	const int ex8 = 30u;	unsigned decimal
	const int ex9 = 30l;	long
	const int ex10 = 30ul;	unsigned long
	*/
	
	printf("Printed using %%d:\n");
	printf("ex1 = %d\n", ex1);
	printf("\n");
	
	printf("Printed using %%u:\n");
	printf("ex2 = %u\n", ex2);
	printf("\n");
	
	printf("Printed using %%xl:\n");
	printf("ex3 = %xl\n", ex3);
	printf("\n");
	
	printf("Printed using %%d:\n");
	printf("ex4 = %d\n", ex4);
	printf("\n");
	
	printf("Printed using %%o:\n");
	printf("ex5 = %o\n", ex5);
	printf("\n");
	
	printf("Printed using %%x:\n");
	printf("ex6 = %x\n", ex6);
	printf("\n");
	
	printf("Printed using %%d:\n");
	printf("ex7 = %d\n", ex7);
	printf("\n");
	
	printf("Printed using %%u:\n");
	printf("ex8 = %u\n", ex8);
	printf("\n");
	
	printf("Printed using %%ld:\n");
	printf("ex9 = %ld\n", ex9);
	printf("\n");
	
	printf("Printed using %%lu:\n");
	printf("ex10 = %lu\n", ex10);
	printf("\n");

   return 0;
}

void print_binary(unsigned int number)
{
	int index = 0;
	char *str;
	str = (char *) malloc(1);
	
	if(str == NULL)
	{
		printf("Memory allocation failed");
		exit(1); // exit the program
	}
	
	while (number)
	{
    		str[index++] = (number & 1) ? '1' : '0';;
    		number >>= 1;
	}
	
	str[index] = '\0';
	
	reverse_print_str(str, index);
	
	printf("\n");
}

void reverse_print_str(char *str, unsigned int size)
{
	int i;
	for (i=size;i>=0;i--)
		putc((*(str+i)), stdout);
}







