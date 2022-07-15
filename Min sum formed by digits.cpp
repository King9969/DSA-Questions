    long long int minSum(int arr[], int n)
    {
      sort(arr,arr+n);
       long long int a=0,b=0;
       for(int i=0;i<n;i+=2) a=a*10+arr[i];
       for(int i=1;i<n;i+=2)b=b*10+arr[i];
       return a+b;
    }
