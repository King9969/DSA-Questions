    unordered_map<ll,int> m;
       for(int i=0;i<N;i++)m[A[i]]++;
        for(int i=0;i<N;i++){
           if(m[B[i]]==0)return 0;
          if(m[B[i]]>0)m[B[i]]--;}
         return 1;
