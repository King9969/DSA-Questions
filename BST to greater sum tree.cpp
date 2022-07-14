    int s=0;
    void transformTree(struct Node *root)
    {
       if(!root)return;
       transformTree(root->right);
       s+=root->data;
       root->data=s-root->data;
       transformTree(root->left);
    }
