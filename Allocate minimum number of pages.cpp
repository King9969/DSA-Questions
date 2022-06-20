   int can(int arr[],int n,int m ,int mid){
       int student=1,page=0;
       for(int i=0;i<n;i++){
          page=page+arr[i];
       if(page>mid){
            student++;
            page=arr[i];}
   }if(student>m)return false;
        return true;
   }
    int findPages(int A[], int N, int M) {
    int start=A[N-1],end=0,ans=-1;
    for(int i=0;i<N;i++)end+=A[i];
    while(start<=end){
        int mid=(start+end)/2;
        if(can(A,N,M,mid)){
            ans=mid;
            end=mid-1;
        }else start=mid+1;
    }return ans;
    }
