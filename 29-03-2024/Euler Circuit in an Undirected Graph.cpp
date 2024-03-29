


//this is functional code neither header files nor main are inclcuded in it.

void dfs(int node,vector<int>&vis,vector<int>adj[])
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            dfs(it,vis,adj);
        }
    }
    bool connected(int v,vector<int>adj[])
    {
         vector<int>vis(v,0);
	    int i;
	    for(i=0;i<v;i++)
	    {
	        if(adj[i].size())
	        break;
	    }
	    if(i==v)
	    return true;
	    dfs(i,vis,adj);
	    for(int i=0;i<v;i++)
	    {
	        if(vis[i]==0 && adj[i].size()>0)
	        return false;
	    }
	    return true;
    }
	bool isEularCircuitExist(int v, vector<int>adj[]){
	    // Code here
	    if(connected(v,adj)==false)
	    return false;
	    int old=0;
	    for(int i=0;i<v;i++)
	    {
	        if(adj[i].size()%2)
	        old++;
	    }
	   if(old==0)
	   return true;
	   else
	   return false;
	}