 int ht(Node *root){
        if(root==NULL)return 0;
        return max(ht(root->left),ht(root->right))+1;
    }
