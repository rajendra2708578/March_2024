




//this code is functional code neither header files nor main are inlcuded. 
int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_map<int,int>mp;
        Node *cur=head1;
        while(cur!=NULL)
        {
            mp[cur->data]++;
            cur=cur->next;
        }
        Node *cur1=head2;
        int count=0;
        vector<int>vec;
        while(cur1!=NULL)
        {
            vec.push_back(cur1->data);
            cur1=cur1->next;
        }
        for(auto it:vec)
        {
            count+=mp[x-it];
        }
        return count;
    }