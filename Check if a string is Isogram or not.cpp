    bool isIsogram(string s)
    {
        unordered_map<int,int>m;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==1)return 0;
            m[s[i]]++;
        }return 1;
    }
