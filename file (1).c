#include <stdio.h>

int main() {
   FILE *file;

   file = fopen("example.txt", "w"); // Open file in write mode

   if (file == NULL) {
      printf("Error opening the file.\n");
      return 1;
   }

   fprintf(file, "This is an example file created using C programming language.\n");
   fprintf(file, "You can write any content you want.\n");

   fclose(file); // Close the file

   printf("File created successfully.\n");

   return 0;
}
