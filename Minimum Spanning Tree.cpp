    int spanningTree(int V, vector<vector<int>> adj[])
    {
     priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
       vector<int> vis(V,0);
       vector<int> key(V,INT_MAX);
       key[0]=0;
       pq.push({0,0});
       while(!pq.empty()){
           int u=pq.top().second;
           pq.pop();
           vis[u]=1;
           for(auto it: adj[u]){
               int v=it[0];
               int w=it[1];
               if(vis[v]==0 && w<key[v]) {
                    key[v]=w;
                   pq.push({key[v],v});
               }
           }
       }
       int sum=0;
       for(int i=0;i<V;i++)sum+=key[i];
       return sum; 
    }
