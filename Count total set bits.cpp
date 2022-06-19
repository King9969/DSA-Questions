     if(!n)
          return 0;
        int bits = log2(n+1), x=1<<bits;
        bits*= (x>>1);
       if(n<x)
           return bits;
       return bits+ (n-x+1) + countSetBits(n-x);
