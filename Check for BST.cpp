      int isbst(Node* root,int min ,int max) {
        if(root==NULL){return 1;}
       if(root->data<min||root->data>max){return 0;}
       return(isbst(root->left,min,root->data-1)&&isbst(root->right,root->data+1,max));
        }
    bool isBST(Node* root) 
    {
    isbst(root,INT_MIN,INT_MAX);
    }
