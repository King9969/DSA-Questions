  //search pivoted array 
      while(l<=h){
    int m=(l+h)/2;
    if(A[m]==key)return m;
    else if(A[l]<=A[m]){
        if(key >=A[l] &key<=A[m]){h=m-1;}
        else l=m+1;}
    else{
        if(key>=A[m] & key <=A[h]){l=m+1;}
        else h=m-1;}
    }

    return -1;    
    }      
        
