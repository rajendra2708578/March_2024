


//this code is a functional code no header files or main are not icluded in it.

 string longestSubstring(string s, int n) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int length=0,index=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(s[i-1]==s[j-1] && dp[i-1][j-1]<(j-i))
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    if(dp[i][j]>length)
                    {
                        length=dp[i][j];
                        index=max(i,index);
                    }
                }
                else
                dp[i][j]=0;
            }
        }
        if(length==0)
        return "-1";
        else
        {
            string ans="";
            for(int i=index-length;i<index;i++)
            {
                ans+=s[i];
            }
            return ans;
        }
    }