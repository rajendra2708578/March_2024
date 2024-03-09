


//this is functional code no header files or main are not included in it.


#define ll long long int
class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        ll sum1=0,sum2=0,count=0;
        for(auto it:nums)
        {
            if((it^k)>it)
            {
                sum1+=(it^k);
                count++;
            }
            else
            {
                sum2+=it;
            }
        }
        if(count%2==0)
        return sum1+sum2;
        ll maxv1=0,maxv2=0;
        for(auto it:nums)
        {
            if((it^k)>it)
            {
                maxv1=max(maxv1,(sum1-(it^k))+sum2+it);
            }
            else
            {
                maxv2=max(maxv2,(sum1+sum2+(it^k))-it);
            }
        }
        return max(maxv1,maxv2);
    }
};