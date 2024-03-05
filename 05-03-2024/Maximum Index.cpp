



// this code is functional code no header files or main are not included in it.
 int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++)
        {
            vec.push_back({a[i],i+1});
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        int maxv=0,ans=-1;
        for(int i=0;i<n;i++)
        {
            maxv=max(maxv,vec[i].second);
            ans=max(ans,maxv-vec[i].second);
        }
        return ans;
    }