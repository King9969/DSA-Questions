         int a=0; int b=1;
       if(n<=2)
       return 1;
    for(int i=2;i<=n;i++){
          int c = (a+b)%1000000007;
          a = b;
          b = c;
      }
      return b;
