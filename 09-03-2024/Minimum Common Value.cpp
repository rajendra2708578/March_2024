


//this code is functional code no header files or main function are not included in it.

 int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            return nums2[j];
            else if(nums1[i]>nums2[j])
            j++;
            else
            i++;
        }
        return -1;
    }