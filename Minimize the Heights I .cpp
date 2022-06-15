        sort(arr,arr+n);
       int mi,mx,a=arr[n-1]-arr[0];
       for(int i=1;i<n;i++){
           mi=min(arr[0]+k,arr[i]-k);
           mx=max(arr[n-1]-k,arr[i-1]+k);
           a=min(a,mx-mi);
       }return a;
