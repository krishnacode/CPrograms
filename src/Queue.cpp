#include <iostream>
using namespace std;
class Queue
{
private:
	int data;
	Queue *next;
public:
	void insertNode(Queue **front,Queue **rear,int data)
	{
		Queue *temp=*rear,*newnode;
		if(temp==NULL)
		{
			temp=new Queue();
			temp->data=data;
			temp->next=NULL;
			*front=*rear=temp;
		}
		else
		{

			newnode=new Queue();
			newnode->data=data;
			newnode->next=NULL;
			temp->next=newnode;
            *rear=newnode;
		}
	}

	void deleteNode(Queue **front)
	{
		Queue *temp=*front;
		if(temp==NULL)
		{
			cout<<"Empty Queue\n";
		}
		else
		{
			*front=temp->next;
			delete temp;
		}
	}

	int searchData(Queue **front,int data)
	{
		Queue *temp=*front;
		while(temp!=NULL)
		{
			if(temp->data==data)
				{
				return 1;
				}
		temp=temp->next;
		}
	  return 0;
	}

	void displayQueue(Queue **front)
	{
		Queue *temp=*front;
		while(temp!=NULL)
		{
			cout<< temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

};


int main()
{
	Queue *front=NULL,*rear=NULL;
	Queue *obj=new Queue();
    obj->insertNode(&front,&rear,5);
    obj->insertNode(&front,&rear,25);
    obj->insertNode(&front,&rear,15);
    obj->insertNode(&front,&rear,225);
    obj->insertNode(&front,&rear,250);
    obj->insertNode(&front,&rear,150);
	obj->deleteNode(&front);
	obj->displayQueue(&front);
	obj->insertNode(&front,&rear,2225);
	obj->insertNode(&front,&rear,2500);
	obj->insertNode(&front,&rear,1450);
	obj->deleteNode(&front);
	obj->displayQueue(&front);
   delete front;
   delete rear;
   delete obj;
}





