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
Node * reverse(Node* &head)
{
    Node *curr=head;
    Node *prev=NULL;
    Node *nxt=NULL;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}Node* addTwoLists(struct Node* first, struct Node* second)
    {
     first=reverse(first);  
     second=reverse(second);
     Node *ans=new Node(0);
     Node *head=ans;
     int carry=0;
     while(first && second)
     {
         int sum=first->data + second->data + carry;
         carry=sum/10;;
         ans->next=new Node(sum%10);
         ans=ans->next;
         first=first->next;
         second=second->next;
     }
     while(first)
     {
         int sum=first->data + carry;
         carry=sum/10;;
         ans->next=new Node(sum%10);
         ans=ans->next;
         first=first->next;
     }
     while(second)
     {
         int sum=second->data + carry;
         carry=sum/10;;
         ans->next=new Node(sum%10);
         ans=ans->next;
        
         second=second->next;
     }
     if(carry)
     {
         ans->next=new Node(carry);
         
     }
     head=reverse(head->next);
     return head;
    }
// 999 
//  11

// 1 2 3
// 3 2 1
int main()
{
Node *head1=new Node(1);
insertAtTail(head1,2);
insertAtTail(head1,3);
Node *head2=new Node(3);
insertAtTail(head2,2);
insertAtTail(head2,1);
head1=reverse(head1);
head2=reverse(head2);
Node *temp=add(head1,head2);
printList(temp);
}