    int findExtra(int a[], int b[], int n) {
      int l=0,h=n-1,m;
      while(l<=h){
          m=(l+h)/2;
          if(a[m]==b[m])l=m+1;
          else  h=m-1;
      }return l;
    }
