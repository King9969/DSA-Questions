    string removeChars(string string1, string string2) {
    unordered_map<char,int>m;
    string ans;
    for(int i=0;i<string2.length();i++){
        m[string2[i]]++;
    }
    for(int i=0;i<string1.length();i++){
        if(m.find(string1[i])==m.end())ans+=string1[i];
    }
    return ans;
    }
