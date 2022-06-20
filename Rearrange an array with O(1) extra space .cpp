    void arrange(long long arr[], int n) {
       long long l=0,r=n-1,M=n+1;
       for(long long i=0;i<n;i++)
           arr[i]+=(arr[arr[i]]%M)*M;
        for(long long i=0;i<n;i++)
           arr[i]/=M;
    }
