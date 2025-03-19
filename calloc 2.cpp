#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, columns, i, j;
    int **matrix;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    matrix = (int **)calloc(rows, sizeof(int *));
    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)calloc(columns, sizeof(int));
    }

    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("The matrix entered is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
