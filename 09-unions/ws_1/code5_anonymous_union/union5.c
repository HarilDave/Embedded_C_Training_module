#include <stdio.h>

struct Data 
{
    int type; 
    union 
    {  
        int iVal;
        float fVal;
    };  
};

int main() 
{
    struct Data d1, d2;

    d1.type = 0;
    d1.iVal = 42;   

    d2.type = 1;
    d2.fVal = 3.14f;  

    if (d1.type == 0)
        printf("d1 contains int: %d\n", d1.iVal);

    if (d2.type == 1)
        printf("d2 contains float: %.2f\n", d2.fVal);

    return 0;
}
