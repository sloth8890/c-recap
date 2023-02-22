#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {
    printf("Hello from main process\n");
    execl("./hello.o", NULL);
    // excutes once execl function fails
    printf("execl has been failed.\n");
    return 0;
}