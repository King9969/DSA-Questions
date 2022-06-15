 unordered_map<int,int>m;
    int s=0,mx=0;
    for(int i=0;i<n;i++){
        s +=A[i];
        if(s==0)mx=(mx,i+1);
        else if(!m.count(s))m[s]=i;
        else(mx=max(mx,i-m[s]));
        }return mx;
