#include <stdio.h>

int doubleval(int x)
{
    return x*2;
}
int increment(int x)
{
    return x+1;
}
int square(int x)
{
    return x*x;
}

int main()
{
    int (*pipeline[])(int)={doubleval,increment,square};
    int choice;
    int n=sizeof(pipeline)/sizeof(pipeline[0]);

    printf("enter choice num : ");
    scanf("%d",&choice);

    for(int i=0;i<n;i++)
    {
        choice=pipeline[i](choice);
    }

    printf("Result after pipeline: %d\n", choice);
    return 0;
}