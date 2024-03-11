


//this code is functional code no header files or main function are not included.
 string customSortString(string order, string s) {
        map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        string ans="";
        for(auto it:order)
        {
            if(mp[it]>0)
            {
                for(int i=0;i<mp[it];i++)
                {
                    ans+=it;
                }
                mp[it]=0;
            }

        }
        for(auto it:mp)
        {
            if(it.second>0)
            {
                for(int i=0;i<it.second;i++)
                {
                    ans+=it.first;
                }
            }
        }
        return ans;
    }