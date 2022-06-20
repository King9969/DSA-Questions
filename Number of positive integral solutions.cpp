long fac(int x){
       long ans=1;
       for(int i=1;i<=x;i++)ans=ans*i;
        return ans;
   }

    long posIntSol(string s)
    {
        int r=0,i=0;
          while(s[i]!='='){
           if(s[i]!='+' && s[i]!='='){
               r++;
           }
           i++;
       }
       long den=fac(r-1);
       string N=s.substr(i+1,s.size()+1);
      int n=stoi(N);
      if(n==1){return 0;}
       long num=1;
       while(r>1){
           n=n-1;
           num=num*n;
           r--;
       }
       return num/den; 
    }
