#include <stdio.h>
#include <math.h>

int binToDec(int bin) 
{
    int dec = 0, i = 0;
    while (bin) 
    {
        dec += (bin % 10) * pow(2, i++);
        bin /= 10;
    }
    return dec;
}

int decToOct(int dec) 
{
    int oct = 0, i = 1;
    while (dec) 
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

int octToDec(int oct) 
{
    int dec = 0, i = 0;
    while (oct) 
    {
        dec += (oct % 10) * pow(8, i++);
        oct /= 10;
    }
    return dec;
}

int decToBin(int dec) 
{
    int bin = 0, i = 1;
    while (dec) 
    {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}

int main() 
{
    int bin, oct;
    printf("Enter binary number: ");
    scanf("%d", &bin);
    printf("Enter octal number: ");
    scanf("%d", &oct);

    printf("Binary %d = Octal %d\n", bin, decToOct(binToDec(bin)));
    printf("Octal %d = Binary %d\n", oct, decToBin(octToDec(oct)));
    return 0;
}
