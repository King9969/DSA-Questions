    vector<int> verticalOrder(Node *root)
    {
       int i=0;
       queue<pair<Node*,int>>q;
       map<int,vector<int>>m;
       vector<int>ans;
       q.push(make_pair(root,i));
       while(q.size()>0){
           Node *top=q.front().first;
           i=q.front().second;
           q.pop();
           m[i].push_back(top->data);
           if(top->left)q.push(make_pair(top->left,i-1));
           if(top->right)q.push(make_pair(top->right,i+1));
       }
       for (auto x:m)
       for(auto y:x.second)ans.push_back(y);
       return ans;
    
    }
