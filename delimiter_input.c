#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER_SIZE 10

//TODO getchar scanf

int main() {
    int t = BUFFER_SIZE;
    int idx = 0;
    char *collection = (char *) malloc(BUFFER_SIZE * sizeof(char));
    int rst;
    while ((rst = getchar()) != EOF) {
        if (idx < t) {
            collection[idx++] = rst;
            // printf("wrote %c.\n",collection[idx-1]);
        }else {
            printf("exceed\n");
            t += BUFFER_SIZE;
            collection = (char *) realloc(collection, t);
            collection[idx++] = rst;
        }
        if (rst == '.') {
            collection[idx] = '\0';
            break;
        }
    }
    printf("%s\n",collection);
    return 0;
}