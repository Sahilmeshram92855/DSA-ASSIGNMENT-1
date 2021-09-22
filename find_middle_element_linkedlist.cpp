#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
	
	Node()
	{
		this->next = NULL;
	}
};

void MidElementFind(Node *node)
{
	Node *fast = node;
	Node *slow = node;
	
	while(fast!=NULL && fast->next!=NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	cout<<"middle element: "<<slow->data<<endl;
}


int main()
{
	Node *head = new Node();
	head->data = 15;
	
	Node *a = new Node();
	a->data = 30;
	
	Node *b = new Node();
	b->data = 45;
	
	Node *c = new Node();
	c->data = 65;
	
	Node *d = new Node();
	d->data = 13;
	
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;
	
	MidElementFind(head);
	return 0;
}
