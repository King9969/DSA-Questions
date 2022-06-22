	int findMaxSum(int *arr, int n) {
	    
	    if(n==1)return arr[0];
	   if(n==2)return max(arr[0],arr[1]);
        int f=arr[0];
        int curr=0;
        int s=max(arr[0],arr[1]);
        for(int i=2;i<n;i++){
           curr=max(f+arr[i],s);
           f=s;
           s=curr;
        }return curr;
	}
