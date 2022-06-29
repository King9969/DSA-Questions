    void segregate0and1(int arr[], int n) {
        for (int i=0,j=0;i<n;){
            if (arr[i] == 1)i++;
            else swap(arr[i++], arr[j++]);
        }
    }
