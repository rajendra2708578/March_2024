




//this is functional code neither header files nor main function are included.
int mod=1e9+7;
    vector<int> Series(int n) {
        // Code here
       
        int a=0,b=1;
        vector<int>ans;
        ans.push_back(a);
       
        for(int i=1;i<=n;i++)
        {
            ans.push_back(b);
            int c=b;
            b=(b+a)%mod;
            a=c;
        }
        return ans;
    }