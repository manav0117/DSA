#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node *next;
Node *prev;
Node(int val)
{
    this->data=val;
    this->next=NULL;
    this->prev=NULL;
}
};
void printListHead(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
         cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void printListTail(Node* &tail)
{
    Node *temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
Node * insertAtBegining(Node* &head,int val)
{
    Node *newNode=new Node(val);
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev=newNode;
    }

    head=newNode;
    return head;
 
}
Node* insertAtTail(Node * &head,int val)
{
    Node *newNode=new Node(30);
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    temp=newNode;
Node *tail=temp;
    return tail;

}
void insertAtMiddle(Node* &head,int val,int pos)
{
    Node *newNode=new Node(val);
    Node *temp=head;
    int i=0;

    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;

   
}
int main()
{
Node *head=NULL;
Node *tail=NULL;
head=insertAtBegining(head,20);
head=insertAtBegining(head,10);
insertAtMiddle(head,40,2);
tail=insertAtTail(head,30);
printListHead(head);
printListTail(tail);

}