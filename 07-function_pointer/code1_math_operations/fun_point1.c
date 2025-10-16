/* math_ops_fp.c */
#include <stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divide(int a,int b){return b? a/b:0;}

int main()
{
    int a,b,op;
    int (*opfp)(int,int)=NULL;

    printf("Enter a b: "); 
    if(scanf("%d %d",&a,&b)!=2) 
    return 0;

    printf("Select 0:+ 1:- 2:* 3:/ : "); 
    scanf("%d",&op);

    if(op==0) 
    {
        opfp=add; 
    }
    else if(op==1) 
    {
        opfp=sub;
    } 
    else if(op==2) 
    {
        opfp=mul; 
    }
    else 
    {
        opfp=divide;
    }
    printf("Result: %d\n", opfp(a,b));
    return 0;
}
