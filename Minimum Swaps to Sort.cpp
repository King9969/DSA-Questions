	int minSwaps(vector<int>&nums)
	{
	 vector<pair<int,int>> v;
    for(int i=0; i<nums.size(); i++){
        v.push_back({nums[i], i});
    }
    sort(v.begin(), v.end());
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        while(v[i].second != i)
        { temp = v[i].second;
            swap(v[i], v[temp]);
            ++count;}
    }
    return count;
	}
