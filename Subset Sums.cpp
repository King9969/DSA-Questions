    vector<int>ans;
    void sum(vector<int>arr,int l,int r,int s){
        if(l>r){
            ans.push_back(s);return;
        }
        sum(arr,l+1,r,s+arr[l]);
        sum(arr,l+1,r,s);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        sum(arr,0,N-1,0);
        return ans;
    }
