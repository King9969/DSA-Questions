	int countTriplet(int arr[], int n)
	{
	    sort(arr,arr+n);
	        int c=0,i=n-1;
	        while(i>0){
	            int l=0,r=i-1;
	            while(l<r){
	                if(arr[l]+arr[r]==arr[i]){c++;l++;r--;}
	                else if(arr[l]+arr[r]<arr[i]) l++;
	                else r--;}
	                i--;
	        }return c;
	    }
