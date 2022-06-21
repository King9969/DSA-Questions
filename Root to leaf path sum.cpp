    bool hasPathSum(Node *root, int S) {
       if(!root)return false;
       S=S-root->data;
       if(S==0&&!root->right&&!root->left)return true;
       return hasPathSum(root->right,S)||hasPathSum(root->left,S);
}
