#include <stdio.h>

#define N 3 // size of the matrix

int main() {
    int i, j, k;
    float A[N][N] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}}; // example matrix
    
    float det = 1;
    
    // Gaussian elimination to convert matrix to upper triangular form
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            float factor = A[j][i] / A[i][i];
            for (k = i; k < N; k++) {
                A[j][k] -= factor * A[i][k];
            }
        }
    }
    
    // Take product of diagonal elements to get determinant
    for (i = 0; i < N; i++) {
        det *= A[i][i];
    }
    
    printf("Determinant: %f\n", det);
    
    return 0;
}
