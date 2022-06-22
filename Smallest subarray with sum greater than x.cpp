    int smallestSubWithSum(int arr[], int n, int x){
     int ans=INT_MAX,sum=0,a=0;
     for(int i=0;i<n;i++){
         sum+=arr[i];
        if(sum>=x){
           while(sum>x)sum=sum-arr[a++];
            ans=min(ans,i-a+2);
        }
    }return ans;}
