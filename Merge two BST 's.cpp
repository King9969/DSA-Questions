    void sol(Node *root1,vector<int>&v){
        if(root1==NULL)return;
        sol(root1->left,v);
        v.push_back(root1->data);
        sol(root1->right,v);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int>v;
       sol(root1,v);
       sol(root2,v);
       sort(v.begin(),v.end());
       return v;
    }
