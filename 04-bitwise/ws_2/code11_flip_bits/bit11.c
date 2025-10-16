#include <stdio.h>

int main() {
    unsigned char n; 
    printf("Enter an 8-bit number: ");
    scanf("%u", &n);

    unsigned char flipped = ~n; 
    printf("Original: %u\n", n);
    printf("Flipped bits: %u\n", flipped);

    return 0;
}
