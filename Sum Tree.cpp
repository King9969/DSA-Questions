int sum(Node* root){
    if(root==NULL){return 0;}
    if (root->left == nullptr && root->right == nullptr) {return root->data;}
    int l=sum(root->left);
    int r=sum(root->right);
    if(l!=INT_MIN && r!=INT_MIN && root->data==l+r){return 2*root->data;}
    return INT_MIN;}
    
    bool isSumTree(Node* root)
    {if(sum(root)!=INT_MIN){return 1;}
        return 0;}
