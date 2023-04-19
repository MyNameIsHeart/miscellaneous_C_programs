#include <stdio.h>

#define END_OF_MAIN 0;
 
int count ;
extern void write_extern();
 
int main() {
   count = 5;
   write_extern();
   
   return END_OF_MAIN;
}
