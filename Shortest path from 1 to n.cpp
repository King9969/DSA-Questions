    int minimumStep(int n){
        int steps = 0;
       while(n>1){
           if(n%3==0){
               steps++;
               n = n/3;
           }
           else{
               steps++;
               n = n-1;
           }
       }
       return steps;
    }
