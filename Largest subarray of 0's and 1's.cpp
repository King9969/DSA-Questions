    int maxLen(int arr[], int N)
    {
        unordered_map<int,int>m;
        int sum=0,mx=0;
        for(int i=0;i<N;i++){
            if(arr[i]==0)sum+=-1;
            else sum+=1;
            
            if(sum==0)mx=max(mx,i+1);
            else if(m.find(sum)!=m.end()) mx=max(mx,i-m[sum]);
            else m[sum]=i;
        }return mx;
    }
