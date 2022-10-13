#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct Node *InsertionAtFirst(struct node *head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next= head;
    ptr->data = data;
    return ptr;
}
struct Node *InsertionAtEnd(struct node* head,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data =data;
    struct node* p = head;
    while(ptr->next!=NULL){
    ptr= p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
  
}

void linklist_tri(struct node *ptr){
    while(ptr != NULL){
        printf("ELEMENT :- %d\n",ptr->data);
        // printf("ELEMENT :- %d\n",ptr->next);
        ptr = ptr->next;
    }
}

int main(){
    struct node *head;
    struct node *sec;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    // link first to sec
    head->data=34;
    head->next=sec;
    //link sec to third
    sec->data=344;
    sec->next=third;
    //link to third 
    third->data=324;
    third->next=NULL;

    linklist_tri(head);
   InsertionAtFirst(head,76);
   linklist_tri(head);
//    head= InsertionAtFirst(head,56);
//    linklist_tri(head);
   return 0;
}