    int longestSubsequence(int n, int a[])
    {
       int dp[n];
          dp[0] = 1;
          int res = 1;
          for(int i = 1; i < n; i++){
              int curr = 1; 
              for(int j = 0; j < i; j++){
                  if(a[j] < a[i]){
                      curr = max(curr, 1 + dp[j]);
                  }
              }
              dp[i] = curr;
              res = max(res, curr);
          }
        
