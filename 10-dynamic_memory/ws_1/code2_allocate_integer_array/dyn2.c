#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    int *arr;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    free(arr);

    return 0;
}
