    priority_queue<int> pq;
        for(int i=0; i<=r; i++)
            pq.push(arr[i]);
        int x = r-k+1;
        while(x--)pq.pop();
        return pq.top();

// sort works better
sort(arr,arr+r+1);
      return arr[k-1]; 
