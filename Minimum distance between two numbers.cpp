   int k=-1,l=-1,ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(x==a[i]){k=i+1;}
            if(y==a[i]){l=i+1;}
            if(k!=-1&&l!=-1){ans=min(ans,abs(k-l));}
        }if(ans==INT_MAX||ans==0)return -1;
        return ans;
