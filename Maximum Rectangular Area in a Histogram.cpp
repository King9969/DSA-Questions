    long long getMaxArea(long long arr[], int n)
    {
        vector<long long> left(n,-1),right(n,n);
        stack<long long> st1,st2;
       for (int i=0;i<n;i++){
           while(!st1.empty() && arr[i]<arr[st1.top()]){
               right[st1.top()]=i;
               st1.pop();
           }
           st1.push(i);
       }
       for (int i=n-1;i>=0;i--){
           while(!st2.empty() && arr[i]<arr[st2.top()]){
               left[st2.top()]=i;
               st2.pop();
           }
           st2.push(i);
       }
       long long ans=0;
       for (int i=0;i<n;i++){
           int len=right[i]-1-(left[i]+1)+1;
           ans=max(ans,len*arr[i]);
       }
       return ans;
    }
