  int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
            if(m[a[i]]==k)return a[i];
        }return -1;
    }
