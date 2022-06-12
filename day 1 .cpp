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
--------------------------------------------------------------------------
    //Reverse a String 
    
    int a=str.size()-1;
    for(int i=0;i<str.size()/2;i++)
    {swap(str[i],str[a]);a--;}
    return str;
--------------------------------------------------------------------------
    //Kadane's Algorithm 
    
     int mx=INT_MIN; 
     int sum=0;
     for(int i=0;i<n;i++){
         sum=sum+arr[i];
         mx=max(mx,sum);
         if(sum<0){sum=0;}
     }
      return mx;
--------------------------------------------------------------------------
    //Professor and Parties   
     unordered_set<int>s;
      for(int i=0;i<n;i++){
        if(s.find(a[i])!=s.end())return "BOYS";
        s.insert(a[i]);
        }
         return "GIRLS";
 --------------------------------------------------------------------------        
    // Chocolate Distribution Problem
        sort(a.begin(),a.end());
        int i;long long ans=LLONG_MAX;
        for(i=0;i<n-m;i++){
            ans=min(ans,a[i+m-1]-a[i]);}
        return min(ans,a[i+m-1]-a[i]);
        
  --------------------------------------------------------------------------
  //search pivoted array 
      while(l<=h){
    int m=(l+h)/2;
    if(A[m]==key)return m;
    else if(A[l]<=A[m]){
        if(key >=A[l] &key<=A[m]){h=m-1;}
        else l=m+1;}
    else{
        if(key>=A[m] & key <=A[h]){l=m+1;}
        else h=m-1;}
    }

    return -1;    
    }      
        
        
