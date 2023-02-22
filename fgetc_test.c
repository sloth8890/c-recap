#include <stdio.h>

int main() {
    int c;
    printf("Enter some input (press Ctrl+D to end):\n");
    while ((c = fgetc(stdin)) != EOF) {
        putchar(c);
    }
    return 0;
}