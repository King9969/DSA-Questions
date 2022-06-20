    string calc_Sum(int *a,int n,int *b,int m){
    string ans;
    int carry=0;
    for(int i=n-1,j=m-1;i>=0||j>=0;i--,j--){
        int sum=(i>=0?a[i]:0)+(j>=0?b[j]:0)+carry;
        ans+=to_string(sum%10);
        carry=sum/10;
    }
    if(carry){ans+=to_string(carry);}
    while(ans.back()=='0'){ans.pop_back();}
    reverse (ans.begin(),ans.end());
    return ans;
    }
