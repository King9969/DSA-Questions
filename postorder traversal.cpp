 void calc(Node* root, vector<int>&v){
    if(root!=NULL){
        calc(root->left,v);
        calc(root->right,v);
        v.push_back(root->data);
    }}
vector <int> postOrder(Node* root)
{
    vector<int>v;
  calc(root,v);
  return v;
}
