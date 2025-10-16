#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *p=arr;
    for(int i=0;i<n;i++)
    {
        *(p+i)=*(p+i) +1;
        printf("%d ",*(p+i));
    }

    return 0;
}
