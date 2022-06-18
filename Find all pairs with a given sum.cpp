vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    { vector<pair<int,int>>v;
        unordered_map<int,int>m;
        for(int i=0;i<N;i++)m[A[i]]++;
        for(int i=0;i<M;i++){
            if(m[X-B[i]]==1){
                v.push_back({X-B[i],B[i]});}
        }sort(v.begin(),v.end());
        return v;
    }
