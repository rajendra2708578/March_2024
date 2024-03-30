



//this is functional code neither header files nor main are included in  it.
int noofelements(vector<int>&nums,int k)
    {
        unordered_map<int,int>mp;
        int i=0,j=0,count=0,ans=0;
        int n=nums.size();
        while(j<n)
        {
           if(mp.find(nums[j])==mp.end())
           {
                count++;
               
           }
           mp[nums[j]]++;
            while(count>k && i<=j)
            {
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                {
                    mp.erase(nums[i]);
                    count--;
                    
                }
                i++;
            }
            ans+=(j-i)+1;
            j++;
        }
        // cout<<count<<" "<<k<<endl;
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return noofelements(nums,k)-noofelements(nums,k-1);
        
    }