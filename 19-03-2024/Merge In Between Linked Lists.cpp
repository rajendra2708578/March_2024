



//this code is functional code no header files nor header files included in it.

 ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=0;
        ListNode *prev=NULL;
        ListNode *cur=list1;
        while(count<a)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        count=0;
        ListNode *nex=NULL;
        cur=list1;
        while(count<=b)
        {
            nex=cur;
            cur=cur->next;
            count++;
        }
        cur=list2;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        prev->next=list2;
        cur->next=nex->next;
        return list1;
    }






