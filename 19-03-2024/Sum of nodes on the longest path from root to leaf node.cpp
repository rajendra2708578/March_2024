



//this contain the functional code neither header files nor main function are not included in it.
int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        if(root==NULL)
        return 0;
        int len=0;
        queue<pair<Node*,int>>pq;
        pq.push({root,root->data});
        int ans=root->data;
        while(!pq.empty())
        {
            int sz=pq.size();
            int maxv=0;
            for(int i=0;i<sz;i++)
            {
                auto it=pq.front();
                pq.pop();
                // cout<<it.first->data<<" "<<it.second<<endl;
                maxv=max(maxv,it.second);
                if(it.first->left)
                pq.push({it.first->left,it.second+(it.first->left->data)});
                if(it.first->right)
                pq.push({it.first->right,it.second+(it.first->right->data)});
            }
            // cout<<endl;
            ans=maxv;
            
            
        }
        return ans;
    }