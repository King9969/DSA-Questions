  int trailingZeroes(int N){
       int ans=0;
       for(int i=5;i<=N;i*=5)ans+=N/i;
       return ans;
    }
};
