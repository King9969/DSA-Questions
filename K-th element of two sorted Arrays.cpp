  int kthElement(int arr1[], int arr2[], int n, int m, int k){
          int i=n-1;int j=0;
	  while(i>=0&&j<m&&arr1[i]>arr2[j]){
	      if(arr2[j]<arr1[i]){
	          swap(arr1[i],arr2[j]);
	          i--;j++;}
	  }sort(arr1,arr1+n);
	  sort(arr2,arr2+m);
	  
	  if(k>n)return arr2[k-n-1];
	  else return arr1[k-1];
    }
