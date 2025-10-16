#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head=NULL,*temp,*newnode,*less=NULL,*greater=NULL,*ltemp=NULL,*gtemp=NULL;
    int n,i,x;

    printf("Enter total elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");

    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL) head=newnode;
        else
        {
            temp=head;
            while(temp->next!=NULL) temp=temp->next;
            temp->next=newnode;
        }
    }

    printf("Enter x: ");
    scanf("%d",&x);

    temp=head;
    while(temp!=NULL)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=temp->data;
        newnode->next=NULL;
        if(temp->data < x)
        {
            if(less==NULL) less=newnode;
            else{ ltemp=less; while(ltemp->next!=NULL) ltemp=ltemp->next; ltemp->next=newnode; }
        } 
        else 
        {
            if(greater==NULL) greater=newnode;
            else{ gtemp=greater; while(gtemp->next!=NULL) gtemp=gtemp->next; gtemp->next=newnode; }
        }
        temp=temp->next;
    }

    if(less==NULL) head=greater;

    else
    {
        ltemp=less;
        while(ltemp->next!=NULL) ltemp=ltemp->next;
        ltemp->next=greater;
        head=less;
    }

    printf("Reordered list: ");
    temp=head;
    
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
