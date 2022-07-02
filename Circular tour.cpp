    int tour(petrolPump p[],int n)
    {
     int sp=0,sd=0,diff=0,index=0;
     for(int i=0;i<n;i++){
         sd+=p[i].distance;
         sp+=p[i].petrol;
     }
     if(sd>sp)return -1;
     
     for(int i=0;i<n;i++){
         diff +=p[i].petrol-p[i].distance;
         if(diff<0){
             index=i+1;
             diff=0;
         }
     }return index;
    }
