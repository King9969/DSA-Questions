  vector<int> JobScheduling(Job arr[], int n) {
    sort(arr, arr+n, [](auto&a, auto&b){
        return (a.profit > b.profit);});
        int slot=0;
        for(int i=0;i<n;i++)slot=max(arr[i].dead,slot);
        int res=0, count=0;
        vector<int> v(slot+1,0);
        for(int i=0;i<n;i++){
            int j=arr[i].dead;
            while(j>=1 && v[j]!=0)j--;
            if(j>=1 && v[j]==0){
             res+=arr[i].profit;
             count++;
             v[j]=1;
            }   
        }
       return {count,res};
    } 
