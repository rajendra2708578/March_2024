

//this code is only the functional code no header files or main are not included.

	bool static comp(string &a,string &b)
	{
	    return a+b>b+a;
	}
	string printLargest(int n, vector<string> &arr) {
	    // code here
	    string ans="";
	    sort(arr.begin(),arr.end(),comp);
	    for(auto it:arr)
	    {
	        ans+=it;
	    }
	    return ans;
	    
	}