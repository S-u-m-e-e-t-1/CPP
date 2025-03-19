#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, columns, i, j;
    int **matrix;

    printf("Enter the current number of rows: ");
    scanf("%d", &rows);

    printf("Enter the current number of columns: ");
    scanf("%d", &columns);

    matrix = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(columns * sizeof(int));
    }

    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int newRows, newColumns;
    printf("Enter the new number of rows: ");
    scanf("%d", &newRows);

    printf("Enter the new number of columns: ");
    scanf("%d", &newColumns);

    matrix = (int **)realloc(matrix, newRows * sizeof(int *));
    for (i = rows; i < newRows; i++) {
        matrix[i] = (int *)malloc(newColumns * sizeof(int));
    }

    if (matrix == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter additional elements of the matrix:\n");
    for (i = 0; i < newRows; i++) {
        for (j = columns; j < newColumns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix entered is:\n");
    for (i = 0; i < newRows; i++) {
        for (j = 0; j < newColumns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < newRows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
