   int isSumProperty(Node *root)
    {
     if(!root)return 1;
     if(!root->left&&!root->right)return 1;
     else{
         int s=0;
         if(root->right)s=s+root->right->data;
         if(root->left)s=s+root->left->data;
         if(s!=root->data)return 0;
     }
        bool a = isSumProperty(root->left);
        bool b = isSumProperty(root->right);
        return a&b;

    }
