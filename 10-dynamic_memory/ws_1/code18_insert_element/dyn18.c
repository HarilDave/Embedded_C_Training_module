#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL) return 1;

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter position ");
    scanf("%d", &pos);

    arr = (int *)realloc(arr, (n+1) * sizeof(int));

    for(int i = n; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
