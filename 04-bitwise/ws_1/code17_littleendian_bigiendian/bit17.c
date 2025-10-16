#include <stdio.h>

unsigned int swapEndian(unsigned int n) {
    return ((n>>24)&0xFF) |     
           ((n<<24)&0xFF000000) | 
           ((n>>8)&0xFF00) |    
           ((n<<8)&0xFF0000); 
}

int main() {
    unsigned int n;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &n);

    unsigned int bigEndian = swapEndian(n);
    printf("Big Endian equivalent: %u\n", bigEndian);
    return 0;
}
