    Node*lca(Node* root, int a, int b){
        if(root==NULL)return NULL;
        if(root->data==a||root->data==b)return root;
        Node*l=lca(root->left,a,b);
        Node*r=lca(root->right,a,b);
        if(l&&r) return root;
        if(l)return l;
        return r;
    }
    void pre(Node *root,int c,int &s,int a,int b){
        if(!root)return;
        if(root->data==a)s+=c;
        if(root->data==b)s+=c;
        pre(root->left,c+1,s,a,b);
        pre(root->right,c+1,s,a,b);
    }
    int findDist(Node* root, int a, int b) {
        int s=0;
        Node *t=lca(root,a,b);
        pre(t,0,s,a,b);
        return s;
    }
