#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 100

int main() {
    char file_name[100];
    FILE *file;

    printf("Enter the file name: ");
    scanf("%s", file_name);

    // Open the file in read mode
    file = fopen(file_name, "r");
    
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char word[MAX_LINE_LENGTH];
    int word_count = 0;

    // Count words in the file
    while (fscanf(file, "%s", word) == 1) {
        word_count++;
    }

    printf("Number of words in the file: %d\n", word_count);

    // Close the file
    fclose(file);

    return 0;
}
