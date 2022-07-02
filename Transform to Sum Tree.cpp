   int solve(Node *node){
        if(!node)return 0;
        int temp=node->data;
        node->data=solve(node->right)+solve(node->left);
        return temp+node->data;
    }
    void toSumTree(Node *node)
    {
        solve(node);
    }
