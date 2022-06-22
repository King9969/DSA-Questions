long long int maxSum(int arr[], int n)
{   int ans=0;
   sort(arr,arr+n);
   int l=0,h=n-1;
   while(l<=h){
       swap(arr[l],arr[h]);
       l+=2;h-=2;
   }
   for(int i=0;i<n;i++){
       ans+=abs(arr[i]-arr[(i+1)%n]);
   }return ans;
}
