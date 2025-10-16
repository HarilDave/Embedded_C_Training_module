#include <stdio.h>

int main() {

    int msb = 7;
    unsigned int n;

    printf("enter the num : ");
    scanf("%u",&n);

    printf("lsb to 1 , %u\n",n|1);
    printf("clear bit 1 , %u\n",n&~1);
    printf("Toggle LSB: %u\n", n ^ 1);

    printf("Set MSB: %u\n", n | (1U << msb));
    printf("Clear MSB: %u\n", n & ~(1U << msb));
    printf("Toggle MSB: %u\n", n ^ (1U << msb));

    return 0;
}
