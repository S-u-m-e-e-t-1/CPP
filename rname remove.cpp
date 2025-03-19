#include <stdio.h>

int main() {
    FILE *fp;

    // Writing to a file
    fp = fopen("oldfile.txt", "w");
    if (fp == NULL) {
        perror("Error opening the file");
        return 1;
    }

    fputs("This is the old content.", fp);

    fclose(fp);

    // Rename the file
    if (rename("oldfile.txt", "newfile.txt") == 0) {
        printf("File renamed successfully.\n");
    } else {
        perror("Error renaming the file");
        return 1;
    }

    // Remove the file
    if (remove("newfile.txt") == 0) {
        printf("File removed successfully.\n");
    } else {
        perror("Error removing the file");
        return 1;
    }

    return 0;
}
