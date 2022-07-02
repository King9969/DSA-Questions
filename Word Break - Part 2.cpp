    unordered_map<string,int> m;
    vector<string> ans;
    void fn(string r,string k){
        string p;
        for(int i=1;i<=r.size();i++){
            p=r.substr(0,i);
            if(m[p] && i==r.size()) ans.push_back(k+p);
            else if(m[p]==1) fn(r.substr(i),k+p+" ");
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s){
        for(int i=0;i<n;i++)m[dict[i]]=1;
        fn(s,"");
        return ans;
    }
