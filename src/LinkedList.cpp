#include<iostream>

using namespace std;

class LinkedList
{
private:
	int data;
	LinkedList *next;
public:

	void insertNode(LinkedList **node,int data)
	{
		LinkedList *temp=*node,*newnode;
		if(temp==NULL)
		{
		 temp=new LinkedList();
		 temp->data=data;
		 temp->next=NULL;
		 *node=temp;
		}
		else
		{
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			newnode=new LinkedList();
			newnode->data=data;
			newnode->next=NULL;
			temp->next=newnode;
		}
	}

	int deleteNode(LinkedList **node)
	{
		int rdata;
		LinkedList *temp=*node;
		while(temp && temp->next &&  temp->next->next !=NULL)
		{
			temp=temp->next;
		}
		rdata=temp->next->data;
		delete temp->next;
		temp->next=NULL;
		return rdata;
	}
    void deleteList(LinkedList **node)
    {
    	LinkedList *temp=*node;
    	while(temp!=NULL)
    	{
    		temp=temp->next;
    		delete *node;
    		*node=temp;
    	}
    	*node=NULL;
    }
	void displayList(LinkedList **node)
	{
		LinkedList *temp=*node;
		while(temp)
		{

			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

	void reverseList(LinkedList **list)
	{
		LinkedList *temp=*list;
		LinkedList *rev=NULL,*back;
		while(temp!=NULL)
		{
			back=rev;
			rev=temp;
			temp=temp->next;
			rev->next=back;
		}
		*list=rev;
	}

	void sortList(LinkedList **node)
	{
		LinkedList *temp=*node,*ahead;
		int tdata;
		while(temp!=NULL)
		{
			ahead=temp->next;
			while(ahead!=NULL)
			{
				if(temp->data > ahead->data)
				{
				  tdata=temp->data;
				  temp->data=ahead->data;
				  ahead->data=tdata;
				}
				ahead=ahead->next;
			}
			temp=temp->next;
		}
	}
};


int main()
{
   LinkedList *list=NULL;
   LinkedList *obj=new LinkedList();
   obj->insertNode(&list,10);
   cout<<"After Insertion "<<endl;
   obj->displayList(&list);
   obj->insertNode(&list,20);
   obj->insertNode(&list,30);
   cout<<"After Insertion "<<endl;
   obj->displayList(&list);
   obj->insertNode(&list,40);
   obj->insertNode(&list,50);
   cout<<"After Insertion "<<endl;
   obj->displayList(&list);
   cout<<"Deleted Node "<<obj->deleteNode(&list)<<endl;
   obj->insertNode(&list,60);
   obj->insertNode(&list,70);
   obj->displayList(&list);
   obj->reverseList(&list);
   cout<<"Reverse "<<endl;
   obj->displayList(&list);
   obj->insertNode(&list,80);
   obj->insertNode(&list,90);
   cout<<"After Insertion "<<endl;
   obj->displayList(&list);
   obj->sortList(&list);
   cout<<"After Sorting in Ascending Order "<<endl;
   obj->displayList(&list);
   obj->deleteList(&list);
   cout<<"List After Complete Deletion "<<endl;
   obj->displayList(&list);
   obj->insertNode(&list,10);
   cout<<"After Insertion "<<endl;
   obj->displayList(&list);
   delete list;
   delete obj;
}

