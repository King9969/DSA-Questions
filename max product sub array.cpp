	    int long  ma =arr[0],mi =arr[0],ans =arr[0];
	    for(int i=1;i<n;i++){
	        int long temp=max({(long)arr[i],(long)ma*arr[i],(long)mi*arr[i]});
	        mi=min({(long)arr[i],(long)ma*arr[i],(long)mi*arr[i]});
	        ma=temp;
	        ans=max((long)ans,(long)ma);
	    }
	    return ans;
