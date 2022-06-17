vector<int> Col(V , -1);
	    for(int i=0; i<  V; i++){
	        if(Col[i] == -1){
	            if(!dfs(i , adj , Col , 1)) return  0;
	        }
	    }
	    return 1;
	}
	bool dfs(int node , vector<int> adj[], vector<int> &vis , int col){
	    if(vis[node] != -1 ){
	        if(vis[node] == col) return 1;
	        else return 0;
	    }
	    vis[node] = col;
	    for(int it : adj[node]){
	        if(! dfs(it , adj , vis ,  col ^ 1 )) return 0;
	    }
	    return 1;
