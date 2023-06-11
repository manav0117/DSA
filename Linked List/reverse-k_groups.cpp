#include<bits/stdc++.h>
using namespace std;
Node *reverseK(Node* &head,int k)
{
    if(head==NULL)
    {
        return head;
    }
    int count=0;
    Node* curr=head;
    Node* prev=NULL;
    Node * forward=NULL;
    while(curr!=NULL && count<k)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL)   
    {
        head->next=reverseK(forward,k);
    }
    return head;
}
int main()
{

}