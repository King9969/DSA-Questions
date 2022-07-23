        int maxLevel(int h,int m)
        {
        int level=0;
       bool selectOne=true;
       while(h>0 && m>0){
           if(selectOne){
               h+=3;
               m+=2;
               level++;
               selectOne=false;
           }else{
               selectOne=true;
               level++;
               if(h>5 && m>10){
                   h-=5;
                   m-=10;
               }else{
                   h-=20;
                   m+=5;
               }
           }
       }
       return level-1;
        }
