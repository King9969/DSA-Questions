int max_sum(int A[],int N){
int sum=0,ans=INT_MIN,temp=0;
for(int i=0;i<N;i++){
    sum+=A[i];
    temp+=A[i]*i;
}
ans=temp;
for(int i=0;i<N-1;i++){
    temp=temp-sum+A[i]*(N);
    ans=max(ans,temp);
}return ans;
}
