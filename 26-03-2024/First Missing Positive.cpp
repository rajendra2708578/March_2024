



//this is functional code neither the header files nor main are included in it.
int firstMissingPositive(vector<int>& nums) {
       int n=nums.size();
       bool first=false;
       for(int i=0;i<n;i++)
       {
          if(nums[i]==1)
          first=true;
          else if(nums[i]<=0|| nums[i]>n)
          nums[i]=1;
       }
       if(first==false)
       return 1;
       for(int i=0;i<n;i++)
       {
            int ind=abs(nums[i]);
            if(ind==n)
            nums[0]=-abs(nums[0]);
            else
            nums[ind]=-abs(nums[ind]);
       }
       for(int i=2;i<n;i++)
       {
         if(nums[i]>0)
         return i;
       }
       if(nums[0]>0)
       return n;

       return n+1;
    }