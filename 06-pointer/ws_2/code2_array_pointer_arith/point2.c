#include <stdio.h>

void reverseArray(int *ptr, int size) {
    int *start = ptr;
    int *end = ptr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    printf("Enter the total elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;  
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);  
        *(ptr + i) += 1;    
    }
    printf("Sum of elements: %d\n", sum);

    reverseArray(ptr, n);

    printf("Reversed array (after incrementing each element by 1): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
