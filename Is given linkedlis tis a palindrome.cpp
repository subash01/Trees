/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
  Node *slowptr=head;
 stack <int> s;
 while(slowptr!=NULL)
 {
     s.push(slowptr->data);
     slowptr=slowptr->next;
     
     
 }
 
 while(head!=NULL)
 {
     int i=s.top();
     s.pop();
     if(head->data!=i)
     {
      return 0;
     }
     head=head->next; 
 }
 return 1;
 
}
