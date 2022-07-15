    void selectionSort(int arr[], int n)
    {
       for(int j=0;j<n-1;j++){
       for(int k=j+1;k<n;k++){
           if(arr[k]<arr[j])
              swap(arr[j],arr[k]);
       }
       }
    }
