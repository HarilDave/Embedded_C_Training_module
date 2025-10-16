#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint32_t CTRL;
    uint32_t STATUS;
    uint32_t DATA;
} PeripheralReg;

int main() {
    int n = 3;

    PeripheralReg regs[3] = {
        {0x01, 0x00, 0x10},
        {0x02, 0x01, 0x20},
        {0x03, 0x00, 0x30}
    };

    PeripheralReg *ptr = regs; 

    printf("Original register values:\n");
    for (int i = 0; i < n; i++) {
        printf("Reg %d: CTRL=%#x STATUS=%#x DATA=%#x\n",
               i, (ptr+i)->CTRL, (ptr+i)->STATUS, (ptr+i)->DATA);
    }

    for (int i = 0; i < n; i++) {
        (ptr+i)->DATA += 5;      
        (ptr+i)->STATUS = 0xFF;   
    }

    printf("\nModified register values:\n");
    for (int i = 0; i < n; i++) {
        printf("Reg %d: CTRL=%#x STATUS=%#x DATA=%#x\n",
               i, (ptr+i)->CTRL, (ptr+i)->STATUS, (ptr+i)->DATA);
    }

    return 0;
}
