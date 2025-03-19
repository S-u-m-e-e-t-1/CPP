#include <stdio.h>
#include <string.h>

#definelen 100

int main() {
    char name[100];
    char search[100];
    FILE *file;

    printf("Enter the file name: ");
    scanf("%s", name);

    printf("Enter the string to search: ");
    scanf("%s", search);

  
    file = fopen(name, "r");
    
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH
    int line_number = 0;

     
    while (fgets(line,len, file)) {
        line_number++;
        if (strstr(line, search) != NULL) {
            printf("Found '%s' in line %d: %s", search, line_number, line);
        }
    }

    // Close the file
    fclose(file);

    return 0;
}
