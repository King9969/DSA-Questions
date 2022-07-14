   void swapElements(int arr[], int sizeof_array){
       int a=sizeof_array-2;
       for(int i=0;i<a;i++){
           int temp=arr[i];
           arr[i]=arr[i+2];
           arr[i+2]=temp;
       }
    }
