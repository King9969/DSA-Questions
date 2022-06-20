    int circularSubarraySum(int a[], int num){
    int currmaxsum=0,maxsum=a[0],currminsum=0,minsum=a[0],total=0;
    for(int i=0;i<num;i++){
        currmaxsum=max(a[i],currmaxsum+a[i]);
        maxsum=max(currmaxsum,maxsum);
        currminsum=min(a[i],currminsum+a[i]);
        minsum=min(currminsum,minsum);
        total +=a[i];
    }
    return maxsum>0?max(maxsum,total-minsum):maxsum;
    }
