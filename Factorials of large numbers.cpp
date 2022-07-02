    vector<int> factorial(int N){
        vector<int>v(3000,0);
        v[0]=1;
        for(int i=2;i<=N;i++){
            for(int j=0;j<=v.size();j++)v[j]=v[j]*i;
            for(int j=0;j<=v.size();j++){
                int c=v[j]/10;
                v[j]=v[j]%10;
                v[j+1]+=c;
            }
        }reverse(v.begin(),v.end());
        vector<int>ans;
        bool f=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0)f=1;
            if(f==1)ans.push_back(v[i]);
        }return ans;
    }
