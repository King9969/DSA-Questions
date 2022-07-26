vector<int> common_element(vector<int>v1,vector<int>v2){
        vector<int>ans;
        map<int,int>m;
        for(auto i:v1)m[i]++;
        for(auto i:v2){
            if(m[i]>=1){
                ans.push_back(i);
                m[i]--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        }
