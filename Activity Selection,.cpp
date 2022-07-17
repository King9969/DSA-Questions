    int activitySelection(vector<int> start, vector<int> end, int n)
    {
       vector<pair<int,int>>v;
      for(int i  = 0 ; i < n;i++){
          v.push_back({end[i],start[i]});}
      sort(v.begin(),v.end());
      int ans = 1 ;
      int x = v[0].first;
      for(int i = 1 ; i < n;i++){
          if(v[i].second>x){
              ans++;
              x=v[i].first;
          }}
      return ans;
    }
