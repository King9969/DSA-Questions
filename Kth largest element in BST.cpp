    int val=-1;
    int c=0;
    int kthLargest(Node *root, int K){
        if(!root)return 0;
        kthLargest(root->right,K);
        c++;
        if(K==c)val=root->data;
        kthLargest(root->left,K);
        return val;
    }
