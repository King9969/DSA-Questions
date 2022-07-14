	long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr,arr+n);
	    int ans=0;
	    for(int i=0;i<n;i++){
	       int l=i+1,h=n-1;
	       while(l<h){
	       if((arr[i]+arr[l]+arr[h])>=sum)h--;
	       else {ans+=h-l;l++;}
	       }
	    }return ans;
	}
