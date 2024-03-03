


//this is functional code no header files or main are not include in it.


 int length(ListNode *head)
    {
        int len=0;
        ListNode *cur=head;
        while(cur!=NULL)
        {
            cur=cur->next;
            len++;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=length(head);
       if(len==1)
       return NULL;
       else if(len==n)
       {
           head=head->next;
       }
       else
       {
           int travel=len-n;
           ListNode *prev=NULL;
           ListNode *cur=head;
           while(cur!=NULL && travel>0)
           {
                prev=cur;
               cur=cur->next;
               travel-=1;
              
           }
           prev->next=cur->next;
       }
        return head;
    }