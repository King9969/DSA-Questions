  void rearrange(long long *arr, int n) 
    {
    int max=n-1,min=0;
    int maxe=arr[n-1]+1;
    for (int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=(arr[max]%maxe)*maxe;
            max--;}
        else {
            arr[i]+=(arr[min]%maxe)*maxe;
            min++;}
        }
        for (int i=0;i<n;i++)
        arr[i] = arr[i]/maxe;   
    }
