    vector<long long>ans;
    queue<long long>q;
    for(int i=0;i<K-1;i++){
        if(A[i]<0)q.push(i);
    }
    for(int i=K-1;i<N;i++){
        if(A[i]<0)q.push(i);
        if(!q.empty()){
            if(q.front()<i-K+1)q.pop();
        }
        if(!q.empty())ans.push_back(A[q.front()]);
        else ans.push_back(0);
    }return ans;
 }
