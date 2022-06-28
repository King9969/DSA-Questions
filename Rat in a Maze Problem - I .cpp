  void solve(vector<vector<int>>&m,int n,vector<string>&ans,string s,int i,int j){
    if(i<0||i>=n||j>=n||j<0||m[i][j]==0)return;
    if(i==n-1&&j==n-1){
        ans.push_back(s);
        return;
    }
    m[i][j]=0;
        solve(m,n,ans,s+'D',i+1,j);
        solve(m,n,ans,s+'R',i,j+1);
        solve(m,n,ans,s+'U',i-1,j);
        solve(m,n,ans,s+'L',i,j-1);
        m[i][j]=1;
    
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
       vector<string>ans;
       string s="";
       solve(m,n,ans,s,0,0);
       return ans;
    }
