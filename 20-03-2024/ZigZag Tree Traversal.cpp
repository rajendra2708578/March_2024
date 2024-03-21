



//this code is functional code no header files neither header files or main are included in it.


 vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>ans;
    	queue<Node*>pq;
    	pq.push(root);
    	bool lefttoright=true;
    	while(!pq.empty())
    	{
    	    int sz=pq.size();
    	   vector<int>vec;
    	   for(int i=0;i<sz;i++)
    	   {
    	       auto it=pq.front();
    	       pq.pop();
    	       vec.push_back(it->data);
    	       if(it->left)
    	       pq.push(it->left);
    	       if(it->right)
    	       pq.push(it->right);
    	   }
    	   if(lefttoright==false)
    	   reverse(vec.begin(),vec.end());
    	   lefttoright=!lefttoright;
    	   for(auto it:vec)
    	   {
    	       ans.push_back(it);
    	   }
    	    
    	}
    	return ans;
    }