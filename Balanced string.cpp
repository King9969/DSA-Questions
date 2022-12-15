string BalancedString(int N) {
        string ans,f,l,adder="abcdefghijklmnopqrstuvwxyz";
        
        for(int i=0;i<(N/26);i++)ans+=adder;
        
        int x=N,y=0;
        while(x){
            y+=x%10;
            x=x/10;
        }

        N=N%26;
        if(y%2!=0){
        for(int i=0;i<N/2;i++){
            f+=97+i;
        }
        if(N%2!=0)N++;
         for(int i=0;i<N/2;i++){
            l+=122-i;
        }
        reverse(l.begin(),l.end());
        ans+=f;
        ans+=l;
        return ans;
            
        }
        else {   
            for(int i=0;i<N/2;i++){
            l+=122-i;
        }
        if(N%2!=0)N++;
        for(int i=0;i<N/2;i++){
            f+=97+i;
        }
        reverse(l.begin(),l.end());
        ans+=f;
        ans+=l;
        return ans;
        }
        
    }
