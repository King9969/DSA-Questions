int getPosition(int arr[], int n, int x, string pos){
   int start = 0, end = n-1, position = -1;
   while(start<=end){
       int mid = (start+end)/2;
       if(arr[mid] == x){
           position = mid;
           if(pos=="first")
               end = mid-1;
           else
               start = mid+1;
       }
       else if(arr[mid]>x){
           end = mid-1;
       }
       else{
           start = mid+1;
       }
   }
   return position;
}

vector<int> find(int arr[], int n , int x )
{
    int first = getPosition(arr,n,x,"first");
    int last = getPosition(arr,n,x,"last");
   
   return {first,last};
}
