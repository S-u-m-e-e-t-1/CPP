#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i;
    int *arr;

    printf("Enter the current size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int newSize;
    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter additional %d integers:\n", newSize - size);
    for (i = size; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements stored in the array are: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
