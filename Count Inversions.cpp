    long long int merge(long long arr[], long long l, long long m, long long r)
    {
        long long n1=m-l+1,n2=r-m,res=0;
        long long left[n1],right[n2];
        for(int i=0;i<n1;i++)left[i]=arr[l+i];
        for(int i=0;i<n2;i++)right[i]=arr[m+1+i];
        int i=0,j=0,k=l;
        while(i<n1&&j<n2){
            if(left[i]<=right[j])arr[k++]=left[i++];
            else {arr[k++]=right[j++];res=res+(n1-i);}
        }
        while(i<n1)arr[k++]=left[i++];
        while(j<n2)arr[k++]=right[j++];
        return res;
    }
     long long int mergeSort(long long arr[], long long l, long long r){
        long long int res=0;
        if(r>l){ 
            int m=l+(r-l)/2;
            res+=mergeSort(arr,l,m);
            res+=mergeSort(arr,m+1,r);
            res+=merge(arr,l,m,r);
        }return res;
     }
    long long int inversionCount(long long arr[], long long N){
         return mergeSort(arr,0,N-1);
    }
