 int x=a[0],c=1;
    for(int i=1;i<size;i++){
        if(a[i]==x)c++;
        else c--;
        if(c==0){x=a[i];c++;}
    }
    c=0;
    for(int i=0;i<size;i++){
        if(a[i]==x)c++;
    }  return c>size/2 ? x : -1 ;
