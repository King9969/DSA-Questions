    if(root==NULL){return 0;}
    int l=minDepth(root->left);
    int r=minDepth(root->right);
    return min(l,r)+1;
