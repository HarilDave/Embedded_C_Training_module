#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1; 
    }
    return count;
}

int main() {
    unsigned int n;
    printf("Enter an unsigned integer: ");
    scanf("%u", &n);
    printf("Number of set bits: %d\n", countSetBits(n));
    return 0;
}
