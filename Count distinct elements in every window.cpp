   vector <int> countDistinct (int A[], int n, int k){
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<k;i++)m[A[i]]++;
        ans.push_back(m.size());
        for(int i=k;i<n;i++){
                m[A[i-k]]--;
                if(m[A[i-k]]<1)m.erase(A[i-k]);
                m[A[i]]++;
            ans.push_back(m.size());
        }return ans;
    }
