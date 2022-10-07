#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

// void trivarsal(struct node *head){
//     struct node*ptr=head;
//     while(ptr->next!= NULL){
//         cout<<"Elements are:- "<<ptr->data<<endl;
//         ptr=ptr->next;
//     }
//     cout << "Elements are:- " << ptr->data << endl;
// }

void trivarsalprev(struct node*head){
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr=ptr->next;
        
    }
    do
    {
        cout << "Elements are:- " << ptr->data << endl;
                ptr=ptr->prev;
    } while (ptr->next!=NULL);
    
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *six;
    struct node *seven;
    struct node *eight;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));
    seven = (struct node *)malloc(sizeof(struct node));
    eight = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->prev = NULL;
    head->next = second;
    

    second->data = 2;
    second->prev = head;
    second->next = third;

    third->data = 3;
    third->prev = second;
    third->next = fourth;

    fourth->data = 4;
    fourth->prev = third;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->prev =  fourth;
    fifth->next = six;

    six->data = 6;
    six->prev = fifth;
    six->next = seven;

    seven->data = 7;
    seven->prev = six;
    seven->next = eight;

    eight->data = 8;
    eight->prev = seven;
    eight->next = NULL;
//  trivarsal(head);
 trivarsalprev(head);

    return 0;
}
