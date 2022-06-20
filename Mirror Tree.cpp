 void mirror(Node* node) {
    if(node==NULL)return;
    Node* l=node->left;
    node->left=node->right;
    node->right=l;
    mirror(node->left);
    mirror(node->right);
    }
