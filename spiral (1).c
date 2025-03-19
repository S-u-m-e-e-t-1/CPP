#include <stdio.h>

void print_spiral(int matrix[100][100], int m, int n)
{
    int i, k = 0, l = 0;
    while (k < m && l < n)
    {
        // Print the first row from the remaining rows
        for (i = l; i < n; i++)
        {
            printf("%d ", matrix[k][i]);
        }
        k++;

        // Print the last column from the remaining columns
        for (i = k; i < m; i++)
        {
            printf("%d ", matrix[i][n - 1]);
        }
        n--;

        // Print the last row from the remaining rows
        if (k < m)
        {
            for (i = n - 1; i >= l; i--)
            {
                printf("%d ", matrix[m - 1][i]);
            }
            m--;\
        }

        // Print the first column from the remaining columns
        if (l < n)
        {
            for (i = m - 1; i >= k; i--)
            {
                printf("%d ", matrix[i][l]);
            }
            l++;
        }
    }
}

int main()
{
    int m, n, i, j;
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
    printf("The matrix in spiral order is: ");
    print_spiral(matrix, m, n);
    return 0;
}
