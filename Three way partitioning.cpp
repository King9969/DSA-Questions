    void threeWayPartition(vector<int>& arr,int a, int b){
        int n=arr.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]<a)swap(arr[i],arr[j++]);
        }
        j=n-1;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>b)swap(arr[i],arr[j--]);
        }
    }
