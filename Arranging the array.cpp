void Rearrange(int arr[], int n)
{
   vector<int>v,v1;
   for(int i=0;i<n;i++){
        if(arr[i]<0)v.push_back(arr[i]);
        else v1.push_back(arr[i]);
   }
   for(int i=0;i<v1.size();i++){
       v.push_back(v1[i]);
   }
   for(int i=0;i<n;i++){
       arr[i]=v[i];
   }
}
