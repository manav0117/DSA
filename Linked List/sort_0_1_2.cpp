#include<bits/stdc++.h>
using namespace std;
void sort012(Node* &head)
{
    int c0=0;
    int c1=0;
    int c2=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        ++c0;
        else if(temp->data==1)
        ++c1;
        else
        ++c2;

        temp=temp->next;
    }
    temp=head;

    while(temp!=NULL)
    {
        if(c0)
        {
            temp->data=0;
            --c0;   
        }
        else if(c1)
        {
            temp->data=1;
            --c1;
        }
        else{
            temp->data=2;
            --c2;
        }
        temp=temp->next;
    }
}


int main()
{

}