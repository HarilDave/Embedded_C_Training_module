#include <stdio.h>

int main() {
    int n = 0, x;
    double arr[] = {1.1, 2.2, 3.3, 4.4};
    double *ptr = arr;

    printf("Enter the element position (1-4): ");
    scanf("%d", &n);

    printf("Enter the decimal precision: ");
    scanf("%d", &x);

    printf("%d element is %.*f\n", n, x, *(ptr + (n - 1)));

    return 0;
}
