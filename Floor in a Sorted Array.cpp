   int findFloor(vector<long long> v, long long n, long long x){
        
        if (x < v[0])
        return -1;
        int floor=-1,l=0,h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(v[m]<=x){
                floor=max(floor,m);
                l=m+1;
            }
            else h=m-1;
        }return floor;
    }
