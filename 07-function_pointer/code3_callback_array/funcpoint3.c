#include <stdio.h>

typedef void (*Callback)(int*);

void processArray(int arr[], int size, Callback func) 
{
    for(int i = 0; i < size; i++) 
    {
        func(&arr[i]);
    }
}

void increment(int *x) 
{
    (*x)++;
}

void doubleValue(int *x) 
{
    (*x) *= 2;
}

int main() 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr1)/sizeof(arr1[0]);

    processArray(arr1, size, increment);
    printf("After increment: ");
    for(int i = 0; i < size; i++) printf("%d ", arr1[i]);
    printf("\n");

    processArray(arr1, size, doubleValue);
    printf("After doubleValue: ");
    for(int i = 0; i < size; i++) printf("%d ", arr1[i]);
    printf("\n");

    return 0;
}
