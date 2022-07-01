 bool check_cycle(vector<int> adj[], int V, vector<bool> &vis, int u, int par){
        vis[u] = true;
        for(auto v: adj[u]){
            if(vis[v] and v != par) return true;
            if(vis[v]) continue;
            if(check_cycle(adj,V,vis,v,u)) return true;
            vis[v] = true;
        }
        return 0;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> vis(V,0);
        for(int i = 0; i < V; i++){
            if(vis[i]) continue;
            if(check_cycle(adj,V,vis,i,-1))return true;
        }
        return 0;
    }
