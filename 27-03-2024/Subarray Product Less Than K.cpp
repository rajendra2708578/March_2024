




//this is functional code neither header files nor main function are included in it.
 int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prod=1,count=0;
        int i=0,j=0;
        int n=nums.size();
        while(i<n && j<n)
        {
            prod*=nums[j];
            while(i<j && prod>=k)
            {
                prod/=nums[i];
                i++;
            }
            if(prod<k)
            {
                count+=(j-i)+1;
            }
            j++;
        }
        return count;
    }