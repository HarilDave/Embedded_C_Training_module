#include <stdio.h>

typedef struct {
    unsigned int error : 1; 
    unsigned int ready : 1; 
    unsigned int mode  : 2;  
    unsigned int reserved : 4; 
} StatusReg;

int main() {
    StatusReg reg = {0};  
    reg.error = 1;  
    reg.ready = 0;   
    reg.mode = 2;    

    printf("Error: %u, Ready: %u, Mode: %u\n", reg.error, reg.ready, reg.mode);

    reg.error = !reg.error;  
    reg.ready = !reg.ready; 

    printf("After toggling -> Error: %u, Ready: %u, Mode: %u\n", reg.error, reg.ready, reg.mode);

    return 0;
}
