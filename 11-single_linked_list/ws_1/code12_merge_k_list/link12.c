#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Function to create a linked list from an array
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

// Function to merge two sorted lists
struct node* mergeTwo(struct node* l1, struct node* l2){
    struct node dummy;
    struct node *tail=&dummy;
    dummy.next=NULL;

    while(l1 && l2){
        if(l1->data < l2->data){
            tail->next=l1;
            l1=l1->next;
        } else{
            tail->next=l2;
            l2=l2->next;
        }
        tail=tail->next;
    }
    if(l1) tail->next=l1;
    if(l2) tail->next=l2;

    return dummy.next;
}

int main(){
    int k=3; // number of lists
    int arr1[]={10,20,50};
    int arr2[]={30,40,60};
    int arr3[]={10,70,100};

    struct node *list1=create(arr1,3);
    struct node *list2=create(arr2,3);
    struct node *list3=create(arr3,3);

    struct node *merged=mergeTwo(list1,list2);
    merged=mergeTwo(merged,list3);

    printf("Merged list: ");
    struct node *temp=merged;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
