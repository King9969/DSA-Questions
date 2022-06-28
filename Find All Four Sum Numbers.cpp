    vector<vector<int> > fourSum(vector<int> &arr, int k) {
       int n=arr.size();
        sort(arr.begin(),arr.end());
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int m=j+1;m<n;m++){
                    int cd=k-(arr[i]+arr[j]+arr[m]);
                    if(binary_search(arr.begin()+m+1,arr.end(),cd)){
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[m]);
                        v.push_back(cd);
                        sort(v.begin(),v.end());
                        st.insert(v);
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return  ans;
