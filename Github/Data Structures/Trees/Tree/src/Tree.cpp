//============================================================================
// Name        : Tree.cpp
// Author      : Mohish nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left,*right;

};

node * newNode(int data)
{
	node *n=new node;
	n->data=data;
	n->left=n->right=NULL;
	return n;
}


node * insertNode(node *root,int data)
{
	if(root==NULL)
	{
		node *temp=newNode(data);

		return temp;
	}
	if(root->data<data)
	{
		root->right=insertNode(root->right,data);
	}
	else
	{
		root->left=insertNode(root->left,data);
	}
}


//printLefRigAlternNode function working only for binary tree
void printLefRigAlternNode(node *root)
{
	if(root==NULL)
		return;
	int n=0,nc=0;
	//if its left then flag is false else flag need to be true to print the right one
	bool flag=false;

	node *temp=root;


	queue<node *> q;
	q.push(root);


	while(!q.empty())
	{
		nc=q.size();
		n=nc;


		while(n--)
		{
			node* store=q.front();

			q.pop();
			if(store->left)
				q.push(store->left);

			if(store->right)
				q.push(store->right);

			if(flag && n==nc-1)
			{
				cout<<store->data<<" ";
			}

			if(!flag && n==0)
				cout<<store->data<<" ";

		}
		flag=!flag;

	}

}

int checkBinaryTree(node *root,int min,int max)
{
	if(root==NULL)
		return 1;

	if(root->data<min || root->data>max)
		return 0;

	return (checkBinaryTree(root->left,min,root->data-1) && checkBinaryTree(root->right,root->data-1,max));
}

void printLeftViewTree2(node *root,int currlevel,int *Maxlevel)
{
	if(root==NULL)
		return;

	if(currlevel>(*Maxlevel))
	{
		cout<<root->data<<" ";
		*Maxlevel=currlevel;
	}
	printLeftViewTree2(root->left,currlevel+1,Maxlevel);
	printLeftViewTree2(root->right,currlevel+1,Maxlevel);


}


void bottomViewTree(node *root)
{
	int hd=0;
	queue<node *> q;
    map<int,int> m,storelev;

    storelev[root->data]=hd;

    q.push(root);

    while(!q.empty())
    {
    	//cout<<"yeah";
    	node *d=q.front();
    	q.pop();
    	hd=storelev[d->data];
    //	cout<<"hd="<<hd;
        m[hd]=d->data;

    	if(d->left!=NULL)
    	{
    	//	cout<<"in";
    		q.push(root->left);
    	 //   storelev.insert(root->left->data,hd-1);
    	    storelev[root->left->data]=hd-1;
    	   // cout<<storelev[root->left->data];
    	}

    	if(d->right!=NULL)
    	{
    		q.push(root->right);
    	//    storelev.insert(root->right->data,hd+1);
    	    storelev[root->right->data]=hd+1;

    	}
    	//cout<<"check="<<q.empty();
    }
    for (auto i = m.begin(); i != m.end(); ++i)
            cout << i->second << " ";
}

void bottomViewTreestack(node *root,map<int,stack<int>> m,int hd)
{
	if(root==NULL)
		return;

	m[hd].push(root->data);

	bottomViewTreestack(root->left,m,hd-1);
	bottomViewTreestack(root->right,m,hd+1);

}

void bottomViewTreeStack(node *root)
{
	map<int,stack<int>> m;

	bottomViewTreestack(root,m,0);
	for(auto s:m){
	       cout<<s.second.top()<<" ";
	   }


}

void printLeftViewTree(node *root)
{
	int Maxlevel=0;
	printLeftViewTree2(root,1,&Maxlevel);
}


void treeToDLL(node *root,node **head)
{
	if(root==NULL)
		return;

	static node *prev=NULL;

	treeToDLL(root->left,head);
	if(*head==NULL)
		*head=root;
	else
	{
		root->left=prev;
		prev->right=root;
	}

	prev=root;

	treeToDLL(root->right,head);
}



void inorder(node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void findMinMax(node *node, int *min, int *max, int hd)
{
	if(node==NULL)
		return;

	if(hd<*min)
		*min=hd;
	else
		if(hd>*max)
			*max=hd;

	findMinMax(node->left,min,max,hd-1);
	findMinMax(node->right,min,max,hd+1);
}


void printVerticalLine(node *node, int line_no, int hd)
{

	if(node==NULL)
		return;

	if(line_no==hd)
		cout<<node->data<<" ";

	printVerticalLine(node->left,line_no,hd-1);
	printVerticalLine(node->right,line_no,hd+1);


}

void verticalOrder(node *root)
{
	int min=0,max=0,hd=0;
   findMinMax(root,&min,&max,hd);

   for(int i=min;i<=max;i++)
   {
	   printVerticalLine(root,i,0);
	   cout<<endl;
   }

}



int main() {

	node * root=NULL;
	root=insertNode(root,50);
	insertNode(root,30);
	insertNode(root,60);
	//inorder(root);
	//cout<<checkBinaryTree(root,-1,500);
	//printLeftViewTree(root);
	bottomViewTree(root);
	return 0;
}
