#include <stdio.h>

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);

    if (n != 0 && (n & (n - 1)) == 0)
        printf("%u is a power of 2\n", n);
    else
        printf("%u is not a power of 2\n", n);

    return 0;
}
