int getSize(Node* root)
{
   if(root==NULL)return 0;
    int l=getSize(root->left);
   int r=getSize(root->right);
   return l+r+1;
}
