 for(int i=0;i<n;i=i+2){
            if(i%2==0){if(arr[i+1]>arr[i])swap(arr[i+1],arr[i]);}
            else{if(arr[i+1]<arr[i])swap(arr[i+1],arr[i]);}
        }

//also works because sorted
 for(int i=0;i<n;i=i+2){if(i==n-1) break;
               swap(arr[i],arr[i+1]);} 
