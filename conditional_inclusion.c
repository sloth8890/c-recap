#include<stdio.h>
#include "declarations.h"

int main() {
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