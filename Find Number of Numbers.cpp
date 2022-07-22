int num(int a[], int n, int k)
{
     int ans=0;
     for(int i=0;i<n;i++){
        int x=a[i];
        while(x){
            if(x%10==k)ans++;
            x=x/10;
        }
     }return ans;
}
