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
//test case wrong
   int maxPath(Node* root,int &sum)
   {
       if(!root)return 0;
       int l = maxPath(root->left,sum);
       int r= maxPath(root->right,sum);
       if(root->left==NULL)return r+root->data;
       if(root->right==NULL)return l+root->data;
        int cur=l+r+root->data;
        sum=max(sum,cur);
        return root->data+max(l,r);
   }
   int maxPathSum(Node* root){
    int max=INT_MIN;
    maxPath(root,max);
    return max;
   }
