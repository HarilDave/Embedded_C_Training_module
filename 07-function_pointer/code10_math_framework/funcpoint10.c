#include <stdio.h>

double mysin(double x)
{
    return sin(x);
}

double mycos(double x)
{
    return cos(x);
}

double mytan(double x)
{
    return tan(x);
}

double mylog(double x)
{
    return log(x);
}

int main()
{
    double(*mathfunc[4])(double)={mysin,mycos,mytan,mylog};
    int choice;
    double value,res;

    while(1)
    {
        printf("enter the choice : ");
        scanf("%d",&choice);

        if(choice==5) break;

        printf("Enter value: ");
        scanf("%lf", &value);

        res = mathfunc[choice-1](value);
        printf("Result: %.6lf\n", res);

        return 0;
    }
}