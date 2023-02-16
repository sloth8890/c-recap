#include<stdio.h>

int main() {
    const char * ptr = "hello";
    const char array[] = "hello";
    const char array2[] = { 'h', 'e', 'l', 'l', 'o' };
    const char array3[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
    const char array4[5] = { 'h', 'e', 'l', 'l', 'o' };
    const char array5[6] = { 'h', 'e', 'l', 'l', 'o', 0 };
    const char array6[20] = { 'h', 'e', 'l', 'l', 'o' };
    const char array7[20] = { 0 };
    const char array8[20] = "hello";


    printf("%zu %zu\n", sizeof(ptr), sizeof(array));
    printf("%zu %zu\n", sizeof(array2), sizeof(array3));
    //TODO 
    //!!!!!
    printf("%zu %zu\n", sizeof(*ptr), sizeof(&array));
    printf("%c \n", *ptr+1);
    printf("%zu %zu\n", sizeof(&array2), sizeof(&array3));
    
}
