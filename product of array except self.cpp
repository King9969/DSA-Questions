       vector<long long int> ans(n);
       vector<long long int> left_Product(n);
       vector<long long int> right_Product(n);
       left_Product[0]=1;
       for(int i=1;i<n;i++)
           left_Product[i]=left_Product[i-1]*nums[i-1];
       right_Product[n-1]=1;
       for(int j=n-2;j>=0;j--)
           right_Product[j]=right_Product[j+1]*nums[j+1];
       for(int i=0;i<n;i++)
           ans[i]=left_Product[i]*right_Product[i];
       return ans;
    }
// o(n^2)
  vector<long long int>ans;
       for(int i=0;i<n;i++){
           long long int x=1;
           for(int j=0;j<n;j++){
               if(i!=j){
                   x*=nums[j];
               }
           }
           ans.push_back(x);
       }
       return ans;
