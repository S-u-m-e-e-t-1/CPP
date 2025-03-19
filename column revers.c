#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Create the matrix of user-defined size
    int matrix[rows][cols];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix: \n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Reverse the columns of the matrix
    for(j = 0; j < cols; j++)
    {
        for(i = 0; i < rows/2; i++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[rows-i-1][j];
            matrix[rows-i-1][j] = temp;
        }
    }

    // Output the reversed matrix
    printf("The matrix with columns reversed:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
