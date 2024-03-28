



//this is functional code neither header files nor main are included.

 int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
        // Your code here
        vector<vector<int>>graph(n,vector<int>(n,-1));
        for(auto it:edges)
        {
            graph[it[0]][it[1]]=it[2];
            graph[it[1]][it[0]]=it[2];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(graph[i][j]==-1)
                graph[i][j]=1e9;
                else if(i==j)
                graph[i][j]=0;
            }
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
                }
            }
        }
       int city=0;
       vector<pair<int,int>>vec;
       int maxv=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j && graph[i][j]>distanceThreshold)
                count++;
            }
            if(maxv<count)
            {
                city=i;
                maxv=count;
            }
            else if(maxv==count)
            {
                city=max(city,i);
            }
        }
        return city;
        
    }