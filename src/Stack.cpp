#include <iostream>
using namespace std;

class Stack
{
private:
	int data;
	Stack *next;
public:
	void push(Stack **node,Stack **top,int data)
	{
		Stack *temp=*top,*newnode;
		if(*top==NULL)
		{
			newnode=new Stack();
			newnode->data=data;
			newnode->next=NULL;
			*node=*top=newnode;
		}
		else
		{
			newnode=new Stack();
			newnode->data=data;
			newnode->next=NULL;
			temp->next=newnode;
			*top=newnode;
		}
	}

	void pop(Stack **node,Stack **top)
	{
		Stack *temp=*node;
		if(*top==NULL)
		{
			cout<<"Empty\n ";
		}
		else
		{
			while(temp->next!=*top)
			{
				temp=temp->next;
			}
			*top=temp;
			delete temp->next;
		}
	}

	void display(Stack  **node)
	{
		Stack *temp=*node;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

};


int main()
{
	Stack *node=NULL,*top=NULL;
	Stack *obj=new Stack();
	obj->push(&node,&top,10);
	obj->push(&node,&top,40);
	obj->push(&node,&top,50);
	obj->push(&node,&top,20);
	obj->display(&node);
	obj->pop(&node,&top);
	obj->display(&node);
	delete obj;
}
