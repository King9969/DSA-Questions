	int print2largest(int arr[], int n) {
	  int a=arr[0],b=-1;
	  for(int i=0;i<n;i++){
	      if(arr[i]>a){
	          b=a;
	          a=arr[i];
	      }
	      if(arr[i]<a&&arr[i]>b)b=arr[i];
	  }return b;
	}
