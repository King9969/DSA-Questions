         for(int i=0; i<n; i+=k){
           if(i+k < n)reverse(arr.begin()+i, arr.begin()+(i+k));
           else reverse(arr.begin()+i, arr.end());
         }
