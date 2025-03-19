#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    char filename[] = "nonexistent.txt";

    // Try to open a non-existent file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening the file");
        clearerr(fp); // Clear the error state
        return 1;
    }

    // Try reading from the file (won't be executed due to the error above)
    fscanf(fp, "%d", &num);

    // Check if there was an error in the previous operation using ferror
    if (ferror(fp)) {
        perror("Error reading from the file");
    }

    fclose(fp);

    return 0;
}
