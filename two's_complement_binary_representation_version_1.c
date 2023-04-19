/* This is a program in C to print out                              *
 * how signed numbers are represented in binary (two's complement)  */

#include <stdio.h>

int binary_representation(signed int, unsigned int);

int main()
{
    /* The size of an int is compiler dependent -                                       *
     * that's why we first need to determine it's size using a compile-time operator.   */
     
    /* This is the number of bits used to store an integer on this system / environment.*/
    unsigned int num_of_bits = 8 * sizeof(int);
    
    /* sizeof(int) returns the number of bytes used to store an integer.                *
    * There are 8 bits in a byte.                                                       */
    
    int num;
    
    printf("Please enter a number:\n");
    
    if (scanf("%d", &num) != 1)
    {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    
    printf("The number of bytes used to store an integer on this system / environment is %lu which is %u bits.\n", sizeof(int), num_of_bits);
    printf("The signed binary representation (two's complement) of %d is ", num);
    binary_representation(num, num_of_bits);
    printf(".");

    return 0;
}

int binary_representation(signed int num, unsigned int num_of_bits)
{
    int bitmask = 0;
    int i = 0;
    
    while (i<num_of_bits)
    {
        i++;
        bitmask = 1<<(num_of_bits-i);
        printf("%d", ((bitmask & num) ? 1 : 0));
    }
    
    return 0;
}
