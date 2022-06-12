        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==k)return mid;
            if(k<arr[mid])h=mid-1;
            else l=mid+1;
        }
        return -1;
