    long long gcd(long long int a, long long int b){
        if (b == 0)return a;
        return gcd(b, a % b);
    }
    long long getSmallestDivNum(long long n){
       long res=1;
        for(long i =2; i<=n; i++)res = (res*i)/gcd(res,i);
        return res;
    }
