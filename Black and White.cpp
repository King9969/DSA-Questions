long long numOfWays(int N, int M)
{
long long n=(long long)(N*M),ans=0;
n=n*(n-1);
for(int i=1;i<=N;i++){
    for(int j=1;j<=M;j++){
        if(i+1<=N&&j+2<=M)ans++;
        if(i+1<=N&&j-2>0)ans++;
        if(i-1>0&&j+2<=M)ans++;
        if(i-1>0&&j-2>0)ans++;
        if(i+2<=N&&j-1>0)ans++;
        if(i+2<=N&&j+1<=M)ans++;
        if(i-2>0&&j+1<=M)ans++;
        if(i-2>0&&j-1>0)ans++;
        
    }
}return (n-ans)%1000000007;
}
