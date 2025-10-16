#include <stdio.h>

void cmd1()
{
    printf("this is cmd 1\n");
}

void cmd2()
{
    printf("this is cmd 2\n");
}

void cmd3()
{
    printf("this is cmd 3\n");
}

int main()
{
    void(*command[])()={cmd1,cmd2,cmd3};

    int cm;

    while(1)
    {
        if(cm==3)
        {
            break;
        }
        printf("enter the command num 1-3 : ");
        scanf("%d",&cm);

        command[cm]();
    }
    return 0;
}