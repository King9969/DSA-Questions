int c=2;
    bool isLucky(int n) {
    if(c>n)return 1;
    if(n%c==0)return 0;
    n=n-(n/c);
    c++;
    isLucky(n);
    }
