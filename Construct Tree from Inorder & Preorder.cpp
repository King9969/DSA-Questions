    Node* ctree(int in[],int pre[],int is,int ie){
       if(is>ie)return nullptr;
       Node* root=new Node(pre[preorder++]);
       int index;
       for(int i=is;i<=ie;i++)
           if(in[i]==root->data){
               index=i;
               break;
           }
       root->left=ctree(in,pre,is,index-1);
       root->right=ctree(in,pre,index+1,ie);
       return root;
   }
   Node* buildTree(int in[],int pre[], int n)
   {
       return ctree(in,pre,0,n-1);
   }
