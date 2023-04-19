#include <stdio.h>

/*
An integer literal can be a decimal, octal, or hexadecimal constant. A prefix specifies the base or radix: 0x or 0X for hexadecimal, 0 for octal, and nothing for decimal.

An integer literal can also have a suffix that is a combination of U and L, for unsigned and long, respectively. The suffix can be uppercase or lowercase and can be in any order.
*/

int main() {
   
   const int ex1 = 212         /* Legal */;
   const int ex2 = 215u        /* Legal */;
   const int ex3 = 0xFeeL      /* Legal */;
   const int ex4 = 078         /* Illegal: 8 is not an octal digit */;
   const int ex5 = 032UU       /* Illegal: cannot repeat a suffix */;
   const int ex6 = 85         /* decimal */;
   const int ex7 = 0213       /* octal */;
   const int ex8 = 0x4b       /* hexadecimal */;
   const int ex9 = 30         /* int */;
   const int ex10 = 30u        /* unsigned int */;
   const int ex11 = 30l        /* long */;
   const int ex12 = 30ul       /* unsigned long */;
   
   return 0;
}
