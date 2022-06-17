sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            int m=i+1,h=n-1;
            while(m<h){
                if(arr[i]+arr[m]+arr[h]==0){return 1;}
               else if(arr[i]+arr[m]+arr[h]<0){m++;}
                else  {h--;}}
        }return 0;
