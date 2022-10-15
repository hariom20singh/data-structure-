#include <bits/stdc++.h>
using namespace std;
// linked list
class node
{
public:
	int data;
	node *next;
	node(int k)
	{
		data = k;
		next = NULL;
	}
};
void IAT(node *&head, int p) //Inserting data at the tail of the linked list
{
	node *n = new node(p);
	if (head == NULL)
	{
		head = n;
		return;
	}
	node *t = head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = n;
}
bool floyds(node *&head) // function to detect the cycle
{
	node *fast = head;
	node *slow = head;
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			return true;
		}
	}
	return false;
}
void floyd(node *&head) // function print the start of the cycle
{
	if (floyds(head) == 1)
	{
		node *slow = head;
		node *fast = head;
		do
		{
			fast = fast->next->next;
			slow = slow->next;
		} while (fast != slow);
		fast = head;
		while (slow->next != fast->next)
		{
			fast = fast->next;
			slow = slow->next;
		}
		cout<<slow->next->data<<"\n";
	}
	else
	{
		cout<<"There is no cycle in the linked list\n";
		return;
	}
}
int main(){
	// making a linear linked list
	node *head = NULL;
	IAT(head, 1);
	IAT(head, 2);
	IAT(head, 3);
	IAT(head, 4);
	IAT(head, 5);
	IAT(head, 6);
	IAT(head, 7);
	floyd(head); // function call
	node*temp = head;
	node*cycle = NULL;
	while(temp->next!=NULL){
		if(temp->data == 4){
			cycle = temp;
		}
		temp = temp->next;
	}
	temp->next = cycle; // making a cycle in linked list
	floyd(head); // function call
	return 0;
}
