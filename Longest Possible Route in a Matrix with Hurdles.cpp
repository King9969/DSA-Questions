    int helper(int i,int j,vector<vector<int>>&matrix,int xd,int yd){
        if(i==xd and j==yd){
            return 0;}
        if(i<0 || i>=matrix.size() || j<0 || j>=matrix[0].size()){return -1e9;}
        if(matrix[i][j]!=1) {return -1e9;}
                 matrix[i][j]=0;
           int  right=1+helper(i,j+1,matrix,xd,yd);
           int left=1+helper(i,j-1,matrix,xd,yd);
           int  up=1+helper(i-1,j,matrix,xd,yd);
           int  down=1+helper(i+1,j,matrix,xd,yd);
          matrix[i][j]=1;
        return max({right,left,up,down});
    }
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        if(matrix[xs][ys]==0 || matrix[xd][yd]==0) return -1;
        int ans= helper(xs,ys,matrix,xd,yd);
        return ans;}
