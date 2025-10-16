#include <stdio.h>

int gcd(int a, int b) {
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}
