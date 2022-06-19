 vector<int>v;
void leftb(Node*r){
    if((r==NULL)||(r->left==NULL&&r->right==NULL))return;
    v.push_back(r->data);
    if(r->left)leftb(r->left);
    else leftb(r->right);
}
void rightb(Node*r){
    if((r==NULL)||(r->left==NULL&&r->right==NULL))return;
    if(r->right)rightb(r->right);
    else rightb(r->left);
    v.push_back(r->data);
}
void leaf(Node*r){
    if(r==NULL)return;
    if(r->left==NULL && r->right==NULL){v.push_back(r->data);return;}
    leaf(r->left);
    leaf(r->right);
}

    
public:
    vector <int> boundary(Node *root)
    {
       if(root==NULL)return v;
       v.push_back(root->data);
       leftb(root->left);
       leaf(root->left);
       leaf(root->right);
       rightb(root->right);
       return v;
    }
