




//this is functional code no header files or main are not included in it.
int largestSubsquare(int n, vector<vector<char>> a) {
        // code here
        int rowm[n][n],colm[n][n];
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='X')
                count++;
                else
                count=0;
                
                rowm[i][j]=count;
            }
        }
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(a[j][i]=='X')
                count++;
                else
                count=0;
                
                colm[j][i]=count;
            }
        }
        
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                int len=min(rowm[i][j],colm[i][j]);
                while(len>ans)
                {
                    if(rowm[i-(len-1)][j]>=len && colm[i][j-(len-1)]>=len)
                    {
                        ans=len;
                        break;
                    }
                    else
                    len--;
                }
            }
        }
        return ans;
    }