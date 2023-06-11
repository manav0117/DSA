#include<bits/stdc++.h>
using namespace std;
    Node *findMiddle(Node *head)
    {
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL)
        {
            if(fast->next==NULL)
            {
                break;
            }   
            fast=fast->next->next;
            slow=slow->next;
            
        }
        return slow;
    }

// 1 2 3 4 5 NULL

// 1 2 3 4 5 6 NULL