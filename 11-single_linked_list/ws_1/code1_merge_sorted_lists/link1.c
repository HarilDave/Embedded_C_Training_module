#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

int main() 
{
    struct node *head1=NULL,*head2=NULL,*temp,*newnode,*merged,*last;
    int arr1[]={1,2},arr2[]={3,4};
    int n1=2,n2=2,i;

    for(i=0;i<n1;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=arr1[i];
        newnode->next=NULL;
        if(head1==NULL) head1=newnode;
        else
        {
            temp=head1;
            while(temp->next!=NULL) temp=temp->next;
            temp->next=newnode;
        }
    }

    for(i=0;i<n2;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=arr2[i];
        newnode->next=NULL;
        if(head2==NULL) head2=newnode;
        else
        {
            temp=head2;
            while(temp->next!=NULL) temp=temp->next;
            temp->next=newnode;
        }
    }

    merged=head1;
    last=head1;
    while(last->next!=NULL) last=last->next;
    last->next=head2;

    temp=merged;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
