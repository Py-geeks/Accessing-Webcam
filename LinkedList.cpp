#include<iostream>

using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data =d;
		next=NULL;
	}
};

void insertattail(node*&head,int data)
{
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	node* n= new node(data);
	temp->next=n;
}

void print(node*&head)
{
	while(head!=NULL)
	{
		cout<<head->data;
		head =head->next;
	}
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
#endif
	
	node*head=NULL;
	insertattail(head,5);
	insertattail(head,4);
	insertattail(head,3);
	insertattail(head,2);

	print(head);
	return 0;
}
