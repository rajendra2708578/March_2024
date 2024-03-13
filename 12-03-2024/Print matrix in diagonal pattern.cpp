




//this code is function code no header files or main are not included in it.
vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         int n=mat.size();
         map<int, vector<int>> mp;
         for(int i=0; i<n; i++) {
             for(int j=0; j<n; j++) {
                 mp[i+j].push_back(mat[i][j]);
             }
         }
         vector<int> ans;
         for(auto it= mp.begin(); it!=mp.end(); it++) {
             vector<int> temp = it->second;
             if(it->first%2==0) reverse(temp.begin(), temp.end());
             for(auto it: temp) ans.push_back(it);
         }
         return ans;
    }