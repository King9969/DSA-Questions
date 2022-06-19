 void dfs(int v,vector<int>&vis,vector<int>adj[],vector<int>&ans){
     ans.push_back(v);
     vis[v]=1;
     for(int i=0;i<adj[v].size();i++){
         if(!vis[adj[v][i]])dfs(adj[v][i],vis,adj,ans);}
 }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
         vector<int>ans;
         vector<int>vis(V,0);
         dfs(0,vis,adj,ans);
         return ans;
    }
