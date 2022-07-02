int solve(Node* root,int &flag){
        if(root==NULL) return 0;
        int l = solve(root->left,flag);
        int r = solve(root->right,flag);
        if(root->left && root->right && l!=r) flag=0;
        return 1+max(l,r);
    }
    bool check(Node *root)
    {
        int flag=1;
        solve(root,flag);
        if(flag)return true;
        return false;
    }
