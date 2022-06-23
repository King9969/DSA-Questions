void solve(struct Node *root,vector<int>&ans,int k,int h){
    if(!root)return;
    if(h==k)ans.push_back(root->data);
    solve(root->left,ans,k,h+1);
     solve(root->right,ans,k,h+1);
}

vector<int> Kdistance(struct Node *root, int k)
{
vector<int>ans;
solve(root,ans,k,0);
return ans;
}
