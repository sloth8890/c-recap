#include <stdio.h>

int main() {
    int c;
    printf("Enter some input (press Ctrl+D to end):\n");
    while ((c = fgetc(stdin)) != EOF) {
        putchar(c);
    }

    // Alternative ways to use
    //? Terminate when user press enter.
    /*
    while ((c = fgetc(stdin)) != EOF) {
      if (c != '\n') {
        putchar(c);
      }else {
        break;
      }
    }
    */
    return 0;
}