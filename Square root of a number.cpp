long long int floorSqrt(long long int x) 
    {
    long long int l=1,h=x,ans=1,mid;
     while(l<=h){
          mid=(l+h)/2;
         if((mid*mid)<=x){
             l=mid+1;
             ans=mid;}
            else  h=mid-1;
     }return ans;  
    }
