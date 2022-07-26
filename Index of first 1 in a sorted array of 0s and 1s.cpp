    int firstIndex(int a[], int n) 
    {
        int l=0,r=n-1;
        while(l<r){
            int m=(l+r)/2;
            if(a[m]==0)l=m+1;
            else r=m;
        }if (a[l]==1)return l;
        return -1;
    }
