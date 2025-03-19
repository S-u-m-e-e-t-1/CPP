#include <stdio.h>

int main() {
    FILE *file;
    char message[100];

    file = fopen("suraj.txt", "w");

    if (file == NULL) {
        printf("Error creating the file.\n");
        return 1;
    }

    printf("Enter the text or message to write to the file (max 100 characters):\n");
    fgets(message, sizeof(message), stdin);

    fprintf(file, "%s", message);

    fclose(file);

    printf("File created and text written successfully.\n");

    return 0;
}
