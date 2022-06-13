int l=0,r=n-1;
	    while(l<=r){
	        int m=l+(r-l)/2;
	        int next=(m+1)%n;
	        int prev=(m-1+n)%n;
	        if(arr[m]<=arr[prev] and arr[m]<=arr[next]) return m;
	        else if(arr[m]>=arr[0]) l=m+1;
	        else r=m-1;
	    }
	    return 0;
