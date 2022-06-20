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


//1 line change for top view

void fillMap(Node* root, int d, int l,map<int, pair<int, int> >& m)
{
    if (root == NULL) return;
    if (m.count(d) == 0) {
        m[d] = make_pair(root->data, l);}
    else if (m[d].second <= l) {
        m[d] = make_pair(root->data, l);
    }
    fillMap(root->left, d - 1, l + 1, m);
    fillMap(root->right, d + 1, l + 1, m);
}
    vector <int> bottomView(Node *root) {
        map<int, pair<int, int> > m;
        fillMap(root, 0, 0, m);
        vector<int>ans;
        for(auto it :m)ans.push_back(it.second.first);
        return ans;
    }
