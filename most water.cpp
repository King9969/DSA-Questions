    int long l=0,r=len-1,m=0;
    while(l<r){
        m=max((long)m,(long)(min(A[l],A[r])*(r-l)));
        if(A[l]>=A[r]){r--;}
        else {l++;}
    }
    return m;
