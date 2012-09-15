
#include<iostream>

using namespace std;

template <class T> class Set;

template <class T>
class Node{
private:
	T data;
	Node *next;
	friend class Set<T>;
};

template <class T>
class Set
{
private:
	Node<T> *ptr;
public:
	Set()
	{
		ptr=0;
	}
	~Set()
	{
		Node<T> *temp=ptr;
		while(temp!=NULL)
		{
			ptr=ptr->next;
			delete temp;
			temp=ptr;
		}
	}
	void insert(int data)
	{
		Node<T> *temp=ptr,*r;
		if(temp==NULL)
		{
			r=new Node<T>();
			r->data=data;
			r->next=NULL;
			ptr=temp=r;
		}
		else
		{
			if(contains(data))
			{
				//ignore
			}
			else
			{
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				r=new Node<T>();
			    r->data=data;
    			r->next=NULL;
    			temp->next=r;
			}
		}
	}

	bool contains(int data)
	{
		Node<T> *temp=ptr;
		while(temp!=NULL)
		{
			if(temp->data==data)
			{
				return true;
			}
			temp=temp->next;
		}
		return false;
	}

	void remove(int data)
	{
		Node<T> *temp=ptr,*back=NULL;
		while(temp!=NULL)
				{
			      if(temp->data==data && back==NULL)
			      {
			    	  if(temp->next==NULL)
			    	  {
			    		  ptr=NULL;
			    	  }
			    	  else
			    	  {
			    		  ptr=temp->next;
			    	  }
			    	  delete temp;
			    	  return;
			      }
			      else if(temp->data==data )
			      {
			    	  back->next=temp->next;
			    	  delete temp;
			    	  return;
			      }
			      back=temp;
			      temp=temp->next;
				}
	}

	void display()
	{
		Node<T> *temp=ptr;
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
	Set<int> *ptr=new Set<int>();
	ptr->insert(10);
	ptr->insert(20);
	ptr->insert(40);
	ptr->display();
	ptr->insert(20);
	ptr->display();
	ptr->remove(20);
	ptr->display();

}


