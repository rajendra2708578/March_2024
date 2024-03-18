




//this code functional code neither header files or main are not included inti
 int findMinArrowShots(vector<vector<int>>& points) {
        set<pair<int,int>>st;
        sort(points.begin(),points.end());
        int start=points[0][0],end=points[0][1];
        for(int i=1;i<points.size();i++)
        {
            if(end>=points[i][0])
            {
                end=min(points[i][1],end);

            }
            else
            {
                st.insert({start,end});
                start=points[i][0];
                end=points[i][1];
            }
        }
        st.insert({start,end});
        return st.size();
    }