    int c=0;
    int getCount(Node *root, int l, int h)
    { 
        if(!root)return 0;
        getCount(root->left, l, h);
        if(root->data<=h&&root->data>=l)c++;
        getCount(root->right, l, h);
        return c;
    }
};
