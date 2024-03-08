


//this code is functional code no header files or main are not included in it.


 int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        int maxv=0;
        for(auto it:mp)
        {
            maxv=max(maxv,it.second);
        }
        int sum=0;
        for(auto it:mp)
        {
            if(it.second==maxv)
                sum+=maxv;
        }
        return sum;
    }