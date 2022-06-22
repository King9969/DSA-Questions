   int Maximize(int a[],int n){
       sort(a,a+n);
        long ans=0;
        int mod = 1000000007;
        for(long i=0;i<n;i++){
            ans=(ans+(a[i]*i)%mod)%mod;
        }return ans;
    }
