    int numProvinces(vector<vector<int>> adj, int V) {
    vector<bool> vis(V);
        function<void(int)> dfs = [&](int node){
            vis[node] = true;
            for(int i=0;i<V;i++)if(adj[node][i] and !vis[i])dfs(i);
        };
        int t=0;
        for(int i=0;i<V;i++)
            if(!vis[i])t++ , dfs(i);
        return t;
    }
