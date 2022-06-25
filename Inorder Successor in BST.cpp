    Node * inOrderSuccessor(Node *root, Node *x){
        Node* suc=NULL;
        while(root){
            if(root->data<=x->data)
            root=root->right;
            else{
                suc=root;
                root=root->left;
            }
        }return suc;
    }
