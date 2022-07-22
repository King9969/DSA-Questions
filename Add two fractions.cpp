int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
void addFraction(int num1, int den1, int num2,int den2)
{
    int nx=num1*den2 + num2*den1 ;
    int dx=den1*den2;
   int gcf=gcd(nx,dx);
   cout<<nx/gcf<<"/"<<dx/gcf<<endl;
 }
