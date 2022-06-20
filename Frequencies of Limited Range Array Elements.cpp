    void frequencyCount(vector<int>& arr,int N, int P){ 
       for(int i=0;i<N;i++){
        arr[i]*=10000;
       }
        for(int i=0;i<N;i++){
            int a = arr[i]/10000;
           if(a<=N){
               arr[a-1]++;}
        }
      for(int i=0;i<N;i++){
           arr[i]=arr[i]%10000;
       }
    } 
