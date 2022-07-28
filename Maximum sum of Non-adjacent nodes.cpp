unordered_map<Node* ,int>m;
    int getMaxSum(Node *root) 
    {
        if(!root)return 0;
        if(m.find(root)!=m.end())return m[root];
        int in=root->data;
        if(root->left){
            in+=getMaxSum(root->left->left);
            in+=getMaxSum(root->left->right);
        }
        if(root->right){
            in+=getMaxSum(root->right->left);
            in+=getMaxSum(root->right->right);
        }
        int ex=getMaxSum(root->left)+getMaxSum(root->right);
        m[root]=max(in,ex);
        return m[root];
    }
