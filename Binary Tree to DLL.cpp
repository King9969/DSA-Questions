    Node* prev=NULL,*head=NULL;
    Node * bToDLL(Node *root)
    {
         if(!root)return NULL;
        bToDLL(root->left);
        root->left=prev;
        if(!prev)head=root;
        else prev->right=root;
        prev=root;
        bToDLL(root->right);
        return head;
    }
