   unordered_map<int,int> map;
    int sum=0,rem=0,ans=0;
    map[0]=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        rem=sum%k;
        if(rem<0) rem+=k;
        if(map.find(rem)!=map.end()){
            int index=map[rem];
            int len=i-index;
            ans=max(len,ans);}
        else{
            map[rem]=i;
        }
    }return ans;
	}
