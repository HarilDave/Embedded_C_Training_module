#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    struct node *head,*a,*b,*c,*d;
    head=(struct node*)malloc(sizeof(struct node));
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    d=(struct node*)malloc(sizeof(struct node));

    head->data=1;a->data=2;b->data=2;c->data=1;
    head->next=a;a->next=b;b->next=c;c->next=NULL;

    int arr[100],i=0,j;
    struct node *temp=head;

    while(temp!=NULL)
    {
        arr[i++]=temp->data;
        temp=temp->next;
    }

    int flag=1;
    for(j=0;j<i/2;j++)
    {
        if(arr[j]!=arr[i-j-1])
        {
            flag=0;
            break;
        }
    }

    if(flag)
    {
        printf("palidrome");
    }
    else
    {
        printf("not palidrome");
    }

    return 0;
}