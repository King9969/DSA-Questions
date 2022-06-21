    int maxMeetings(int start[], int end[], int n)
    {
      int count = 0;
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({end[i],start[i]});
        }
        sort(arr.begin(),arr.end());
        int prev = -1;
        for(int i=0;i<n;i++){
            if(arr[i].second > prev){
                count++;
                prev = arr[i].first;
            }
        }
        return count;
    }
