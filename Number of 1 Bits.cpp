int count = 0;
        while(N != 0)
        {count++;
            N &= N-1; }                              
        return count;
        
        
      //  x&(-x) : tells the last set bit
	  //: x  = x - x&-x removes the last set bit
    
    
    int setBits(int N) {
          int count = 0;
        while(N){
            if(N&1) count++;
            N = N >> 1;}
        return count;
    }
