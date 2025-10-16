#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p1 = &arr[2]; 
    int *p2 = &arr[4]; 

    if (p1 < p2)
        printf("Pointer p1 points to a smaller index element.\n");
    else if (p2 < p1)
        printf("Pointer p2 points to a smaller index element.\n");
    else
        printf("Both pointers point to the same element.\n");

    return 0;
}
