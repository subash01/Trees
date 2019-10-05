#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int middle(struct node *list)
{
	struct node *ptr1, *ptr2;
	ptr1=list;
	ptr2=list;
	while(ptr2!=NULL&&ptr2->next!=NULL)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
		
			

	}
	cout<<"middle element is "<<ptr1->data;
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
  middle(head);
 
    return 0; 

 } 
