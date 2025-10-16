#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr + n - 1;

    printf("Array in reverse: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
}
