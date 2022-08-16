  vector<int> FactDigit(int N){
    vector<int> ans;
    vector<int> factorial {1,1,2,6,24,120,720,5040,40320,362880};
    for(int i=9;i>=1;--i){
        while(N>=factorial[i]){
            ans.push_back(i);
            N-=factorial[i];
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
	}
