       vector <int> bottomView(Node *root) {
       int i=0;
       queue<pair<Node*,int>>q;
       map<int,int>m;
       vector<int>ans;
       q.push(make_pair(root,i));
       while(q.size()>0){
           Node *top=q.front().first;
           i=q.front().second;
           q.pop();
           m[i]=top->data;
           if(top->left)q.push(make_pair(top->left,i-1));
           if(top->right)q.push(make_pair(top->right,i+1));
       }
       for (auto x:m)ans.push_back(x.second);
       return ans;
    }

// recursion just 1 line change from top view
vector<int> v;
   if(root==NULL)return v;
   queue<Node*> q;
   q.push(root);
   while(q.empty()==false){
       int n=q.size();
       for(int i=0;i<n;i++){
           Node *cur=q.front();q.pop();
           if(i==0)v.push_back(cur->data);
           if(cur->left != NULL)q.push(cur->left);
           if(cur->right != NULL)q.push(cur->right);
       }
   }return v;
