    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr,arr+N);
       string ans;
       for(int i=0;i<arr[0].length();i++){
           string x=arr[0];
           string y=arr[N-1];
           if(x[i]==y[i])ans.push_back(x[i]);
           else break;}
       return ans==""?"-1":ans;
    }
