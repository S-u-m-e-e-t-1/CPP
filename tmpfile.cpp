#include <stdio.h>

int main() {
    FILE *fp;

     
    fp = tmpfile();
    if (fp == NULL) {
        perror("Error creating the temporary file");
        return 1;
    }

    
    fputs("This is some data in the temporary file.", fp);

    

    return 0;
}
