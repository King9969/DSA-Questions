    char profession(int level, int pos){
        int c=0,n=pos-1;
        while(n){
            n=n&(n-1);
            c++;
        }return c&1?'d':'e';
    }
