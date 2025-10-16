#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Using arr[i]:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nUsing *(arr + i):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    return 0;
}
