    vector<int> findRange(string str, int n) {
       int p=0,mx=0,sx=0,s=0,e=0;
       vector<int>v;
       for(int i=0;i<n;i++){
           if(str[i]=='0')p++;
           else if(str[i]=='1')p--;
           if(p<0){p=0;sx=i+1;}
           if(p>mx){s=sx;e=i+1;mx=p;}
       }s++;
       if(!mx)v.push_back(-1);
       else {v.push_back(s);
       v.push_back(e);}
       return v;
    }
