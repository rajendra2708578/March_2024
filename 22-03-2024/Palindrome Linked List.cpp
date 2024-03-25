




//this is functional code neither header files nor main function are included in it.
 bool check(string str)
    {
        int i=0,j=str.size()-1;
        while(i<j)
        {
            if(str[i]!=str[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *cur=head;
        string str="";
        while(cur!=NULL)
        {
            str+=(char)cur->val;
            cur=cur->next;
        }
        if(check(str))
        return true;
        else
        return false;
    }