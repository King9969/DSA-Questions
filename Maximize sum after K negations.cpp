    long long int maximizeSum(long long int a[], int n, int k){
        sort(a,a+n);
        long long int i=0,s=0;
        while(k){
            if(a[i]>0)break;
            a[i]=a[i++]*-1;
            k--;
        }
        sort(a,a+n);
        if(k%2==1)a[0]=a[0]*-1;
        for(int i=0;i<n;i++)s+=a[i];
        return s;
    }
