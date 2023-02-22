//? Generated by ChatGPT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100
#define MAX_NUM_STRINGS 100

int main() {
    char strings[MAX_NUM_STRINGS][MAX_STRING_LENGTH]; // array to store the strings
    int string_count = 0; // variable to keep track of the number of strings read from the file

    // Open the file for reading
    FILE *fp = fopen("playlist.txt", "r");
    if (fp == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    // Read the strings from the file one by one
    //? fgets function stops reading when a newline character is found, at end-of-file or error
    while (fgets(strings[string_count], MAX_STRING_LENGTH, fp) != NULL && string_count < MAX_NUM_STRINGS) {
        // Remove the newline character from the end of the string
        strings[string_count][strlen(strings[string_count]) - 1] = '\0';

        // Increment the string count
        string_count++;
    }

    // Close the file
    fclose(fp);

    // Print the strings
    for (int i = 0; i < string_count; i++) {
        printf("Song %d: %s\n", i + 1, strings[i]);
    }

    return 0;
}
