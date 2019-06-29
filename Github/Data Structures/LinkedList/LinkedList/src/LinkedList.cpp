//============================================================================
// Name        : LinkedList.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class node
{
public:
    int data;
    node *next;

     node(int d)
     {
    	 data=d;
    	 next=NULL;
     }


};



class LinkedList
{
public:
	node *head;
public:
	LinkedList()
	{
		head=NULL;
	}

	void insert(int data)
	{
		node *store=head;
		node *n=getnode(data);

		if(head==NULL)
		{

		n->next=NULL;
		head=n;
		}
		else
		{
			while(store->next!=NULL)
			{
				store=store->next;
			}
			n->next=NULL;
			store->next=n;

		}


	}


	void reverse()
	{
		int a=1;
	  //  int arr[]=new int[a];

		node *curr=head,*prev=NULL,*next=NULL;
		while(curr!=NULL)
		{
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}
		head=prev;
	}





	void rotate(int k)
	{

		node *curr=head,*prev=NULL,*next=NULL,*store=NULL;

		char *str;
		str[0]=2;

		while(curr!=NULL)
		{
			store=curr;
			curr=curr->next;
		}
		curr=head;

		for(int i=0;i<k;i++)
		{
			prev=curr;
			curr=curr->next;

		}
		prev->next=NULL;
		store->next=head;
		head=curr;

	}


	void detectLoopAndShootIt()
	{
		node *slow=head,*fast=head;

		while(fast->next!=NULL && slow!=NULL)
		{
		   slow=slow->next;
		   fast=fast->next->next;
		   if(slow==fast)
		   {
				cout<<"loop";
				break;
		   }
		}

		if(slow==fast)
		{
			slow=head;
			while(slow->next!=fast->next)
			{
				slow=slow->next;
				fast=fast->next;
			}

			fast->next=NULL;
		}


	}


	void middle()
	{
		node *slow=head,*fast=head;

		while(fast->next!=NULL && fast!=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;
		}
		cout<<slow->data;
	}


	void detectLoop()
	{
		node *slow=head,*fast=head;

		while(fast->next!=NULL && slow!=NULL)
		{

		    slow=slow->next;
			fast=fast->next->next;
			if(slow==fast)
			{
				cout<<"loop";
				return;
			}
		}

	}
	node* reverseInGrps(node *h,int k)
	{
		node *curr=h,*prev=NULL,*next=NULL;
		int count=0;
				while(curr!=NULL && count!=k)
				{
					next=curr->next;
					curr->next=prev;
					prev=curr;
					curr=next;
					count++;
				}
				if(next!=NULL)
					h->next=reverseInGrps(next,k);

				return prev;
	}
	void detectLoop2()
	{

		node *store=head;
		while(store!=NULL)
		{

		}


	}




	node* getnode(int data)
	{
		node *n=new node(data);
		return n;
	}


	void nodeFromLast(int k)
	{



	}

	void print()
	{
		node *store=head;

		while(store!=NULL)
		{
			//cout<<"s";
			cout<<store->data;
			store=store->next;
		}

	}



};



int main() {
	cout << "!!!Hello World!!!" << endl;

	LinkedList *l=new LinkedList();

	int arr[]={1,2,3,4,5,6};
	for(int i=0;i<6;i++)
	{
		l->insert(arr[i]);
	}
    //l->head->next->next->next->next->next=l->head->next->next;
	//l->reverse();
	//l->rotate(5);
	l->middle();
	//l->detectLoop();
	//l->head=l->reverseInGrps(l->head,2);
    //l->detectLoopAndShootIt();
	//l->print();


	return 0;
}
