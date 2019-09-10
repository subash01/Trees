#include<bits/stdc++.h>
using namespace std;
struct bstnode
{
	int data;
	bstnode* left;
	bstnode* right;
};

bstnode* create(int data)
{
	bstnode* newnode=new bstnode();
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
bstnode* insert( bstnode* root,int data)
{

	if(root==NULL)
	{
		root=create(data);
		
	}
	else if(data<=root->data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);
	}
	return root; 
}
bool search(bstnode* root, int data)
{
	int ans;
	if(root==NULL)
	{
		ans=0;
		return false;
	}
	else if(root->data==data)
	{
		ans=1;
		return true; 
	}
	else if( data<=root->data)
	{
		return search(root->left,data);
	}
	else
	{
		return search(root->right,data);
	}
}
int main()
{
	int ele;
	cin>>ele;
	bstnode* root=NULL;
	root=insert(root,15);
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,25);
	root=insert(root,8);
	root=insert(root,12);
	if(search(root,ele)==1)
	{
		cout<<"found";
	}
	else
	{
		cout<<"notfound";
	}
	
	
}
