




//this is functional code neither header files nor main function are included in it.
ListNode *reverse(ListNode *head)
    {
        ListNode *cur=head,*prev=NULL,*nex=NULL;
        while(cur!=NULL)
        {
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
       fast=slow->next;
       slow->next=NULL;
       slow=head;
       fast=reverse(fast);
       while(slow!=NULL && fast!=NULL)
       {
         ListNode *nex=slow->next;
         slow->next=fast;
         ListNode *nexfast=NULL;
         if(fast->next)
         nexfast=fast->next;
         fast->next=nex;
         fast=nexfast;
         slow=nex;
       }
    }