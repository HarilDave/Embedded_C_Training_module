#include <stdio.h>

unsigned int rotateLeft(unsigned int n, int d) {
    int bits = sizeof(n) * 8;
    return (n << d) | (n >> (bits - d));
}

unsigned int rotateRight(unsigned int n, int d) {
    int bits = sizeof(n) * 8;
    return (n >> d) | (n << (bits - d));
}

int main() {
    unsigned int n, result;
    int d;
    char dir;

    printf("Enter a number: ");
    scanf("%u", &n);
    printf("Enter positions to rotate: ");
    scanf("%d", &d);
    printf("Rotate left or right (L/R): ");
    scanf(" %c", &dir);

    if (dir == 'L' || dir == 'l')
        result = rotateLeft(n, d);
    else
        result = rotateRight(n, d);

    printf("Result after rotation: %u\n", result);
    return 0;
}
