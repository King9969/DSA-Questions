    int maxOccured(int L[], int R[], int n, int maxx){
    vector<int>ans(1000000,0);
    for(int i=0;i<n;i++){ans[L[i]]++;ans[R[i]+1]--;}
    int mx=ans[0],a=0;
    for(int i=1;i<1000000;i++){
        ans[i]+=ans[i-1];
        if(mx<ans[i]){mx=ans[i];a=i;}
        }return a;
    }
