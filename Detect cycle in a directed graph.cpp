    bool cycle(int node,vector<bool>&vis,vector<bool>&dfsvis,vector<int> adj[]){
        vis[node]=1;
        dfsvis[node]=1;
        for(auto i:adj[node]){
            if(!vis[i]) {if(cycle(i,vis,dfsvis,adj))return true;}
            else if(dfsvis[i]==1)return true;
        }
        dfsvis[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
       vector<bool>dfsvis(V,0);
       vector<bool>vis(V,0);
       for(int i=0;i<V;i++){
           if(cycle(i,vis,dfsvis,adj))return true;
       }return false;
    }
