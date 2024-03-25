


//this is functional code neither header files nor main are included in it.

void solve(int n,int fi,int se,string str,set<string>&st)
    {
        if(fi+se==n)
        {
            st.insert(str);
            return;
        }
        if(fi>se)
        {
            solve(n,fi+1,se,str+'1',st);
            solve(n,fi,se+1,str+'0',st);
        }
        else
        solve(n,fi+1,se,str+'1',st);
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    set<string>st;
	    solve(n,0,0,"",st);
	    vector<string>ans;
	    for(auto it:st)
	    {
	        ans.push_back(it);
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}