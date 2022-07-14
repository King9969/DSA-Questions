    long long getMaxArea(long long arr[], int n)
    {
      stack < long long > st;
       vector<long long> leftsmall(n,-1),rightsmall(n,n);
      for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] >= arr[i])st.pop();
        if (st.empty())leftsmall[i] = 0;
        else leftsmall[i] = st.top() + 1;
        st.push(i);
      }
      while (!st.empty())st.pop();
      for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i])st.pop();
        if (st.empty())rightsmall[i] = n - 1;
        else rightsmall[i] = st.top() - 1;
        st.push(i);
      }
      long long int maxA = 0;
      for (int i = 0; i < n; i++) {
        maxA = max(maxA, arr[i] * (rightsmall[i] - leftsmall[i] + 1));
      }
      return maxA;
    }
