



//this code is functional code no header files or main are not included in it.

bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char,int>mp;
	    for(auto it:s)
	    {
	        mp[it]++;
	    }
	    set<int>st;
	    for(auto it:mp)
	    {
	        st.insert(it.second);
	    }
	    if(st.size()>2)
	    return 0;
	    else if(st.size()==1)
	    return 1;
	    else
	    {
	        int fiv=*st.begin();
	        st.erase(fiv);
	        int sev=*st.begin();
	        int fic=0,se=0;
	        for(auto it:mp)
	        {
	            if(it.second==fiv)
	            fic++;
	            else
	            se++;
	        }
	        if(sev-fiv==1 && se==1)
	        return 1;
	        else
	        return 0;
	    }
	    
	}