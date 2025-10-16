#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a = 10;
    float f = 3.14;
    char c = 'X';

    int *pInt = &a;
    float *pFloat = &f;
    char *pChar = &c;

    printf("Values via pointers: int=%d, float=%.2f, char=%c\n", *pInt, *pFloat, *pChar);

    int *dynInt = (int*)malloc(5 * sizeof(int));
    float *dynFloat = (float*)malloc(3 * sizeof(float));
    char *dynChar = (char*)malloc(4 * sizeof(char));

    for (int i = 0; i < 5; i++)
        *(dynInt + i) = i + 1;

    for (int i = 0; i < 3; i++)
        *(dynFloat + i) = 1.1 * (i + 1);

    for (int i = 0; i < 4; i++)
        *(dynChar + i) = 'A' + i;

    printf("Dynamic int array: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(dynInt + i));
    printf("\n");

    printf("Dynamic float array: ");
    for (int i = 0; i < 3; i++)
        printf("%.1f ", *(dynFloat + i));
    printf("\n");

    printf("Dynamic char array: ");
    for (int i = 0; i < 4; i++)
        printf("%c ", *(dynChar + i));
    printf("\n");

    void *vPtr = dynInt;
    int *castPtr = (int*)vPtr;
    printf("First element via typecasted void pointer: %d\n", *castPtr);

    free(dynInt);
    free(dynFloat);
    free(dynChar);

    return 0;
}
