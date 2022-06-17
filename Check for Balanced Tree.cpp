    int ht(Node *root){
        if(root==NULL)return 0;
        return max(ht(root->left),ht(root->right))+1;
    }
    bool isBalanced(Node *root)
    { if(root==NULL)return true;
    if(abs(ht(root->left)-ht(root->right))>1)return false;
    return isBalanced(root->left)&&isBalanced(root->right);
    }
