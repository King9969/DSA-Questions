void fillMap(Node* root, int d, int l,map<int, pair<int, int> >& m)
{
    if (root == NULL) return;
    if (m.count(d) == 0) {
        m[d] = make_pair(root->data, l);}
    else if (m[d].second > l) {
        m[d] = make_pair(root->data, l);
    }
    fillMap(root->left, d - 1, l + 1, m);
    fillMap(root->right, d + 1, l + 1, m);
}
    vector<int> topView(Node *root)
    {   
        map<int, pair<int, int> > m;
        fillMap(root, 0, 0, m);
        vector<int>ans;
        for(auto it :m)ans.push_back(it.second.first);
        return ans;
    }
