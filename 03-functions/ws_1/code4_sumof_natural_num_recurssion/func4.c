#include <stdio.h>

int sumNatural(int n) {
    if (n == 0) return 0;
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of natural numbers up to %d is %d\n", n, sumNatural(n));
    return 0;
}
