#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    
   
};
void printList(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
 void insertAtBegining(Node* &head,int value)
{
  Node *newNode=new Node(value);
  newNode->next=head;
  head=newNode;
}

void insertAtTail(Node *head,int val)
{
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node *newNode=new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;
}
void insertAtMiddle(Node *head,int val,int pos)
{
    Node *newNode=new Node(val);
    Node *temp=head;
    int i=1;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteHead(Node* &head)
{
    Node *temp=head;
    head=head->next;
    delete temp;
}

void deleteTail(Node* &head)
{
    Node *temp=head;
    while (temp->next->next!=NULL)
    {
      temp=temp->next;   
    }
    temp->next=NULL;
    
    
}
void deleteMiddle(Node* &head,int pos)
{
    Node *temp=head;
    int i=1;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    Node *toBeDeleted=temp->next;
    temp->next=toBeDeleted->next;
    delete toBeDeleted;
}
Node* reverse(Node* &head,Node* &curr,Node* &prev, Node* &forward)
{
    if(curr==NULL)
    {
      return prev;   
    }
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
    return reverse(head,curr,prev,forward);
}
// or 
Node* reverseList(Node* head) {
       Node *prev=NULL;
       Node *curr=head;
       Node *forward=NULL;
       while(curr!=NULL)
       {
          forward=curr->next;
          curr->next=prev;
          prev=curr;
          curr=forward;
       }
       return prev;
    }
int main()
{
 Node *head;
 insertAtBegining(head,0);
 insertAtTail(head,1);
 insertAtTail(head,2);
 insertAtTail(head,4);
 insertAtMiddle(head, 3, 3);
 Node *prev=NULL;
 Node *forward=NULL;
Node *rev=reverse(head,head,prev,forward);
  printList(rev);
//   cout<<"After deleting :"<<endl;
// // deleteTail(head);
// //  deleteMiddle(head,3);
//  printList(head);
}