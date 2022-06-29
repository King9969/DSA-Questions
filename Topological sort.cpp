	stack<int> st;

	void dfs(vector<int>&vis,int node,vector<int>adj[]){
        vis[node]=1;
        for(auto i:adj[node]){
            if(vis[i]==0)dfs(vis,i,adj);
        }
	    st.push(node);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>vis(V,0);
	    for(int i=0;i<V;i++){
	        if(vis[i]==0)dfs(vis,i,adj);
	    }
	    vector<int>v;
	    while(!st.empty()){
	        v.push_back(st.top());
	        st.pop();
	    }return v;
	}
