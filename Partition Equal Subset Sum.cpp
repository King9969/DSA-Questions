    bool help(int arr[],int n,int target,int N){
        if(target==0)return true;
        if(n==N)return false;
        if(target>=arr[n]){
        if(help(arr,n+1,target-arr[n],N))return true;}
        return help(arr,n+1,target,N);
    }
    int equalPartition(int N, int arr[]){
       int sum=0;
       for(int i=0;i<N;i++)sum+=arr[i];
       if(sum%2==1)return 0;
       else return help(arr,0,sum/2,N);
    }
