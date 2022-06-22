    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int>q;
        vector<int>ans;
        int i=0;
        for(int j=0;j<n;j++){
            while(q.size()&&q.back()<arr[j])q.pop_back();
            q.push_back(arr[j]);
            if(j-i+1==k){ans.push_back(q.front());
            if(arr[i]==q.front())q.pop_front();
            i++;}
        }return ans;
    }
