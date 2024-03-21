



//this is a functional code neither header files nor main function are included in it.

  ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        return head;
        ListNode *prev=NULL,*cur=head,*nex=NULL;
        while(cur!=NULL)
        {
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        return prev;
    }