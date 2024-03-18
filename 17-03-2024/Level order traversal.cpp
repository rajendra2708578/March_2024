





//this code is functional code neither header nor main function are not included.
vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>pq;
      pq.push(root);
      while(!pq.empty())
      {
          auto it=pq.front();
          pq.pop();
          ans.push_back(it->data);
          if(it->left)
          pq.push(it->left);
          if(it->right)
          pq.push(it->right);
      }
      return ans;
    }