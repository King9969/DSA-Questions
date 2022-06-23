    int minSwap(int arr[], int n, int k) {
        int less=0,c=0;
        for(int i=0;i<n;i++)if(arr[i]<=k)less++;
        for(int i=0;i<less;i++)if(arr[i]<=k)c++;
        int cw=c;
        for(int i=less;i<n;i++){
            if(arr[i]<=k)cw++;
            if(arr[i-less]<=k)cw--;
            c=max(c,cw);
        }return less-c;
    }
