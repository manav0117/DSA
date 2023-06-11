#include<bits/stdc++.h>
using namespace std;
bool isCircular(Node *head)
{
    if(head==NULL)
    {
        return true;
    }
    else if(head->next==NULL)
    {
        return false;
    }

    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL)
    {
        if(fast->next==NULL)
        {
            return false;
        }
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow)
        {
            return true;
        }
        
    }
}

int main()
{

}