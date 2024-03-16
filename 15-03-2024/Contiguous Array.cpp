





//this is the functional code no header files or main are not included in it.

int findMaxLength(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>mp;
        int maxlen=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            sum+=-1;
            else
            sum+=nums[i];
            if(sum==0)
            maxlen=max(maxlen,i+1);
            if(mp.find(sum)!=mp.end())
            {
                int value=(i-mp[sum]);
                maxlen=max(maxlen,value);
            }
            else
            mp[sum]=i;
        }
        return maxlen;
    }