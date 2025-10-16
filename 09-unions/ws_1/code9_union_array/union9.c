#include <stdio.h>

union MyUnion {
    int iVal;
    float fVal;
    char cVal;
};

int main() 
{
    union MyUnion arr[3];

    arr[0].iVal = 10;      
    arr[1].fVal = 3.14f;  
    arr[2].cVal = 'A';    

    printf("arr[0].iVal = %d\n", arr[0].iVal);
    printf("arr[1].fVal = %.2f\n", arr[1].fVal);
    printf("arr[2].cVal = %c\n", arr[2].cVal);

    arr[0].fVal = 2.71f;  
    printf("After overwriting arr[0] with float: arr[0].fVal = %.2f, arr[0].iVal = %d\n",
           arr[0].fVal, arr[0].iVal);  // ival get garage val.(observation)

    return 0;
}
