unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;}
       for(int i=1;i<INT_MAX;i++){
           if(mp[i] == 0)
               return i;}
