    bool solve(struct Node* r1,struct Node* r2){
        if(!r1&&!r2)return true;
        if(!r1||!r2)return false;
        if(r1->data!=r2->data)return false;
        return solve(r1->left,r2->right)&&solve(r1->right,r2->left);
    }
    bool isSymmetric(struct Node* root){
        if(root==NULL)return true;
        return solve(root->left,root->right);
    }
