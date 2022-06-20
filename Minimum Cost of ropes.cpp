    long long minCost(long long arr[], long long n) {
    priority_queue<long long,vector<long>,greater<long>>pq(arr,arr+n);
    long long sum=0;
    while(pq.size()>=2){
        long long a=pq.top();
        pq.pop();
        long long b=pq.top();
        pq.pop();
        sum+=a+b;
        pq.push(a+b);
    }return sum;
    }
