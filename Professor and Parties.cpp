 //Professor and Parties   
     unordered_set<int>s;
      for(int i=0;i<n;i++){
        if(s.find(a[i])!=s.end())return "BOYS";
        s.insert(a[i]);
        }
         return "GIRLS";
