#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() 
{
    struct node *head,*a,*b,*c,*d,*e;

    head=(struct node*)malloc(sizeof(struct node));
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    d=(struct node*)malloc(sizeof(struct node));
    e=(struct node*)malloc(sizeof(struct node));

    head->data=1; a->data=2; b->data=3; c->data=4; d->data=5;

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=a; 

    struct node *slow=head,*fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) break;
    }

    if(slow==fast)
    {
        slow=head;
        while(slow->next!=fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
        printf("Loop detected and removed.\n");
    }

    struct node *temp=head;
    printf("List after removal: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
