



//this is functional code neither header files nor main are included in it.
int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j=0,maxv=1;
        int n=nums.size();
        unordered_map<int,int>mp;
        while(j<n)
        {
            mp[nums[j]]++;
            while(mp[nums[j]]>k && i<j)
            {
                mp[nums[i]]--;
                i++;
            }
            if(mp[nums[j]]<=k)
            {
                maxv=max(maxv,(j-i)+1);
            }
            j++;
        }
        return maxv;
    }