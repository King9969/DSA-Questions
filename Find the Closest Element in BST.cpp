    int minDiff(Node *root, int K)
    {
        if(!root) return 999999999;
        if(root->data < K)return min(abs(root->data - K),minDiff(root->right,K));
        else if(root->data > K)return min(abs(root->data - K),minDiff(root->left,K));
        return 0;
    }
