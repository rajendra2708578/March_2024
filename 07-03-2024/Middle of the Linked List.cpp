

// this code is functional code no header files or main are not include in it.

ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=NULL)
            fast=fast->next;
        }
        return slow;
    }