Node* prev=NULL,*head=NULL;
    void in(Node* root){
        if(!root)return;
        in(root->left);
        root->left=prev;
        if(!prev)head=root;
        else prev->right=root;
        prev=root;
        in(root->right);
    }
    Node * bToDLL(Node *root)
    {
        in(root);
        return head;
    }
