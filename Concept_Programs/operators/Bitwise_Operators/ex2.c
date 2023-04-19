// C Program to demonstrate use of bitwise operators
#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned int);
void reverse_print_str(char *, unsigned int);

int main()
{
	printf("\n");

	// a = 5(00000101), b = 9(00001001)
	
	unsigned char a = 5, b = 9;
	unsigned char temp = 0;

	printf("Decimal:\n");
	printf("a = %d, b = %d\n", a, b);

	printf("Binary:\n");
	printf("a = ");
	print_binary(a);
	printf("b = ");
	print_binary(b);
	
	printf("\n");
	
	
	// The result is 00000001
	
	temp = a & b;
	
	printf("Decimal:\n");
	printf("a&b = %d\n", temp);
	
	printf("Binary:\n");
	print_binary(temp);
	
	printf("\n");
	
	
	// The result is 00001101
	
	temp = a | b;
	
	printf("Decimal:\n");
	printf("a|b = %d\n", temp);
	
	printf("Binary:\n");
	print_binary(temp);
	
	printf("\n");
	

	// The result is 00001100
	
	temp = a ^ b;
	
	printf("Decimal:\n");
	printf("a^b = %d\n", temp);
	
	printf("Binary:\n");
	print_binary(temp);
	
	printf("\n");
	
	
	// The result is 11111010
	
	temp = ~a;
	
	printf("Decimal:\n");
	printf("~a = %d\n", temp);
	
	printf("Binary:\n");
	print_binary(temp);
	
	printf("\n");
	

	// The result is 00010010
	
	temp = b << 1;
	
	printf("Decimal:\n");
	printf("b<<1 = %d\n", temp);
	
	printf("Binary:\n");
	print_binary(temp);
	
	printf("\n");
	

	// The result is 00000100
	
	temp = b >> 1;
	
	printf("Decimal:\n");
	printf("b>>1 = %d\n", temp);
	
	printf("Binary:\n");
	print_binary(temp);
	
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
    		str[index++] = (number & 1) ? '1' : '0';
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

