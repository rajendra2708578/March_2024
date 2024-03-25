



//this is functional code neither header files nor main function are included.
 vector <int> diagonalSum(Node* root) {
        // Add your code here
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int>>pq;
        pq.push({root,1});
        while(!pq.empty())
        {
            auto it=pq.front();
            pq.pop();
            Node *no=it.first;
            int val=it.second;
            mp[val]+=it.first->data;
            if(no->left)
            pq.push({no->left,val-1});
            if(no->right)
            pq.push({no->right,val});
        }
        for(auto it:mp)
        {
            
            ans.push_back(it.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }