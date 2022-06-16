map<char,int> mp,v;
for(int i=0;i<str.size();i++){
        mp[str[i]]++;
        }
        int ans = str.size();
        for(int j=0,i=0;j<str.size();j++){
            v[str[j]]++;
            if(v.size() == mp.size()){
                while(v[str[i]] > 1){
                    v[str[i]]--;
                    i++;
                }
                ans = min(ans,j-i+1);
            }
        }
        return ans;
