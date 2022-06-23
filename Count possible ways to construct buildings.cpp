	int TotalWays(int N)
	{
	  long  mod=1000000007;
	  long  a=1,b=1;
	   for(int i=0;i<N;i++){
	       a=(a+b)%mod;
	       b=a-b;
	   }return(a*a)%mod;
	}
