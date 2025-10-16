#include <stdio.h>

int main() {
    unsigned int n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &n);

    for (int i = 31; i >= 0; i--) { 
        if (n & (1U << i))
            break;
        count++;
    }

    printf("Number of leading zeros: %d\n", count);
    return 0;
}
