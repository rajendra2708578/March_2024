



//this code is functional code no header files or main are not included in it.
 vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n+2,1);
        int prod=1;
        for(int i=0;i<n;i++)
        {
            prod*=nums[i];
            left[i+1]=prod;
        }
        vector<int>right(n+2,1);
        prod=1;
        for(int i=n-1;i>=0;i--)
        {
            prod*=nums[i];
            right[i+1]=prod;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            int val=left[i-1]*right[i+1];
            ans.push_back(val);
        }
        return ans;
    }