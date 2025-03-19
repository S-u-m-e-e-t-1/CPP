#include <stdio.h>

int main() {
    FILE *fp;
    long position;

    // Writing to a file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        perror("Error opening the file");
        return 1;
    }

    fputs("Hello, World!", fp);

    fclose(fp);

    // Reading from a file
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        perror("Error opening the file");
        return 1;
    }

    // Get the current position using ftell
    position = ftell(fp);
    printf("Current position: %ld\n", position);

    // Move the file pointer to the beginning using rewind
    rewind(fp);

    // Read the file content character by character and check for the end using feof
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Check if the end of the file has been reached using feof
    if (feof(fp)) {
        printf("\nEnd of the file reached.\n");
    } else {
        printf("\nEnd of the file not reached.\n");
    }

    fclose(fp);

    return 0;
}
