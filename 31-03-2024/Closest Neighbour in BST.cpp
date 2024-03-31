



//this is functional code neither header files nor main are inlcuded in it.
int findMaxForN(Node* root, int n) {
        // code here
        Node *cur=root;
        int ans=-1;
        while(root!=NULL)
        {
            if(root->key<=n)
            {
                ans=max(ans,root->key);
                root=root->right;
            }
            else
            root=root->left;
        }
        return ans;
    }