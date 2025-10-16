#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3, i;
    int *arr, *start, *end, temp;

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i); 
    }

    start = arr;
    end = arr + n - 1;
    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    free(arr);
    return 0;
}
