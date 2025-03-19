#include <stdio.h>

int main() {
    char name [100];
    int line = 0;
    FILE *file;

    printf("Enter the file name: ");
    scanf("%s", name);
    file = fopen(name, "r");
    
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            line++;
        }
    }

    
    line++;

    printf("Number of lines in the file: %d\n",  line);
 
    fclose(file);

    return 0;
}
