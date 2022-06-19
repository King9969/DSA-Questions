    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<bool>visited ={false};
        queue<int>q;
        visited[0]=true;
        q.push(0);
        while(!q.empty()){
            int top=q.front();
            q.pop();
            ans.push_back(top);
            for(int &v:adj[top]){
                if(!visited[v])q.push(v);
                visited[v]=true;}
        }return ans;
    }
