 vector<int> sortByFreq(int arr[],int n)
    {
        vector<int> v;
        unordered_map<int,int> m;
        multiset<pair<int,int>> s;
     for(int i=0;i<n;i++){
         m[arr[i]]++;
     }
     for(int i=0;i<n;i++){
         s.insert({m[arr[i]] * (-1),arr[i]});
     }
     for(auto it:s){
         v.push_back(it.second);
     }
     return v;
    }
