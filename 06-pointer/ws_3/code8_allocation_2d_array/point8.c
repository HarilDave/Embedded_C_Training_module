#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int rows = 4, cols = 4;

    uint32_t **reg_block = (uint32_t **)malloc(rows * sizeof(uint32_t *));
    if (reg_block == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        reg_block[i] = (uint32_t *)malloc(cols * sizeof(uint32_t));
        if (reg_block[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i);
            
            for (int j = 0; j < i; j++)
                free(reg_block[j]);
            free(reg_block);
            return 1;
        }
    }

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            reg_block[i][j] = (i+1)*0x10 + j; 


    printf("Register Map (4x4):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%#010x ", *(*(reg_block + i) + j)); 
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
        free(reg_block[i]);
    free(reg_block);

    return 0;
}
