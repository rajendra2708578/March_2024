



//this is functional code neither header files nor main are included in it.
 int minValue(Node* root) {
        // Code here
        if(root==NULL)
    return -1;
    int minv=root->data;
    Node *node=root;
    while(node->left!=NULL)
    {
       
        node=node->left;
         minv=node->data;
    }
    return minv;
    }