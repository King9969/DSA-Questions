    void rem(string &s,int n){
        int k=0,i;
        for(i=1;i<n;i++){
            if(s[i-1]!=s[i])
            s[k++]=s[i-1];
            else{ 
                while(s[i-1]==s[i])i++;}
        }
        s[k++]=s[i-1];
        s.erase(k);
        if(k!=n)rem(s,k);
        
    }
    string rremove(string s){
        rem(s,s.size());
        return s;
    }
