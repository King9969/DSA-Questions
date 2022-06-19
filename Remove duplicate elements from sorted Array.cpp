int remove_duplicate(int a[],int n){
        int c=1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                a[c]=a[i];
                c++;}
        }return c;
    }
