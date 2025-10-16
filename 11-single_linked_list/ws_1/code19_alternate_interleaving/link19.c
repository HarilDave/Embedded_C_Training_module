#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* create(int arr[], int n){
    struct node *head=NULL, *temp, *newnode;
    for(int i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=arr[i];
        newnode->next=NULL;
        if(head==NULL) head=newnode;
        else{
            temp=head;
            while(temp->next!=NULL) temp=temp->next;
            temp->next=newnode;
        }
    }
    return head;
}

// Function to interleave two lists
struct node* interleave(struct node *l1, struct node *l2){
    struct node *head=NULL, *tail=NULL;
    while(l1 || l2){
        if(l1){
            if(head==NULL){ head=tail=l1; }
            else{ tail->next=l1; tail=l1; }
            l1=l1->next;
        }
        if(l2){
            if(head==NULL){ head=tail=l2; }
            else{ tail->next=l2; tail=l2; }
            l2=l2->next;
        }
    }
    if(tail) tail->next=NULL;
    return head;
}

int main(){
    int arr1[]={1,3,5};
    int arr2[]={2,4,6};
    struct node *list1=create(arr1,3);
    struct node *list2=create(arr2,3);

    struct node *result=interleave(list1,list2);

    printf("Result: ");
    struct node *temp=result;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
