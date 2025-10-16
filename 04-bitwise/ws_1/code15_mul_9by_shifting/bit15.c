#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = (n << 3) + n;
    printf("%d multiplied by 9 = %d\n", n, result);

    return 0;
}
