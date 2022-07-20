    int countBitsFlip(int a, int b){
    int n=a^b,c=0;
    while(n){
        n=n&(n-1);c++;
    }return c;
}
