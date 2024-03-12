


//this is functional code no header files or main functional are not included.
 ListNode* removeZeroSumSublists(ListNode* head) {
        
       ListNode *dummy=new ListNode(0);
       ListNode *nex=dummy;
       ListNode *cur=head;
       while(cur!=NULL)
       {
            int sum=0;
            ListNode *check=cur;
            while(check!=NULL)
            {
                sum+=check->val;
                if(sum==0){
                    nex->next=check->next;
                }
                check=check->next;
            }
            cur=cur->next;
       }
       return nex->next;
       }