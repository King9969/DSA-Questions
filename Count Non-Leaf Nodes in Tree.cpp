    int countNonLeafNodes(Node* root) {
        if(root==NULL)return 0;
        if(root->left==NULL&&root->right==NULL)return 0;
        else return countNonLeafNodes(root->left)+countNonLeafNodes(root->right)+1;
    }
