int convertFive(int n) {
    int c=0,i=1,a;
    while(n){
        a=n%10;
        n=n/10;
        if(a==0){
            c+=5*i;i=i*10;
        }
        else {
            c+=a*i;
            i=i*10;
        }
    }return c;
}
