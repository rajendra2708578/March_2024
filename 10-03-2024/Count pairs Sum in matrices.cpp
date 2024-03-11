



//this is functional code no header files or main function are not included in it.

	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            mp[mat1[i][j]]++;
	        }
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(mp.find(x-mat2[i][j])!=mp.end())
	            {
	                count+=mp[x-mat2[i][j]];
	            }
	        }
	    }
	    return count;
	}