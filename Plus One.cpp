    vector<int> increment(vector<int> arr ,int N) {
    reverse(arr.begin(),arr.end());
    int i=0;
    arr[i]++;
    while(arr[i]%10==0){
        arr[i]=arr[i]%10;
        arr[++i]++;
    }
    if(i==N)arr.push_back(1);
     reverse(arr.begin(),arr.end());
     return arr;
    }
