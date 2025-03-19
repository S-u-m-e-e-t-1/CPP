#include <stdio.h>

int main() {
    FILE *file;
    char fileName[50];
    char message[100];
    int mode;

    printf("Enter the file name: ");
    scanf("%s", fileName);

    printf("Enter the text or message: ");
    scanf(" %[^\n]s", message);

    printf("Enter the mode to open the file:\n");
    printf("1. Read\n");
    printf("2. Write\n");
    printf("3. Append\n");
    scanf("%d", &mode);

    switch (mode) {
        case 1:
            file = fopen(fileName, "r");
            break;
        case 2:
            file = fopen(fileName, "w");
            break;
        case 3:
            file = fopen(fileName, "a");
            break;
        default:
            printf("Invalid mode.\n");
            return 1;
    }

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    fprintf(file, "%s", message);

    fclose(file);

    printf("File created/updated successfully.\n");

    return 0;
}
