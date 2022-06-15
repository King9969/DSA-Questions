 int sum=0,l=0;
       for(int i=0;i<n;i++){
       sum+=arr[i];
       while(sum>s && l<i){
           sum-=arr[l];l++;
       }
        if(sum==s){return {l+1,i+1};break;
       }
    }
   return {-1};     
    }
