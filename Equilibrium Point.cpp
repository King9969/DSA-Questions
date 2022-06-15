    int l=0,h=n-1,suml=a[0],sumh=a[n-1];
    if(n==1)return 1;
    if(n==2)return -1;
    while(l<h){
        if(suml<sumh)suml +=a[++l];
        else sumh +=a[--h];
    }
    if(suml==sumh)return(l+1);
    return -1;
