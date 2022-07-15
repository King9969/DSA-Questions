    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
   bool isValid(int x,int y,int n,int m){
       if(x>=0 && x<n && y>=0 && y<m)return true;
       return false;
   }
    int dfs(int x,int y,int n,int m,vector<vector<int>>&v,vector<vector<int>>& matrix){
       if(v[x][y]!=-1)return v[x][y];
       int ans=0;
       for(int i=0;i<4;i++){
           int tx=x+dx[i];
           int ty=y+dy[i];
           if(isValid(tx,ty,n,m) && matrix[tx][ty]>matrix[x][y]){
               int tmp=dfs(tx,ty,n,m,v,matrix);
               ans=max(ans,tmp);
           }
       }
       return v[x][y]=ans+1;
   }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
       vector<vector<int>>v(n,vector<int>(m,-1));
       int ans=INT_MIN;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               int t=dfs(i,j,n,m,v,matrix);
               ans=max(ans,t);
           }
       }
       return ans;
    }
