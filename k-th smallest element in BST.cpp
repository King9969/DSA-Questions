    int val=-1;
    int c=0;
    int KthSmallestElement(Node *root, int K) {
        if(!root)return 0;
        KthSmallestElement(root->left,K);
        c++;
        if(K==c)val=root->data;
        KthSmallestElement(root->right,K);
        return val;
    }
