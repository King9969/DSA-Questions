    long long maxSubarraySum(int a[], int n){
    int currmaxsum=0,maxsum=a[0];
    for(int i=0;i<n;i++){
        currmaxsum=max(a[i],currmaxsum+a[i]);
        maxsum=max(currmaxsum,maxsum);
    }return maxsum;
    }
    
     int mx=INT_MIN; 
     int sum=0;
     for(int i=0;i<n;i++){
         sum=sum+arr[i];
         mx=max(mx,sum);
         if(sum<0){sum=0;}
     }
      return mx;
