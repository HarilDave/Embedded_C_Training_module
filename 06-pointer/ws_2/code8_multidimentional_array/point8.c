#include <stdio.h>

void printMatrix(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(mat + i*cols + j)); 
        }
        printf("\n");
    }
}

void transposeMatrix(int *mat, int *trans, int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            *(trans + j*rows + i) = *(mat + i*cols + j);
}

int main() {
    int rows = 2, cols = 3;
    int mat[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int trans[3][2]; 

    printf("Original matrix:\n");
    printMatrix(&mat[0][0], rows, cols);

    transposeMatrix(&mat[0][0], &trans[0][0], rows, cols);

    printf("Transposed matrix:\n");
    printMatrix(&trans[0][0], cols, rows);

    return 0;
}
