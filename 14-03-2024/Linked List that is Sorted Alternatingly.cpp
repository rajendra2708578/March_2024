



//this code is functional code no header files or main are not included in it.

// your task is to complete this function
    Node *reverse(Node *head)
    {
        Node *cur=head,*prev=NULL,*nex=NULL;
        while(cur!=NULL)
        {
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        return prev;
    }
    void sort(Node **head)
    {
         // Code here
        //  if( (*head)->next==NULL|| (*head)->next->next==NULL)
        //  return;
        // //  return (head);
        if(head==NULL|| *head==NULL)
        return;
         Node *old=new Node(0);
         Node *even=new Node(0);
         Node *cur1=old,*cur2=even;
         bool flag=true;
         Node *cur=*head;
         while(cur!=NULL)
         {
             if(flag){
                 cur1->next=cur;
                 cur1=cur1->next;
             }
             else
             {
                 cur2->next=cur;
                 cur2=cur2->next;
             }
             flag=!flag;
             cur=cur->next;
         }
         cur2->next=NULL;
         cur1->next=reverse(even->next);
         *head=old->next;
        
        
    }