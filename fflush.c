#include <stdio.h>

int main() {
    FILE *fp;

    // Writing to a file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        perror("Error opening the file");
        return 1;
    }

    fputs("Hello, World!", fp);

    // Flush the data to the file immediately using fflush
    fflush(fp);

    fclose(fp);

    return 0;
}
