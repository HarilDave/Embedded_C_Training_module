#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    int binary[32];
    int i = 0;

    while(n > 0) 
    {
        binary[i] = n & 1; 
        n = n >> 1; 
        i++;
    }

    printf("Binary representation: ");
    for(int j = i-1; j >= 0; j--) 
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
