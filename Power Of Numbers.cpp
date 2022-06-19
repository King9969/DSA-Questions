long long power(int N,int R)
    {
        if(R ==0) return 1;
        long temp = power(N, R/2)%1000000007;
        long sq = (temp*temp)%1000000007;
        if(R%2==0) return sq;
        return (N * sq)%1000000007;
    }
