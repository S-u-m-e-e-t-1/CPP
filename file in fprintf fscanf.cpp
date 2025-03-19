 #include <stdio.h>

int main() {
    char filename[20];
    char CONTENT[1000];
    FILE *file;
    
    printf("Enter the filename: ");
    scanf("%s", filename);
    
	printf("Enter content\n");
	scanf("%s",CONTENT);
    
    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fprintf(file,CONTENT);
    fclose(file );
    file= fopen( filename, "r");

    if (file== NULL) {
        printf("File could not be opened for reading.\n");
        return 1;
    }

 
    char buffer[100];
    while (fscanf(file, "%s",buffer) != EOF) {
        printf("%s ", buffer);
    }

    // Close the file
    fclose(file);
}