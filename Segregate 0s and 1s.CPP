    void segregate0and1(int arr[], int n) {
        for (int i=0,j=0;i<n;i++){
            if (arr[i] == 0)swap(arr[i], arr[j++]);
        }
