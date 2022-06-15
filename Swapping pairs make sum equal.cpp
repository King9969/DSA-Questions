      int suma=0,sumb=0;
       for(int i=0;i<n;i++)suma +=A[i];
       for(int i=0;i<m;i++)sumb +=B[i];
       sort(A,A+n);
       sort(B,B+m);
       int a=0,b=0;
       while(a<n && b<m){
       int p=suma-A[a]+B[b];
       int q=sumb-B[a]+A[b];
         if(p==q){return 1;}
              else if(p>q){a++;}
              else{b++;}  
       }return -1;
