Node *deleteNode(Node *root, int X) {
    if(!root)return NULL;
    if(root->data==X){
        if(!root->left&&!root->right){delete root; return NULL;}
        if(!root->left&&root->right)return root->right;
        if(root->left&&!root->right)return root->left;
        if(root->left&&root->right){
            int mn = INT_MAX;
           Node*temp = root->right;
           while(temp!= NULL){
               mn = min(mn, temp->data);
               temp = temp->left;
           }
            root->data =mn;
           root->right = deleteNode(root->right, mn);
           return root;
        }
    }
        root->left=deleteNode(root->left,X);
        root->right=deleteNode(root->right,X);
        return root;
}
