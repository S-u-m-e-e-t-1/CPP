#include <stdio.h>

int main()
{
    int m, n, i, j, k, temp;
    int matrix[100][100];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The original matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // Sort the rows of the matrix in ascending order
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (matrix[i][j] > matrix[i][k])
                {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = temp;
                }
            }
        }
    }
    printf("The matrix with rows sorted in ascending order is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
