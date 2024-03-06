


//this code is functional code no header files or main are not included in it.
const int q=INT_MAX;
class Solution
{
    public:
        vector<int>solve(string pattern,string text)
        {
            int m=pattern.size();
            int n=text.size();
            int i,j,d=256;
            int p=0;
            int t=0;
            int h=1;
            vector<int>ans;
            for(int i=0;i<m-1;i++)
            {
                h=(h*d)%q;
            }
            for(int i=0;i<m;i++)
            {
                p=(d*p+pattern[i])%q;
                t=(d*t +text[i])%q;
            }
            for(i=0;i<=n-m;i++)
            {
                if(p==t)
                {
                    for(j=0;j<m;j++)
                    {
                        if(text[i+j]!=pattern[j])
                        break;
                    }
                    if(j==m)
                    ans.push_back(i+1);
                }
                if(i<n-m){
                t=(d*(t-text[i]*h)+text[i+m])%q;
                if(t<0)
                t=t+q;
                }
                
            }
            return ans;
        }
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int>ans=solve(pattern,text);
            return ans;
        }
     
};