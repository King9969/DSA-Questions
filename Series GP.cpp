	long long int modPow(int x, int m, int d) {
    if(m == 0) return 1; 
    long long int p = modPow(x, m/2, d) % d;
    p = (p * p) % d;
    return m % 2 ? (p * x) % d : p;
}
   	int Nth_term(int a, int r, int n){
   	const int mod = 1e9 + 7;
       return a * modPow(r, n-1, mod) % mod;
   	}    
