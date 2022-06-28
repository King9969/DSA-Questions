    void quickSort(int arr[], int low, int high)
    {
       if(low>high)return;
       int p=partition(arr,low,high);
       quickSort(arr,low,p-1);
       quickSort(arr,p+1,high);
    }
    public:
    int partition (int arr[], int low, int high)
    {
       int p=arr[low],i=low,j=high;
       while(i<j){
           while(i<=high&&arr[i]<=p)i++;
           while(arr[j]>p)j--;
           if(i<j)swap(arr[i],arr[j]);
       }
           arr[low]=arr[j];
           arr[j]=p;
           return j;
    }
