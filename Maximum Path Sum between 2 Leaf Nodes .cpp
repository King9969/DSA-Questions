   int maxPathSumUtil(Node* root)
   {
       if(!root)return 0;
       int l = maxPathSumUtil(root->left);
       int r= maxPathSumUtil(root->right);
       if(root->left && root->right){
       maxsum =max(maxsum,l+r+root->data);
       return root->data+max(l,r);}
       else if(root->left)return root->data+l;
       else return root->data+r;
   }
   int maxPathSum(Node* root){
       int x= maxPathSumUtil(root);
       if(root->left && root->right)return maxsum;
       return max(maxsum,x);
   }
