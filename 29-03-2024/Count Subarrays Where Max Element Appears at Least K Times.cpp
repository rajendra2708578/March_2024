


//this is functional code neither header files nor main are included in it.
long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        long long int maxv=*max_element(nums.begin(),nums.end());
        // cout<<"maxv value is "<<maxv<<endl;
        long long int i=0,j=0,count=0,ans=0;
        while(j<n)
        {
           if(nums[j]==maxv)
           count++;
            while(i<=j && count>=k)
            {
                ans+=(n-j);
               if(nums[i]==maxv)
               count--;

                i++;
            }
            j++;
        }
        return ans;
    }