void calc(Node* root, vector<int>&v){
    if(root!=NULL){
        v.push_back(root->data);
        calc(root->left,v);
        calc(root->right,v);
    }
}

vector <int> preorder(Node* root)
{
  vector<int>v;
  calc(root,v);
  return v;
