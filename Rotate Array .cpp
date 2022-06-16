  int a[n],c=0;
    for(int i=0;i<n;i++)a[i]=arr[(i+d)%n];
    for(int i=0;i<n;i++)arr[i]=a[i];
