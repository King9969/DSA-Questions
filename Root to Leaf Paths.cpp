void t(Node* root,vector<int>temp,vector<vector<int>>&ans){
    temp.push_back(root->data);
    if(!root->left&&!root->right){
        ans.push_back(temp);
        return;
    }
    if(root->left)t(root->left,temp,ans);
    if(root->right)t(root->right,temp,ans);
}
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>>v;
    t(root,{},v);
    return v;
}
