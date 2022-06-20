int can(int arr[],int n,int m ,int mid){
       int student=1,page=0;
       for(int i=0;i<n;i++){
       if(page+arr[i]<=mid)page+=arr[i];
       else{
           student++;
           if(student>m||arr[i]>mid)return false;
       page=arr[i];}
   }return true;
   }
    int findPages(int A[], int N, int M) 
    {
    int start=0;
    int end=0;
    int ans=-1;
    for(int i=0;i<N;i++)end+=A[i];
    while(start<=end){
        int mid=(start+end)/2;
        if(can(A,N,M,mid)){
            ans=mid;
            end=mid-1;
        }else start=mid+1;
    }return ans;
    }
