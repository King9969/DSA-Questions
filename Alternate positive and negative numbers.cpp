	void rearrange(int arr[], int n) {
	    vector<int>v,v1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0)v.push_back(arr[i]);
	        else v1.push_back(arr[i]);
	    }
	    int i=0,a=0,b=0,vs=v.size(),v1s=v1.size();
	    while(i<n){
	        if(a<vs)arr[i++]=v[a++];
	        if(b<v1s)arr[i++]=v1[b++];
	    }
	}
