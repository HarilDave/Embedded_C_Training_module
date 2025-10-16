#include <stdio.h>

int main() {
    unsigned int n = ~0;
    int count = 0;
    while (n) {
        count++;
        n >>= 1;
    }
    printf("Size of integer in bits = %d\n", count);
    return 0;
}
