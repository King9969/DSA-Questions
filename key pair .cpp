	  //sorting nlogn and o(1) 
int l=0,r=n-1;
	    sort(arr,arr+n);
	    while(l<r){
	      if(arr[l]+arr[r]==x){return true;break;}
	      else if((arr[l]+arr[r])>x)r--;
	      else l++;
	    }
	    return false;
	}

// map n and n
