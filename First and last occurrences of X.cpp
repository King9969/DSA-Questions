    int bs(vector<int> &arr,int n,int num){
        int l=0,r=n-1,m;
        while(l<=r){
            m=(l+r)/2;
            if(arr[m]==num)return m;
            else if(num>arr[m])l=m+1;
            else if(num<arr[m])r=m-1;
        }return -1;
    }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        vector<int>ans;
       int a=bs(arr,n,x);
       if(a==-1){ans.push_back(-1);return ans;}
       int t=0;
       for(int i=a;i>=0;i--){
           if(arr[i]==x)t=i;
           else break;
       }ans.push_back(t);
       t=0;
       for(int i=a;i<n;i++){
           if(arr[i]==x)t=i;
           else break;
       }ans.push_back(t);
       return ans;
    }
