#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    int *arr1, *arr2;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    arr1 = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("malloc array values: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    free(arr1);

    arr2 = (int *)calloc(n, sizeof(int));

    printf("calloc array values default: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    printf("Enter %d integers for calloc array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("calloc array values after assignment: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    free(arr2);

    return 0;
}
