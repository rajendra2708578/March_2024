





//this is functional code neither header file nor main main function are not included.

 vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<pair<int,int>>pi;
        pi.push_back({newInterval[0],newInterval[1]});
        for(auto it:intervals)
        {
            pi.push_back({it[0],it[1]});
        }
        sort(pi.begin(),pi.end());
        int start=pi[0].first,end=pi[0].second;
        vector<vector<int>>ans;
        for(int i=1;i<pi.size();i++)
        {
            if(end<pi[i].first)
            {
                ans.push_back({start,end});
                start=pi[i].first;
                end=pi[i].second;
            }
            else
            {
                // cout<<pi[i].first<<" "<<
                start=min(start,pi[i].first);
                end=max(end,pi[i].second);
            }
        }
        ans.push_back({start,end});
        
        return ans;
    }