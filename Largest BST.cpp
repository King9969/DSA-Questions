 int size(Node*root){
        if(!root)return 0;
        return size(root->left)+size(root->right)+1;
    }
    bool isbst(Node*root,int max,int min){
        if(!root)return 1;
        if(root->data<=min||root->data>=max)return 0;
        return isbst(root->left,root->data,min)&&isbst(root->right,max,root->data);
    }
    int largestBst(Node *root)
    {
        if(!root)return 0;
        if(isbst(root,INT_MAX,INT_MIN))return size(root);
        return max(largestBst(root->left),largestBst(root->right));
    }
