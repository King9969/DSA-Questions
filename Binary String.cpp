    long binarySubstring(int n, string a){
        int count=0;
       for (int i=0; i<n; i++)if (a[i] == 49)count++;
       return (count*(count-1))/2;
    }
