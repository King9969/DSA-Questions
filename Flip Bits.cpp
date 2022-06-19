    int maxOnes(int a[], int n)
    {
        int total=0,sum=0,maxsum=0;
        for(int i=0;i<n;i++){
            total+=a[i];
            if(a[i]==0){sum++;}
            else {sum--;}
            if(sum<0)sum=0;
            maxsum=max(sum,maxsum);
        }return total+maxsum;
    }
