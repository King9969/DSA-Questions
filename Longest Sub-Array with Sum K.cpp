    int lenOfLongSubarr(int A[],  int N, int K){ 
        int sum=0,l=0;
        unordered_map<int,int>m;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K)l=i+1;
            if(!m[sum])m[sum]=i+1;
            if(m[sum-K]>0)l=max(l,i-m[sum-K]+1);
        }return l;
    } 
