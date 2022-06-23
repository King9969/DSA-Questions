bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int l=0,h=1;
    while(l<size&&h<size){
        if((l!=h)&&(arr[h]-arr[l])==n)return 1;
        else if ((arr[h]-arr[l])>n)l++;
        else h++;
    }return false;
}
