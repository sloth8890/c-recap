#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//TODO get the difference between fread() and fgets()
int main() {
    FILE* file = fopen("file.txt", "r"); // open file for reading
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char delimiter = '|'; // the delimiter we're looking for
    char* buffer = (char*) malloc(100 * sizeof(char)); // allocate buffer for string
    int index = 0;
    char c;
    //TODO implement edge case for buffer overflow.
    while ((c = fgetc(file)) != EOF) { // read file character by character
        if (c == delimiter) {
            buffer[index] = '\0'; // add null terminator to string
            break;
        }
        buffer[index++] = c; // add character to string
    }

    printf("Read string: %s\n", buffer);

    free(buffer); // free allocated memory
    fclose(file); // close file
    return 0;
}
