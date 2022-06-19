    vector<long long> nextLargerElement(vector<long long> arr, int n){
       stack<long long>s;
       vector<long long>res(n);
       res[n-1]=-1;
        s.push(arr[n-1]);
       for(int i=n-2;i>=0;i--){
           while(!s.empty()&&arr[i]>s.top())s.pop();
           if(s.empty())res[i]=-1;
           else res[i]=s.top();
           s.push(arr[i]);
       }return res;
    }
