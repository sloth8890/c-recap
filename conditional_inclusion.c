#include<stdio.h>
#include "declarations.h"

int main() {
    //? gcc -D<identifier> is equivalent to #define identifier 
    // ex) gcc -DWIDTH=600 -DTEST prog.c

    /*
    #ifdef
    #if
    #ifndef 
    #else 
    #elif 
    #undef 
    #endif
    */
   #ifndef DEBUG
   printf("Debug is not defined.\n");
   #else
   printf("Debug is defined.\n");
   #endif
   
   return 0;

}