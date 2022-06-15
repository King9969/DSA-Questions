       vector<int>ans;
        int m=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=m){
                m=a[i];
                ans.push_back(m);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
