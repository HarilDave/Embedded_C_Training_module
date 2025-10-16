#include <stdio.h>
#include <math.h>

double power(double a, double b) { return pow(a,b); }
double modulo(double a, double b) { return fmod(a,b); }
double squareRoot(double a, double b) { return sqrt(a); }

int main() 
{
    double (*ops[3])(double,double) = {power, modulo, squareRoot};

    int choice;

    double x, y, res;

    while(1)
    {
        printf("\n1.Power  2.Modulo  3.SquareRoot  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==4) break;

        printf("Enter first number: "); 
        scanf("%lf",&x);

        if(choice!=3)
        { 
            printf("Enter second number: "); 
            scanf("%lf",&y); 
        }

        res = ops[choice-1](x,y);
        printf("Result: %.2lf\n",res);
    }
    return 0;
}
