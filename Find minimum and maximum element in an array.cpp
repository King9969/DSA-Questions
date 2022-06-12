    //Find minimum and maximum element in an array 
    
    pair<long long , long long> p;
    long long mn = INT_MAX;
    long long mx = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        mx = max(mx,a[i]);
        mn = min(mn, a[i]);
    } 
    p = make_pair(mn , mx);
    return p;
