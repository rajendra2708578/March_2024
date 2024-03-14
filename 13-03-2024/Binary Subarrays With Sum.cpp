




//this code is functional code no header files or main are not included in it.

int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0,sum=0;
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            sum+=it;
            // cout<<"sum value "<<sum<<endl;
           count+=mp[sum-goal];
           if(sum==goal)
           count++;
            mp[sum]++;
        }
        return count;
    }