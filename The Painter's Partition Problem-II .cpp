   int can(int arr[],int n,int m ,int mid){
       int student=1;
       long long page=0,i;
       for(i=0;i<n;i++){
          page=page+arr[i];
       if(page>mid){
            student++;
            page=arr[i];}
   }if(student>m)return false;
        return true;}
    long long minTime(int A[], int N, int M)
    {
        long long end=0,ans=-1,mid;
        int start=0;
         for(int i=0;i<N;i++){start=max(start,A[i]);}     // extra step compared to allocate pages book because array is not sorted
    for(int i=0;i<N;i++)end+=A[i];
    if(M==N){ return start;}
    while(start<=end){
         mid=(start+end)/2;
        if(can(A,N,M,mid)){
            ans=mid;
            end=mid-1;
        }else start=mid+1;
    }return ans;
    }
