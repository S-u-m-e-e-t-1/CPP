#include <stdio.h>

int main() {
    FILE *file;
    char fileName[50];
    char message[100];

    printf("Enter the file name: ");
    scanf("%s", fileName);

    printf("Enter the text or message: ");
    scanf(" %[^\n]s", message);

    file = fopen(fileName, "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    fprintf(file , message);

    fclose(file);

    printf("File created successfully.\n");

    return 0;
}
