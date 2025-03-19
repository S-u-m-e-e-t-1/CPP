#include <stdio.h>

int main() {
    FILE *fp;

    // Redirect stdout to a file
    fp = freopen("output.txt", "w", stdout);
    if (fp == NULL) {
        perror("Error opening the file");
        return 1;
    }

    printf("This message will be written to output.txt\n");

    fclose(fp);

    return 0;
}
