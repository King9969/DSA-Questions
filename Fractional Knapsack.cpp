ouble fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<float,pair<int,int>>>v;
       for(int i=0;i<n;i++)
       {
           float d=float(arr[i].value)/float(arr[i].weight);
           pair<int,int>p={arr[i].value,arr[i].weight};
           v.push_back(make_pair(d,p));
       }
       sort(v.begin(),v.end());
       double value=0;
       for(int i=n-1;i>=0;i--)
       {
           if(v[i].second.second>W)
           {
               value=value+v[i].first*(W);
               break;
           }
           value=value+v[i].second.first;
           W=W-v[i].second.second;
       }
       return value;
    }
        
