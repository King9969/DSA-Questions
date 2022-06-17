vector<int> v;
     void lnr(Node* root){
         if(root==NULL){return;}
        lnr(root->left);
         v.push_back(root->data);
        lnr(root->right);
     }
    vector<int> inOrder(Node* root) {
       lnr(root);
       return v;
    }
