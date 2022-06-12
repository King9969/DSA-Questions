        int a[n+1] = {};
           int *res = new int[2];
       
        for(int i=0;i<n;i++){
            a[arr[i]]++;
        }
        for(int i=1;i<n+1;i++){
            if(a[i]==2){res[0]=i;}
            if(a[i]==0){res[1]=i;}
            
        }
    return res
