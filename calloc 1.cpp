#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)calloc(1, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("The value stored at the allocated memory is: %d\n", *ptr);

    free(ptr);
    return 0;
}
