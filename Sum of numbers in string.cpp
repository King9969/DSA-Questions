    int findSum(string str){
    string temp = "";
       int sum=0;
       for(int i=0; i<str.length(); i++){
           if( str[i]>=48 && str[i]<=57 ){
               temp = temp+str[i];
               if(!(str[i+1]>=48 && str[i+1]<=57)){
                   sum = sum+stoi(temp);
                   temp.clear();
               }
           }
       }
       return sum;
    	
    }
