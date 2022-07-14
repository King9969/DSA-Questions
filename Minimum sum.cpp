    string solve(int arr[], int n) {
        sort(arr,arr+n);
        string s="";
        int j;
        for(j=0;j<n;j++)
        if(arr[j]!=0) break; 
        int carry=0;
        for(int i=n-1;i>=j;i--){
            long a=arr[i]+carry;
            if(--i>=j)
            a+=arr[i];
            char ch=a%10+'0';
            s.push_back(ch);
            carry=(int)a/10;
        }
        if(carry!=0)
        s.push_back(carry+'0');
        reverse(s.begin(),s.end());
        return s;
    }
