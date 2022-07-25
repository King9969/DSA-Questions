    int numTrees(int N) 
    {
    long long dp[N+1] = {0};
    int mod = 1e9+7;
    dp[0]=dp[1]= 1;
    for(int i=2; i<=N; i++)
        for(int j=0; j<i; j++)
            dp[i] = (dp[j]*dp[i-j-1] + dp[i])%mod;
    return dp[N];
    }
