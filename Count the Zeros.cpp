    int countZeroes(int arr[], int n) {
      int l=0,h=n-1,m=0;
      while(l<h){
          m=(l+h)/2;
          if(arr[m]==0)h=m;
          else l=m+1;
      }return n-h;
    }
