	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
        int c=0;
        if(s==d)return 1;
        for(int i=0;i<edges.size();i++){
            if(edges[i][0]==s){
                s=edges[i][1];
                c+=possible_paths(edges,n,s,d);
                s=edges[i][0];
            }
        }return c;
	}
