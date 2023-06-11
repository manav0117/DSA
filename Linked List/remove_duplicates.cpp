#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(Node* &head)
{
    if(head==NULL)
    {
        return ;
    }
    else if(head->next==NULL)
    {
        return ;
    }
    Node *temp=head;
    Node *forward=temp->next;
    while(forward!=NULL)
    {
       
        if(forward->data==temp->data)
        {
            while(forward->data==temp->data)
            {
                forward=forward->next;
            }
            temp->next=forward;
        }
        
            forward=forward->next;
            temp=temp->next;
        
    }
}

// 1 2 2 2 3 4 4 5 6
int main()
{

}