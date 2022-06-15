    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int m=1;
    	int p=1;
    	int l=1,r=0;
    	while(l<n&&r<n){
    	    if(arr[l]>dep[r]){p--;r++;}
    	    else{p++;l++;}
    	    m=max(m,p);
    	}return m;
