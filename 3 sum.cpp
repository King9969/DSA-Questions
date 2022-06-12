       sort(A,A+n);
   for(int i=0;i<n-2;i++){
       int l=i+1;
       int h=n-1;
       while(l<h){
           if(A[i]+A[l]+A[h]==X){return 1;}
           else if(A[i]+A[l]+A[h]>X){h--;}
           else {l++;}
       }
   }
  return 0;
