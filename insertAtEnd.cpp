#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *next;
Node *prev;
};
void insertAtHead(Node **head_ref ,int mydata)
{
   Node* temp=new Node();
   temp->data=mydata;
   temp->next=*head_ref;
   temp->prev=NULL;
   if(*head_ref!=NULL)
   {
    (*head_ref)->prev=temp;
   }
   
   (*head_ref)=temp;

}
void insertAtMiddle(Node *previous,int mydata)
{
    Node *temp=new Node();
    temp->data=mydata;
    temp->next=previous->next;

    temp->prev=previous;
    previous->next=temp;
    if(temp->next!=NULL)
    {
        temp->next->prev=temp;
    }
}

void insertAtEnd(Node **head_ref,int mydata)
{
   Node* last=*head_ref;
   Node* newNode=new Node();
   newNode->data=mydata;
   newNode->next=NULL;

   if((*head_ref)==NULL)
   {
    newNode->prev=NULL;
    *head_ref=newNode;
    return;
   }
   while(last->next!=NULL)
   {
    last=last->next;
   }
   last->next=newNode;
   newNode->prev=last;
   return;
}

void print(Node *head)
{
    Node*temp=head;
    while( temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node *head=NULL;
    insertAtHead(&head,2);
    insertAtHead(&head,5);
    insertAtHead(&head,8);
    insertAtMiddle(head->next,10);
    insertAtEnd(&head,12);
    insertAtEnd(&head,15);
    print(head);
    return 0;
}