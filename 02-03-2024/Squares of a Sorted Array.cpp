



//this is functional code no header files or main are not included
  vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        for(auto it:nums)
        {
            ans.push_back(it*it);
        }
        sort(ans.begin(),ans.end());
        return  ans;
    }