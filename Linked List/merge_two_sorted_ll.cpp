ListNode* merge(ListNode* first,ListNode* second)
    {
        ListNode *curr=first;
        ListNode *nxt=NULL;
        ListNode *curr2=second;
        ListNode *nxt2=NULL;
        while(curr!=NULL and curr2!=NULL)
        {
            nxt=curr->next;
            nxt2=curr2->next;
            if((curr2->val >= curr->val) && (curr2->val <=nxt->val))
            {
                curr2->next=nxt;
                curr->next=curr2;
                curr=curr2;
                curr2=nxt2;
            }
            else{
                curr=curr->next;
                if(nxt==NULL)
                {
                    curr->next=curr2;
                    return first;
                } 
            }
        }
        return first;

    }
    ListNode* solve(ListNode *list1 , ListNode *list2 )
    {
        if(list1->val>=list2->val)
        {
            return merge(list1,list2);
        }
        else{
            return merge(list2,list1);
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     if(list1==NULL)
     {
         return list2;
     }   
     else if(list2==NULL)
     {
         return list1;
     }
     else{
        return solve(list1,list2);
     }
    }
};