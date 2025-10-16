#include <stdio.h>

unsigned int reverseOddBits(unsigned int n) {
    unsigned int odd_mask = 0xAAAAAAAA; 
    unsigned int even_mask = 0x55555555; 
    return ((n & odd_mask) >> 1) | ((n & even_mask) << 1);
}

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);

    unsigned int result = reverseOddBits(n);
    printf("Original: %u\n", n);
    printf("After swapping odd and even bits: %u\n", result);

    return 0;
}
