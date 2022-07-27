	long long findNth(long long N)
    {
       long long ans=0,x=1;
       while(N){
           ans+=N%9*x;
           N/=9;
           x*=10;
       }
       return ans ;
    }
