        int rev(int x){
        int ans=0,a=0;
        while(x>0) {
             a=x%10;
            x=x/10;
            ans=ans*10+a;
           }
            return ans;
        }
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    int x=rev(a[i]);
    	    if(x!=a[i])return false;
    	}return true;
    }
