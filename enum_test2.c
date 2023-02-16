#include<stdio.h>
enum holding_type {
    book, 
    film
}; 

struct catalog
{
    char * title; // size of 8
    enum holding_type type; // size of 4
    struct /* book */
    {
        char * author;
        char * ISBN;
    } book_info; // size of 16
    struct /* film */ {
        char * director;
        char * producer; 
    } film_info; // size of 16
};

struct catalog2
{
    char * title; // size of 8
    enum holding_type type; // size of 4
    union {
        struct /* book */
        {
            char * author;
            char * ISBN;
        } book_info; // size of 16
        struct /* film */ {
            char * director;
            char * producer; 
        } film_info; // size of 16
    }info;
};
//waste of memory 
int main() {
    printf("%lu\n",sizeof(struct catalog)); // 12 + 32 = 44, + 4 that added by compiler to align two structures.
    printf("%lu\n",sizeof(struct catalog2)); // saves memory by using union.  The size of the union is the size of the largest member.
    return 0;
}

/*
does compiler always add 4 bytes for aligning memory?
The answer to this question depends on the specific compiler and architecture being used. 
In general, compilers will add padding to structures in order to align their members in memory to improve performance. 
The amount of padding added can vary depending on the specific requirements of the architecture and the compiler, but it is common for compilers to align structures on 4- or 8-byte boundaries. 
However, this is not always the case, and the amount of padding added by the compiler can vary, so it's best to check the documentation for the specific compiler and architecture being used to determine the exact behavior.
*/
