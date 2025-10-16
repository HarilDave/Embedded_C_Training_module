#include <stdio.h>
#include <stdlib.h>

// int main() 
// {
//     int *ptr;

//     ptr = (int *)malloc(sizeof(int));

//     *ptr = 42;

//     printf("Value = %d\n", *ptr);

//     free(ptr);

//     return 0;
// }

int main()
{
    int *ptr;

    ptr=(int*)malloc(sizeof(int));

    *ptr=42;

    printf("%d",*ptr);

    free(ptr);
}