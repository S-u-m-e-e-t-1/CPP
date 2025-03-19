#include <stdio.h>

int main()
{
    int n, i, j, row, col, next_row, next_col;
    printf("Enter the size of the magic square (must be odd): ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Error: size must be odd.\n");
        return 1;
    }
    int square[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            square[i][j] = 0;
        }
    }
    row = 0;
    col = n / 2;
    square[row][col] = 1;
    for (i = 2; i <= n * n; i++) {
        next_row = (row - 1 + n) % n;
        next_col = (col + 1) % n;
        if (square[next_row][next_col] != 0) {
            row = (row + 1) % n;
        }
        else {
            row = next_row;
            col = next_col;
        }
        square[row][col] = i;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }
    return 0;
}
