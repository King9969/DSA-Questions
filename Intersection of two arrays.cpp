    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_map<int,int>map;
        for(int i=0;i<n;i++)map[a[i]]++;

        int c=0;
        for(int i=0;i<m;i++){
            if(map[b[i]]>0){c++;
            map.erase(b[i]);
            }
        }
        return c;    
    }
