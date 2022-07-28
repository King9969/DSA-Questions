  void fun2(vector<int>&v, int& i, Node *root){
       if(!root)return;
       fun2(v,i,root->left);
       root->data=v[i++];
       fun2(v,i,root->right);
   }
   void fun1(vector<int>&v, Node*root) {
       if(!root)return;
       v.push_back(root->data);
       fun1(v,root->left);
       fun1(v,root->right);
   }
   Node *binaryTreeToBST (Node *root){
       vector<int>v;
       fun1(v,root);
       sort(v.begin(),v.end());
       int i=0;
       fun2(v,i,root);
       return root;
   }
