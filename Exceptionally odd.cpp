    int getOddOccurrence(int arr[], int n) {
      int xorr=0;
    for(int i=0;i<n;i++)xorr=xorr^arr[i];
    return xorr;
    }
