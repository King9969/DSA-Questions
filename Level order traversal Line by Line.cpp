vector<vector<int>> levelOrder(Node* node){
  vector<vector<int>>ans;
  queue<Node*>q;
  q.push(node);
  while(!q.empty()){
  int n=q.size();
  vector<int>l;
  for(int i=0;i<n;i++){
      Node*top=q.front();
      q.pop();
      l.push_back(top->data);
      if(top->left)q.push(top->left);
      if(top->right)q.push(top->right);
  }
  ans.push_back(l);
  }return ans;
}
