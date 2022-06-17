    if(arr[n-1]==0)return -1;
    else {int l=0,h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]==0){l=m+1;}
        else h=m-1;
    }return h+1;}
