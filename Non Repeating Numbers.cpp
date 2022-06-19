    vector<int> singleNumber(vector<int> nums) 
    {  int xo=nums[0];
       for(int i=1;i<nums.size();i++){
           xo=xo^nums[i];}
        xo=xo&~(xo-1);
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
        if(xo &nums[i])x=x^nums[i];
        else y=y^nums[i];}
        return {min(x,y),max(x,y)};
    }
