    vector<ll> nthRowOfPascalTriangle(int n) {
        vector<ll>a{1,0};
        for(int i=0;i<n-1;i++){
            a.insert(a.begin(),0);
            for(int j=0;j<a.size()-1;j++){
                a[j]=(a[j]+a[j+1])%1000000007;
            }
        }   a.pop_back();
            return a;
    }
