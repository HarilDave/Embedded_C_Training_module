#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head=NULL,*temp,*newnode;
    int n,i,k;
    printf("Enter total elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL) head=newnode;
        else{
            temp=head;
            while(temp->next!=NULL) temp=temp->next;
            temp->next=newnode;
        }
    }
    printf("Enter k: ");
    scanf("%d",&k);

    temp=head;
    int len=1;
    while(temp->next!=NULL){ temp=temp->next; len++; }
    temp->next=head;
    
    k=k%len;
    int steps=len-k;
    while(steps--) temp=temp->next;
    head=temp->next;
    temp->next=NULL;

    printf("Rotated list: ");
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
