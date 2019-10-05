#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int removeloop(struct node* ,struct node *);
int deleteloop(struct node *list)
{
	struct node *slowptr, *fastptr;
	slowptr=list;
	fastptr=list;
	while(slowptr&&fastptr&&slowptr->next!=NULL)
	{
		slowptr=slowptr->next;
		fastptr=fastptr->next->next;
		if(slowptr==fastptr)
		{
			
			cout<<"Loop is present";
		}
		
	}
	//return 0;
	cout<<"loop is not present";
 } 
 void print(struct node *ptr)
 {
 	while(ptr->next!=NULL)
 	{
 		cout<<ptr->data<<"->";
 		ptr=ptr
		 ->next;
	 }
 }
 struct node*newnode(int data)
 {
 	struct node* temp=new node();
 	temp->data=data;
 	temp->next=NULL;
 	return temp;
 }
int main()
{
	    struct node* head = newnode(50); 
    head->next = newnode(20); 
    head->next->next = newnode(15); 
    head->next->next->next = newnode(4); 
    head->next->next->next->next = newnode(10); 
  
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next; 
  
    deleteloop(head); 
  
    cout << "Linked List after removing loop" << endl; 
  
    print(head); 
  
    return 0; 

 } 


