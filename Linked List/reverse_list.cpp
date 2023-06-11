#include<bits/stdc++.h>
using namespace std;
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