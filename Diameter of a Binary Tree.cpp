   int d=0;
   int height(Node *node){
       if(node==NULL)return 0;
       int lh=height(node->left);
       int rh=height(node->right);
       d=max(d,1+lh+rh);
       return 1+max(lh,rh);
   }
    int diameter(Node* root) {
    height(root);
    return d;
    }
