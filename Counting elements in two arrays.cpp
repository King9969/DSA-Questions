  int bs(int arr[], int low, int high, int x){
       while(low<=high){
           int mid=(low+high)/2;
           if(arr[mid]<=x) low=mid+1;
           else high=mid-1;
       }
       return high;
   }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
            sort(arr2, arr2+n);
            vector<int>ans;
            for(int i=0; i<m; i++){
                int index=bs(arr2, 0, n-1, arr1[i]);
                ans.push_back(index+1);
            }
            return ans;
    }
