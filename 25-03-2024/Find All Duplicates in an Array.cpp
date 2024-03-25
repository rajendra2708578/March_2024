




//this is functional code neihter header files nor main are inlcuded in it.
vector<int> findDuplicates(vector<int>& nums) {
         vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            int ind = abs(nums[i]) - 1;
            // cout<<i<<" "<<ind<<" ";
            if (nums[ind] < 0) {
                res.push_back(ind + 1);
            } else {
                nums[ind] = -nums[ind];
            }
            cout<<nums[ind]<<endl;
        }
        return res;
    }