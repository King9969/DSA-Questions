    int maxConsecutiveOnes(int N)
    {
       int ans=0,curr=0;
       for(int i=0;i<=32;i++){
           if(((N>>i)&1)==1)curr++;
           else curr=0;
           ans=max(ans,curr);
       }return ans;
    }
